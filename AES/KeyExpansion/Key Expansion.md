
[[Overview of AES]]

[[RotWord]]
[[SubWord]]
[[Round Constant (RCON)]]

$$
\text{KeyExpansion}_{128}:\set{0,1}^{128=8\cdot 16}\to\set{0,1}^{1408=32\cdot 44}
$$

$$
\text{KeyExpansion}_{192}:\set{0,1}^{192=8\cdot 24}\to\set{0,1}^{1664=32\cdot 52}
$$

$$
\text{KeyExpansion}_{256}:\set{0,1}^{256=8\cdot 32}\to\set{0,1}^{1920=32\cdot 60}
$$



# KeyExpansion with S-Box

```c
// Inlined RotWord
#define RotWord(word) (((word) << 0x08) | ((word) >> 0x18))
// Inlined SubWord (assuming s_box is a constant array)
#define SubWord(word) ( \
	((u32)s_box[(word) >> 0x18] << 0x18) | \
	((u32)s_box[((word) >> 0x10) & 0xFF] << 0x10) | \
	((u32)s_box[((word) >> 0x08) & 0xFF] << 0x08) | \
	((u32)s_box[(word) & 0xFF]) \
)

void KeyExpansion(const u8* uKey, u32* rKey) {
	u32 temp;
	for (int i = 0; i < Nk; i++) {
		rKey[i] = (u32)uKey[4*i] << 0x18 |
				  (u32)uKey[4*i+1] << 0x10 |
				  (u32)uKey[4*i+2] << 0x08 |
				  (u32)uKey[4*i+3];
	}
	for (int i = Nk; i < (Nr + 1) * 4; i++) {
		temp = rKey[i - 1];
		if (i % Nk == 0) {
			temp = SubWord(RotWord(temp)) ^ rCon[i / Nk - 1];
		} else if (Nk > 6 && i % Nk == 4) {
			// Additional S-box transformation for AES-256
			temp = SubWord(temp);
		}
	rKey[i] = rKey[i - Nk] ^ temp;
	}
}
```




