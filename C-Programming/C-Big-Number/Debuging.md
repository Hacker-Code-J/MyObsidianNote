
# GDB (Sample)
### Example Program Setup

Consider a simple C program that adds two large integers stored as arrays of bytes:

```c
#include <stdio.h>
#include <string.h>

#define SIZE 64 // Define the size of the large integer (64 bytes)

// Function to add two large integers
void add_large_integers(unsigned char *result, unsigned char *a, unsigned char *b) {
    int carry = 0;
    for (int i = 0; i < SIZE; i++) {
        int sum = a[i] + b[i] + carry;
        result[i] = sum & 0xFF; // Store only the lowest byte
        carry = sum >> 8; // Carry the overflow to the next byte
    }
}

int main() {
    unsigned char a[SIZE] = {0}; // Large integer A
    unsigned char b[SIZE] = {0}; // Large integer B
    unsigned char result[SIZE] = {0}; // Result of A + B

    // Initialize A and B with some values for demonstration
    a[0] = 25; // Smallest byte
    b[0] = 75; // Smallest byte

    add_large_integers(result, a, b); // Perform addition

    // Print result
    printf("Result: ");
    for (int i = SIZE - 1; i >= 0; i--) { // Print from most significant byte
        printf("%02x", result[i]);
    }
    printf("\n");

    return 0;
}
```

### Debugging with GDB

1. **Compilation**:
   Compile the program with the `-g` flag to include debug symbols.
   ```bash
   gcc -g -o bigint_example bigint_example.c
   ```

2. **Starting GDB**:
   Launch the debugger with your program.
   ```bash
   gdb ./bigint_example
   ```

3. **Setting Breakpoints**:
   Place a breakpoint at the function where the addition happens.
   ```gdb
   break add_large_integers
   run
   ```

4. **Inspecting Memory Before Operation**:
   Before stepping through the addition, inspect the memory where the arrays are stored.
   ```gdb
   x/64xb a
   x/64xb b
   ```
   This will display the memory contents of arrays `a` and `b`. You should see `19` (hex for 25) at the first position of `a` and `4b` (hex for 75) at the first position of `b`.

5. **Stepping Through the Addition**:
   Step through each iteration to observe how bytes and carry are calculated and stored.
   ```gdb
   next
   ```
   Use this step command multiple times to iterate through the loop in `add_large_integers`. After each iteration, you can inspect the `result` array:
   ```gdb
   x/64xb result
   ```
   Initially, `result` will show `00` for all entries except where additions have been made.

6. **Checking Results and Carry**:
   Continue stepping through to ensure the `carry` is handled correctly, especially if the sum exceeds 255 (the maximum value a byte can hold).

7. **Final Memory State**:
   After completing the function, check the final state of the `result` array:
   ```gdb
   x/64xb result
   ```
   You should see the correct results of the addition in `result`, with proper handling of carries.

8. **Resume Execution**:
   After inspecting, let the program continue and exit normally.
   ```gdb
   continue
   ```

9. **Review Output**:
   Review the output in the terminal to confirm it matches your expectations based on the debugging session.

This example demonstrates how to use GDB's memory examination features to debug a C program that manipulates large integers using arrays. This approach is invaluable for verifying low-level operations and ensuring that algorithms like large integer addition function as intended.


---

# GDB (Basic)

### 1. **Print Command**
Using the `print` command in GDB can help inspect values directly, which is useful for checking variable contents, including arrays, one at a time or as needed.

```bash
print *a@SIZE
print *b@SIZE
print *result@SIZE
```
These commands will display the contents of the `a`, `b`, and `result` arrays, respectively, showing all 64 bytes at once, which is helpful to see the status of entire arrays at breakpoints.

### 2. **Watchpoints**
Watchpoints are incredibly useful for monitoring changes to specific variables or memory locations. You can set a watchpoint on the `carry` variable to see when and how its value changes during the addition process.

```gdb
watch carry
```
After setting this watchpoint, whenever `carry` changes, GDB will pause execution and show where the change happened, which is particularly useful for catching errors in carry handling.

