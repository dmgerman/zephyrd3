DECL|CAMELLIA_TESTS_CBC|macro|CAMELLIA_TESTS_CBC
DECL|CAMELLIA_TESTS_ECB|macro|CAMELLIA_TESTS_ECB
DECL|FLInv|macro|FLInv
DECL|FL|macro|FL
DECL|FSb2|variable|FSb2
DECL|FSb3|variable|FSb3
DECL|FSb4|variable|FSb4
DECL|FSb|variable|FSb
DECL|FSb|variable|FSb
DECL|GET_UINT32_BE|macro|GET_UINT32_BE
DECL|PUT_UINT32_BE|macro|PUT_UINT32_BE
DECL|ROTL|macro|ROTL
DECL|SBOX1|macro|SBOX1
DECL|SBOX1|macro|SBOX1
DECL|SBOX2|macro|SBOX2
DECL|SBOX2|macro|SBOX2
DECL|SBOX3|macro|SBOX3
DECL|SBOX3|macro|SBOX3
DECL|SBOX4|macro|SBOX4
DECL|SBOX4|macro|SBOX4
DECL|SHIFT_AND_PLACE|macro|SHIFT_AND_PLACE
DECL|SIGMA_CHARS|variable|SIGMA_CHARS
DECL|camellia_feistel|function|static void camellia_feistel( const uint32_t x[2], const uint32_t k[2], uint32_t z[2])
DECL|camellia_test_cbc_cipher|variable|camellia_test_cbc_cipher
DECL|camellia_test_cbc_iv|variable|camellia_test_cbc_iv
DECL|camellia_test_cbc_key|variable|camellia_test_cbc_key
DECL|camellia_test_cbc_plain|variable|camellia_test_cbc_plain
DECL|camellia_test_ctr_ct|variable|camellia_test_ctr_ct
DECL|camellia_test_ctr_key|variable|camellia_test_ctr_key
DECL|camellia_test_ctr_len|variable|camellia_test_ctr_len
DECL|camellia_test_ctr_nonce_counter|variable|camellia_test_ctr_nonce_counter
DECL|camellia_test_ctr_pt|variable|camellia_test_ctr_pt
DECL|camellia_test_ecb_cipher|variable|camellia_test_ecb_cipher
DECL|camellia_test_ecb_key|variable|camellia_test_ecb_key
DECL|camellia_test_ecb_plain|variable|camellia_test_ecb_plain
DECL|indexes|variable|indexes
DECL|mbedtls_camellia_crypt_cbc|function|int mbedtls_camellia_crypt_cbc( mbedtls_camellia_context *ctx, int mode, size_t length, unsigned char iv[16], const unsigned char *input,
DECL|mbedtls_camellia_crypt_cfb128|function|int mbedtls_camellia_crypt_cfb128( mbedtls_camellia_context *ctx, int mode, size_t length, size_t *iv_off, unsigned char iv[16],
DECL|mbedtls_camellia_crypt_ctr|function|int mbedtls_camellia_crypt_ctr( mbedtls_camellia_context *ctx, size_t length, size_t *nc_off, unsigned char nonce_counter[16], unsigned char stream_block[16],
DECL|mbedtls_camellia_crypt_ecb|function|int mbedtls_camellia_crypt_ecb( mbedtls_camellia_context *ctx, int mode, const unsigned char input[16], unsigned char output[16] )
DECL|mbedtls_camellia_free|function|void mbedtls_camellia_free( mbedtls_camellia_context *ctx )
DECL|mbedtls_camellia_init|function|void mbedtls_camellia_init( mbedtls_camellia_context *ctx )
DECL|mbedtls_camellia_self_test|function|int mbedtls_camellia_self_test( int verbose )
DECL|mbedtls_camellia_setkey_dec|function|int mbedtls_camellia_setkey_dec( mbedtls_camellia_context *ctx, const unsigned char *key, unsigned int keybits )
DECL|mbedtls_camellia_setkey_enc|function|int mbedtls_camellia_setkey_enc( mbedtls_camellia_context *ctx, const unsigned char *key, unsigned int keybits )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|shifts|variable|shifts
DECL|transposes|variable|transposes
