
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