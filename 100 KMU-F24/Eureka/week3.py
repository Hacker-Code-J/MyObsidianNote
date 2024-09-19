# ========================
# a = 1022
# print(bin(a))
# print(hex(a))

# ========================
# a = 3 # 0b0011
# b = 4 # 0b0100
# c = 7 # 0b0111

# print(bin(a&b))
# print(bin(a|b))
# print(bin(a^b))
# print(bin(~a))

# print(bin(c << 2))
# print(bin(c >> 2))

# ========================
# def format_binary_16bit(number):
#     binary_str = f"{number:016b}"
#     formatted_binary = ' '.join([binary_str[i:i+4] for i in range(0, 16, 4)])
#     return formatted_binary

# number = 45
# formatted_output = format_binary_16bit(number)
# print(formatted_output)

def ROL_16(a, n):
    n % 16
    return ((a << n) & 0xFFFF) | (a >> (16 - n))

def ROR_16(a, n):
    return (a >> n) | ((a << (16 - n)) & 0xFFFF)

# def ROL_16(a, n):
#    n = n % 16  # Ensure n is within the 0-15 range
#    return ((a << n) % (1 << 16)) | (a >> (16 - n))

res = ROL_16(0b1111111100001111, 4)
print(bin(res))

# ========================
# Block Cipher - CHAM

def CHAM_key_sechedule(mk, k, w):
    num_word = k // w
    
    rk = [0] * (2 * num_word)
    
    for i in range(num_word):
        rk[i] = mk[i] ^ ROL_16(mk[i], 1) ^ ROL_16(mk[i], 8)
        rk[(i + num_word) ^ 1] = mk[i] ^ ROL_16(mk[i], 1) ^ ROL_16(mk[i], 11)
        
    return rk

mk = [0x0100, 0x0302, 0x0504, 0x0706,
      0x0908, 0x0b0a, 0x0d0c, 0x0f0e]
rk = CHAM_key_sechedule(mk, 128, 16)
# for i in rk:
#     print(hex(i))
    
def CHAM_Encryption(pt, rk, k, w, r):
    num_word = k // w
    
    for i in range(0, r, 2):
        pt[0] = pt[0] ^ i
        temp = pt[1]
        temp = ROL_16(temp, 1)
        temp = temp ^ rk[i % (2 * num_word)]
        
        pt[0] = (pt[0] + temp) & ((1 << w) - 1)
        pt[0] = ROL_16(pt[0], 8)
        temp = pt[0]
        
        pt[0] = pt[1]
        pt[1] = pt[2]
        pt[2] = pt[3]
        pt[3] = temp
        
        pt[0] = pt[0] ^ (i + 1)
        temp = pt[1]
        temp = ROL_16(temp, 8)
        temp = temp ^ rk[(i + 1) % (2 * num_word)]
        
        pt[0] = (pt[0] + temp) & ((1 << w) - 1)
        pt[0] = ROL_16(pt[0], 1)
        temp = pt[0]
        
        pt[0] = pt[1]
        pt[1] = pt[2]
        pt[2] = pt[3]
        pt[3] = temp
        
    return pt

def CHAM_Decryption(ct, rk, k , w, r):
    num_word = k // w
    for i in range(r-1, 0, -2):
        ct[3] = ROR_16(ct[3], 1)
        temp = ct[0]
        temp = ROL_16(temp, 8)
        temp = temp ^ rk[i % (2 * num_word)]
        ct[3] = (ct[3] - temp) & ((1 << w) - 1)
        ct[3] = ct[3] ^ i
        temp = ct[3]
        
        ct[3] = ct[2]
        ct[2] = ct[1]
        ct[1] = ct[0]
        ct[0] = temp

        ct[3] = ROL_16(ct[3], 8)
        temp = ct[0]
        temp = ROL_16(temp, 1)
        temp = temp ^ rk[(i - 1) % (2 * num_word)]
        ct[3] = (ct[3] - temp) & ((1 << w) - 1)
        ct[3] = ct[3] ^ (i - 1)
        temp = ct[3]
        
        ct[3] = ct[2]
        ct[2] = ct[1]
        ct[1] = ct[0]
        ct[0] = temp

    return ct

pt = [0x1100, 0x3322, 0x5544, 0x7766]
ct = CHAM_Encryption(pt, rk, 128, 16, 88)
for i in ct:
    print(hex(i))
print()

dt = CHAM_Decryption(ct, rk, 128, 16, 88)
for i in dt:
    print(hex(i))
print()

# ========================
# ========================
# ========================
# ========================
