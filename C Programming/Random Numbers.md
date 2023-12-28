
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

### Random Number in an Interval in C

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_interval(int a, int b) {
	return rand() % (b - a) + a;
}

int main(int argc, char* argv[]) {
	srand((unsigned int)time(NULL));
	for(int i = 0; i < 100; i++) {
		printf("%d\n", rand_interval(5, 20));
	}
	return 0;
}
```

### Random Floating Point Numbers

```c
double rand_double() {
	// RAND_MAX 2147483647
	return ((double)rand()) / ((double)RAND_MAX);
}
double rand_double_interval(double a, double b) {
	return rand_double() * (b - a) + a;
}
int main(int argc, char* argv[]) {
	srand((unsigned int)time(NULL));
	for(int i = 0; i < 100; i++) {
		printf("%lf\n", rand_double());
	}
	return 0;
}
```

### How to Generate Random Strings in C

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char* str, int num) {
	for (int i = 0; i < num; i++)
		str[i] = rand() % ('z' - 'a') + 'a';
	str[num] = 0;
}

char random_char[] = {
	'0', '+', '-'
};
int rand_char_size = sizeof(random_char) / sizeof(char);

void rand_string_spec(char* str, int num) {
	for (int i = 0; i < num; i++)
		str[i] = random_char[rand() % rand_char_size];
	str[num] = 0;
}

int main(int argc, char* argv[]) {
	srand((unsigned int)time(NULL));
	char str[16];
	rand_string(str, 15);
	printf("%s\n\n", str);
	rand_string_spec(str, 15);
	printf("%s\n\n", str);
	return 0;
}
```



