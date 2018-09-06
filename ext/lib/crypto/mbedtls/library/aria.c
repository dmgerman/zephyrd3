DECL|ARIA_P1|macro|ARIA_P1
DECL|ARIA_P1|macro|ARIA_P1
DECL|ARIA_P1|macro|ARIA_P1
DECL|ARIA_P1|macro|ARIA_P1
DECL|ARIA_P2|macro|ARIA_P2
DECL|ARIA_P3|macro|ARIA_P3
DECL|ARIA_P3|macro|ARIA_P3
DECL|ARIA_P3|macro|ARIA_P3
DECL|ARIA_P3|macro|ARIA_P3
DECL|ARIA_SELF_TEST_IF_FAIL|macro|ARIA_SELF_TEST_IF_FAIL
DECL|GET_UINT32_LE|macro|GET_UINT32_LE
DECL|PUT_UINT32_LE|macro|PUT_UINT32_LE
DECL|aria_a|function|static inline void aria_a( uint32_t *a, uint32_t *b, uint32_t *c, uint32_t *d )
DECL|aria_fe_xor|function|static void aria_fe_xor( uint32_t r[4], const uint32_t p[4], const uint32_t k[4], const uint32_t x[4] )
DECL|aria_fo_xor|function|static void aria_fo_xor( uint32_t r[4], const uint32_t p[4], const uint32_t k[4], const uint32_t x[4] )
DECL|aria_is1|variable|aria_is1
DECL|aria_is2|variable|aria_is2
DECL|aria_p1|function|static inline uint32_t aria_p1( uint32_t x )
DECL|aria_p1|function|static inline uint32_t aria_p1( uint32_t x )
DECL|aria_p3|function|static inline uint32_t aria_p3( uint32_t x )
DECL|aria_p3|function|static inline uint32_t aria_p3( uint32_t x )
DECL|aria_p3|function|static inline uint32_t aria_p3( uint32_t x )
DECL|aria_rot128|function|static void aria_rot128( uint32_t r[4], const uint32_t a[4], const uint32_t b[4], uint8_t n )
DECL|aria_sb1|variable|aria_sb1
DECL|aria_sb2|variable|aria_sb2
DECL|aria_sl|function|static inline void aria_sl( uint32_t *a, uint32_t *b, uint32_t *c, uint32_t *d, const uint8_t sa[256], const uint8_t sb[256], const uint8_t sc[256], const uint8_t sd[256] )
DECL|aria_test1_ecb_ct|variable|aria_test1_ecb_ct
DECL|aria_test1_ecb_key|variable|aria_test1_ecb_key
DECL|aria_test1_ecb_pt|variable|aria_test1_ecb_pt
DECL|aria_test2_cbc_ct|variable|aria_test2_cbc_ct
DECL|aria_test2_cfb_ct|variable|aria_test2_cfb_ct
DECL|aria_test2_ctr_ct|variable|aria_test2_ctr_ct
DECL|aria_test2_iv|variable|aria_test2_iv
DECL|aria_test2_key|variable|aria_test2_key
DECL|aria_test2_pt|variable|aria_test2_pt
DECL|inline|macro|inline
DECL|mbedtls_aria_crypt_cbc|function|int mbedtls_aria_crypt_cbc( mbedtls_aria_context *ctx, int mode, size_t length, unsigned char iv[MBEDTLS_ARIA_BLOCKSIZE], const unsigned char *input,
DECL|mbedtls_aria_crypt_cfb128|function|int mbedtls_aria_crypt_cfb128( mbedtls_aria_context *ctx, int mode, size_t length, size_t *iv_off, unsigned char iv[MBEDTLS_ARIA_BLOCKSIZE],
DECL|mbedtls_aria_crypt_ctr|function|int mbedtls_aria_crypt_ctr( mbedtls_aria_context *ctx, size_t length, size_t *nc_off, unsigned char nonce_counter[MBEDTLS_ARIA_BLOCKSIZE], unsigned char stream_block[MBEDTLS_ARIA_BLOCKSIZE],
DECL|mbedtls_aria_crypt_ecb|function|int mbedtls_aria_crypt_ecb( mbedtls_aria_context *ctx, const unsigned char input[MBEDTLS_ARIA_BLOCKSIZE], unsigned char output[MBEDTLS_ARIA_BLOCKSIZE] )
DECL|mbedtls_aria_free|function|void mbedtls_aria_free( mbedtls_aria_context *ctx )
DECL|mbedtls_aria_init|function|void mbedtls_aria_init( mbedtls_aria_context *ctx )
DECL|mbedtls_aria_self_test|function|int mbedtls_aria_self_test( int verbose )
DECL|mbedtls_aria_setkey_dec|function|int mbedtls_aria_setkey_dec( mbedtls_aria_context *ctx, const unsigned char *key, unsigned int keybits )
DECL|mbedtls_aria_setkey_enc|function|int mbedtls_aria_setkey_enc( mbedtls_aria_context *ctx, const unsigned char *key, unsigned int keybits )
DECL|mbedtls_printf|macro|mbedtls_printf
