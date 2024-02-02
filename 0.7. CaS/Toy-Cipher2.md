#CaS 

```c
static const u8 SBOX2[16] = {
	0xAU, 0x8U, 0xFU, 0x4U,
	0x2U, 0x9U, 0xEU, 0xDU,
	0xCU, 0xBU, 0x6U, 0x0U,
	0x5U, 0x1U, 0x3U, 0x7U
};
```
For input $x$ and output $S(x)$,
$$
(\alpha\cdot x)\oplus(\beta\cdot S(x))=0
$$
### Bias Integer:
```text
     00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 
   +------------------------------------------------
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

### Success:
```text
     00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 
   +------------------------------------------------
00 | 16  8  8  8  8  8  8  8  8  8  8  8  8  8  8  8 
01 |  8 10  4  6  6  8  6  8  8  6  8  6 10  8  6 12 
02 |  8  8 10  6 12  8  6  6  6  6  8  4  6 10  8  8 
03 |  8 10 10  8  6 12  4  6 10  8  8 10  8 10 10  8 
04 |  8 12  8 12  8  8  8  8  6 10 10  6  6  6 10 10 
05 |  8  6  8  6  6  8 10  4  6  8  6  8  8  6 12 10 
06 |  8  8  6 10  8  8  6 10  4  4  6 10  8  8 10  6 
07 |  8 10 10  8 10  4  8  6  8  6 10 12 10  8  8 10 
08 |  8 10  8  6  8 10  8  6  4 10  8 10  8  6  4  6 
09 |  8  8  4  8 10 10 10  6  8  8 12  8 10 10 10  6 
0A |  8 10  6  8 12 10 10  8 10  8  4 10  6  8  8 10 
0B |  8  8  6  6 10  6  4  8 10 10  8  8  8  4 10  6 
0C |  8  6  8 10  8 10  8  6 10  4 10  8  6  4  6  8 
0D |  8  4  8  8 10 10  6 10  6 10 10 10  8  8  8 12 
0E |  8 10 10  4  8 10 10 12  8  6 10  8  8  6 10  8 
0F |  8  8  6  6  6  6  8  8  8  8 10 10  2 10  8  8
```

$$
(\texttt{0xF}\cdot x)\oplus(\texttt{0xC}\cdot S(x))=0
$$
$$
(\texttt{0b1111}\cdot x)\oplus(\texttt{0b1100}\cdot S(x))=0
$$
For $y=S(x)$,

$$
((1\oplus x_3)\oplus(1\oplus x_2)\oplus(1\oplus x_1)\oplus(1\oplus x_0))\oplus ((1\oplus y_3)\oplus (1\oplus y_2)\oplus y_1\oplus y_0)=0
$$
$$
\overline{x_3} \oplus \overline{x_2} \oplus \overline{x_1} \oplus \overline{x_0} \oplus \overline{y_3} \oplus \overline{y_2} \oplus y_1 \oplus y_0 = 0
$$
$$
\overline{x_3} \oplus \overline{x_2} \oplus \overline{x_1} \oplus \overline{x_0} = \overline{y_3} \oplus \overline{y_2} \oplus y_1 \oplus y_0
$$
Note that $p=2/16=1/8=0.125$


DC -> F5
9B -> E1

1101 1100 -> 1111 0101
1001 1011 -> 1110 0001

![[Pasted image 20240202111731.png]]

$$
C_1 = S(P_1\oplus K_1)\oplus K_2
$$
$$
C_2 = S(P_2\oplus K_2)\oplus S(P_1\oplus K_1)\oplus K_1
$$

(1) $(1\oplus K_1[3], 1\oplus K_1[2], K_1[1], 1\oplus K_1[0]) = (\overline{K_1}[3],\overline{K_1}[2],K_1[1],\overline{K_1}[0]) = x$
(2) $(1\oplus K_2[3], 1\oplus K_2[2], 1\oplus K_2[1], 1\oplus K_2[0])=(\overline{K_2}[3],\overline{K_2}[2],\overline{K_2}[1],\overline{K_2}[0])=y$

Recall that $\overline{x_3} \oplus \overline{x_2} \oplus \overline{x_1} \oplus \overline{x_0} = \overline{y_3} \oplus \overline{y_2} \oplus y_1 \oplus y_0$.

$$
K_1[3]\oplus K_1[2]\oplus\overline{K_1}[1]\oplus K_1[0] = K_2[3]\oplus K_2[2]\oplus \overline{K_2}[1]\oplus \overline{K_2}[0]
$$
