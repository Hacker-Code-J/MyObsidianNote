
### **Hamming Weight Theory:**

**Hamming Weight** refers to the number of 1s (or non-zero values) in a binary string or sequence of data. It is essentially a count of the active bits in the sequence.

#### 1. **Definition:**
   - The **Hamming weight** of a binary string is the sum of its binary digits.
   - For example, the Hamming weight of the binary string `1010101` is `4` because there are four `1s` in the string.

#### 2. **Mathematical Representation:**
Let $x$ be a binary string of length $n$. The Hamming weight, denoted by $\text{wt}(x)$, is defined as:
$$\text{wt}(x) = \sum_{i=1}^{n} x_i$$
where $x_i$ represents the individual bits of the string $x$, and $x_i \in \{0, 1\}$.

#### 3. **Properties of Hamming Weight:**
   - **Additive property:** The Hamming weight of the XOR (exclusive OR) of two binary strings corresponds to the Hamming distance between them.
   - **Applications in Coding Theory:** Hamming weight is useful for analyzing error-detection and error-correction codes, where the weight of a codeword helps in determining the distance between codewords.
   - **In cryptography:** It can also be used for analyzing the security of cryptographic functions and systems, particularly in side-channel attacks.

#### 4. **Example:**
   Binary string: `110010`
   - The Hamming weight of `110010` is `3` since there are three 1s in the string.

---

### **Hamming Distance Theory:**

**Hamming Distance** refers to the number of positions at which the corresponding symbols (or bits) in two equal-length strings differ. It is a measure of how different two binary strings are from each other.

#### 1. **Definition:**
   - The **Hamming distance** between two binary strings of equal length is the number of positions at which the corresponding bits are different.
   - For example, the Hamming distance between `10101` and `11100` is `3` because they differ at three positions.

#### 2. **Mathematical Representation:**
Let $x$ and $y$ be two binary strings of length $n$. The Hamming distance between $x$ and $y$, denoted by $d_H(x, y)$, is given by:
  $$d_H(x, y) = \sum_{i=1}^{n} (x_i \oplus y_i)$$
where $\oplus$ denotes the XOR (exclusive OR) operation, and $x_i$ and $y_i$ are the $i$-th bits of $x$ and $y$, respectively.

#### 3. **Properties of Hamming Distance:**
   - **Symmetry:** $d(x, y) = d(y, x)$, meaning the Hamming distance is the same regardless of the order of the strings.
   - **Non-negativity:** $d(x, y) \geq 0$, and $d(x, x) = 0$, i.e., the distance between any string and itself is zero.
   - **Triangle inequality:** $d(x, z) \leq d(x, y) + d(y, z)$, meaning the distance between two strings can’t be more than the sum of their distances to a third string.
   
#### 4. **Applications of Hamming Distance:**
   - **Error Detection and Correction:** Hamming distance is crucial in coding theory. Error-correcting codes like Hamming codes use Hamming distance to detect and correct errors in data transmission.
   - **Cryptography:** It’s used in assessing how resistant cryptographic functions are to attacks by evaluating the difference between plaintext and ciphertext.
   - **Genetics:** In bioinformatics, the Hamming distance is used to compare DNA sequences.

#### 5. **Example:**
   - Binary strings: `1011001` and `1001101`
   - The Hamming distance is `3` since the strings differ at three positions: the 2nd, 3rd, and 6th bits.

---

### **Relationship Between Hamming Weight and Hamming Distance:**
   - The **Hamming distance** between two binary strings \( x \) and \( y \) is equal to the **Hamming weight** of the XOR of the two strings:
$$d(x, y) = \text{wt}(x \oplus y)$$This relationship highlights how both Hamming weight and Hamming distance are closely related through the XOR operation.

### **Summary:**
- **Hamming Weight** counts the number of 1s in a binary string.
- **Hamming Distance** counts the number of bit differences between two binary strings.
- Both concepts are fundamental in areas like coding theory, cryptography, and information theory, helping in the design of efficient error-correction codes and secure communication protocols.