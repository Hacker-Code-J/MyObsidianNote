
[[Overview of AES]]
[[SubMix]]

$$
\text{SubBytes}:\set{0,1}^{128}\to\set{0,1}^{128} 
$$

$$
\text{MixColumn}:\set{0,1}^{128}\to\set{0,1}^{128}
$$

# 8-bit SubBytes: $\set{0,1}^{8\cdot16}\to\set{0,1}^{8\cdot 16}$

```c
void SubBytes(u8* state) {
	for (int i = 0; i < AES_BLOCK_SIZE; i++)
		state[i] = s_box[state[i]];
}
```

# 8-bit MixColumns: $\set{0,1}^{8\cdot 16}\to\set{0,1}^{8\cdot 16}$

```c
#define MUL_GF256(a, b) ({ \
	u8 res = 0; \
	u8 MSB_mask = 0x80; \
	u8 MSB; \
	u8 modulo = 0x1B; \
	u8 temp_a = (a); \
	u8 temp_b = (b); \
	for (int i = 0; i < 8; i++) { \
		if (temp_b & 1) \
			res ^= temp_a; \
		MSB = temp_a & MSB_mask; \
		temp_a <<= 1; \
		if (MSB) \
			temp_a ^= modulo; \
		temp_b >>= 1; \
	} \
	res; \
})

void MixColumns(u8* state) {
	u8 temp[4];
	// Multiply and add the elements in the column by the fixed polynomial
	for (int i = 0; i < 4; i++) {
		temp[0] =	
			MUL_GF256(0x02, state[i * 4]) ^
			MUL_GF256(0x03, state[i * 4 + 1]) ^
			state[i * 4 + 2] ^
			state[i * 4 + 3];	
		temp[1] =
			state[i * 4] ^
			MUL_GF256(0x02, state[i * 4 + 1]) ^
			MUL_GF256(0x03, state[i * 4 + 2]) ^
			state[i * 4 + 3];
		temp[2] =	
			state[i * 4] ^
			state[i * 4 + 1] ^
			MUL_GF256(0x02, state[i * 4 + 2]) ^	
			MUL_GF256(0x03, state[i * 4 + 3]);	
		temp[3] =
			MUL_GF256(0x03, state[i * 4]) ^	
			state[i * 4 + 1] ^	
			state[i * 4 + 2] ^
			MUL_GF256(0x02, state[i * 4 + 3]);
		// Copy the mixed column back to the state
		for (int j = 0; j < 4; j++)
			state[i * 4 + j] = temp[j];
	}
}
```










