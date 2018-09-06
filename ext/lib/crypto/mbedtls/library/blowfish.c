DECL|F|function|static uint32_t F( mbedtls_blowfish_context *ctx, uint32_t x )
DECL|GET_UINT32_BE|macro|GET_UINT32_BE
DECL|PUT_UINT32_BE|macro|PUT_UINT32_BE
DECL|P|variable|P
DECL|S|variable|S
DECL|S|variable|S
DECL|blowfish_dec|function|static void blowfish_dec( mbedtls_blowfish_context *ctx, uint32_t *xl, uint32_t *xr )
DECL|blowfish_enc|function|static void blowfish_enc( mbedtls_blowfish_context *ctx, uint32_t *xl, uint32_t *xr )
DECL|mbedtls_blowfish_crypt_cbc|function|int mbedtls_blowfish_crypt_cbc( mbedtls_blowfish_context *ctx, int mode, size_t length, unsigned char iv[MBEDTLS_BLOWFISH_BLOCKSIZE], const unsigned char *input,
DECL|mbedtls_blowfish_crypt_cfb64|function|int mbedtls_blowfish_crypt_cfb64( mbedtls_blowfish_context *ctx, int mode, size_t length, size_t *iv_off, unsigned char iv[MBEDTLS_BLOWFISH_BLOCKSIZE],
DECL|mbedtls_blowfish_crypt_ctr|function|int mbedtls_blowfish_crypt_ctr( mbedtls_blowfish_context *ctx, size_t length, size_t *nc_off, unsigned char nonce_counter[MBEDTLS_BLOWFISH_BLOCKSIZE], unsigned char stream_block[MBEDTLS_BLOWFISH_BLOCKSIZE],
DECL|mbedtls_blowfish_crypt_ecb|function|int mbedtls_blowfish_crypt_ecb( mbedtls_blowfish_context *ctx, int mode, const unsigned char input[MBEDTLS_BLOWFISH_BLOCKSIZE], unsigned char output[MBEDTLS_BLOWFISH_BLOCKSIZE] )
DECL|mbedtls_blowfish_free|function|void mbedtls_blowfish_free( mbedtls_blowfish_context *ctx )
DECL|mbedtls_blowfish_init|function|void mbedtls_blowfish_init( mbedtls_blowfish_context *ctx )
DECL|mbedtls_blowfish_setkey|function|int mbedtls_blowfish_setkey( mbedtls_blowfish_context *ctx, const unsigned char *key, unsigned int keybits )
