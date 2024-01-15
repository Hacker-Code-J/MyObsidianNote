#Assembly

[[3.1. Parameters]]

```c
#include <stdio.h>

void swap(int* pA, int* pB) {
    int nTmp = *pA;
    *pA = *pB;
    *pB = nTmp;
    printf("Inside function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y); // passing addresses to simulate reference
    printf("In main: x = %d, y = %d\n", x, y); // x and y values are swapped
    return 0;
}
```
### Prologue

- **`endbr64`**: This is an instruction used as a mitigation against certain types of exploits (like ROP and JOP). It's a feature of newer CPUs.
- **`push %rbp`**: This saves the base pointer of the previous function on the stack.
- **`mov %rsp,%rbp`**: Sets the base pointer for the current function. This is used to reference function arguments and local variables.
- **`sub $0x10,%rsp`**: Allocates 16 bytes of space on the stack. This is probably for the local variables `x` and `y`.

### Variable Initialization

- **`mov %fs:0x28,%rax`** and subsequent lines: These instructions are part of stack protection, which helps in detecting stack buffer overruns.
- **`xor %eax,%eax`**: Clears the `eax` register by XORing it with itself.
- **`movl $0xa,-0x10(%rbp)`**: Initializes `x` with 10 (`0xa` in hexadecimal).
- **`movl $0x14,-0xc(%rbp)`**: Initializes `y` with 20 (`0x14` in hexadecimal).

### Function Call to `swap`

- **`lea`** instructions: Load the addresses of `x` and `y` into registers (`%rdx` and `%rax` respectively).
- **`mov %rdx,%rsi`** and **`mov %rax,%rdi`**: Move these addresses into `rsi` and `rdi` respectively, which are used for the first two arguments in a function call (according to the calling convention).
- **`call 0x1169 <swap>`**: Calls the `swap` function.

### Printf Call

- The series of `mov` and `lea` instructions set up for the `printf` call, passing the format string and the values of `x` and `y` as arguments. The `printf` function is used to print the swapped values of `x` and `y`.

### Function Epilogue and Return

- **`mov $0x0,%eax`**: Sets the return value of the function to 0.
- The final instructions (**`mov -0x8(%rbp),%rdx`, `sub %fs:0x28,%rdx`, `je 0x1231 <main+113>`, `call 0x1060 <__stack_chk_fail@plt>`**) are part of the stack smashing protection.
- **`leave`**: Restores the stack pointer and base pointer to their state at the beginning of the function.
- **`ret`**: Returns from the function.