### 3. **Step and Next**
Stepping through the code with `step` (enters function calls) or `next` (steps over function calls) provides a line-by-line execution trace. This is especially useful inside your loop in the `add_large_integers` function:

```gdb
next  # Steps over the current line and pauses
print carry  # Checks the current value of carry
print result[i]  # Check the result at the current index i
```
Using these commands, you can observe how values are being computed and stored, ensuring that each step of the addition and carry process is performed correctly.

### 4. **Backtrace**
If you encounter an error or crash, using `backtrace` can help you understand the call stack leading to the problem:

```gdb
backtrace
```
This command shows the function call path taken to reach the current point of execution, which is invaluable for understanding the context of errors.

### 5. **Conditional Breakpoints**
Conditional breakpoints are useful to stop execution when a specific condition is met, which is practical for debugging loops with many iterations or when only certain conditions lead to a bug.

```gdb
break add_large_integers if i == 63
```
This breakpoint will only trigger on the last iteration of your loop, allowing you to inspect the final handling of carry and the completion of the array processing.

### 6. **Info locals**
To get a snapshot of all local variables within the current function scope, use:

```gdb
info locals
```
This command provides a quick overview of the current state of local variables without needing to print each one individually.

### 7. **Setting Variables**
Sometimes, you might want to change the value of a variable during debugging to test how different values affect execution:

```gdb
set var a[0] = 100
```
This allows you to manually adjust inputs to test how robust your function is under different scenarios.

### 8. **Disassemble**
To see the assembly code for the current function, which can help in understanding how your high-level code translates to machine instructions:

```gdb
disassemble add_large_integers
```
This is particularly useful for low-level debugging of performance issues or unexpected behaviors not evident at the source code level.

These GDB commands and techniques provide a robust toolkit for debugging complex numerical computations in C, offering various perspectives and levels of granularity in examining program execution and behavior.

---

# Advanced GDB

### 1. **GDB Advanced Usage**

**Advanced Conditional Breakpoints**: Cryptologists often deal with specific edge cases where data can exhibit unusual behavior. Setting advanced conditional breakpoints can help isolate these cases:

```gdb
break add_large_integers if (a[0] == 0xff && carry != 0)
```
This sets a breakpoint where the addition might cause an overflow or other unexpected behavior due to the specific input values.

**Memory Corruption Analysis**: Using `valgrind` with GDB can help detect memory corruption, leaks, and undefined behavior, which are critical in cryptographic applications where security and data integrity are paramount.

```bash
valgrind --vgdb=yes --vgdb-error=0 ./bigint
```
Then, in another terminal, you can connect GDB to Valgrind's process:
```bash
gdb ./bigint
target remote | vgdb
```

**Disassembly**: Viewing the assembly can help ensure that cryptographic algorithms are not only correct but optimized for performance:

```gdb
disassemble add_large_integers
```
Cryptographers might look for inefficient assembly patterns that could introduce timing side channels.

### 2. **IDE and Tools for Analysis**

**Use of Integrated Debuggers**: Many IDEs like CLion, Visual Studio, or Eclipse CDT have integrated debugging tools that provide a GUI for managing breakpoints, watch expressions, memory views, and more. These tools often allow more intuitive management of complex debugging scenarios.

**Static Code Analysis**: Tools like `Clang Static Analyzer` or `Coverity` can automatically detect bugs or suspicious patterns in cryptographic code, such as misuse of standard functions, potential buffer overflows, or integer overflows.

### 3. **Cryptographic Checks**

**Consistency and Security Checks**: For cryptographic implementations, it's vital to ensure that no data leaks or erroneous calculations occur due to bugs. Implementing consistency checks such as:

- Verifying output against known correct results.
- Using assertions within the code to ensure invariants in cryptographic algorithms hold.

**Using Cryptographic Analysis Tools**: Tools like `Cryptol` or testing frameworks designed for cryptographic testing can help verify the correctness and security of cryptographic implementations through property-based testing.

### 4. **Performance Monitoring**

**Profiling Tools**: Tools like `gprof` or `perf` can be used to profile the program to analyze the performance of cryptographic functions.

