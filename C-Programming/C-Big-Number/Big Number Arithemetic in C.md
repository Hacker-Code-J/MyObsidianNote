
### File Structure for Big Integer Arithmetic

A good file structure for cryptographic applications using big integer arithmetic should separate the logical components for clarity, modularity, and reusability.

```typescript
/project-root
│
├── /bin                   // Output binary files (for the final executable)
│   └── (empty initially)
│
├── /obj                   // Compiled object files (.o) and dependencies (.d)
│   └── (empty initially)
│
├── /include               // Header files (.h)
│   ├── bigint.h           // Header for big integer functions
│   ├── crypto.h           // Header for cryptographic functions
│   └── utils.h    
│
├── /src                   // Source files (.c)
│   ├── bigint.c           // Implementation of multi-precision big integer functions
│   ├── crypto.c           // Implementation of cryptographic algorithms (e.g., RSA, ECC)
│   ├── utils.c            // Utility functions implementation
│   └── main.c             // Main program entry (testing, command-line interface)
│
├── /tests
│   ├── bigint_tests.c     // Unit tests for big integer functions
│   └── crypto_tests.c     // Unit tests for cryptographic functions
│
├── /libs
│   └── libgmp.a           // GMP library (optional, if statically linking)
│
└── Makefile               // Makefile for building the project

```

### Makefile

```makefile
# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude -MMD

# Directories
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

# Source, Object, and Dependency files
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
DEPS = $(OBJS:.o=.d)

# Output binary file
TARGET = $(BINDIR)/program

# Default target
all: dir $(TARGET)

# Create necessary directories for obj and bin
dir:
	@mkdir -p $(OBJDIR) $(BINDIR)

# Rule to build the target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

# Rule to build object files and track dependencies
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# ===================================================
# # Default target
# all: $(TARGET)

# # Rule to build the target
# $(TARGET): $(OBJS)
# 	@mkdir -p $(BINDIR)
# 	$(CC) $(CFLAGS) $(OBJS) -o $@

# # Rule to build object files and track dependencies
# $(OBJDIR)/%.o: $(SRCDIR)/%.c
# 	@mkdir -p $(OBJDIR)
# 	$(CC) $(CFLAGS) -c $< -o $@
# ===================================================


# Include the dependency files
-include $(DEPS)

# Clean build (removes objects, dependencies, and binaries)
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Rebuild target (clean + build)
rebuild: clean all

# Run the compiled program
run: $(TARGET)
	./$(TARGET)

# Phony targets (so that they don't conflict with file names)
.PHONY: all clean rebuild run
```

[Static Lib. vs Dynamic Lib.](https://ence2.github.io/2020/11/%EC%A0%95%EC%A0%81-%EB%9D%BC%EC%9D%B4%EB%B8%8C%EB%9F%AC%EB%A6%AClib-vs-%EB%8F%99%EC%A0%81-%EB%9D%BC%EC%9D%B4%EB%B8%8C%EB%9F%AC%EB%A6%ACdll/)


