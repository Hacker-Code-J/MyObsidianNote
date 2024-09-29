// add_example.c
#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;

    // Call the add function
    int result = add(x, y);

    // Print the result
    printf("The result is: %d\n", result);

    return 0;
}

