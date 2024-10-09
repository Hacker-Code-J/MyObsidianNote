
- 평균의 차
- 다량의 파형
- 5 step attack
	- 중간값 선택 (공격 타겟 설정)
	- 전력소비 측정
	- 예상되는 중간 값 계산
	- 중간 값과 전력소비 값과의 관계
	- 예상되는 전력 값과 측정된 전력소비 비교

128-bit plaintext
- PT1: $\texttt{0x00112233445566778899aabbccddeeff}$
- PT2: $\texttt{0x69...}$
- PT3: $\texttt{0x21...}$

파형의 포인트 수 : $2.5\times 10^6 = 2,500,000$ bytes (2.38 MB)

Step 3: 중간 값 계산  
- $f(d,k)\to f(p,k)=S(p\oplus k)$
- 첫 번째 8-bit 추측 (바이트 단위 추측)
- 2^8=256 가지 경우
	- $S(00\oplus 00)\sim S(00\oplus ff)$
	- $S(69\oplus 00)\sim S(69\oplus ff)$
	- $S(21\oplus 00)\sim S(21\oplus ff)$
-  평문들의 바이트값을 활용해 그 때 얻어지는 전력값과 키 값 사이의 연결고리를 만들어 내는 것이 목표 (2^8=256 가지 경우의 수, 행은 256(0x00 ~ 0xff), 열은 평문의 갯수)
- HW-model, HD-model, Binary-Model
- (Binary Model) $Bin(S(00\oplus 00))$
- Binary Model: 중간 값을 1 또는 0으로 분류하는 모델
- (MSB=1 인 경우의 평균) - (MSB=0인 경우의 평균)

- Hamming Weight Model (Byte) : 옳은 경우
	- (MSB = 1): $P_{total,1}=\epsilon W_H((1b_6b_5b_4b_3b_2b_1b_0)_2) + P_{noise}$
		- $P_{total,1}=\epsilon\left(1+\frac{7}{2}\right)+P_{noise}$
	- (MSB = 0): $P_{total,0}=\epsilon W_H((0b_6b_5b_4b_3b_2b_1b_0)_2) + P_{noise}$
		- $P_{total,0}=\epsilon\left(0+\frac{7}{2}\right)+P_{noise}$
	- $P_{total,1}-P_{total,0}=\epsilon\cdot 1$

- Hamming Weight Model (Byte) : 틀린 경우
	- (MSB = 1): $P_{total,1}=\epsilon W_H((b_7b_6b_5b_4b_3b_2b_1b_0)_2) + P_{noise}$
		- $P_{total,1}=\epsilon\left(\frac{8}{2}\right)+P_{noise}$
	- (MSB = 0): $P_{total,0}=\epsilon W_H((b_7b_6b_5b_4b_3b_2b_1b_0)_2) + P_{noise}$
		- $P_{total,0}=\epsilon\left(\frac{8}{2}\right)+P_{noise}$
	- $P_{total,1}-P_{total,0}=0$

1. S-Box 출력을 보겠다
2. 






