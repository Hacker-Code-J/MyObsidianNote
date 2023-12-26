
[[AES/KeyExpansion/Key Expansion|Key Expansion]]

$$
\text{RotWord}(X_0\parallel X_1\parallel X_2\parallel X_3)=X_1\parallel X_2\parallel X_3\parallel X_0
$$

```c
u32 RotWord(u32 word) {
	return (word << 0x08) | (word >> 0x18);
}
```

