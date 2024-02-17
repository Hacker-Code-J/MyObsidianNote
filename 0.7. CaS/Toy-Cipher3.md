#CaS

# Given:
1. 4-bit S-Box
```c
static const u8 SBOX_4BIT[16] = {
	0xAU, 0x8U, 0xFU, 0x4U, 0x2U, 0x9U, 0xEU, 0xDU,
	0xCU, 0xBU, 0x6U, 0x0U, 0x5U, 0x1U, 0x3U, 0x7U
};
```

For input $x$ and output $S(x)$, $(\alpha\cdot x)\oplus(\beta\cdot S(x))=0$
```text
   β 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 
 α +------------------------------------------------
00 |  8  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 
01 |  0  2 -4 -2 -2  0 -2  0  0 -2  0 -2  2  0 -2  4 
02 |  0  0  2 -2  4  0 -2 -2 -2 -2  0 -4 -2  2  0  0 
03 |  0  2  2  0 -2  4 -4 -2  2  0  0  2  0  2  2  0 
04 |  0  4  0  4  0  0  0  0 -2  2  2 -2 -2 -2  2  2 
05 |  0 -2  0 -2 -2  0  2 -4 -2  0 -2  0  0 -2  4  2 
06 |  0  0 -2  2  0  0 -2  2 -4 -4 -2  2  0  0  2 -2 
07 |  0  2  2  0  2 -4  0 -2  0 -2  2  4  2  0  0  2 
08 |  0  2  0 -2  0  2  0 -2 -4  2  0  2  0 -2 -4 -2 
09 |  0  0 -4  0  2  2  2 -2  0  0  4  0  2  2  2 -2 
0A |  0  2 -2  0  4  2  2  0  2  0 -4  2 -2  0  0  2 
0B |  0  0 -2 -2  2 -2 -4  0  2  2  0  0  0 -4  2 -2 
0C |  0 -2  0  2  0  2  0 -2  2 -4  2  0 -2 -4 -2  0 
0D |  0 -4  0  0  2  2 -2  2 -2  2  2  2  0  0  0  4 
0E |  0  2  2 -4  0  2  2  4  0 -2  2  0  0 -2  2  0 
0F |  0  0 -2 -2 -2 -2  0  0  0  0  2  2 -6  2  0  0
```
$$
(\texttt{0xF}\cdot x)\oplus(\texttt{0xC}\cdot S(x))=0
$$
$$
(\texttt{0b1111}\cdot x)\oplus(\texttt{0b1100}\cdot S(x))=0
$$
For $y=S(x)$,
$$
(x_3\oplus x_2\oplus x_1\oplus x_0)\oplus (y_3\oplus y_2)=0
$$
$$
x_3\oplus x_2\oplus x_1\oplus x_0=y_3\oplus y_2
$$
Note that $p=2/16=1/8=0.125$

| α | β | bias | Expression | Probability |
| ---- | ---- | ---- | ---- | ---- |
| $\texttt{0xF=0b1111}$ | $\texttt{0xC=0b1100}$ | -6 | $x_3\oplus x_2\oplus x_1\oplus x_0=y_3\oplus y_2$ | $\frac{2}{16}=0.125$ |
| $\texttt{0xD=0b1101}$ | $\texttt{0xF=0b1111}$ | 4 | $x_3\oplus x_2\oplus x_0=y_3\oplus y_2\oplus y_1\oplus y_0$ | $\frac{4}{16}=0.25$ |
| $\texttt{0xC=0b1100}$ | $\texttt{0xD=0b1101}$ | -4 | $x_3\oplus x_2=y_3\oplus y_2\oplus y_0$ | $\frac{4}{16}=0.25$ |
| $\texttt{0xA=0b1010}$ | $\texttt{0xA=0b1010}$ | -4 | $x_3\oplus x_1=y_3\oplus y_1$ | $\frac{4}{16}=0.25$ |

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
![[Pasted image 20240217173336.png]]

Consider $\texttt{0xDC -> 0xB3 | 0b 1101 1100 -> 0b 1011 0011}$
M1: $S(P_1\oplus K_1)=S(p_{1,3}\oplus k_{1,3}||p_{1,2}\oplus k_{1,2}||p_{1,1}\oplus k_{1,1}||p_{1,0}\oplus k_{1,0})$
-> $S(\overline{k_{1,3}}||\overline{k_{1,2}}||k_{1,1}||\overline{k_{1,0}})=:m_{1,3}||m_{1,2}||m_{1,1}||m_{1,0}$

M2: $S(P_2\oplus K_2)=S(p_{2,3}\oplus k_{2,3}||p_{2,2}\oplus k_{2,2}||p_{2,1}\oplus k_{2,1}||p_{2,0}\oplus k_{2,0})$
-> $S(\overline{k_{2,3}}||\overline{k_{2,2}}||k_{2,1}||k_{2,0})=:m_{2,3}||m_{2,2}||m_{2,1}||m_{2,0}$

N1: $S(m_{1,3}\oplus k_{2,3}||m_{1,2}\oplus k_{2,2}||m_{2,3}\oplus k_{2,1}||m_{2,2}\oplus k_{2,0})=\overline{k_{1,3}}||k_{1,2}||\overline{k_{1,1}}||\overline{k_{1,0}}$

N2: $S(m_{1,2}\oplus k_{1,3}||m_{1,1}\oplus k_{1,2}||m_{2,2}\oplus k_{1,1}||m_{2,1}\oplus k_{1,0})=k_{2,3}||k_{2,2}||\overline{k_{2,1}}||\overline{k_{2,0}}$


