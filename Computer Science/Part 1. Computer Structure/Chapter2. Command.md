
[[Computer Structure]]

# 소스코드에서 명령어로

소스 코드: 사람(개발자)가 이해하기 편한 언어 (고급 언어)
명령어와 데이터: 컴퓨터가 이해하기 편한 언어 (저급 언어)

즉, 고급 언어로 작성된 소스 코드는 내부적으로 저급 언어로 구성된 명령어와 데이터로 변환된다.

저급 언어
- 기계어 (Machine Code)
- 어셈블리어 (Assembly Language)

고급 언어에서 저급 언어로 변환되는 대표적 방식
- 컴파일
- 인터프린트

컴파일
- 소스 코드 전체가 컴파일러(gcc, clong, visual studio)에 의해 검사, 목적 코드로 변환
- C/C++, Rust
- 소스 코드 (고급 언어) -> 컴파일러(컴파일) -> 목적 코드(저급 언어)

인터프린트
- 소스 코드 한 줄 씩 인터프린터에 의해 검사, 목적 코드로 변환
- Python, JavaScript

오개념 주의
- 소스 코드가 저급 언어로 변환되는 대표적인 방식일 뿐 컴파일 방식과 인터프린트 방식은 칼로 자르듯 구분되는 개념은 아니다.
- 컴파일 언어의 특성과 인터프린트 언어의 특성을 모두 갖춘 언어도 있다. (Java, Python)

# 컴파일 - 명령어 관찰하기

https://godbolt.org/

```c
#include <stdio.h>
int main() {
	int a = 1;
	int b = 2;
	int c = a + b;
	printf("%d\n", c);
	return 0;
}
```

```assembly (x86-64 gcc 11.4)
.LC0:
	.string "%d\n"
main:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov DWORD PTR [rbp-4], 1
	mov DWORD PTR [rbp-8], 2
	mov edx, DWORD PTR [rbp-4]
	mov eax, DWORD PTR [rbp-8]
	add eax, edx
	mov DWORD PTR [rbp-12], eax
	mov eax, DWORD PTR [rbp-12]
	mov esi, eax
	mov edi, OFFSET FLAT:.LC0
	mov eax, 0
	call printf
	mov eax, 0
	leave
	ret
```

```zsh
$ gcc --version
$ cat hello.c
$ gcc -o hello hello.c 
$ gcc -S hello.c -o hello.S
$ cat hello.S
```

# 명령어 구조

 명령어
 - "밥을 드세요"
 - "이 상자를 저기로 옮겨라"
 - "받들어 총"

명령어
- 무엇을 대상으로 무엇을 수행하라.
- 더해라 | 100과 | 120을
- 빼라 | 메모리 32번지 안의 값과 | 메모리 33번지 속의 값을
- 저장해라 | 무엇을 | 메모리 128번지에
- 출력해라 | 무엇을 | 모니터에

명령어
- 연산 코드 (Op Code) | 오퍼랜드
- 오퍼랜드로 연산 코드를 수행하라.
- 피연산자, 오퍼랜드(operand): 명령어를 수행할 대상
	- 대상(데이터)이 직접 명시되기도 하고, **대상의 위치**(레지스터 이름, 메모리 주소)가 명시되기도 함.
- 연산코드(op-code): 오퍼랜드로 수행할 동작
- n-주소 명령어, n=0,1,2,...
- 2-주소 명령어로 X=(A+B) * C 계산하기
	1. R1<-M(A): 메모리의 A 번지 값을 연산을 진행할 레지스터 R1을 옮깁니다.
	2. ....
	3. ...
	4. ...
- 3-주소 명령어로 X=(A+B) * C 계산하기
	1. ...
	2. 2...



# 주소 지정




