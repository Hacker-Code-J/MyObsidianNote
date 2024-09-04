
```rust
#[inline]
#[stable(feature = "rust1", since = "1.0.0")]
#[must_use = "if you really need to exhaust the iterator, consider `.for_each(drop)` instead"]
#[cfg_attr(not(test), rustc_diagnostic_item = "iterator_collect_fn")]
#[rustc_do_not_const_check]

fn collect<B: FromIterator<Self::Item>>(self) -> B
where
	Self: Sized,
{
	FromIterator::from_iter(self)
}
```