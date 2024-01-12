#CSE #LEA #block_cipher

> [!info] References
> - **KISA:** https://seed.kisa.or.kr/kisa/algorithm/EgovLeaInfo.do
> - https://seed.kisa.or.kr/kisa/kcmvp/EgovVerification.do 
> - **Wikipedia:** https://en.wikipedia.org/wiki/LEA_(cipher)
> - **Namu.wiki:** https://namu.wiki/w/LEA
> - **HashNet:** http://wiki.hash.kr/index.php/LEA
> - **Springer:** https://link.springer.com/chapter/10.1007/978-3-319-05149-9_1


The LEA (Lightweight Encryption Algorithm) is a symmetric-key block cipher known for its efficiency and simplicity, making it suitable for resource-constrained environments. When implementing LEA in C, a well-structured approach is crucial for both performance and maintainability. Here's a recommended file structure:

1. **Header Files (`lea.h`):**
    
    - **Constant Definitions:** Define block size, key sizes, and any other constants.
    - **Function Prototypes:** Declare all the functions used in the LEA algorithm. This typically includes key schedule functions, encryption, and decryption functions.
    - **Type Definitions:** If you use specific data types (like `uint32_t` for 32-bit unsigned integers), define them here for clarity and portability.
2. **Source File for Core Algorithm (`lea_core.c`):**
    
    - **Key Schedule Algorithm:** Implement the key expansion algorithm necessary for generating round keys.
    - **Encryption Function:** Code for the block encryption process.
    - **Decryption Function:** Code for the block decryption process.
    - **Utility Functions:** Any additional functions for operations like byte swapping, XOR, etc., if not already provided by standard libraries.
3. **Source File for Utilities (`lea_utils.c`):**
    
    - **Byte Manipulation Functions:** Functions to handle bytes since LEA deals with byte-level operations.
    - **Debug Functions:** If you include any debug-specific functions for logging or testing, place them here.
4. **Test File (`lea_test.c`):**
    
    - **Unit Tests:** Write tests for each component (key schedule, encryption, decryption).
    - **Integration Test:** Ensure the whole system (key schedule, encryption, and decryption) works as expected.
    - **Performance Tests:** If performance is a critical factor, include benchmarks.
5. **Makefile:**
    
    - **Compilation Instructions:** Instructions for compiling the LEA algorithm, linking the object files, and creating the executable.
    - **Flags for Optimization:** Include flags for optimization as LEA is performance-sensitive.
    - **Clean-Up Commands:** Commands for cleaning up object files and executables after a build.
6. **Optional: Configuration File (`config.h` or `lea_config.h`):**
    
    - **Algorithm Parameters:** If the algorithm has any configurable parameters (like supporting different key sizes), define them here.
    - **Platform-Specific Settings:** Adjustments for different compilers or hardware platforms.

This structure ensures that the code is modular, maintainable, and easy to test. It's important to include comments and documentation throughout the code for clarity. Remember, the effectiveness of the implementation also depends on adherence to best practices in C programming and thorough testing, especially for a cryptographic algorithm like LEA.

**Makefile-Explanation:**

1. **Variables:**
    
    - `CC`: The compiler to use (gcc in this case).
    - `CFLAGS`: Compilation flags. `-Wall` enables all warnings, and `-O3` is for optimization.
    - `LDFLAGS`: Linker flags, if any.
    - `OBJDIR`, `BINDIR`, `SRCDIR`: Directories for object files, binary files, and source files.
2. **Object Files (`OBJS`):**
    
    - Lists all object files needed for the build.
3. **Executable (`TARGET`):**
    
    - The final executable file.
4. **Default Target (`all`):**
    
    - The default make target that builds the executable.
5. **Compilation Rules:**
    
    - How to compile each `.c` file into an `.o` object file.
6. **Dependencies:**
    
    - Specifies dependencies for each object file to ensure proper recompilation when source files are modified.
7. **Clean Up (`clean`):**
    
    - A target to clean up the build by removing object files and the executable.
8. **Directory Creation (`directories`):**
    
    - A convenience target to create necessary directories.
9. **Phony Targets:**
    
    - `.PHONY` is used to declare that `all`, `clean`, and `directories` are not files.

This Makefile assumes that your source files (`lea_core.c`, `lea_utils.c`, `lea_test.c`) and the header file (`lea.h`) are located in a `src` directory. The object files and the final executable are placed in `obj` and `bin` directories respectively. Adjust the paths as necessary for your project structure. Remember, effective use of a Makefile can significantly streamline the build process for your LEA implementation.


```makefile
CC=gcc

CFLAGS=-Wall -O3

LDFLAGS=

OBJDIR=./obj

BINDIR=./bin

SRCDIR=./src

  

# Object files

OBJS=$(OBJDIR)/lea_core.o $(OBJDIR)/lea_utils.o $(OBJDIR)/lea_test.o

  

# Executable

TARGET=$(BINDIR)/lea_alg

  

# Default target

all: $(TARGET)

  

# Target for LEA algorithm

$(TARGET): $(OBJS)

$(CC) $(LDFLAGS) -o $@ $^

  

# Compile source files into object files

$(OBJDIR)/%.o: $(SRCDIR)/%.c

$(CC) $(CFLAGS) -c $< -o $@

  

# Dependencies

$(OBJDIR)/lea_core.o: $(SRCDIR)/lea_core.c $(SRCDIR)/lea.h

$(OBJDIR)/lea_utils.o: $(SRCDIR)/lea_utils.c $(SRCDIR)/lea.h

$(OBJDIR)/lea_test.o: $(SRCDIR)/lea_test.c $(SRCDIR)/lea.h

  

# Clean up

clean:

rm -f $(OBJS) $(TARGET)

  

# Create necessary directories

dir:

@mkdir -p $(OBJDIR) $(BINDIR)

  

rebuild: clean all

  

# Phony targets

.PHONY: all clean directories
```


```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024  // Adjust this based on expected file size and memory constraints

void compareFiles(const char *file1, const char *file2) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL) {
        fprintf(stderr, "Error opening files.\n");
        exit(EXIT_FAILURE);
    }

    char buffer1[BUFFER_SIZE];
    char buffer2[BUFFER_SIZE];
    
    while (!feof(fp1) && !feof(fp2)) {
        if (fgets(buffer1, BUFFER_SIZE, fp1) == NULL) break;
        if (fgets(buffer2, BUFFER_SIZE, fp2) == NULL) break;

        if (strcmp(buffer1, buffer2) != 0) {
            printf("FAIL\n");
            fclose(fp1);
            fclose(fp2);
            return;
        }
    }

    if (!feof(fp1) || !feof(fp2)) {
        printf("FAIL\n");
    } else {
        printf("PASS\n");
    }

    fclose(fp1);
    fclose(fp2);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    compareFiles(argv[1], argv[2]);
    return EXIT_SUCCESS;
}
```

```bash
gcc -o filecompare filecompare.c
```

**Run the Executable**:

- On Linux or macOS, you might run `./filecompare file1.txt file2.txt`.
- On Windows, you would run `filecompare file1.txt file2.txt`.