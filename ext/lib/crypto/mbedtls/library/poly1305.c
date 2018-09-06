DECL|ASSERT|macro|ASSERT
DECL|BYTES_TO_U32_LE|macro|BYTES_TO_U32_LE
DECL|POLY1305_BLOCK_SIZE_BYTES|macro|POLY1305_BLOCK_SIZE_BYTES
DECL|inline|macro|inline
DECL|mbedtls_poly1305_finish|function|int mbedtls_poly1305_finish( mbedtls_poly1305_context *ctx, unsigned char mac[16] )
DECL|mbedtls_poly1305_free|function|void mbedtls_poly1305_free( mbedtls_poly1305_context *ctx )
DECL|mbedtls_poly1305_init|function|void mbedtls_poly1305_init( mbedtls_poly1305_context *ctx )
DECL|mbedtls_poly1305_mac|function|int mbedtls_poly1305_mac( const unsigned char key[32], const unsigned char *input, size_t ilen, unsigned char mac[16] )
DECL|mbedtls_poly1305_self_test|function|int mbedtls_poly1305_self_test( int verbose )
DECL|mbedtls_poly1305_starts|function|int mbedtls_poly1305_starts( mbedtls_poly1305_context *ctx, const unsigned char key[32] )
DECL|mbedtls_poly1305_update|function|int mbedtls_poly1305_update( mbedtls_poly1305_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|mul64|function|static inline uint64_t mul64( uint32_t a, uint32_t b )
DECL|mul64|function|static uint64_t mul64( uint32_t a, uint32_t b )
DECL|poly1305_compute_mac|function|static void poly1305_compute_mac( const mbedtls_poly1305_context *ctx, unsigned char mac[16] )
DECL|poly1305_process|function|static void poly1305_process( mbedtls_poly1305_context *ctx, size_t nblocks, const unsigned char *input, uint32_t needs_padding )
DECL|test_data_len|variable|test_data_len
DECL|test_data|variable|test_data
DECL|test_keys|variable|test_keys
DECL|test_mac|variable|test_mac
