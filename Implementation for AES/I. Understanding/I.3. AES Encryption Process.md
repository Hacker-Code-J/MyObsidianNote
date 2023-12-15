### Overview

AES is a symmetric block cipher that encrypts/decrypts data using the same key. It operates on a 4x4 column-major order matrix of bytes, termed the state.

### Process Steps

1. **Key Expansion**
    
    - **Description**: Converts the cipher key into an expanded key using a series of transformations.
    - **Operations**:
        - **Key Scheduling**: Derive a set of round keys from the original key.
	 - **Rijndael's Key Schedule**: Specific algorithm used for key expansion.
        
2. **Initial Round**
    
    - **AddRoundKey**:
        - **Operation**: XOR each byte of the state with a block of the round key.
	- **Purpose**: Initial mixing of the key into the plaintext.
        
3. **Main Rounds**
    
    - Each main round consists of four processes:
        - **SubBytes (Substitution bytes)**:
	  - **Operation**: Non-linear substitution step where each byte is replaced with another according to a lookup table.
	
	- **ShiftRows**:
	  - **Operation**: Transposition step where each row of the state is shifted cyclically a certain number of times.
	
	- **MixColumns**:
	  - **Operation**: Mixing operation which operates on the columns of the state, combining the four bytes in each column.

	- **AddRoundKey**:
	  - **Operation**: Each byte of the state is combined with the round key using bitwise XOR.
        
    - **Number of Rounds**:
        - **10 rounds for 128-bit keys**
	- **12 rounds for 192-bit keys**
	- **14 rounds for 256-bit keys**
        
4. **Final Round**
    
    - **Processes**:
        - **SubBytes**
	- **ShiftRows**
	- **AddRoundKey** (No MixColumns)

### Encryption Mechanism

- **Data Preparation**: The plaintext is divided into 128-bit blocks, each block processed separately.
- **Round Operations**: Each round transforms the block's state, ensuring security and complexity.

### Key Points

- **Symmetry**: The same algorithm with the reverse process is used for decryption.
- **Security**: The non-linear substitution and mix of operations provide strong cryptographic security.
- **Efficiency**: Designed for high-speed and low-memory environments.