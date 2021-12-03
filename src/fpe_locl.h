#ifndef HEADER_FPE_LOCL_H
# define HEADER_FPE_LOCL_H

#include <string.h>
#include <openssl/bn.h>

// ceil and floor for x / (2 ^ bit)
# define ceil2(x, bit) ( ((x) >> (bit)) + ( ((x) & ((1 << (bit)) - 1)) > 0 ) )
# define floor2(x, bit) ( (x) >> (bit) )

void pow_uv(BIGNUM *pow_u, BIGNUM *pow_v, unsigned int x, int u, int v, BN_CTX *ctx);

void map_chars(char str[], unsigned int result[]);
void inverse_map_chars(unsigned result[], unsigned char str[], int len);
void hex2chars(const char hex[], unsigned char result[]);

//int log2(int x);

#endif


