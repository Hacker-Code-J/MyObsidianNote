
[[Overview of AES]]

$$
\text{AddRoundKey}:\set{0,1}^{128}\times\set{0,1}^{128}\to\set{0,1}^{128}
$$


# 8-bit AddRoundKey: $\set{0,1}^{8\cdot 16}\times\set{0,1}^{32\cdot 4}\to\set{0,1}^{8\cdot 16}$

```c
void AddRoundKey(u8* state, const u32* rKey) {
	for (int i = 0; i < AES_BLOCK_SIZE; i++) { // Extract the corresponding byte from the round key word
	state[i] ^= (rKey[i / 4] >> (8 * (3 - (i % 4)))) & 0xFF;
}
```

# 32-bit AddRoundKey: $\set{0,1}^{32\cdot 4}\times\set{0,1}^{32\cdot 4}\to\set{0,1}^{32\cdot 4}$

```c
void AddRoundKey32(u32* state, const u32* rKey) {
	for (int i = 0; i < AES_BLOCK_SIZE / 4; i++)
		state[i] ^= rKey[i];
}
```


