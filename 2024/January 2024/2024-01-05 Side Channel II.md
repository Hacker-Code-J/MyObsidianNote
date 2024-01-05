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