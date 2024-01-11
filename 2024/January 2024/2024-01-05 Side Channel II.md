---
title: Side Channel II
allDay: false
startTime: 09:30
endTime: 17:00
date: 2024-01-05
completed: null
---
#january2024 #CSE
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
from tqdm.notebook import tnrange
import numpy as sno
mean_diffs = np.zeros(255)
key_guess = []
known_key = known_keys[0]
plots = []

for subkey in tnrange(0, 16, desc="Attacking Subkey"):
	for kguess in tnrange(255, desc="Keyguess", leave=False):
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
	print(hex(guess) + "(real = 0x{:02X})".format(known_key[subkey]))
	#mean_diffs.sort()
	print(mean_diffs[guess])
	print(mean_diffs[known_key[subkey]])
```

```python
import numpy as np
from tqdm.notebook import tqdm

HW = [bin(n).count("1") for n in range(0, 256)]

numtraces = np.shape(trace_array)[0] #total number of traces
numpoint = np.shape(trace_array)[1] #samples per trace

pt = textin_array
knownkey = traces[0].key
cparefs = [0] * 16
bestguess = [0]*16

for bnum in tqdm(range(0, 16), desc='Attacking subkeys'):
	cpaoutput = [0] * 256
	maxcpa = [0] * 256
	for kguess in range(0, 256):
		# Initialize arrays &amp; variables to zero
		sumnum = np.zeros(numpoint)
		sumden1 = np.zeros(numpoint)
		sumden2 = np.zeros(numpoint)
		
		hyp = np.zeros(numtraces)
		for tnum in range(0, numtraces):
			hyp[tnum] = HW[intermediate(pt[tnum][bnum], kguess)]
		
		# Mean of hypothesis
		meanh = np.mean(hyp, dtype=np.float64)
		# Mean of all points in trace
		meant = np.mean(trace_array, axis=0, dtype=np.float64)
		
		# For each trace, do the following
		for tnum in range(0, numtraces):
			hdiff = (hyp[tnum] - meanh)
			tdiff = trace_array[tnum, :] - meant
			sumnum = sumnum + (hdiff * tdiff)
			sumden1 = sumden1 + hdiff * hdiff
			sumden2 = sumden2 + tdiff * tdiff
		cpaoutput[kguess] = sumnum / np.sqrt(sumden1 * sumden2)
		maxcpa[kguess] = max(abs(cpaoutput[kguess]))
	bestguess[bnum] = np.argmax(maxcpa)
	cparefs[bnum] = np.argsort(maxcpa)[::-1]
print("Best Key Guess: ", end="")
for b in bestguess: print("%02x " % b, end="")
```

```python
for b in knownkey: print("%02x "%b, end="")
print("\n")
if all([known_byte == guess_byte for known_byte, guess_byte in zip(knownkey, bestguess)]):
	print("Guess was right")
else:
	print("Guess was wrong")
```

