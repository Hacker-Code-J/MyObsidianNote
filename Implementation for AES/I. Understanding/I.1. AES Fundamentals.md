The **Advanced Encryption Standard (AES)** is a pivotal encryption algorithm essential for data security and integrity. Below are its key principles:

### 1. Block Cipher Nature

AES is a _symmetric key block cipher_, encrypting data in **128-bit blocks** using the same key for encryption and decryption.

- **Symmetric Key**: The same key is used for both encrypting and decrypting data.
- **Block Size**: Fixed at 128 bits, ensuring consistency and security.

### 2. Key Sizes

AES supports various key sizes for flexibility and security:
- **128 bits**: Standard level of security, efficient in processing.
- **192 bits**: Enhanced security level, balancing efficiency and protection.
- **256 bits**: Maximum security, ideal for highly sensitive data.

The choice of key size impacts the **trade-off** between security and computational efficiency.

### 3. Operation Modes

AES operates in different modes, each tailored for specific scenarios
- **ECB (Electronic Codebook)**: Simplest form, encrypts each block independently.
- **CBC (Cipher Block Chaining)**: Enhances security by XORing each block with the previous ciphertext block.
- **CFB (Cipher Feedback)** and **OFB (Output Feedback)**: Converts AES into a stream cipher, suitable for arbitrary data sizes.
- **CTR (Counter)**: Simplifies encryption and allows parallel processing, also making AES a stream cipher.
