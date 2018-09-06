DECL|GET_UINT32_BE|macro|GET_UINT32_BE
DECL|KW_SEMIBLOCK_LENGTH|macro|KW_SEMIBLOCK_LENGTH
DECL|KW_TESTS|macro|KW_TESTS
DECL|MIN_SEMIBLOCKS_COUNT|macro|MIN_SEMIBLOCKS_COUNT
DECL|NIST_KW_ICV1|variable|NIST_KW_ICV1
DECL|NIST_KW_ICV2|variable|NIST_KW_ICV2
DECL|PUT_UINT32_BE|macro|PUT_UINT32_BE
DECL|calc_a_xor_t|function|static void calc_a_xor_t( unsigned char A[KW_SEMIBLOCK_LENGTH], uint64_t t )
DECL|key_len|variable|key_len
DECL|kw_key|variable|kw_key
DECL|kw_msg_len|variable|kw_msg_len
DECL|kw_msg|variable|kw_msg
DECL|kw_out_len|variable|kw_out_len
DECL|kw_res|variable|kw_res
DECL|kwp_key|variable|kwp_key
DECL|kwp_msg_len|variable|kwp_msg_len
DECL|kwp_msg|variable|kwp_msg
DECL|kwp_out_len|variable|kwp_out_len
DECL|kwp_res|variable|kwp_res
DECL|mbedtls_nist_kw_free|function|void mbedtls_nist_kw_free( mbedtls_nist_kw_context *ctx )
DECL|mbedtls_nist_kw_init|function|void mbedtls_nist_kw_init( mbedtls_nist_kw_context *ctx )
DECL|mbedtls_nist_kw_safer_memcmp|function|static inline unsigned char mbedtls_nist_kw_safer_memcmp( const void *a, const void *b, size_t n )
DECL|mbedtls_nist_kw_self_test|function|int mbedtls_nist_kw_self_test( int verbose )
DECL|mbedtls_nist_kw_setkey|function|int mbedtls_nist_kw_setkey( mbedtls_nist_kw_context *ctx, mbedtls_cipher_id_t cipher, const unsigned char *key, unsigned int keybits, const int is_wrap )
DECL|mbedtls_nist_kw_unwrap|function|int mbedtls_nist_kw_unwrap( mbedtls_nist_kw_context *ctx, mbedtls_nist_kw_mode_t mode, const unsigned char *input, size_t in_len, unsigned char *output, size_t *out_len, size_t out_size )
DECL|mbedtls_nist_kw_wrap|function|int mbedtls_nist_kw_wrap( mbedtls_nist_kw_context *ctx, mbedtls_nist_kw_mode_t mode, const unsigned char *input, size_t in_len, unsigned char *output, size_t *out_len, size_t out_size )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|unwrap|function|static int unwrap( mbedtls_nist_kw_context *ctx, const unsigned char *input, size_t semiblocks, unsigned char A[KW_SEMIBLOCK_LENGTH], unsigned char *output, size_t* out_len )
