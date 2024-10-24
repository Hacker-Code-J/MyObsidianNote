---
title: Secure SoftWare Implementation | Week1 - 2
date: 2024-09-05
semester: Fall 2024
week: 1
instructor: Yeom Yongjin
key_concepts:
  - Implementation of Extended Euclidean Algorithm on C++
references:
  - "[Reference 1: Book/Article/Page Number]"
tags:
  - ssi-practice
---

```c
#include <stdio.h>
#include <stddef.h>

typedef uint8_t u8;
typedef uint32_t u32;

u32 gcd(u32 a, u32 b) {
	u32 r, q;
	while (b != 0) {
		r = a % b;
		// q = a / b;
		print("%d = %d*%d + %d\n", a, b, q, r);
		a = b;
		b = r;
	}
	return a;
}

u32 rec_gcd(u32 a, u32 b) {
	return b == 0 ? a : rec_gcd(b, a % b);
}

u32 eea(u32 a, u32 b, u32 x, u32 y) {
	u32 an, bn;
	u32 u0, v0, u1, v1;
	u32 new_an, new_bn;
	u32 u2, v2, u3, v3;
	u32 q;

	an = a; bn = b;
	u0 = 1; v0 = 0; // a = 1 x a + 0 x b
	u1 = 0; v1 = 1; // b = 0 x a + 1 x b

	while (bn != 0) {
		q = an / bn;
		new_an = bn;
		new_bn = an - bn * q;
		
		u2 = 
	}

}

int main(int argc,char *argv[]) {
	u32 a, b, q;
	a = 90;
	b = 63;

	g = gcd(a, b);
	printf("a= %d, b= %d, gcd(%d,%d)=%d\n", a, b, a, b, g);

	u32 rec_g = rec_gcd(a, b);
	printf("a= %d, b= %d, gcd(%d,%d)=%d\n", a, b, a, b, rec_g);
	
	return 0;
}
```



