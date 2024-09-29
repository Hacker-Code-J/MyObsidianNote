// calling_convention.c
#include <stdio.h>

// Function with more than eight parameters
int sum(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    return a + b + c + d + e + f + g + h + i;
}

int main() {
    int result = sum(1, 2, 3, 4, 5, 6, 7, 8, 9);

    // Print the result
    printf("The sum is: %d\n", result);

    return 0;
}
