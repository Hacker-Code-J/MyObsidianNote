
In EasyCrypt, the symbols `<@` and `<$` are used to express different types of assignments, typically in the context of probabilistic programming and cryptographic proofs. Here's a brief explanation of each:

### `<@` (Deterministic Assignment)

The `<@` operator is used for deterministic assignments. This operator assigns the result of an expression to a variable without any randomness involved. It’s similar to a standard assignment in most programming languages.

**Example:**
```easycrypt
var x : int;
x <@ 5;   (* Assigns the value 5 to the variable x *)
```

This is a straightforward assignment where the value on the right-hand side (RHS) is assigned to the variable on the left-hand side (LHS).

### `<$` (Probabilistic Assignment)

The `<$` operator is used for probabilistic assignments. This operator assigns to a variable a value drawn from a probability distribution or a set according to some random process. It’s commonly used in cryptographic settings to model randomness.

**Example:**
```easycrypt
var x : int;
x <$ uniform {1, 2, 3};  (* Assigns to x a value uniformly drawn from the set {1, 2, 3} *)
```

In this case, `x` is assigned a value based on a uniform random choice from the set `{1, 2, 3}`.

### Usage Context

- **Deterministic Assignment (`<@`)** is used when the value being assigned is known and fixed, such as a constant value or the result of a deterministic computation.

- **Probabilistic Assignment (`<$`)** is used when the value is determined by a random process, such as drawing a random number, choosing a random element from a set, or sampling from a distribution.

These operators are crucial in EasyCrypt for modeling and proving properties about probabilistic processes, which are common in cryptographic algorithms and protocols. Understanding the distinction between these two types of assignments is essential for accurately representing and reasoning about both deterministic and probabilistic behaviors in your formal models.

