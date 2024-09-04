
[[1 Overview of AES]]

$$
GF(2)=\set{0,1}
$$


- Add / Sub : $a\oplus b$

| $a$ | $b$ | $a\oplus b$ |
| --- | --- | ----------- |
| 0   | 0   | 0            |
| 0   | 1   | 1            |
| 1    | 0    | 1            |
| 1    | 1    | 0            |
- Multiplication : $a\ \&\ b$

| $a$ | $b$ | $a\ \&\ b$ |
| --- | --- | ----------- |
| 0   | 0   | 0            |
| 0   | 1   | 0            |
| 1    | 0    | 0            |
| 1    | 1    | 1            |

- Polynomial Add / Sub: for $GF(2^8)$

$$
(x^2+x+1)+(x^2+1) = (1\oplus 1)x^2 + (1\oplus 0)x + (1\oplus 1)
$$

- Polynomial Mul: for $GF(2^8)$

$$
(x^7+1)\cdot (x) = x^8 + x \notin GF(2^8)
$$

- AES: $p(x)=x^8+x^4+x^3+x+1$, $p(2)=283=\texttt{0x11B}$
- $(x^7+1)\cdot (x)=x^8+x= C'(x) \pmod{p(x)}$ with $C'(x)=ren[C(x)/p(x)]$

