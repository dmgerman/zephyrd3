DECL|ASSERT|macro|ASSERT
DECL|BYTES_TO_U32_LE|macro|BYTES_TO_U32_LE
DECL|CHACHA20_BLOCK_SIZE_BYTES|macro|CHACHA20_BLOCK_SIZE_BYTES
DECL|CHACHA20_CTR_INDEX|macro|CHACHA20_CTR_INDEX
DECL|ROTL32|macro|ROTL32
DECL|chacha20_block|function|static void chacha20_block( const uint32_t initial_state[16], unsigned char keystream[64] )
DECL|chacha20_inner_block|function|static void chacha20_inner_block( uint32_t state[16] )
DECL|chacha20_quarter_round|function|static inline void chacha20_quarter_round( uint32_t state[16], size_t a, size_t b, size_t c, size_t d )
DECL|inline|macro|inline
DECL|mbedtls_chacha20_crypt|function|int mbedtls_chacha20_crypt( const unsigned char key[32], const unsigned char nonce[12], uint32_t counter, size_t data_len, const unsigned char* input,
DECL|mbedtls_chacha20_free|function|void mbedtls_chacha20_free( mbedtls_chacha20_context *ctx )
DECL|mbedtls_chacha20_init|function|void mbedtls_chacha20_init( mbedtls_chacha20_context *ctx )
DECL|mbedtls_chacha20_self_test|function|int mbedtls_chacha20_self_test( int verbose )
DECL|mbedtls_chacha20_setkey|function|int mbedtls_chacha20_setkey( mbedtls_chacha20_context *ctx, const unsigned char key[32] )
DECL|mbedtls_chacha20_starts|function|int mbedtls_chacha20_starts( mbedtls_chacha20_context* ctx, const unsigned char nonce[12], uint32_t counter )
DECL|mbedtls_chacha20_update|function|int mbedtls_chacha20_update( mbedtls_chacha20_context *ctx, size_t size, const unsigned char *input, unsigned char *output )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|test_counters|variable|test_counters
DECL|test_input|variable|test_input
DECL|test_keys|variable|test_keys
DECL|test_lengths|variable|test_lengths
DECL|test_nonces|variable|test_nonces
DECL|test_output|variable|test_output
