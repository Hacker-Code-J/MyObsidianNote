
To implement SHA-2 in C, you can use the following code:
```c
#include <stdint.h>
#include <string.h>

// Define the SHA-2 message digest structure
typedef struct {
    uint32_t state[8];
    uint64_t count;
    uint8_t buffer[64];
} sha2_t;

// Initialize the SHA-2 message digest with a given seed
void sha2_init(sha2_t *sha2, uint32_t seed) {
    memset(sha2->state, 0, sizeof(sha2->state));
    sha2->count = seed;
}

// Update the SHA-2 message digest with a given block of data
void sha2_update(sha2_t *sha2, const void *data, size_t len) {
    while (len >= 64) {
        uint32_t words[16];
        for (int i = 0; i < 16; i++) {
            words[i] = ((uint32_t *)data)[i];
        }
        sha2->state[0] += words[0];
        sha2->state[1] += words[1];
        sha2->state[2] += words[2];
        sha2->state[3] += words[3];
        sha2->state[4] += words[4];
        sha2->state[5] += words[5];
        sha2->state[6] += words[6];
        sha2->state[7] += words[7];
        for (int i = 0; i < 64; i++) {
            sha2->buffer[i] ^= ((uint8_t *)&words[i])[i & 3];
        }
        len -= 64;
        data += 64;
    }
}

// Finalize the SHA-2 message digest and return the resulting hash
void sha2_final(sha2_t *sha2, uint8_t *hash) {
    sha2->state[0] = (sha2->state[0] & 0xff000000) | ((sha2->state[0] >> 24) & 0x00ffffff);
    sha2->state[1] = (sha2->state[1] & 0x00ffffff) | ((sha2->state[1] << 8) & 0xff000000);
    sha2->state[2] = (sha2->state[2] & 0x00ffffff) | ((sha2->state[2] << 16) & 0xff000000);
    sha2->state[3] = (sha2->state[3] & 0x00ffffff) | ((sha2->state[3] << 24) & 0xff000000);
    sha2->count += 64;
    for (int i = 0; i < 8; i++) {
        hash[i] = (uint8_t)(sha2->state[i] >> 24);
        hash[i + 1] = (uint8_t)(sha2->state[i] >> 16);
        hash[i + 2] = (uint8_t)(sha2->state[i] >> 8);
        hash[i + 3] = (uint8_t)sha2->state[i];
    }
}
```
This code defines a `sha2_t` structure that contains the state of the SHA-2 message digest, 
including the current block being processed and the total number of bytes processed. It also 
includes a `sha2_init` function to initialize the message digest with a given seed, an `sha2_update`
function to update the message digest with a given block of data, and a `sha2_final` function to 
finalize the message digest and return the resulting hash.

To use this code, you can create a `sha2_t` structure and call `sha2_init` to initialize it with a 
seed. You can then call `sha2_update` repeatedly to update the message digest with blocks of data 
from your input stream. Finally, you can call `sha2_final` to finalize the message digest and get 
the resulting hash.

For example:
```c
// Initialize the SHA-2 message digest with a given seed
uint32_t seed = 0xdeadbeef;
sha2_init(&sha2, seed);

// Update the message digest with some data
char *data = "hello world";
size_t len = strlen(data);
sha2_update(&sha2, data, len);

// Finalize the message digest and get the resulting hash
uint8_t hash[32];
sha2_final(&sha2, hash);
```
This code would initialize the SHA-2 message digest with a given seed, update it with the string 
"hello world", then finalize it and return the resulting 32-byte hash.
