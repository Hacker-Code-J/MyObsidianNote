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
```assembly
(gdb) disas /m main
Dump of assembler code for function main:
10	int main() {
   0x00000000000011c0 <+0>:	endbr64 
   0x00000000000011c4 <+4>:	push   %rbp
   0x00000000000011c5 <+5>:	mov    %rsp,%rbp
   0x00000000000011c8 <+8>:	sub    $0x10,%rsp
   0x00000000000011cc <+12>:	mov    %fs:0x28,%rax
   0x00000000000011d5 <+21>:	mov    %rax,-0x8(%rbp)
   0x00000000000011d9 <+25>:	xor    %eax,%eax

11	    int x = 10, y = 20;
   0x00000000000011db <+27>:	movl   $0xa,-0x10(%rbp)
   0x00000000000011e2 <+34>:	movl   $0x14,-0xc(%rbp)

12	    swap(&x, &y); // passing addresses to simulate reference
   0x00000000000011e9 <+41>:	lea    -0xc(%rbp),%rdx
   0x00000000000011ed <+45>:	lea    -0x10(%rbp),%rax
   0x00000000000011f1 <+49>:	mov    %rdx,%rsi
   0x00000000000011f4 <+52>:	mov    %rax,%rdi
   0x00000000000011f7 <+55>:	call   0x1169 <swap>

13	    printf("In main: x = %d, y = %d\n", x, y); // x and y values are swapped
   0x00000000000011fc <+60>:	mov    -0xc(%rbp),%edx
   0x00000000000011ff <+63>:	mov    -0x10(%rbp),%eax
   0x0000000000001202 <+66>:	mov    %eax,%esi
--Type <RET> for more, q to quit, c to continue without paging--
   0x0000000000001204 <+68>:	lea    0xe1e(%rip),%rax        # 0x2029
   0x000000000000120b <+75>:	mov    %rax,%rdi
   0x000000000000120e <+78>:	mov    $0x0,%eax
   0x0000000000001213 <+83>:	call   0x1070 <printf@plt>

14	    return 0;
   0x0000000000001218 <+88>:	mov    $0x0,%eax

15	}
   0x000000000000121d <+93>:	mov    -0x8(%rbp),%rdx
   0x0000000000001221 <+97>:	sub    %fs:0x28,%rdx
   0x000000000000122a <+106>:	je     0x1231 <main+113>
   0x000000000000122c <+108>:	call   0x1060 <__stack_chk_fail@plt>
   0x0000000000001231 <+113>:	leave  
   0x0000000000001232 <+114>:	ret    

End of assembler dump.
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

