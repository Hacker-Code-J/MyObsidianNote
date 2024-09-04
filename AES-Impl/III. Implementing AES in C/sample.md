
### 1. Initialize Matrix

This function sets up the initial state matrix from the plaintext. In AES, the plaintext is converted into a 4x4 matrix of bytes.

**Implementation Steps**:

- Convert the plaintext into a 16-byte array.
- Fill the 4x4 matrix with these bytes.
- Display this matrix in the UI.

### 2. SubBytes Step

In this step, each byte in the state matrix is replaced with another according to a fixed table (the S-box).

**Implementation Steps**:

- Define the S-box as a 256-element array.
- Replace each element of the state matrix with the corresponding element from the S-box.
- Update the UI to reflect these changes.

### 3. ShiftRows Step

The rows of the matrix are shifted cyclically. The first row is not shifted, the second row is shifted one to the left, and so on.

**Implementation Steps**:

- For each row in the matrix (except the first), shift it left by the row number (0, 1, 2, 3).
- Update the UI to show the shifted rows.

### 4. MixColumns Step

This step involves matrix multiplication in the Galois Field (2^8) for each column.

**Implementation Steps**:

- For each column, apply the MixColumns transformation (this involves Galois Field arithmetic).
- Update the UI to display the new matrix.

### 5. AddRoundKey Step

Each byte of the state matrix is combined with the round key using bitwise XOR.

**Implementation Steps**:

- Expand the encryption key to derive a series of round keys.
- For each round, XOR each byte of the state matrix with the corresponding byte of the round key.
- Update the UI to reflect the state matrix after the XOR operation.

### 6. Combine Steps into Rounds

AES encryption consists of multiple rounds (10, 12, or 14, depending on the key size) that repeat the above steps (except the final round, which does not include MixColumns).

**Implementation Steps**:

- Perform the SubBytes, ShiftRows, MixColumns (except in the final round), and AddRoundKey steps in sequence for each round.
- After each step, update the UI to illustrate the changes.
- After all rounds are completed, the state matrix represents the encrypted data.

### Visualization and Descriptions

For a dynamic and educational experience:

- Use animations or transitions to show changes in the state matrix.
- Add textual descriptions or annotations explaining each step and why it's important in the AES process.
- Provide controls for users to start, pause, and step through the encryption process.