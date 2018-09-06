DECL|GET_UINT32_BE|macro|GET_UINT32_BE
DECL|MAX_TESTS|macro|MAX_TESTS
DECL|PUT_UINT32_BE|macro|PUT_UINT32_BE
DECL|add_index|variable|add_index
DECL|add_len|variable|add_len
DECL|additional|variable|additional
DECL|ct|variable|ct
DECL|gcm_gen_table|function|static int gcm_gen_table( mbedtls_gcm_context *ctx )
DECL|gcm_mult|function|static void gcm_mult( mbedtls_gcm_context *ctx, const unsigned char x[16], unsigned char output[16] )
DECL|iv_index|variable|iv_index
DECL|iv_len|variable|iv_len
DECL|iv|variable|iv
DECL|key_index|variable|key_index
DECL|key|variable|key
DECL|last4|variable|last4
DECL|mbedtls_gcm_auth_decrypt|function|int mbedtls_gcm_auth_decrypt( mbedtls_gcm_context *ctx, size_t length, const unsigned char *iv, size_t iv_len, const unsigned char *add,
DECL|mbedtls_gcm_crypt_and_tag|function|int mbedtls_gcm_crypt_and_tag( mbedtls_gcm_context *ctx, int mode, size_t length, const unsigned char *iv, size_t iv_len,
DECL|mbedtls_gcm_finish|function|int mbedtls_gcm_finish( mbedtls_gcm_context *ctx, unsigned char *tag, size_t tag_len )
DECL|mbedtls_gcm_free|function|void mbedtls_gcm_free( mbedtls_gcm_context *ctx )
DECL|mbedtls_gcm_init|function|void mbedtls_gcm_init( mbedtls_gcm_context *ctx )
DECL|mbedtls_gcm_self_test|function|int mbedtls_gcm_self_test( int verbose )
DECL|mbedtls_gcm_setkey|function|int mbedtls_gcm_setkey( mbedtls_gcm_context *ctx, mbedtls_cipher_id_t cipher, const unsigned char *key, unsigned int keybits )
DECL|mbedtls_gcm_starts|function|int mbedtls_gcm_starts( mbedtls_gcm_context *ctx, int mode, const unsigned char *iv, size_t iv_len, const unsigned char *add,
DECL|mbedtls_gcm_update|function|int mbedtls_gcm_update( mbedtls_gcm_context *ctx, size_t length, const unsigned char *input, unsigned char *output )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|pt_index|variable|pt_index
DECL|pt_len|variable|pt_len
DECL|pt|variable|pt
DECL|tag|variable|tag
