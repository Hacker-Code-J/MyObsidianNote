
We can inspect the memory layout with `unsafe` Rust. However, you should point out that this is rightfully unsafe!
```rust
fn main() {
    let mut s1 = String::from("Rust!");

    unsafe {
        let (capacity, ptr, len): (usize, usize, usize) = std::mem::transmute(s1);
        println!("capacity = {capacity:#x}, ptr = {ptr:#x}, len = {len}");
    }
}
```