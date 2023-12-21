```c
#include <stdint.h>
#include <string.h>

// Assuming sbox and Te0 are pre-calculated and provided
extern const uint8_t sbox[256];
extern const uint32_t Te0[256];

// Key expansion routine (assuming it's already implemented)
void KeyExpansion(uint8_t* RoundKey, const uint8_t* Key, int Nk, int Nr);

// AES encryption of a single block (16 bytes)
void AES_EncryptBlock(uint8_t* out, const uint8_t* in, const uint8_t* RoundKey, int Nr) {
    uint32_t state[4];
    uint32_t t[4];

    // Copy input block to state and apply key
    for (int i = 0; i < 4; i++) {
        state[i] = ((uint32_t)in[4*i] << 24) | ((uint32_t)in[4*i + 1] << 16) |
                   ((uint32_t)in[4*i + 2] << 8) | (uint32_t)in[4*i + 3];
        state[i] ^= ((uint32_t)RoundKey[4*i] << 24) | ((uint32_t)RoundKey[4*i + 1] << 16) |
                    ((uint32_t)RoundKey[4*i + 2] << 8) | (uint32_t)RoundKey[4*i + 3];
    }

    // Main rounds
    for (int round = 1; round < Nr; round++) {
        for (int i = 0; i < 4; i++) {
            t[i] = Te0[state[i] >> 24] ^ Te0[(state[(i+1)%4] >> 16) & 0xff] ^
                   Te0[(state[(i+2)%4] >> 8) & 0xff] ^ Te0[state[(i+3)%4] & 0xff];
        }
        memcpy(state, t, 16);

        // Add round key
        for (int i = 0; i < 4; i++) {
            state[i] ^= ((uint32_t)RoundKey[4*(round*4 + i)] << 24) | ((uint32_t)RoundKey[4*(round*4 + i) + 1] << 16) |
                        ((uint32_t)RoundKey[4*(round*4 + i) + 2] << 8) | (uint32_t)RoundKey[4*(round*4 + i) + 3];
        }
    }

    // Final round (without mix columns)
    // ... similar to the main rounds, but with some modifications ...

    // Copy state to output
    for (int i = 0; i < 4; i++) {
        out[4*i] = (state[i] >> 24) & 0xff;
        out[4*i + 1] = (state[i] >> 16) & 0xff;
        out[4*i + 2] = (state[i] >> 8) & 0xff;
        out[4*i + 3] = state[i] & 0xff;
    }
}

// Main function to test AES encryption
int main() {
    uint8_t key[...]; // Your AES key
    uint8_t in[16]; // Input block
    uint8_t out[16]; // Output block
    uint8_t RoundKey[...]; // Expanded key

    // Key expansion
    KeyExpansion(RoundKey, key, ...); // Fill in the correct parameters

    // Encrypt
    AES_EncryptBlock(out, in, RoundKey, ...); // Fill in the correct parameters

    // Output the result
    // ...

    return 0;
}

```

```c
#include <stdint.h>
#include <string.h>

// Precalculated tables for SBox and Te0
uint8_t sbox[256] = {...}; // 256 bytes of pre-calculated SBox values
uint32_t Te0[4][16] = {{...}, {...}, {...}, {...}}; // 4x16 matrix of 
pre-calculated Te0 values

// AES encryption function
void aes_encrypt(const uint8_t *key, const uint8_t *plaintext, uint8_t 
*ciphertext) {
    // Load the plaintext into a 32-bit unit
    uint32_t plaintext_unit = (uint32_t)*plaintext << 24 |
                              (uint32_t)*(plaintext + 1) << 16 |
                              (uint32_t)*(plaintext + 2) << 8 |
                              (uint32_t)*(plaintext + 3);
    // Load the key into a 32-bit unit
    uint32_t key_unit = (uint32_t)*key << 24 |
                        (uint32_t)*(key + 1) << 16 |
                        (uint32_t)*(key + 2) << 8 |
                        (uint32_t)*(key + 3);
    // XOR the plaintext and key units
    uint32_t ciphertext_unit = plaintext_unit ^ key_unit;
    // Apply the SBox and Te0 transformations to the ciphertext unit
    uint32_t temp = sbox[ciphertext_unit >> 24] << 24 |
                    sbox[(ciphertext_unit >> 16) & 0xff] << 16 |
                    sbox[(ciphertext_unit >> 8) & 0xff] << 8 |
                    sbox[ciphertext_unit & 0xff];
    temp = Te0[0][temp >> 24] ^
           Te0[1][(temp >> 16) & 0xff] ^
           Te0[2][(temp >> 8) & 0xff] ^
           Te0[3][temp & 0xff];
    // Store the encrypted data in the ciphertext buffer
    *ciphertext++ = (uint8_t)(temp >> 24);
    *ciphertext++ = (uint8_t)((temp >> 16) & 0xff);
    *ciphertext++ = (uint8_t)((temp >> 8) & 0xff);
    *ciphertext++ = (uint8_t)(temp & 0xff);
}

```