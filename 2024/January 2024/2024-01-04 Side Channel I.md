---
title: Side Channel I
allDay: false
startTime: 09:30
endTime: 17:00
date: 2024-01-04
completed: null
---

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


