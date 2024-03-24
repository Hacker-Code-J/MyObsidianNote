#Coq


> [!theorem] **Theorem** (Gödel's Completeness Theorem).
> - Let $\mathcal{L}$ be a first-order language, and
> - let $\Sigma$ be a set of sentences in $\mathcal{L}$.
>Then,
>- a formula $\varphi$ in $\mathcal{L}$ is provable from $\Sigma$ (denoted $\Sigma \vdash \varphi$) if and only if
>- $\varphi$ is true in all models of $\Sigma$ (denoted $\Sigma \models \varphi$).

> [!proof]
> - **1. Henkin Extension**: Extend $\Sigma$ to $\Sigma^H$ by adding constants and corresponding Henkin axioms ensuring each existential quantifier has a witness in the extended language. This process maintains consistency if $\Sigma$ was consistent.
> - **2. Construction of a Maximal Consistent Set:** Using Zorn's Lemma, extend $\Sigma^H$ to a maximal consistent set $\Sigma^*$, such that for any sentence $\psi$, either $\psi \in \Sigma^*$ or $\neg\psi \in \Sigma^*$, but not both.
> - **3. Model Construction:** Construct a model $\mathcal{M}$ from $\Sigma^*$. Define the domain of $\mathcal{M}$ to be the set of all terms in the language. For each n-ary function symbol $f$, define $f^\mathcal{M}$ by $f^\mathcal{M}(t_1, \ldots, t_n) = f(t_1, \ldots, t_n)$. For each n-ary predicate symbol $P$, define $P^\mathcal{M}$ such that $P^\mathcal{M}(t_1, \ldots, t_n)$ holds if and only if $P(t_1, \ldots, t_n) \in \Sigma^*$.
> - **4. Truth Lemma:** Prove that for every sentence $\varphi$ in the language, $\varphi$ is true in $\mathcal{M}$ (denoted $\mathcal{M} \models \varphi$) if and only if $\varphi \in \Sigma^*$. This involves induction on the structure of $\varphi$.
> - **Completeness:** If $\Sigma \models \varphi$, then every model of $\Sigma$ is a model of $\varphi$. If $\Sigma \nvdash \varphi$, then by the construction above, $\Sigma^* \nvdash \varphi$ and thus there exists a model $\mathcal{M}$ (constructed from $\Sigma^*$) in which $\varphi$ is not true, which is a contradiction. Hence, if $\Sigma \models \varphi$, then $\Sigma \vdash \varphi$. 
> - **Soundness:** Conversely, if $\Sigma \vdash \varphi$, then by the soundness of first-order logic, $\Sigma \models \varphi$. Thus, Gödel's completeness theorem is proved.


