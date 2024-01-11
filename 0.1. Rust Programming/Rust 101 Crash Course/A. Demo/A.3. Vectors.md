
[[Rust 101 Crash Course]]

```rust
struct Test {
	score: i32
}

fn main() {
	let my_scores = vec![
		Test { score: 90 },
		Test { score: 88 },
		Test { score: 77 },
		Test { score: 93 },
	];

	for test in my_scores {
		println!("score = {:?}", test.score);
	}
}
```
```text
score = 90
score = 88
score = 77
score = 93
```