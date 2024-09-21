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
        if (coef == 1) {
            h ^= g; 
        }
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


// Implementation of Rijndeal S-box S[x] = A * inv(x) + b

// Multiplicative Inverse of GF(2^8)
// ord(x) is the smallest integer s.t. x ^ (ord(x)) = 1 with x != 0
// x^{255} = 1 => x^{-1} = x^{254} = x^{1111 1110} = x^{0x80} + x^{0x40} + ... + x^{0x02}

u8 GF256_inv(u8 x) {
    if (!x) return 0x00;
    
    u8 x_inv = 0x01;
    u8 temp = x;
    for (i8 i = 0; i < 7; i++) {
        temp = GF256_mul(temp, temp); // x^2, x^4, ..., x^128 (128 = 2^7)
        x_inv = GF256_mul(x_inv, temp); // 1, x^2, x^2 * x^4, ..., x^2 * ...* x^{128}
    }

    return x_inv;
}

// w -> y = Aw + b
u8 affine_transformation(u8 w) {
    const u8 MDS[64] = {
        1, 0, 0, 0, 1, 1, 1, 1,
        1, 1, 0, 0, 0, 1, 1, 1,
        1, 1, 1, 0, 0, 0, 1, 1,
        1, 1, 1, 1, 0, 0, 0, 1,
        1, 1, 1, 1, 1, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 0, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 1, 1, 1, 1, 1
    }; // stack (x), literal (o) by 'const'

    // b_vec = {b0, b1, ..., b7}
    u8 b_vec[8] = {1, 1, 0, 0, 0, 1, 1, 0};

    // w_vec = {w0, w1, ..., w7}
    u8 w_vec[8];

    // y_vec = {y0, y1, ..., y7}
    u8 y_vec[8] = { 0x00, };

    // w -> w_vec
    for (i8 i = 0; i < 8; i++) {
        w_vec[i] = (w >> i) & 0x01;
    }
    // w -> Aw + b = b + Aw
    // y[i] =A[i][0] * w[0] + A[i][1] * w[1] + ... + A[i][7] * w[7]
    for (i8 i = 0; i < 8; i++) {
        // y_vec[i] = 0x00;
        y_vec[i] = b_vec[i];
        for (i8 j = 0; j < 8; j++) {
            y_vec[i] ^= (MDS[(8 * i) + j] * w_vec[j]); // Operation on GF(2)
        }
    }

    // y_vec -> y
    u8 y = 0x00;
    for (i8 i = 0; i < 8; i++) {
        y ^= (y_vec[i] << i);
    }

    return y;
}

void get_rijndael_sbox(u8 S[256]) {
    u8 w;

    for (i32 x = 0; x < 256; x++) {
        w = GF256_inv(x); // inv(x)
        S[x] = affine_transformation(w); // A * inv(x) + b
    }
}

// x in GF(2^8) - {0} => ord(x) is finite
// H_x = {x, x^2, .., x^{ord(x)}=1} is a cyclic subgroup of G = {1, 2, ..., 255}
// |H| divides |G| by Lagrange's Thm
i32 GF256_ord(u8 x) {
    u8 temp;
    i32 ord;

    if (!x) return -1;

    temp = x;
    ord = 0x01;
    while (temp != 0x01) {
        temp = GF256_mul(temp, x);
        ord++;
    }

    return ord;
}

void get_rijndael_inv_sbox(u8 inv_S[256]) {
    u8 sbox[256];

    get_rijndael_sbox(sbox);

    // y = S[x] <=> x = inv_S[y] = inv_S[S[x]]
    // inv_S[S[0]] = 0, inv_S[S[1]] = 1, ..., inv_S[S[255]] = 255
    for (i32 x = 0; x < 256; x++) {
        inv_S[sbox[x]] = x;
    }
}

// x --> y = A * inv(x) + b = Aw + b
// Aw  = y + b (b = -b in GF(2))
// w = A^{-1} * (y + b) ... inverse matrix
// x = w^{-1} ... multiplicative inverse in GF(2^8)

