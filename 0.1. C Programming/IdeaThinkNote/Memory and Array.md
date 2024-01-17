
```c
void stringToWordArray(const char* hexString, u32* wordArray) {
	size_t length = strlen(hexString);
	for (size_t i = 0; i < length; i += 8) {
		sscanf(&hexString[i], "%8x", &wordArray[i / 8]);
	}
}

const char* keyString = "0f1e2d3c4b5a69788796a5b4c3d2e1f0"
u32 key[4];
stringToWordArray(keyString, key);

printf("%08x\n", key[0]); // 0f1e2d3c
printf("%08x\n", key[1]); // 4b5a6978
printf("%08x\n", key[2]); // 8796a5b4
printf("%08x\n", key[3]); // c3d2e1f0
```

```bash
(gdb) x/16xb key
0x7fffffffd960:	0x3c	0x2d	0x1e	0x0f	0x78	0x69	0x5a	0x4b
0x7fffffffd968:	0xb4	0xa5	0x96	0x87	0xf0	0xe1	0xd2	0xc3
```

```c
u8* ptr_key = (u8*)key;

printf("%02x\n", ptr_key[0]); // 3c
printf("%02x\n", ptr_key[1]); // 2d
printf("%02x\n", ptr_key[2]); // 1e
printf("%02x\n", ptr_key[3]); // 0f
printf("%02x\n", ptr_key[4]); // 78
printf("%02x\n", ptr_key[5]); // 69
printf("%02x\n", ptr_key[6]); // 5a
printf("%02x\n", ptr_key[7]); // 4b
```
