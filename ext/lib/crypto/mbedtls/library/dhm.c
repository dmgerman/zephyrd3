DECL|DHM_MPI_EXPORT|macro|DHM_MPI_EXPORT
DECL|dhm_check_range|function|static int dhm_check_range( const mbedtls_mpi *param, const mbedtls_mpi *P )
DECL|dhm_read_bignum|function|static int dhm_read_bignum( mbedtls_mpi *X, unsigned char **p, const unsigned char *end )
DECL|dhm_update_blinding|function|static int dhm_update_blinding( mbedtls_dhm_context *ctx, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|load_file|function|static int load_file( const char *path, unsigned char **buf, size_t *n )
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_dhm_calc_secret|function|int mbedtls_dhm_calc_secret( mbedtls_dhm_context *ctx, unsigned char *output, size_t output_size, size_t *olen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_dhm_free|function|void mbedtls_dhm_free( mbedtls_dhm_context *ctx )
DECL|mbedtls_dhm_init|function|void mbedtls_dhm_init( mbedtls_dhm_context *ctx )
DECL|mbedtls_dhm_make_params|function|int mbedtls_dhm_make_params( mbedtls_dhm_context *ctx, int x_size, unsigned char *output, size_t *olen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_dhm_make_public|function|int mbedtls_dhm_make_public( mbedtls_dhm_context *ctx, int x_size, unsigned char *output, size_t olen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_dhm_parse_dhmfile|function|int mbedtls_dhm_parse_dhmfile( mbedtls_dhm_context *dhm, const char *path )
DECL|mbedtls_dhm_parse_dhm|function|int mbedtls_dhm_parse_dhm( mbedtls_dhm_context *dhm, const unsigned char *dhmin, size_t dhminlen )
DECL|mbedtls_dhm_read_params|function|int mbedtls_dhm_read_params( mbedtls_dhm_context *ctx, unsigned char **p, const unsigned char *end )
DECL|mbedtls_dhm_read_public|function|int mbedtls_dhm_read_public( mbedtls_dhm_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_dhm_self_test|function|int mbedtls_dhm_self_test( int verbose )
DECL|mbedtls_dhm_set_group|function|int mbedtls_dhm_set_group( mbedtls_dhm_context *ctx, const mbedtls_mpi *P, const mbedtls_mpi *G )
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|mbedtls_test_dhm_params_len|variable|mbedtls_test_dhm_params_len
DECL|mbedtls_test_dhm_params|variable|mbedtls_test_dhm_params
