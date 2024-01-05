---
title: Side Channel II
allDay: false
startTime: 09:30
endTime: 17:00
date: 2024-01-05
completed: null
---

### Triggering

- path: `/chipwhisperer-5.7.0/hardware/victims/firmware/simpleserial-aes`

```c
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
```

- path: `/chipwhisperer-5.7.0/hardware/victims/firmware/crypto/tiny-AES128-C`

```c
#include simpleserial.h
#include "hal.h"

...

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
  trigger_high();
  SubBytes();
  ShiftRows();
  AddRoundKey(Nr);
  trigger_low();
}
```

## DPA and CPA

### Differential Power Analysis

### Correlation Power Analysis

- Compute correlation using matlab
- Statistics and Machine Learning Toolbox

```matlab
A = randn(6,1); % 6 x 1
B = randn(6,1); % 6 x 1
corr(A,B)
```

```python
from tqdm.notebook improt tnrange
import numpy as sno
mean_diffs - np.zeros(255)
key_guess = []
plots = []

for subkey in range(0, 16, desc="Attacking Subkey"):
	for kguess in tnrange(255, desc="Keyguess:, leave=False):
		one_list = []
		zero_list = []

		for tnum in range(numtraces):
			if (intermediate(textin_array[tnum][subkey], kguess) & 1):
				one_list.append(trace_array[tnum])
			else:
				zero_list.append(trace_array[tnum])
		one_avg = np.asarray(one_list).mean(axis=0)
		zero_avg = np.asarray(zero_list).mean(axis=0)
		mean_diffs[kguess] = np.max(abs(one_avg - zero_avg))
		if kguess == known_key[subkey]:
			plots.append(abs(one_avg - zero_avg))
	guess = np.argsort(mean_diffs)[-1]
	key_guess.append(guess)
	print(hex(guess) + "(real = 0x{:02X}):.format(known_key[subkey]))
	#mean_diffs.sort()
	print(mean_diffs[guess])
	print(mean_diffs[known_key[subkey]])
```