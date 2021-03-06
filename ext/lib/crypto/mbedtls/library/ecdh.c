DECL|mbedtls_ecdh_calc_secret|function|int mbedtls_ecdh_calc_secret( mbedtls_ecdh_context *ctx, size_t *olen, unsigned char *buf, size_t blen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecdh_compute_shared|function|int mbedtls_ecdh_compute_shared( mbedtls_ecp_group *grp, mbedtls_mpi *z, const mbedtls_ecp_point *Q, const mbedtls_mpi *d, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecdh_free|function|void mbedtls_ecdh_free( mbedtls_ecdh_context *ctx )
DECL|mbedtls_ecdh_gen_public|function|int mbedtls_ecdh_gen_public( mbedtls_ecp_group *grp, mbedtls_mpi *d, mbedtls_ecp_point *Q, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecdh_get_params|function|int mbedtls_ecdh_get_params( mbedtls_ecdh_context *ctx, const mbedtls_ecp_keypair *key, mbedtls_ecdh_side side )
DECL|mbedtls_ecdh_init|function|void mbedtls_ecdh_init( mbedtls_ecdh_context *ctx )
DECL|mbedtls_ecdh_make_params|function|int mbedtls_ecdh_make_params( mbedtls_ecdh_context *ctx, size_t *olen, unsigned char *buf, size_t blen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecdh_make_public|function|int mbedtls_ecdh_make_public( mbedtls_ecdh_context *ctx, size_t *olen, unsigned char *buf, size_t blen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecdh_read_params|function|int mbedtls_ecdh_read_params( mbedtls_ecdh_context *ctx, const unsigned char **buf, const unsigned char *end )
DECL|mbedtls_ecdh_read_public|function|int mbedtls_ecdh_read_public( mbedtls_ecdh_context *ctx, const unsigned char *buf, size_t blen )
