
## Parent Document
- [[C Programming]]

### Random Number Generation in C

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include this header for the time function

int main(int argc, char* argv[]) {
	// time_t seed = time(NULL);
	// srand(seed);
	srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}
```

