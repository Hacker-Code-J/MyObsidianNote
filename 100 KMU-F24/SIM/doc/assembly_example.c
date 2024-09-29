// assembly_example.c
#include <stdio.h>

int add_asm(int a, int b) {
    int result;
    // Inline assembly to add two integers using ARM64 assembly
    asm volatile (
        "add %w0, %w1, %w2"   // Add the values in %w1 and %w2, store result in %w0
        : "=r" (result)       // Output: result in %w0
        : "r" (a), "r" (b)    // Inputs: a in %w1, b in %w2
    );
    return result;
}

int main() {
    int x = 5;
    int y = 10;

    // Call the assembly-based add function
    int result = add_asm(x, y);

    // Print the result
    printf("The result using assembly is: %d\n", result);

    return 0;
}

