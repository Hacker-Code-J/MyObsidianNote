
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
#[warn(unused_varaibles)]         // attribute
fn main() {
	let first_letter = 'A';       // charactor is single quoted.
	let space = ' ';              // A space inside.
	let sentance = "Rust is good" // Strinf is double quoted.

	println!("{}", first_letter);
}
```

- Compiler translates our codes into assembly, and Rust compiler must know the size of space in memory which each variable consumes. (in Compile Time)

- `std::mem::size_of::<char>()`
	- `std` : Standard Library
	- `mem` : Module
	- `size_of` : Function, ~~or Structure Type or Constant~~
	- `<char>` : Data Type
	- `size_of<char>`: Function Generic (Type of Function)
	- `(argument)` : Function Call

- `"a".len()` : Subject.Verb()

```rust
fn main() {
	println!("Size of char: {}", std::mem::size_of::<char>());
	println!("Size of string containing 'a': {}", "a".len());
}
```

- The greatest merit of Rust is its error message during compilation
- 

### Complex Types

- Data in Heap (String, Struct, Vector)

## Verb

### Lifetime

# CPU and Memory vs. Type and Process

- Rust is a language for mission critical tasks.
- Rust is different from all other languages is fast and safety first.
- Fast => Optimization = Resource(cpu, memory)

- CPU with Verb -> Process, Thread, Blocking, Non-Blocking, Asynchronous, Synchronous, Parallel, Concurrency
- Memory with Noun -> Data Type, Lifetime(CPU and Memory)
- Safety -> Owner and Borrow