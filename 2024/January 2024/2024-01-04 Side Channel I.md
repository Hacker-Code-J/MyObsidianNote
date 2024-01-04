---
title: Side Channel I
allDay: false
startTime: 09:30
endTime: 17:00
date: 2024-01-04
completed: null
---

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
PLATFORM = 'CWLITEXMEGA' #PLATFORM = 'CWLITEARM'
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

