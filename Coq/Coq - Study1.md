
- Proof Assistant 

https://en.wikipedia.org/wiki/Proof_assistant

```coq
Theorem mytheorem : forall n : nat, n = n.
Proof.
	intro.
	reflexivity.
Qed.
```