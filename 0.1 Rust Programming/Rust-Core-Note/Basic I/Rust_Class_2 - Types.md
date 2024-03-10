
# Types (Noun + Verb)

## Noun

### Primitive Types

- Data in Stack (Number, Character, Tuple, ...)

The signed integers are:
```rust
i8, i16, i32, i64
```
and is isize.

The unsigned integers are:
```rust
u8, u16, u32, u64
```
and is usize.

- usize is the best size for indexing.

```rust
#[warn(unused_varaibles)] // attribute
fn main() {
	let first_letter = 'A'; // charactor is single quoted.
	let space = ' ';       // A space inside.
	let sentance = ""

	println!("{}", first_letter);
}
```

### Complex Types

- Data in Heap (String, Struct, Vector)

## Verb

### Lifetime