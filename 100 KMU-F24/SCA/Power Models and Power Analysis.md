---
title: Side Channel Analysis | Week3
date: 2024-09-16
semester: Fall 2024
week: 3
instructor: Han, Dong-Guk
key_concepts:
  - "Power Model"
  - "Power Analaysis"
references:
  - "Lecture Note"
tags:
  - sca-lecture
---

## Power Models

### Preliminaries
[[Hamming Weight and Hamming Distance|see more]]

> [!info] **Definition**
> Let $x \in \{0, 1\}^n$ be an $n$-bit binary string, where $x = (x_1, x_2, \dots, x_n)$ and each $x_i \in \{0, 1\}$ for $i = 1, 2, \dots, n$. The **Hamming weight** of $x$ is a function $$\text{wt}_H:\mathbb{F}_2^n\to\mathbb{Z}_{\geq 0}\quad\text{defined by}\quad x=(x_{n-1}\cdots x_1x_0)_2\mapsto \sum_{i=0}^{n-1} x_i=\text{wt}_H(x),$$
> where $x_i \in \{0, 1\}$ for each $i$.

> [!info] **Definition**
> Let $x = (x_0, x_1, \dots, x_{n-1})$ and $y = (y_0, y_1, \dots, y_{n-1})$, where $x_i, y_i \in \{0, 1\}$ for $i = 0, 1, \dots, n-1$. The **Hamming distance** between $x$ and $y$ is a function $$d_H:\mathbb{F}_2^n\times\mathbb{F}_2^n\to\mathbb{Z}_{\geq 0}\quad\text{defined by}\quad (x,y)\mapsto \sum_{i=1}^{n} |x_i - y_i|=d_H(x, y),$$
> where $|x_i - y_i|=x_i\oplus y_i$ is the absolute difference between the corresponding bits.
> ---
> Properties of Hamming Distance:
> - **Non-negativity**: $x, y \in \{0, 1\}^n\implies d_H(x, y) \geq 0$.
> - **Identity**: $d_H(x, y) = 0\iff x = y$.
> - **Symmetry**: $d_H(x, y) = d_H(y, x)$.
> - **Triangle Inequality**: $d_H(x, z) \leq d_H(x, y) + d_H(y, z)$.


> [!tip] **Hamming Weight and Hamming Distance Model**
> Let
> - $P_{total}$: Total Power Consumption
> - $P_{noise}$: Noise
> - $\epsilon$: Constant value
> 
> The *Hamming Weight Model* is $$P_{total}\approx\epsilon\cdot\text{wt}_H(y)+P_{noise}$$
> The *Hamming Distance Model* is $$\begin{align*} P_{total}&\approx\epsilon\cdot\text{d}_H(x,y)+P_{noise}\\ &=\epsilon\cdot\text{wt}_H(x\oplus y)+P_{noise} \end{align*}$$

### Hamming Weight Model
- Hmmaing Weight: **the number of 1's** in a binary representation of a $x$

| Number                       | Hmmaing Weight        |
| ---------------------------- | --------------------- |
| $x=\texttt{0b10101010}$      | $\text{wt}_H(x)=4$    |
| $y=S(x)=\texttt{0b11111100}$ | $\text{wt}_H(S(x))=6$ |

- $P_{total}\approx\epsilon\text{wt}_H(S(x))+P_{noise}$
- Use for Software Implementation

### Hamming Distance Model
- **Hmmaing distance** between two *strings* of euqal length is the number of possitions at which the corresponding *symbols* are different

| Number                              | Hmmaing Weight                                   |
| ----------------------------------- | ------------------------------------------------ |
| $x=\texttt{0b10101010}$             | $\text{wt}_H(x)=4$                               |
| $y=S(x)=\texttt{0b11111100}$        | $\text{wt}_H(S(x))=6$                            |
| $\text{d}_H=\text{wt}_H(x\oplus y)$ | $\text{d}_H(x,S(x))=\text{wt}_H(x\oplus S(x))=4$ |

- $P_{total}\approx\epsilon\cdot\text{d}_H(x,y)+P_{noise}=\epsilon\cdot\text{wt}_H(x\oplus S(x))+P_{noise}$
- Use for Hardware Implementation

### Pop Quiz

AES, DES, SEED, ARIA, LEA
16 round

Q1
1Round
- A =========
- B ===
	- abbbbbbbba
- C =========

Q2
1Round
- A
- B
	- ab
- B
	- ab
- B
	- ab

# 240925
- Digital -> Analogue (Hard)
- Analogue -> Digital (Easy)


