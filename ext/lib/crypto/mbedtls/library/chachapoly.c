DECL|ASSERT|macro|ASSERT
DECL|CHACHAPOLY_STATE_AAD|macro|CHACHAPOLY_STATE_AAD
DECL|CHACHAPOLY_STATE_CIPHERTEXT|macro|CHACHAPOLY_STATE_CIPHERTEXT
DECL|CHACHAPOLY_STATE_FINISHED|macro|CHACHAPOLY_STATE_FINISHED
DECL|CHACHAPOLY_STATE_INIT|macro|CHACHAPOLY_STATE_INIT
DECL|chachapoly_crypt_and_tag|function|static int chachapoly_crypt_and_tag( mbedtls_chachapoly_context *ctx, mbedtls_chachapoly_mode_t mode, size_t length, const unsigned char nonce[12], const unsigned char *aad,
DECL|chachapoly_pad_aad|function|static int chachapoly_pad_aad( mbedtls_chachapoly_context *ctx )
DECL|chachapoly_pad_ciphertext|function|static int chachapoly_pad_ciphertext( mbedtls_chachapoly_context *ctx )
DECL|mbedtls_chachapoly_auth_decrypt|function|int mbedtls_chachapoly_auth_decrypt( mbedtls_chachapoly_context *ctx, size_t length, const unsigned char nonce[12], const unsigned char *aad, size_t aad_len,
DECL|mbedtls_chachapoly_encrypt_and_tag|function|int mbedtls_chachapoly_encrypt_and_tag( mbedtls_chachapoly_context *ctx, size_t length, const unsigned char nonce[12], const unsigned char *aad, size_t aad_len,
DECL|mbedtls_chachapoly_finish|function|int mbedtls_chachapoly_finish( mbedtls_chachapoly_context *ctx, unsigned char mac[16] )
DECL|mbedtls_chachapoly_free|function|void mbedtls_chachapoly_free( mbedtls_chachapoly_context *ctx )
DECL|mbedtls_chachapoly_init|function|void mbedtls_chachapoly_init( mbedtls_chachapoly_context *ctx )
DECL|mbedtls_chachapoly_self_test|function|int mbedtls_chachapoly_self_test( int verbose )
DECL|mbedtls_chachapoly_setkey|function|int mbedtls_chachapoly_setkey( mbedtls_chachapoly_context *ctx, const unsigned char key[32] )
DECL|mbedtls_chachapoly_starts|function|int mbedtls_chachapoly_starts( mbedtls_chachapoly_context *ctx, const unsigned char nonce[12], mbedtls_chachapoly_mode_t mode )
DECL|mbedtls_chachapoly_update_aad|function|int mbedtls_chachapoly_update_aad( mbedtls_chachapoly_context *ctx, const unsigned char *aad, size_t aad_len )
DECL|mbedtls_chachapoly_update|function|int mbedtls_chachapoly_update( mbedtls_chachapoly_context *ctx, size_t len, const unsigned char *input, unsigned char *output )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|test_aad_len|variable|test_aad_len
DECL|test_aad|variable|test_aad
DECL|test_input_len|variable|test_input_len
DECL|test_input|variable|test_input
DECL|test_key|variable|test_key
DECL|test_mac|variable|test_mac
DECL|test_nonce|variable|test_nonce
DECL|test_output|variable|test_output
