DECL|CHK|macro|CHK
DECL|OUTPUT_LEN|macro|OUTPUT_LEN
DECL|entropy_nopr|variable|entropy_nopr
DECL|entropy_pr|variable|entropy_pr
DECL|hmac_drbg_self_test_entropy|function|static int hmac_drbg_self_test_entropy( void *data, unsigned char *buf, size_t len )
DECL|mbedtls_hmac_drbg_free|function|void mbedtls_hmac_drbg_free( mbedtls_hmac_drbg_context *ctx )
DECL|mbedtls_hmac_drbg_init|function|void mbedtls_hmac_drbg_init( mbedtls_hmac_drbg_context *ctx )
DECL|mbedtls_hmac_drbg_random_with_add|function|int mbedtls_hmac_drbg_random_with_add( void *p_rng, unsigned char *output, size_t out_len, const unsigned char *additional, size_t add_len )
DECL|mbedtls_hmac_drbg_random|function|int mbedtls_hmac_drbg_random( void *p_rng, unsigned char *output, size_t out_len )
DECL|mbedtls_hmac_drbg_reseed|function|int mbedtls_hmac_drbg_reseed( mbedtls_hmac_drbg_context *ctx, const unsigned char *additional, size_t len )
DECL|mbedtls_hmac_drbg_seed_buf|function|int mbedtls_hmac_drbg_seed_buf( mbedtls_hmac_drbg_context *ctx, const mbedtls_md_info_t * md_info, const unsigned char *data, size_t data_len )
DECL|mbedtls_hmac_drbg_seed|function|int mbedtls_hmac_drbg_seed( mbedtls_hmac_drbg_context *ctx, const mbedtls_md_info_t * md_info, int (*f_entropy)(void *, unsigned char *, size_t), void *p_entropy, const unsigned char *custom,
DECL|mbedtls_hmac_drbg_self_test|function|int mbedtls_hmac_drbg_self_test( int verbose )
DECL|mbedtls_hmac_drbg_self_test|function|int mbedtls_hmac_drbg_self_test( int verbose )
DECL|mbedtls_hmac_drbg_set_entropy_len|function|void mbedtls_hmac_drbg_set_entropy_len( mbedtls_hmac_drbg_context *ctx, size_t len )
DECL|mbedtls_hmac_drbg_set_prediction_resistance|function|void mbedtls_hmac_drbg_set_prediction_resistance( mbedtls_hmac_drbg_context *ctx, int resistance )
DECL|mbedtls_hmac_drbg_set_reseed_interval|function|void mbedtls_hmac_drbg_set_reseed_interval( mbedtls_hmac_drbg_context *ctx, int interval )
DECL|mbedtls_hmac_drbg_update_seed_file|function|int mbedtls_hmac_drbg_update_seed_file( mbedtls_hmac_drbg_context *ctx, const char *path )
DECL|mbedtls_hmac_drbg_update|function|void mbedtls_hmac_drbg_update( mbedtls_hmac_drbg_context *ctx, const unsigned char *additional, size_t add_len )
DECL|mbedtls_hmac_drbg_write_seed_file|function|int mbedtls_hmac_drbg_write_seed_file( mbedtls_hmac_drbg_context *ctx, const char *path )
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|result_nopr|variable|result_nopr
DECL|result_pr|variable|result_pr
DECL|test_offset|variable|test_offset
