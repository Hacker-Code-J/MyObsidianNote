#string

```c
#include <string.h>

int strcmp(const char *lhs, const char *rhs);
```

Compares two null-terminated byte strings lexicographically.

The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as `unsigned char`) that differ in the strings being compared.

The behavior is undefined if `lhs` or `rhs` are not pointers to null-terminated byte strings.

### Parameters

| *lhs*, *rhs* | pointers to the null-terminated byte strings to compare |
| ---- | ---- |

### Return value
- Negative value if `lhs` appears before `rhs` in lexicographical order.
- Zero if `lhs` and `rhs` compare equal.
- Positive value if `lhs` appears after `rhs` in lexicographical order.

### Example
```c
#include <string.h>
#include <stdio.h>
 
void demo(const char* lhs, const char* rhs)
{
    int rc = strcmp(lhs, rhs);
    const char *rel = rc < 0 ? "precedes" : rc > 0 ? "follows" : "equals";
    printf("[%s] %s [%s]\n", lhs, rel, rhs);
}
 
int main(void)
{
    const char* string = "Hello World!";
    demo(string, "Hello!");
    demo(string, "Hello");
    demo(string, "Hello there");
    demo("Hello, everybody!" + 12, "Hello, somebody!" + 11);
}
```
```text
[Hello World!] precedes [Hello!]
[Hello World!] follows [Hello]
[Hello World!] precedes [Hello there]
[body!] equals [body!]
```