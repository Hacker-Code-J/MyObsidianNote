```c
static const u32 rcon[] = {
    0x01000000, 0x02000000, 0x04000000, 0x08000000, 0x10000000, 0x20000000, 		0x40000000, 0x80000000, 0x1b000000, 0x36000000,
};

/* Expand the cipher key into the encryption key schedule. */
int AES_set_encrypt_key(const unsigned char *userKey, const int bits, AES_KEY *key)
{
	u32 *rk;
	int i = 0;
	u32 temp;
	if (!userKey || !key)
		return -1;
	if (bits != 128 && bits != 192 && bits != 256)
		return -2;

    rk = key->rd_key;

    if (bits == 128)
		key->rounds = 10;
	else if (bits == 192)
		key->rounds = 12;
	else
		key->rounds = 14;

    rk[0] = GETU32(userKey + 0);
    rk[1] = GETU32(userKey + 4);
    rk[2] = GETU32(userKey + 8);
    rk[3] = GETU32(userKey + 12);

    if (bits == 128) {
		while (1) {
            temp = rk[3];
            rk[4] = rk[0] ^
                (Te2[(temp >> 16) & 0xff] & 0xff000000) ^
                (Te3[(temp >> 08) & 0xff] & 0x00ff0000) ^
                (Te0[temp & 0xff] & 0x0000ff00) ^
                (Te1[temp >> 24] & 0x000000ff) ^
                rcon[i];
            rk[5] = rk[1] ^ rk[4];
            rk[6] = rk[2] ^ rk[5];
            rk[7] = rk[3] ^ rk[6];
            if (++i == 10)
            	return 0;
			rk += 4;
		}
	}
    rk[4] = GETU32(userKey + 16);
    rk[5] = GETU32(userKey + 20);
                     
    if (bits == 192) {
        while (1) {
        temp = rk[5];
        rk[6] = rk[0] ^
            (Te2[(temp >> 16) & 0xff] & 0xff000000) ^
            (Te3[(temp >> 8) & 0xff] & 0x00ff0000) ^
            (Te0[(temp) & 0xff] & 0x0000ff00) ^
            (Te1[(temp >> 24)] & 0x000000ff) ^
        	rcon[i];
        rk[7] = rk[ 1] ^ rk[ 6];
        rk[8] = rk[ 2] ^ rk[ 7];
        rk[9] = rk[ 3] ^ rk[ 8];
        if (++i == 8)
        	return 0;
        rk[10] = rk[4] ^ rk[9];
        rk[11] = rk[5] ^ rk[10];
        rk += 6;
   		}
    }
    rk[6] = GETU32(userKey + 24);
	rk[7] = GETU32(userKey + 28);
                     
    if (bits == 256) {
        while (1) {
            temp = rk[7];
            rk[8] = rk[0] ^
            	(Te2[(temp >> 16) & 0xff] & 0xff000000) ^
                (Te3[(temp >> 8) & 0xff] & 0x00ff0000) ^
                (Te0[temp & 0xff] & 0x0000ff00) ^
                (Te1[temp >> 24] & 0x000000ff) ^
            rcon[i];
        rk[9] = rk[1] ^ rk[8];
        rk[10] = rk[2] ^ rk[9];
        rk[11] = rk[3] ^ rk[10];
        if (++i == 7)
        	return 0;
        temp = rk[11];
        rk[12] = rk[4] ^
            (Te2[(temp >> 24)] & 0xff000000) ^
            (Te3[(temp >> 16) & 0xff] & 0x00ff0000) ^
            (Te0[(temp >> 8) & 0xff] & 0x0000ff00) ^
            (Te1[(temp) & 0xff] & 0x000000ff);
        rk[13] = rk[5] ^ rk[12];
        rk[14] = rk[6] ^ rk[13];
        rk[15] = rk[7] ^ rk[14];
            
        rk += 8;
        }
    }
    return 0;
}
```