```bash
gcc -pg -o bigint bigint.c
./bigint
gprof ./bigint gmon.out > analysis.txt
```
Looking at hotspots and optimizing them can sometimes also reveal deeper logical or security flaws.

**Cache Analysis**: Cache timing attacks are a common vulnerability in cryptographic applications. Using tools that simulate or monitor cache usage (like `Cachegrind`, part of Valgrind) can help identify potential vulnerabilities.

### 5. **Custom Scripts in GDB**

Writing custom GDB scripts can automate the checking of cryptographic properties or the setup of a complex debugging environment:

```gdb
define check_crypto_properties
    # Check memory states
    x/64xb a
    x/64xb b
    x/64xb result
    # Add any cryptographic invariant checks here
    if ((some_crypto_condition) != expected)
        printf "Crypto condition failed\n"
end
```

These methods combine software engineering best practices with a cryptographic security mindset to ensure that the C code is not only functionally correct but also secure and efficient. The combined use of GDB, specialized tools, and analytical approaches reflects a professional and rigorous approach to debugging in security-sensitive applications.

---

# GDB (script)

Using GDB scripts effectively can streamline the debugging process, especially when dealing with complex or repetitive debugging tasks. GDB scripts allow you to automate sequences of commands, set up complex breakpoints, or configure your debugging session. Here’s how you can create and use these scripts in the command line interface (CLI) of GDB.

### Creating a GDB Script

1. **Write Your Script**: A GDB script is simply a text file containing a series of GDB commands that you would normally type manually in a GDB session. Save it with any filename, typically with a `.gdb` extension for clarity.

   Here’s a basic example of a GDB script, `my_script.gdb`:
   ```gdb
   # Set a breakpoint at the start of main function
   break main
   # Run the program
   run
   # Continue running after hitting breakpoints
   continue
   # Print the stack when a breakpoint is hit
   backtrace
   ```

2. **Running the Script**: You can run this script in several ways:
   - **From the GDB Command Line**: Start GDB and then use the `source` command to execute your script.
     ```bash
     gdb ./myprogram
     (gdb) source my_script.gdb
     ```
   - **From the System CLI**: Invoke GDB and tell it to run your script directly from the terminal.
     ```bash
     gdb -x my_script.gdb ./myprogram
     ```
   - **Within a Running GDB Session**: If you decide mid-session that you need to run a script, you can still use the `source` command to load it.

### More Complex Scripting Examples

Here are a few more advanced techniques you might include in a GDB script for more sophisticated debugging tasks:

- **Using Python**: GDB supports Python scripting, which is powerful for complex logic that can't be easily handled with simple GDB commands.
   ```python
   python
   import gdb
   # Python code to automatically set breakpoints on all functions matching a pattern
   for sym in gdb.lookup_global_symbol("my_prefix*").symbols():
       gdb.Breakpoint(sym.name)
   end
   ```

- **Conditional Breakpoints in Scripts**: You can set up conditional breakpoints within scripts to pause execution only under specific conditions.
   ```gdb
   break some_function if some_variable == 1
   commands
       print some_variable
       continue
   end
   ```

- **Automating Repetitive Tasks**: Suppose you often need to inspect certain memory regions or check variable values under specific conditions. You can write a script to automate these checks.
   ```gdb
   define check_vars
       print var1
       print var2
       x/20xb var3
   end
   ```

- **Looping and Iteration**: Using GDB's limited loop construct to repeat commands.
   ```gdb
   python
   # Use Python to loop over an array in memory and print each element
   for i in range(0, 100):
       gdb.execute("print *(array+%d)" % i)
   end
   ```

### Tips for Using GDB Scripts

- **Comments**: Use `#` to add comments in your GDB scripts. This makes them more understandable to others or yourself when you revisit them later.
- **Organization**: Keep your scripts organized by functionality. For instance, have a script for initialization, another for performance checking, etc.
- **Testing**: Scripts can behave differently based on the context or state of the application being debugged. Always test scripts in a controlled environment to ensure they perform as expected.

Using these scripts can greatly enhance your productivity in GDB, especially when debugging complex issues that require setting up the environment in specific ways or when you need to repeat tasks many times.