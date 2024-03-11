
```rust
#[stable(feature = "rust1", since = "1.0.0")]
#[inline]
pub fn chars(&self) -> Chars<'_> {
	Chars { iter: self.as_bytes().iter() }
}
```