// y -> A^{-1} * (y + b)
u8 inv_affine_transformation(u8 y) {
    const u8 INV_MDS[64] = {
        0, 0, 1, 0, 0, 1, 0, 1,
        1, 0, 0, 1, 0, 0, 1, 0,
        0, 1, 0, 0, 1, 0, 0, 1,
        1, 0, 1, 0, 0, 1, 0, 0,
        0, 1, 0, 1, 0, 0, 1, 0,
        0, 0, 1, 0, 1, 0, 0, 1,
        1, 0, 0, 1, 0, 1, 0, 0,
        0, 1, 0, 0, 1, 0, 1, 0
    };

    u8 b_vec[8] = {1, 1, 0, 0, 0, 1, 1, 0}; // b_vec = {b0, b1, ..., b7}
    u8 w_vec[8] = { 0x00, };                // w_vec = {w0, w1, ..., w7}
    u8 y_vec[8] = { 0x00, };                // y_vec = {y0, y1, ..., y7}
    u8 yb_vec[8] = { 0x00, };  // yb = y + b

    // y -> y_vec
    for (i8 i = 0; i < 8; i++) {
        y_vec[i] = (y >> i) & 0x01;
    }
    
    // yb_vec = y_vec + b_vec
    for (i8 i = 0; i < 8; i++) {
        yb_vec[i] = y_vec[i] ^ b_vec[i];
    }

    // y -> w = A^{-1} * (y + b)
    for (i8 i = 0; i < 8; i++) {
        for (i8 j = 0; j < 8; j++) {
            w_vec[i] ^= (INV_MDS[(8 * i) + j] * yb_vec[j]);
        }
    }

    // w_vec -> w
    u8 w = 0x00;
    for (i8 i = 0; i < 8; i++) {
        w ^= (w_vec[i] << i);
    }

    return w;
}

void get_rijndael_inv_sbox_from_affine(u8 inv_S[256]) {
    u8 w;

    for (i32 y = 0; y < 256; y++) { // inv_S[0], .. inv_S[255]
        w = inv_affine_transformation(y); // w = A^{-1} * (y + b)
        inv_S[y] = GF256_inv(w); // x = w^{-1}
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

    // ====================================
    u8 d, e;

    d = GF256_inv(a);
    printf("d = %2d = 0x%02x = ", d, d);
    GF256_print_bin(d);
    GF256_print_poly(d);

    e = GF256_mul(a, d);
    printf("e = %2d = 0x%02x = ", e, e);
    GF256_print_bin(e);
    GF256_print_poly(e);
}

void test_sbox() {
    u8 sbox[256] = { 0x00,};

    get_rijndael_sbox(sbox);

    puts("Sbox = ");
    for (i32 i = 0; i < 256; i++) {
        printf(" %02x", sbox[i]);
        if ((i % 16) == 15) puts("");
    }
    puts("");

    u8 inv_sbox[256] = { 0x00, };
    get_rijndael_inv_sbox(inv_sbox);

    puts("Inv_Sbox = ");
    for (i32 i = 0; i < 256; i++) {
        printf(" %02x", inv_sbox[i]);
        if ((i % 16) == 15) puts("");
    }
    puts("");
    
    get_rijndael_inv_sbox_from_affine(inv_sbox);

    puts("Inv_Sbox = ");
    for (i32 i = 0; i < 256; i++) {
        printf(" %02x", inv_sbox[i]);
        if ((i % 16) == 15) puts("");
    }
    puts("");

    for (i32 i = 0; i < 256; i++) {
        if (inv_sbox[sbox[i]] != i) {
            printf("Sbox-Inv_Sbox error!\n");
            return;
        }
    }

    printf("Sbox-Inv_Sbox TEST OK!\n");

}

void test_ord() {
    i32 ord;
    i32 cnt_full_ord = 0x00;

    for (i32 i = 0; i < 256; i++) {
        ord = GF256_ord(i);
        printf("ord(0x%02x) = %d\n", i, ord);
        if (ord == 255) cnt_full_ord++;
    }

    printf("The number of x s.t. ord(x)=255 is %d\n", cnt_full_ord);
}

int main(int argc, char* argv[]) {
    
    // test_GF256();
    test_sbox();
    // test_ord();

    return 0;
}