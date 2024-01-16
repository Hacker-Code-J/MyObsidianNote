
```c
#define ROTL32(val, shift) (((val) << (shift)) | ((val) >> (32 - (shift))))
#define ROTR32(val, shift) (((val) >> (shift)) | ((val) << (32 - (shift))))
```
```c
static inline u32 ROTL32(u32 val, u32 shift) {
    return (val << shift) | (val >> (32 - shift));
}
static inline u32 ROTR32(u32 val, u32 shift) {
    return (val >> shift) | (val << (32 - shift));
}
```

1. **Type Safety**: Macros do not perform type checking and can lead to unexpected results if used with the wrong types. Inline functions, being actual functions, enforce type checking.
    
2. **Debugging**: Debugging can be more challenging with macros because they are expanded by the preprocessor, so the debugger sees the expanded code rather than the macro definition. Inline functions are easier to debug.
    
3. **Readability and Maintenance**: Inline functions can be more readable and maintainable, especially in larger codebases, as they are part of the language syntax.
    
4. **Performance**: Historically, macros were used for performance reasons, as they can avoid function call overhead. However, modern compilers are quite good at optimizing inline functions, making them as efficient as macros in many cases.