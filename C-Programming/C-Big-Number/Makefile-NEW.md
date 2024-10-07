```makefile
# Compiler and Flags
CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g -Iinclude -MMD

# Directories
SRCDIR = src
TESTDIR = test
INCDIR = include
OBJDIR = obj
BINDIR = bin

# Source, Object, and Dependency files
SOURCES = $(wildcard $(SRCDIR)/*.c) $(wildcard $(TESTDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
OBJS := $(patsubst $(TESTDIR)/%.c,$(OBJDIR)/%.o,$(OBJS))
DEPS = $(OBJS:.o=.d)

# Platform-specific settings
ifeq ($(OS),Windows_NT)
    TARGET = $(BINDIR)/program.exe
    MKDIR = mkdir
    RMDIR = rmdir /S /Q
    RUN = $(TARGET)
else
    TARGET = $(BINDIR)/program
    MKDIR = mkdir -p
    RMDIR = rm -rf
    RUN = ./$(TARGET)
endif

# Default target
all: dir $(TARGET)

# Create necessary directories for obj and bin
dir:
	@$(MKDIR) $(OBJDIR) $(BINDIR)

# Rule to build the target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

# Rule to build object files and track dependencies for src and test
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(TESTDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Include the dependency files
-include $(DEPS)

# Clean build (removes objects, dependencies, and binaries)
clean:
	$(RMDIR) $(OBJDIR) $(BINDIR)

# Rebuild target (clean + build)
rebuild: clean all

# Run the compiled program
run: $(TARGET)
	$(RUN)

# Phony targets (so that they don't conflict with file names)
.PHONY: all clean rebuild run

```