---
title: Theory of Random Number Generation - Practice | Week2
date: 2024-09-13
semester: Fall 2024
week: 2
instructor: Yeom Yongjin
key_concepts:
  - HASH_DRBG
references:
  - "[Reference 1: Book/Article/Page Number]"
tags:
  - rng-practice
---


```c
#include <stdio.h>

void exampleFunction(int a, int b) {
    // These variables are instantiated on the stack
    int result;
    
    // Perform some operations
    result = a + b;
    
    // Print result (to see the result in the output)
    printf("The result is: %d\n", result);
}

int main() {
    // Call the function; its parameters are also on the stack
    exampleFunction(10, 20);
    
    return 0;
}
```

```sql
+-----------------------+
|   Stack after main()   |
+-----------------------+
|                       |
|                       |
+-----------------------+

(Call to exampleFunction)
+-----------------------+
| Return address (main) |
+-----------------------+
|       a = 10          |
+-----------------------+
|       b = 20          |
+-----------------------+
|    result (empty)     |  <--- `result` is stored here on the stack
+-----------------------+

(Function execution completes)
+-----------------------+
|    Stack before pop   |
+-----------------------+

(Stack after return to main)
+-----------------------+
```

---
A **Deterministic Random Bit Generator (DRBG)** is a cryptographic algorithm designed to generate a sequence of bits that appear random, using an initial seed value and additional input if necessary. DRBGs are important in cryptographic applications because they provide the randomness required for secure key generation, encryption, and other security-related processes. To understand how DRBG works and how it interacts with **stack memory** or memory allocation in general, we will break it down in terms of its components and explain it in the context of C programming.

### DRBG Overview

A DRBG typically works by taking a **seed** (an initial entropy source) and expanding it into a long sequence of pseudorandom bits. It achieves this using cryptographic techniques, ensuring that the generated bits are unpredictable to anyone who doesn't know the seed.

Key properties of a DRBG:
1. **Deterministic**: Given the same seed, the DRBG will always produce the same sequence of bits.
2. **Pseudorandom**: The generated sequence of bits appears random, even though it is deterministically produced from the seed.
3. **Seed-based**: The security of the DRBG depends on the quality of the seed (entropy source). A weak seed could result in predictable output.
4. **Stateful**: The DRBG maintains an internal state, which evolves as more bits are generated.

### How DRBG Relates to Stack Memory and Instantiation

In C, implementing or using a DRBG will typically involve memory management for holding both the **internal state** of the DRBG and any **temporary variables** that are used during the generation process. Understanding how the DRBG interacts with stack memory during its operation is key to ensuring its correctness and efficiency.

Let’s break it down into relevant steps:

### 1. DRBG Internal State Management

The DRBG algorithm typically maintains an internal state that includes:
- **Seed or entropy input**: The source of randomness.
- **Current state**: A cryptographic state that is updated as the DRBG is used.
- **Counter or reseed value**: Tracks how many times the generator has been used, or when reseeding is necessary.

In a C implementation, this state is often represented using a `struct`. For example:

```c
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define DRBG_STATE_SIZE 32 // Example size for internal state

// DRBG internal state structure
struct DRBG_State {
    uint8_t state[DRBG_STATE_SIZE]; // Internal state array
    uint64_t counter;               // Counter for reseeding
};

// Initialize the DRBG with a seed
void drbg_instantiate(struct DRBG_State *drbg, const uint8_t *seed, size_t seed_len) {
    // Copy the seed into the internal state
    memcpy(drbg->state, seed, seed_len);
    
    // Set the counter to zero
    drbg->counter = 0;
    
    // Example output to indicate DRBG has been instantiated
    printf("DRBG instantiated with seed. Counter initialized to %llu\n", drbg->counter);
}
```

### 2. Instantiating DRBG in Stack Memory

In the context of **stack memory**, when you instantiate a DRBG, the `drbg_instantiate` function above allocates the `DRBG_State` structure on the **stack** if it's declared locally in a function (like `main`). This means the internal state of the DRBG and the counter are stored on the stack during the function's execution.

Example of instantiating the DRBG in the `main()` function:

```c
int main() {
    // Define a seed
    uint8_t seed[DRBG_STATE_SIZE] = {0x01, 0x02, 0x03, 0x04}; // Example seed
    
    // Create an instance of the DRBG_State structure on the stack
    struct DRBG_State drbg;
    
    // Instantiate (initialize) the DRBG with the seed
    drbg_instantiate(&drbg, seed, sizeof(seed));
    
    // After the function ends, the stack memory is automatically managed
    return 0;
}
```

Here’s how the **stack memory** is used during the execution of the program:
1. When the `main()` function is called, a stack frame is created, which holds the `drbg` variable (of type `struct DRBG_State`).
2. The `drbg_instantiate()` function is called, and a new stack frame is created for it. Inside this frame, any local variables or temporary arrays used by `drbg_instantiate()` will be pushed onto the stack.
3. Once `drbg_instantiate()` returns, its stack frame is popped, but the `drbg` structure remains in the stack until `main()` completes.
4. The memory used by the `drbg` instance is automatically cleaned up when `main()` exits.

### 3. Stack Frame Example During DRBG Execution

Imagine the following:
1. `main()` function is called.
2. `drbg` is instantiated on the stack.
3. Inside `drbg_instantiate()`, the seed is copied to the internal state of the DRBG (also on the stack).

Here’s a simplified view of the **stack memory**:

```
+-------------------------------+
| Return address (main)          |  <- Top of stack after entering main
+-------------------------------+
| struct DRBG_State drbg         |  <- DRBG instance with internal state and counter
+-------------------------------+
| uint8_t seed[32]               |  <- Temporary seed used to initialize the DRBG
+-------------------------------+
| Return address (drbg_instantiate) |
+-------------------------------+
| Function parameters (drbg, seed) |
+-------------------------------+
```

Once the function returns, the stack frame for `drbg_instantiate()` is popped off, and the stack is restored to the state it was in before the function call.

### 4. Pseudorandom Bit Generation

Once the DRBG is instantiated, you would typically use a function to generate random bits:

```c
void drbg_generate(struct DRBG_State *drbg, uint8_t *output, size_t len) {
    // Example: Generate pseudorandom bits (in practice, use a secure algorithm)
    for (size_t i = 0; i < len; i++) {
        output[i] = drbg->state[i % DRBG_STATE_SIZE] ^ drbg->counter;  // Simple XOR
        drbg->counter++;  // Increment counter
    }
}
```

### Summary:
1. **Instantiation of DRBG**: The DRBG is instantiated by initializing its internal state with a seed and storing its internal state (including a counter) in stack memory (or heap memory if allocated dynamically).
2. **Stack Memory Usage**: In C, local variables like the DRBG’s internal state are typically stored in stack memory if declared inside a function. They are automatically deallocated when the function exits.
3. **DRBG Lifecycle**: The internal state evolves as the DRBG generates pseudorandom bits, and memory for the state is automatically managed if it resides on the stack.

This gives you a picture of how DRBGs work in C, particularly in terms of memory usage and stack behavior during instantiation and operation.

