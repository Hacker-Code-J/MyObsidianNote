
# **16563**

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX 5000000

// Array to store the smallest prime factor for every number
int spf[MAX+1];

// Function to fill the smallest prime factors for each number
void sieve() {
    spf[1] = 1;
    for (int i = 2; i <= MAX; i++)
        spf[i] = i;

    for (int i = 4; i <= MAX; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= MAX; i += 2) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAX; j += 2 * i) { // Skip even multiples
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

// Function to perform prime factorization using precomputed smallest prime factors
void primeFactorization(int n) {
    while (n != 1) {
        printf("%d ", spf[n]);
        n /= spf[n];
    }
    printf("\n");
}

int main() {
    sieve();

    int N, k;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &k);
        primeFactorization(k);
    }

    return 0;
}
```

| Memory   | Time   |
| -------- | ------ |
| 20648 <span style="color:red">KB</span> | 808 <span style="color:red">ms</span> |

