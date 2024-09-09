
---
> [!info] **Observation**
> Let
> - $R=\mathbb{Z}$
> - $S = \mathbb{Z}^*=\mathbb{Z}\setminus \set{0}$
> 
> Then $$
> S^{-1}R=(\mathbb{Z}^*)^{-1}\mathbb{Z}=\left\{ \frac{n}{m}:n\in\mathbb{Z},\ m\in\mathbb{Z}^* \right\}=\mathbb{Q}.
> $$


> [!abstract] **Definition**
> A graph is defined as...


> [!important] **Theorem**
> Let $f$ be continuous...

> [!check] **Proof**
> By induction...

> [!example] **Example**
> Let
> - $R=\mathbb{C}[x]$
> - $S = \{1,(x-1),(x-1)^2,\dots\}=\{ (x-1)^n:n\in\mathbb{Z}_{{\geq 0}} \}$
> 
> Then 
> $$
> S^{-1}R=\left\{ \frac{f(x)}{(x-1)^n}:f\in\mathbb{C}[x],\ n\in\mathbb{Z}_{{\geq {0}}} \right\}.
> $$
> This localization "inverts" the powers of $(x−1)$, meaning that (x−1) becomes a unit in the localized ring $S^{-1}R$.





> [!note] **Notes**
> In further exploration...


### Definitions and Ring Structures

1. **Ring** 
$$\mathbb{C}[x,y]=\left\{\sum_{i=0}^n\sum_{j=0}^na_{ij}x^iy^j:a_{ij}\in\mathbb{C}\right\}$$
   The set of all polynomials in $x$ and $y$ with coefficients in $\mathbb{C}$.

2. **Ideal**:
$$\langle xy \rangle = \{p(x,y) \cdot xy \mid p(x,y) \in \mathbb{C}[x,y]\}.$$

3. **Quotient Ring**:
$$\mathbb{C}[x,y]/\langle xy \rangle = \{f(x,y) + \langle xy \rangle \mid f(x,y) \in \mathbb{C}[x,y]\},$$where $xy = 0$ in this quotient.

### Localization at $x$

- **Localization**
$$(\mathbb{C}[x,y]/\langle xy \rangle)_x = \left\{\frac{f(x,y)}{x^n} + \langle xy \rangle \mid f(x,y) \in \mathbb{C}[x,y], \, n \geq 0\right\},$$ with the understanding that $xy = 0$ in all expressions.

### Localization of $\mathbb{C}[x]$

- **Ring**
$$\mathbb{C}[x] = \{g(x) \mid g(x) \in \mathbb{C}[x]\}.$$

- **Localization at $x$**:
$$(\mathbb{C}[x])_x = \left\{\frac{g(x)}{x^n} \mid g(x) \in \mathbb{C}[x], \, n \geq 0\right\}.$$

### Establishing the Isomorphism

Define the map $\phi$ as follows:
$$\phi : (\mathbb{C}[x,y]/\langle xy \rangle)_x \to (\mathbb{C}[x])_x,$$
$$\phi\left(\frac{f(x,y)}{x^n} + \langle xy \rangle\right) = \frac{f(x,0)}{x^n}.$$

### Properties of $\phi$

- **Well-defined**: $\phi$ is well-defined because substituting $y = 0$ directly reflects the $xy = 0$ condition in the original quotient.
- **Injective**: Assume that $\phi\left(\frac{f(x,y)}{x^n} + \langle xy \rangle\right) = \phi\left(\frac{g(x,y)}{x^m} + \langle xy \rangle\right)$. Then $$\begin{align*}
  \frac{f(x,0)}{x^n} = \frac{g(x,0)}{x^m}\implies f(x,y) - g(x,y) \in \langle xy \rangle
  \end{align*}$$ after clearing denominators and considering $xy = 0$.
- **Surjective**: Let $\frac{g(x)}{x^n} \in (\mathbb{C}[x])_x$. Then
  $$\phi\left(\frac{g(x)}{x^n} + \langle xy \rangle\right) = \frac{g(x)}{x^n}$$covers all elements of $(\mathbb{C}[x])_x$.

This construction demonstrates that the structures of $(\mathbb{C}[x,y]/\langle xy \rangle)_x$ and $(\mathbb{C}[x])_x$ align precisely, providing a foundation for the isomorphism.
