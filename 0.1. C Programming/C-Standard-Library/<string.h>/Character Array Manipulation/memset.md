#string

```c
#include <stdio.h>
void *memset(void *dest, int ch, size_t count);                       // 1)
void *memset_explicit(void *dest, int ch, size_t count);              // 2) since C23
errno_t memset_s(void *dest, rsize_t destsz, int ch, rsize_t count);  // 3) since C11
```

1) Copies the value (unsigned char)ch into each of the first `count` characters of the object pointed to by `dest`.
	 The behavior is undefined if access occurs beyond the end of the dest array. The behavior is undefined if `dest` is a null pointer.
2) Same as (1), except that is safe for sensitive information.
3) Same as (1), except that the following errors are detected at runtime and call the currently installed [constraint handler](https://en.cppreference.com/w/c/error/set_constraint_handler_s "c/error/set constraint handler s") function after storing `ch` in every location of the destination range [dest, dest+destsz) if `dest` and `destsz` are themselves valid:
- `dest` is a null pointer
- `destsz` or `count` is greater than RSIZE_MAX
- `count` is greater than `destsz` (buffer overflow would occur)
	 The behavior is undefined if the size of the character array pointed to by `dest` < `count` <= `destsz`; in other words, an erroneous value of `destsz` does not expose the impending buffer overflow.
	As with all bounds-checked functions, `memset_s` only guaranteed to be available if `__STDC_LIB_EXT1__` is defined by the implementation and if the user defines `__STDC_WANT_LIB_EXT1__` to the integer constant 1 before including [<string.h>](https://en.cppreference.com/w/c/string/byte "c/string/byte").

### Parameters

| *dest* | pointer to the object to fill |
| ---- | ---- |
| *ch* | fill byte |
| *count* | number of bytes to fill |
| *destsz* | size of the destination array |

### Return value

1,2) A copy of `dest`

3) zero on success, non-zero on error. Also on error, if `dest` is not a null pointer and `destsz` is valid, writes `destsz` fill bytes `ch` to the destination array.