
Lambda-Calculus (Lambda-Algebra)
-> Substitution Algebra

Essential: 추상방식의 공리화

Definition

$x$: A variable is a character or string representing a parameter.
- 독립 변수 (Free Variable)
- 종속 변수 (Bound Variable)
$(\lambda x.M)$: A lambda abstraction
$(M\ N)$: An application
- Lambda Term 2개를 받아 Lambda Term를 뱉는다.
- Binary Operation

Reduction
- $\alpha$-conversion: $(\lambda x.M[x])\to(\lambda y.M[y])$
- $\beta$-reduction: $((\lambda x. M)\ N)\to(M[x:=N])$
- $\eta$-

By $\beta$-reduction
$(\lambda x.x)y=x[x:=y]=y$

By $\alpha$-conversion
$(\lambda z,z)\equiv (\lambda u,u)$

# Combinatory Logic

$M, N ::= x\mid c\mid MN\mid \lambda x.M$

$\lambda$-Calculus
$k:=\lambda xy.x$
$s:=\lambda xyz.xz(yz)$

$k xy=(\lambda xy.x)xy=x[xy:=xy]=x$.
$S xyz=\lambda xyz.xz(yz)xyz=xy(yz)[xyz=xyz]=xy(yz)$

$\lambda$-Calculus 가 규정되어 있음
-> application으로 부터 binary operation이 주어짐
-> binary operation을 통해 applicative structure $(A,\cdot)$를  규정

Combinatory Logic로 다루면 안된다.