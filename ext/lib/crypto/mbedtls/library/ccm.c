DECL|CCM_DECRYPT|macro|CCM_DECRYPT
DECL|CCM_ENCRYPT|macro|CCM_ENCRYPT
DECL|CTR_CRYPT|macro|CTR_CRYPT
DECL|NB_TESTS|macro|NB_TESTS
DECL|UPDATE_CBC_MAC|macro|UPDATE_CBC_MAC
DECL|add_len|variable|add_len
DECL|ad|variable|ad
DECL|ccm_auth_crypt|function|static int ccm_auth_crypt( mbedtls_ccm_context *ctx, int mode, size_t length, const unsigned char *iv, size_t iv_len, const unsigned char *add, size_t add_len, const unsigned char *input, unsigned char *output, unsigned char *tag, size_t tag_len )
DECL|iv_len|variable|iv_len
DECL|iv|variable|iv
DECL|key|variable|key
DECL|mbedtls_ccm_auth_decrypt|function|int mbedtls_ccm_auth_decrypt( mbedtls_ccm_context *ctx, size_t length, const unsigned char *iv, size_t iv_len, const unsigned char *add, size_t add_len, const unsigned char *input, unsigned char *output, const unsigned char *tag, size_t tag_len )
DECL|mbedtls_ccm_encrypt_and_tag|function|int mbedtls_ccm_encrypt_and_tag( mbedtls_ccm_context *ctx, size_t length, const unsigned char *iv, size_t iv_len, const unsigned char *add, size_t add_len, const unsigned char *input, unsigned char *output, unsigned char *tag, size_t tag_len )
DECL|mbedtls_ccm_free|function|void mbedtls_ccm_free( mbedtls_ccm_context *ctx )
DECL|mbedtls_ccm_init|function|void mbedtls_ccm_init( mbedtls_ccm_context *ctx )
DECL|mbedtls_ccm_self_test|function|int mbedtls_ccm_self_test( int verbose )
DECL|mbedtls_ccm_setkey|function|int mbedtls_ccm_setkey( mbedtls_ccm_context *ctx, mbedtls_cipher_id_t cipher, const unsigned char *key, unsigned int keybits )
DECL|mbedtls_ccm_star_auth_decrypt|function|int mbedtls_ccm_star_auth_decrypt( mbedtls_ccm_context *ctx, size_t length, const unsigned char *iv, size_t iv_len, const unsigned char *add, size_t add_len, const unsigned char *input, unsigned char *output, const unsigned char *tag, size_t tag_len )
DECL|mbedtls_ccm_star_encrypt_and_tag|function|int mbedtls_ccm_star_encrypt_and_tag( mbedtls_ccm_context *ctx, size_t length, const unsigned char *iv, size_t iv_len, const unsigned char *add, size_t add_len, const unsigned char *input, unsigned char *output, unsigned char *tag, size_t tag_len )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|msg_len|variable|msg_len
DECL|msg|variable|msg
DECL|res|variable|res
DECL|tag_len|variable|tag_len
