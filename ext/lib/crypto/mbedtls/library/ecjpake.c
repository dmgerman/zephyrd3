DECL|ECJPAKE_HASH_BUF_LEN|macro|ECJPAKE_HASH_BUF_LEN
DECL|ID_MINE|macro|ID_MINE
DECL|ID_MINE|macro|ID_MINE
DECL|ID_PEER|macro|ID_PEER
DECL|ID_PEER|macro|ID_PEER
DECL|TEST_ASSERT|macro|TEST_ASSERT
DECL|TEST_ASSERT|macro|TEST_ASSERT
DECL|ecjpake_ecp_add3|function|static int ecjpake_ecp_add3( mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_ecp_point *A, const mbedtls_ecp_point *B, const mbedtls_ecp_point *C )
DECL|ecjpake_hash|function|static int ecjpake_hash( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, const mbedtls_ecp_point *V,
DECL|ecjpake_id|variable|ecjpake_id
DECL|ecjpake_kkp_read|function|static int ecjpake_kkp_read( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, mbedtls_ecp_point *X,
DECL|ecjpake_kkp_write|function|static int ecjpake_kkp_write( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, mbedtls_mpi *x,
DECL|ecjpake_kkpp_read|function|static int ecjpake_kkpp_read( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, mbedtls_ecp_point *Xa,
DECL|ecjpake_kkpp_write|function|static int ecjpake_kkpp_write( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, mbedtls_mpi *xm1,
DECL|ecjpake_lgc|function|static int ecjpake_lgc( void *p, unsigned char *out, size_t len )
DECL|ecjpake_mul_secret|function|static int ecjpake_mul_secret( mbedtls_mpi *R, int sign, const mbedtls_mpi *X, const mbedtls_mpi *S, const mbedtls_mpi *N, int (*f_rng)(void *, unsigned char *, size_t),
DECL|ecjpake_test_cli_one|variable|ecjpake_test_cli_one
DECL|ecjpake_test_cli_two|variable|ecjpake_test_cli_two
DECL|ecjpake_test_load|function|static int ecjpake_test_load( mbedtls_ecjpake_context *ctx, const unsigned char *xm1, size_t len1, const unsigned char *xm2, size_t len2 )
DECL|ecjpake_test_password|variable|ecjpake_test_password
DECL|ecjpake_test_pms|variable|ecjpake_test_pms
DECL|ecjpake_test_srv_one|variable|ecjpake_test_srv_one
DECL|ecjpake_test_srv_two|variable|ecjpake_test_srv_two
DECL|ecjpake_test_x1|variable|ecjpake_test_x1
DECL|ecjpake_test_x2|variable|ecjpake_test_x2
DECL|ecjpake_test_x3|variable|ecjpake_test_x3
DECL|ecjpake_test_x4|variable|ecjpake_test_x4
DECL|ecjpake_write_len_point|function|static int ecjpake_write_len_point( unsigned char **p, const unsigned char *end, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *P )
DECL|ecjpake_zkp_read|function|static int ecjpake_zkp_read( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, const mbedtls_ecp_point *X,
DECL|ecjpake_zkp_write|function|static int ecjpake_zkp_write( const mbedtls_md_info_t *md_info, const mbedtls_ecp_group *grp, const int pf, const mbedtls_ecp_point *G, const mbedtls_mpi *x,
DECL|mbedtls_ecjpake_check|function|int mbedtls_ecjpake_check( const mbedtls_ecjpake_context *ctx )
DECL|mbedtls_ecjpake_derive_secret|function|int mbedtls_ecjpake_derive_secret( mbedtls_ecjpake_context *ctx, unsigned char *buf, size_t len, size_t *olen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecjpake_free|function|void mbedtls_ecjpake_free( mbedtls_ecjpake_context *ctx )
DECL|mbedtls_ecjpake_init|function|void mbedtls_ecjpake_init( mbedtls_ecjpake_context *ctx )
DECL|mbedtls_ecjpake_read_round_one|function|int mbedtls_ecjpake_read_round_one( mbedtls_ecjpake_context *ctx, const unsigned char *buf, size_t len )
DECL|mbedtls_ecjpake_read_round_two|function|int mbedtls_ecjpake_read_round_two( mbedtls_ecjpake_context *ctx, const unsigned char *buf, size_t len )
DECL|mbedtls_ecjpake_self_test|function|int mbedtls_ecjpake_self_test( int verbose )
DECL|mbedtls_ecjpake_self_test|function|int mbedtls_ecjpake_self_test( int verbose )
DECL|mbedtls_ecjpake_setup|function|int mbedtls_ecjpake_setup( mbedtls_ecjpake_context *ctx, mbedtls_ecjpake_role role, mbedtls_md_type_t hash, mbedtls_ecp_group_id curve, const unsigned char *secret,
DECL|mbedtls_ecjpake_write_round_one|function|int mbedtls_ecjpake_write_round_one( mbedtls_ecjpake_context *ctx, unsigned char *buf, size_t len, size_t *olen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecjpake_write_round_two|function|int mbedtls_ecjpake_write_round_two( mbedtls_ecjpake_context *ctx, unsigned char *buf, size_t len, size_t *olen, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_printf|macro|mbedtls_printf
