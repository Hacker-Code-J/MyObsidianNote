#include <stdio.h>
#include <stddef.h>

typedef __int8_t i8;
typedef __int32_t i32;
typedef __uint8_t u8;
typedef __uint32_t u32;

u32 gcd(u32 a, u32 b) {
    u32 r;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

u32 rec_gcd(u32 a, u32 b) {
    return (b == 0) ? a : rec_gcd(b, a % b);
}

u32 eea(u32 a, u32 b, u32* x, u32* y) {
    u32 an, bn;
    u32 ua, va, ub, vb;
    u32 new_an, new_bn;
    u32 n_ua, n_va, n_ub, n_vb;
    u32 q;

    an = a; bn = b;
    ua = 1; va = 0;
    ub = 0; vb = 1;

    while (bn != 0) {
        q = an / bn;
        new_an = bn;
        new_bn = an - bn * q;

        n_ua = ub; n_va = vb;
        n_ub = ua - ub * q; n_vb = va - vb * q;
        
        an = new_an; bn = new_bn;
        ua = n_ua; va = n_va; ub = n_ub; vb = n_vb;
    }

    *x = ua; *y = va;
    printf("[debug] x = %d, y = %d, an = %d\n", *x, *y, an);
    return an;
}

int main() {
    u32 a, b;
    a = 90;
    b = 63;

    printf("a = %d, b = %d, gcd(%d,%d)=%d\n", a, b, a, b, gcd(a,b));
    printf("a = %d, b = %d, gcd(%d,%d)=%d\n", a, b, a, b, rec_gcd(a,b));

    u32 p, q;
    p = 1; q = 1;
    u32 g = eea(a, b, &p, &q);
    printf("gcd(%d,%d) = %d = %d*%d + %d*%d\n", a, b, g, p, a, q, b);

    return 0;
}