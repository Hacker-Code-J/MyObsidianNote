
### `wildcard` and `patsubst`

In a Makefile, `wildcard` and `patsubst` are built-in functions that help in managing and manipulating file names and paths.

### 1. `wildcard`
The `wildcard` function is used to find files in the filesystem that match a certain pattern. It returns a list of files that match the pattern provided.

#### Syntax:
```makefile
$(wildcard pattern)
```

#### Example:
```makefile
SOURCES = $(wildcard src/*.c)
```

- **What it does**: The `wildcard` function here searches the `src/` directory for any files with a `.c` extension (i.e., C source files) and returns a space-separated list of those files. This list is stored in the `SOURCES` variable.

#### Explanation:
- If the `src` directory contains files like `main.c`, `bigint.c`, and `crypto.c`, the `wildcard` function will expand to:
  ```makefile
  SOURCES = src/main.c src/bigint.c src/crypto.c
  ```

### 2. `patsubst`
The `patsubst` function is used to substitute a pattern in a list of strings (like file paths or names). It’s commonly used to transform file names, such as converting source files (`.c`) into object files (`.o`).

#### Syntax:
```makefile
$(patsubst pattern,replacement,text)
```

- **`pattern`**: The pattern to search for in the text.
- **`replacement`**: The string to replace the pattern with.
- **`text`**: The input list of strings where the pattern is to be replaced.

#### Example:
```makefile
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
```

- **What it does**: This `patsubst` function converts the list of source files (stored in `SOURCES`) from `.c` files in the `src/` directory to `.o` files in the `obj/` directory.
  
#### Explanation:
- Suppose the `SOURCES` variable contains `src/main.c`, `src/bigint.c`, and `src/crypto.c`. The `patsubst` function transforms those into `obj/main.o`, `obj/bigint.o`, and `obj/crypto.o`, which are object files in the `obj/` directory.
  
In detail:
- `$(SRCDIR)/%.c`: This pattern looks for files in the `src/` directory with a `.c` extension.
- `$(OBJDIR)/%.o`: This replacement pattern specifies that the corresponding `.o` files should be placed in the `obj/` directory, with the same base name but `.o` instead of `.c`.

### Putting It Together

In your Makefile:

```makefile
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
```

- **`$(wildcard $(SRCDIR)/*.c)`**: Finds all `.c` files in the `src` directory (e.g., `src/main.c`, `src/bigint.c`, etc.).
- **`$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))`**: Converts those `.c` files into corresponding `.o` files in the `obj/` directory (e.g., `obj/main.o`, `obj/bigint.o`, etc.).

This is how you efficiently gather source files and generate object file paths dynamically based on your project's structure.