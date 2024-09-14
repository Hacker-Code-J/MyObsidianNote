#include <stdio.h>
#include <stdint.h>

typedef int8_t i8;
typedef int32_t i32;
typedef uint8_t u8;
typedef uint32_t u32;

// Addition on GF(2^8)
// a = a7a6...a1a0 = a7x^7 + a6x^6 + ... + a1x + a0
// b = b7b6...b1b0 = b7x^7 + b6x^6 + ... + b1x + b0
// c = a + b
//  = (a7 + b7)x^7 + (a6 + b6)x^6 + ... + (a1 + b1)x + (a0 + b0)

u8 GF256_add(u8 a, u8 b) {
    return a ^ b;
}

u8 GF256_xtime(u8 a) {
    // u8 msb = a & 0x80;
    // u8 result;

    // (msb == 0) ? (result = a << 1) : (result = (a << 1) ^ 0x1b);
    // return result;
    return ((a & 0x80) == 0) ? a << 1 : (a << 1) ^ 0x1b;
}

// Multiplication on GF(2^8)
// f(x) = a7x^7 + a6x^6 + ... + a1x + a0
// g(x)
// h(x) = g(x) * f(x) = g(x)a7x^7 + g(x)a6x^6 + ... + g(x)a1x + g(x)a0
// Compute h(x) in step by step:
//  h(x) <- g(x) * a7
//  h(x) <- x * (g(x) * a7) + (g(x) * a6)
//  h(x) <- x * (x * g(x) * a7 + g(x) * a6) + (g(x) * x5)
//  ...
//  h(x) <- x * ( ... + g(x) * a1) + (g(x) * a0)
u8 GF256_mul(u8 f, u8 g) {
    u8 h = 0x00;
    u8 coef;

    for (i8 i = 7; i >= 0; i--) {
        coef = (f >> i) & 0x01; // a7, a6, ..., a1, a0
        h = GF256_xtime(h);
        if (coef == 1) h ^= g; 
    }

    return h;
}

void GF256_print_bin(u8 x) {
    printf("0b");
    for (i8 i = 0; i < 8; i++) {
        printf("%d", (x >> (7 - i)) & 0x01);
    }
    puts("");
}

void GF256_print_poly(u8 a) {
    u8 coef, expo;

    for (i8 i = 0; i < 8; i++) {
        coef = (a >> (7 - i)) & 0x01;
        expo = 7 - i;
        if (i == 7 && coef == 1) {
            printf("%d\n", coef);
        } else {
            if (coef == 1) printf("x^%d + ", expo);
        }
        
    }

}

void test_GF256() {
    u8 a, b, c;
    a = 0x57;
    b = 0x83;
    c = GF256_mul(a,b);

    printf("a = %2d = 0x%02x = ", a, a);
    GF256_print_bin(a);
    GF256_print_poly(a);

    printf("b = %2d = 0x%02x = ", b, b);
    GF256_print_bin(b);
    GF256_print_poly(b);

    printf("c = %2d = 0x%02x = ", c, c);
    GF256_print_bin(c);
    GF256_print_poly(c);
}

int main(int argc, char* argv[]) {
    
    test_GF256();
    
    return 0;
}