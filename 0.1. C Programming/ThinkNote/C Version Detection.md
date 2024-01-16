
```c
#include <stdio.h>

int main() {
	#ifdef __STDC__
		#if defined(__STDC_VERSION__)
			#if (__STDC_VERSION__ >= 201112L)
				printf("C11 support detected.\n");
			#elif (__STDC_VERSION__ >= 199901L)
				printf("C99 support detected.\n");
			#else
			printf("Pre-C99 standard detected.\n");
			#endif
		#else
			printf("C Standard detected, but no version information available.\n");
		#endif
	#else
		printf("Not a standard C compiler.\n");
	#endif
	
	return 0;
}
```