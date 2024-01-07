
[[C-Core-NOTE]]
[[Basic-C-Draw]]

### Integer and Endian

```bash
lscpu | grep -i endian
```
```plaintext
Byte Order:                         Little Endian
```

**1. Write a C Program:** Let's call this program `endian_test.c`.

```c
#include <stdio.h>

int main() {
    int a = 0x00112233;
    return 0;
}
```

**Compile the Program:** Compile this program with debugging information included. Use the `-g` flag with `gcc` to achieve this.

```bash
gcc -g endian_test.c -o endian_test
```

**Start GDB:** Launch GDB with your compiled program.

```bash
gdb ./endian_test
```

**Set a Breakpoint:**

```bash
(gdb) break 4
```

**Run the Program:**

```bash
(gdb) run
```

**Examine the Variable:**

```bash
(gdb) x/4xb &a
```
```bash
0x7fffffffd9dc: 0x33    0x22    0x11    0x00
```

1. **Memory Address (`0x7fffffffd9dc`):**
    
    - This is the address in memory where the variable `a` is stored.
    - It's represented in hexadecimal format, a common convention in programming and debugging for representing memory addresses.
    - The address `0x7fffffffd9dc` is a location in the stack segment of your process's memory (indicated by the `7fff...` part, which is typical for stack addresses in a 64-bit Linux process).
2. **Command Explanation (`x/4xb &a`):**
    
    - `x/`: This is the GDB command to examine memory.
    - `4x`: This tells GDB to display 4 units of whatever comes next.
    - `b`: This specifies that each unit is a byte.
    - `&a`: This is the address of the variable `a`. The `&` operator in C and C++ gets the address of a variable.
3. **Output Explanation (`0x67 0x45 0x23 0x01`):**
    
    - These are the values of the 4 bytes at memory address `0x7fffffffd9dc`, displayed in hexadecimal.
    - These bytes represent the value of the variable `a` in memory. Since most modern systems are little-endian, the least significant byte (`0x01` in this case) is stored at the lowest address, and the most significant byte (`0x67`) at the highest address of the 4-byte sequence.
4. **Size of the Data:**
    
    - The size, `4 bytes`, is determined by the `x` command you've used in GDB (`x/4xb`). You've explicitly asked GDB to show you 4 bytes starting from the address of `a`.
    - The size of the data is important for understanding how the variable `a` is stored in memory. If `a` is an `int` on your system and your system uses a 32-bit integer representation, then `a` occupies 4 bytes of memory, which aligns with the size of data you've requested to see.

### Two's Complement

- one's complement is implemented with not operation
- two's complement is one's complement + 1
- 정수형식에서 부호라는 개념은 어떻게 이해하여야 하는가?

```c
#include <stdio.h>

int main(void) {
	int a = 0x01234567;

	printf("0x%08X\n", a);
	printf("%d\n", 10 - 5);
	printf("%d\n), 10 + (~5+1));
	return 0;
}
```