
[[Overview of AES]]
[[SubBytes and MixColumns]]

$$
\text{SubMix}:\set{0,1}^{128}\to\set{0,1}^{128}
$$

# SubMix: $\set{0,1}^{32\cdot 4}\to\set{0,1}^{32\cdot 4}$

```c
void SubMix(u32* state) {
	u32 temp[4];
	for (int i = 0; i < AES_BLOCK_SIZE / 4; i++) {
		temp[i] = Te0[(state[i] >> 0x18) & 0xff] ^
				  Te1[(state[i] >> 0x10) & 0xff] ^
				  Te2[(state[i] >> 0x08) & 0xff] ^
				  Te3[state[i] & 0xff];
	}
	for (int i = 0; i < 4; i++) 
		state[i] = temp[i];
}
```



