
[[Rust 101 Crash Course]]

```rust
struct Temperature {
	degree_f:f64
}

fn show_temp(temp: Temperature) {
	println!("{:?} degree F", temp.degree_f);
}

fn main() {
	let hot = Temperature { degree_f: 99.9};
	show_temp(hot);
}
```

```rust
struct Temperature {
	degree_f:f64
}

impl Temperature {
	fn show_temp(&self) {
		println!("{:?} degree F", self.degree_f);
	}
}

fn main() {
	let hot = Temperature { degree_f: 99.9};
	hot.show_temp();
}
```
```text
99.9 degrees F
```


```rust
struct Temperature {
	degree_f:f64
}

impl Temperature {
	fn freezing() -> Self {
		Self {
			Self { degree_f: 32.0}
		}
	}

	fn boiling() -> Self {
		Self {
			Self { degree_f: 212.0}
		}
	}
	
	fn show_temp(&self) {
		println!("{:?} degree F", self.degree_f);
	}
}

fn main() {
	let hot = Temperature { degree_f: 99.9};
	hot.show_temp();

	let cold Tmeperature::freezing();
	cold.show_temp();
	
	let boiling Tmeperature::boiling();
	boiling.show_temp();
}
```
```text
99.9 degrees F
32.0 degrees F
212.0 degrees F
```