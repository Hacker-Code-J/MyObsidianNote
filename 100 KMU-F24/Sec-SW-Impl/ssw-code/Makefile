# Compiler and flags
CC = gcc
CFLAGS = -Wall -std=c99 -g -O2 -I./include
LDFLAGS =

# Directories
OBJDIR = ./obj
BINDIR = ./bin
SRCDIR = ./src
# TESTDIR = ./tests
# INCDIR = ./include

# Files
OBJS = $(OBJDIR)/rijndeal-sbox.o

TARGET = $(BINDIR)/test

.PHONY: all clean dir rebuild verify

all: dir $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(OBJS:.o=.d)

run:
	(cd bin && ./test)

clean:
	rm -f $(OBJS) $(TARGET) $(OBJDIR)/*.d $(BC_FILES)

dir:
	@mkdir -p $(OBJDIR) $(BINDIR)

rebuild: clean all
