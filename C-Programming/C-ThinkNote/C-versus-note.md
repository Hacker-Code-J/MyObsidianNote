
# Table of Contents
- [stddef vs stdint](#stddef-vs-stdint)
- [static vs static const](#static-vs-static-const)

## stddef-vs-stdint

| Feature            | `<stddef.h>`                                   | `<stdint.h>`                                      |
| ------------------ | ---------------------------------------------- | ------------------------------------------------- |
| **Primary Focus**  | Pointer arithmetic, memory sizes, and offsets  | Fixed-width integers for portability              |
| **Key Types**      | `size_t`, `ptrdiff_t`, `NULL`, `offsetof`      | `int8_t`, `uint32_t`, `int_fast16_t`, `uintptr_t` |
| **Portability**    | Provides basic types tied to platform sizes    | Ensures portability by defining exact-width types |
| **Memory-Related** | Deals with memory sizes and pointer arithmetic | Deals with specific integer sizes                 |
| **Common in**      | System-level programming, memory management    | Embedded systems, network protocols               |

## static-vs-static-const

| Feature              | `static`                                                                                          | `static const`                                                                |
| -------------------- | ------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------- |
| **Mutability**       | Mutable, value can change                                                                         | Immutable, value cannot change after initialization                           |
| **Memory**           | Stored in writable memory                                                                         | Stored in read-only memory (if supported by architecture)                     |
| **Scope/Visibility** | File-scope (not visible outside the `.c` file)                                                    | File-scope (not visible outside the `.c` file)                                |
| **Usage**            | Suitable for mutable variables that should persist across function calls or be internal to a file | Suitable for constants that are internal to a file and should not be modified |



