---
title: Side Channel I
allDay: false
startTime: 09:30
endTime: 17:00
date: 2024-01-04
completed: null
---
#january2024 #CSE
### Jupyter NoteBook

- https://github.com/newaetech/chipwhisperer/releases/tag/5.7.0

- Chipwhisperer
- Install CW-lite Firmware

```python
import chipwhisperer as cw
cw.program_sam_firmware(hardware_type='cwlite')
```

- Upload source code to Target device

```python
SCOPETYPE = 'OPENADC'
#PLATFORM = 'CWLITEARM'
PLATFORM = 'CWLITEXMEGA' 
CRYPTO_TARGET = 'TINYAES128C'
SS_YER = 'SS_VER_2_1'
```

```python
%run "Setup_Scripts/Setup_Generic.ipynb"
```

```python
imort os
os.getcwd()
```

```python
%%bash -s "$PLATFORM" "$CRYPTO_TARGET" "$SS_VER"
cd ../hardware/victims/firmware/simpleserial-aes
make PLATFORM=$1 CRYPTO_TARGET=$2 SS_VER=$3 -j
```

```python
cw.program_target(scope, prog, "../hardware/victims/firmware/simpleserial-aes/simpleserial-aes-{}.hex".format(PLATFORM))
```

```python
from tqdm.notebook import tnrange
import numpy as np
import time

ktp = cw.ktp.Basic()
trace_array = []
textin_array = []
#textout_array = []

key, text = ktp.next()

target.set_key(key)

N = 10
for i in tnrange(N, desc='Capturing traces'):
	scope.arm() # Trigger

	target.simpleserial_write('p', text)

	ret = scope.capture()
	if ret:
		print("Target timed out!")
		continue

	response = target.simpleserial_read('r', 16)

	trace_array.append(scope.get_last_trace())
	textin_array.append(text)
	#textout_array.append(key)

	key, text = ktp.next()
```

### Matlab

```python
a = np.array(trace_array)
a.tofile("C:\\data.trc); // Speed Up and Memory Down
```

```matlab
fid = fopen("c:\data.trc", 'rb');
trc1 = fread(fid,5000,'float64');
trc 2= fread(fid,5000,'float64');
```

### AES Source Code

- `simplesserial-aes.c`

```c
...

uint8_t get_pt(uint8_t* pt, uint8_t len)
{
    aes_indep_enc_pretrigger(pt);

	trigger_high();

  #ifdef ADD_JITTER
  for (volatile uint8_t k = 0; k < (*pt & 0x0F); k++);
  #endif

	aes_indep_enc(pt); /* encrypting the data block */
	trigger_low();

    aes_indep_enc_posttrigger(pt);

	simpleserial_put('r', 16, pt);
	return 0x00;
}

...

#if SS_VER == SS_VER_2_1
uint8_t aes(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t *buf)
{
    uint8_t req_len = 0;
    uint8_t err = 0;
    uint8_t mask_len = 0;
    if (scmd & 0x04) {
        // Mask has variable length. First byte encodes the length
        mask_len = buf[req_len];
        req_len += 1 + mask_len;
        if (req_len > len) {
            return SS_ERR_LEN;
        }
        err = get_mask(buf + req_len - mask_len, mask_len);
        if (err)
            return err;
    }

    if (scmd & 0x02) {
        req_len += 16;
        if (req_len > len) {
            return SS_ERR_LEN;
        }
        err = get_key(buf + req_len - 16, 16);
        if (err)
            return err;
    }
    if (scmd & 0x01) {
        req_len += 16;
        if (req_len > len) {
            return SS_ERR_LEN;
        }
        err = get_pt(buf + req_len - 16, 16);
        if (err)
            return err;
    }

    if (len != req_len) {
        return SS_ERR_LEN;
    }

    return 0x00;

}
#endif

...

simpleserial_init();
#if SS_VER == SS_VER_2_1
simpleserial_addcmd(0x01, 16, aes);
#else
simpleserial_addcmd('k', 16, get_key);
simpleserial_addcmd('p', 16,  get_pt);
simpleserial_addcmd('x',  0,   reset);
simpleserial_addcmd_flags('m', 18, get_mask, CMD_FLAG_LEN);
simpleserial_addcmd('s', 2, enc_multi_setnum);
simpleserial_addcmd('f', 16, enc_multi_getpt);
#endif
```

- `aes-independant.c`

```c
#elif defined(TINYAES128C)

#include "aes.h"

uint8_t enckey[16];

void aes_indep_init(void)
{
	;
}

...

void aes_indep_enc(uint8_t * pt)
{
	AES128_ECB_indp_crypto(pt);
}
```

- `aes.c`

```c
// Cipher is the main function that encrypts the PlainText.
static void Cipher(void)
{
  uint8_t round = 0;

  // Add the First round key to the state before starting the rounds.
  AddRoundKey(0); 
  
  // There will be Nr rounds.
  // The first Nr-1 rounds are identical.
  // These Nr-1 rounds are executed in the loop below.
  for(round = 1; round < Nr; ++round)
  {
    SubBytes();
    ShiftRows();
    MixColumns();
    AddRoundKey(round);
  }
  
  // The last round is given below.
  // The MixColumns function is not here in the last round.
  SubBytes();
  ShiftRows();
  AddRoundKey(Nr);
}
```
