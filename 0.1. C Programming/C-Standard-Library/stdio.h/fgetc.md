#stdio

```c
#include <stdio.h>

int fgetc(FILE* stream);
```

The `fgetc()` function in C is used to read a single character from a file. This function is included in the `<stdio.h>` header file and is typically used for reading characters from a file stream.

### Explanation of `fgetc()` Function

- **Prototype**: `int fgetc(FILE *stream);`
- **Parameters**: The function takes a single argument:
    - `FILE *stream`: A pointer to a `FILE` object that identifies the input stream.
- **Return Value**:
    - On success, it returns the read character as an `unsigned char` cast to an `int`.
    - On failure, it returns `EOF`, a macro typically defined as `-1`. This can happen if the end of the file is reached or if there's an error during reading.

### How `fgetc()` Works

- When `fgetc()` is called, it reads the next character from the specified stream and advances the stream's position indicator.
- If the end of the file is reached, `EOF` is returned.
- It's commonly used in a loop to read characters sequentially from a file.

### Example Usage of `fgetc()`

In this example, I will demonstrate how to use `fgetc()` to read the contents of a file character by character.

```c
#include <stdio.h>

int main() {
    FILE *file;
    int c;

    file = fopen("example.txt", "r"); // Open a file in read mode
    if (file == NULL) {
        perror("Error in opening file");
        return(-1);
    }

    while ((c = fgetc(file)) != EOF) { // Read character by character
        putchar(c); // Print each character to the standard output
    }

    fclose(file); // Close the file
    return 0;
}
```

In this example, `fgetc()` is used within a while loop to read each character from the file "example.txt". Each character is then printed to the standard output using `putchar()`. The loop continues until `EOF` is returned by `fgetc()`, indicating the end of the file or an error. After the loop, the file is closed using `fclose(file)`.