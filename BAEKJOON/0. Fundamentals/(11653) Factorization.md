# **11653**

```c
#include <stdio.h>
void primeFactorization(int N) {
    if (N == 1) return;
	while (N % 2 == 0) {
        printf("%d\n", 2);
        N /= 2;
    }
    for (int i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            printf("%d\n", i);
            N /= i;
        }
    }
    if (N > 2) printf("%d\n", N);
}
int main() {
    int N;
	if (scanf("%d", &N) != 1) return 1;
    if (N < 1 || N > 10000000) return 1;
    primeFactorization(N);
    return 0;
}
```

| Memory  | Time |
| ------- | ---- |
| 1116 <span style="color:red">KB</span> | 0 <span style="color:red">ms</span> |

```rust
use std::io;

fn prime_factorization(mut n: u32) {
    if n == 1 {
        return;
    }
    while n % 2 == 0 {
        println!("2");
        n /= 2;
    }
    let mut i = 3;
    while i * i %3C= n {
        while n % i == 0 {
            println!("{}", i);
            n /= i;
        }
        i += 2;
    }
    if n %3E 2 {
        println!("{}", n);
    }
}

fn main() {
    let mut input = String::new();
    if io::stdin().read_line(&mut input).is_err() {
        eprintln!("Failed to read line");
        return;
    }
    let n: u32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Invalid number!");
            return;
        }
    };
    if n < 1 || n > 10000000 {
        eprintln!("Number out of range. Please enter a number between 1 and 10,000,000.");
        return;
    }
    prime_factorization(n);
}
```

| Memory                                  | Time                                |
| --------------------------------------- | ----------------------------------- |
| 13204 <span style="color:red">KB</span> | 4 <span style="color:red">ms</span> |




