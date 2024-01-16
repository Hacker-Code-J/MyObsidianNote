#string

```c
#include <string.h>

int strncmp(const char* lhs, const char* rhs, size_t count);
```

Compares at most count characters of two possibly null-terminated arrays. The comparison is done lexicographically. Characters following the null character are not compared.

The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the arrays being compared.

The behavior is undefined when access occurs past the end of either array lhs or rhs. The behavior is undefined when either lhs or rhs is the null pointer.

### Parameters
| *lhs*, *rhs* | pointers to the possibly null-terminated arrays to compare |
| ---- | ---- |
| *count* | maximum number of characters to compare |

### Return value
- Negative value (-) if lhs appears before rhs in lexicographical order.
- Zero (0) if lhs and rhs compare equal, or if count is zero.
- Positive value (+) if lhs appears after rhs in lexicographical order.

### Example
```c
#include <stdio.h>
#include <string.h>
 
void demo(const char* lhs, const char* rhs, int sz)
{
    const int rc = strncmp(lhs, rhs, sz);
    if (rc < 0) // order: lhs, rhs
        printf("First %d chars of [%s] precede [%s]\n", sz, lhs, rhs);
    else if (rc > 0) // order: rhs, rhs
        printf("First %d chars of [%s] follow [%s]\n", sz, lhs, rhs);
    else
        printf("First %d chars of [%s] equal [%s]\n", sz, lhs, rhs);
}
int main(void)
{
    const char* string = "Hello World!";
    demo(string, "Hello!", 5);
    demo(string, "Hello", 10);
    demo(string, "Hello there", 10);
    demo("Hello, everybody!" + 12, "Hello, somebody!" + 11, 5);
}
```
```text
First 5 chars of [Hello World!] equal [Hello!]
First 10 chars of [Hello World!] follow [Hello]
First 10 chars of [Hello World!] precede [Hello there]
First 5 chars of [body!] equal [body!]
```