#CaS

# Given:
1. 4-bit S-Box
```c
static const u8 SBOX_4BIT[16] = {
	0xAU, 0x8U, 0xFU, 0x4U, 0x2U, 0x9U, 0xEU, 0xDU,
	0xCU, 0xBU, 0x6U, 0x0U, 0x5U, 0x1U, 0x3U, 0x7U
};
```
2. Plaintext-Ciphertext Pairs
$$
\texttt{0xDC -> 0xB3 | 0b 1101 1100 -> 0b 1011 0011}
$$
$$
\texttt{0x9B -> 0xD9 | 0b 1001 1011 -> 0b 1101 1001}
$$
3. Toy-Cipher Structure
![[Pasted image 20240217155041.png]]

$P := P_1|| P_2$ with $P_i\in\set{0,1}^4$
$P_1=p_{1,3}||p_{1,2}||p_{1,1}||p_{1,0}$ with $p_{i,j}\in\set{0,1}$

$C := C_1|| C_2$ with $C_i\in\set{0,1}^4$
$C_1=c_{1,3}||c_{1,2}||c_{1,1}||c_{1,0}$ with $c_{i,j}\in\set{0,1}$

$K := K_1||K_2$ with $K_i\in\set{0,1}^4$
$K_1=k_{1,3}||k_{1,2}||k_{1,1}||k_{1,0}$ with $k_{i,j}\in\set{0,1}$


# Analysis:
![[Pasted image 20240217161759.png]]

Consider $\texttt{0xDC -> 0xB3 | 0b 1101 1100 -> 0b 1011 0011}$
A: $S(P_1\oplus K_1)=S(p_{1,3}\oplus k_{1,3}||p_{1,2}\oplus k_{1,2}||p_{1,1}\oplus k_{1,1}||p_{1,0}\oplus k_{1,0})$
-> $S(\overline{k_{1,3}}||\overline{k_{1,2}}||k_{1,1}||\overline{k_{1,0}})$

B: $S(P_2\oplus K_2)=S(p_{2,3}\oplus k_{2,3}||p_{2,2}\oplus k_{2,2}||p_{2,1}\oplus k_{2,1}||p_{2,0}\oplus k_{2,0})$
-> $S(\overline{k_{2,3}}||\overline{k_{2,2}}||k_{2,1}||k_{2,0})$
