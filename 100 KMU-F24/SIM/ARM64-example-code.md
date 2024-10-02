
```c
#include  <stdio.h>
/*
* Print "Hello World\n" and return 0.
*/
int main(void) {
	printf("Hello World\n");
	return 0
}
```

- Labels: `mesg`, `main`
- Directives: `.section`, `.asciz`, `.text`, `.global`, `.size`
- Instructions: `stp`, `adr`, `bl`, `mov`, `ldp`, `ret`
- Library Func: `printf`

```assembly
		.section .rodata
mesg:    .as
```


