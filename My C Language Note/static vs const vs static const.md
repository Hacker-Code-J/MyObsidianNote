
## **static**

> Example 1. Inside a function 
 
```c
#include <stdio.h>

void incrementCounter() {
    static int counter = 0;
    counter++;
    printf("Counter: %d\n", counter);
}

int main() {
    incrementCounter(); // Output: Counter: 1
    incrementCounter(); // Output: Counter: 2
    return 0;
}
```


> Example 2. At file scope

```c
static int globalCounter = 0;

void incrementGlobalCounter() {
    globalCounter++;
}

int getGlobalCounter() {
    return globalCounter;
}

```

## **static const**

> Example. File scope 

```c
#include <stdio.h>

static const int SECRET_NUMBER = 42;

int main() {
    printf("The secret number is: %d\n", SECRET_NUMBER);
    // Output: The secret number is: 42
    return 0;
}
```