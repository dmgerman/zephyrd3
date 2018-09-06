DECL|NB_CMAC_TESTS_PER_KEY|macro|NB_CMAC_TESTS_PER_KEY
DECL|NB_PRF_TESTS|macro|NB_PRF_TESTS
DECL|PRFKlen|variable|PRFKlen
DECL|PRFK|variable|PRFK
DECL|PRFM|variable|PRFM
DECL|PRFT|variable|PRFT
DECL|aes_128_expected_result|variable|aes_128_expected_result
DECL|aes_128_key|variable|aes_128_key
DECL|aes_128_subkeys|variable|aes_128_subkeys
DECL|aes_192_expected_result|variable|aes_192_expected_result
DECL|aes_192_key|variable|aes_192_key
DECL|aes_192_subkeys|variable|aes_192_subkeys
DECL|aes_256_expected_result|variable|aes_256_expected_result
DECL|aes_256_key|variable|aes_256_key
DECL|aes_256_subkeys|variable|aes_256_subkeys
DECL|aes_message_lengths|variable|aes_message_lengths
DECL|cmac_generate_subkeys|function|static int cmac_generate_subkeys( mbedtls_cipher_context_t *ctx, unsigned char* K1, unsigned char* K2 )
DECL|cmac_multiply_by_u|function|static int cmac_multiply_by_u( unsigned char *output, const unsigned char *input, size_t blocksize )
DECL|cmac_pad|function|static void cmac_pad( unsigned char padded_block[MBEDTLS_CIPHER_BLKSIZE_MAX], size_t padded_block_len, const unsigned char *last_block, size_t last_block_len )
DECL|cmac_test_subkeys|function|static int cmac_test_subkeys( int verbose, const char* testname, const unsigned char* key, int keybits, const unsigned char* subkeys,
DECL|cmac_test_wth_cipher|function|static int cmac_test_wth_cipher( int verbose, const char* testname, const unsigned char* key, int keybits, const unsigned char* messages,
DECL|cmac_xor_block|function|static void cmac_xor_block( unsigned char *output, const unsigned char *input1, const unsigned char *input2, const size_t block_size )
DECL|des3_2key_expected_result|variable|des3_2key_expected_result
DECL|des3_2key_key|variable|des3_2key_key
DECL|des3_2key_subkeys|variable|des3_2key_subkeys
DECL|des3_3key_expected_result|variable|des3_3key_expected_result
DECL|des3_3key_key|variable|des3_3key_key
DECL|des3_3key_subkeys|variable|des3_3key_subkeys
DECL|des3_message_lengths|variable|des3_message_lengths
DECL|mbedtls_aes_cmac_prf_128|function|int mbedtls_aes_cmac_prf_128( const unsigned char *key, size_t key_length, const unsigned char *input, size_t in_len, unsigned char *output )
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_cipher_cmac_finish|function|int mbedtls_cipher_cmac_finish( mbedtls_cipher_context_t *ctx, unsigned char *output )
DECL|mbedtls_cipher_cmac_reset|function|int mbedtls_cipher_cmac_reset( mbedtls_cipher_context_t *ctx )
DECL|mbedtls_cipher_cmac_starts|function|int mbedtls_cipher_cmac_starts( mbedtls_cipher_context_t *ctx, const unsigned char *key, size_t keybits )
DECL|mbedtls_cipher_cmac_update|function|int mbedtls_cipher_cmac_update( mbedtls_cipher_context_t *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_cipher_cmac|function|int mbedtls_cipher_cmac( const mbedtls_cipher_info_t *cipher_info, const unsigned char *key, size_t keylen, const unsigned char *input, size_t ilen, unsigned char *output )
DECL|mbedtls_cmac_self_test|function|int mbedtls_cmac_self_test( int verbose )
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|test_aes128_cmac_prf|function|static int test_aes128_cmac_prf( int verbose )
DECL|test_message|variable|test_message
