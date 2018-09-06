DECL|COMB_MAX_D|macro|COMB_MAX_D
DECL|COMB_MAX_PRE|macro|COMB_MAX_PRE
DECL|ECP_MONTGOMERY|macro|ECP_MONTGOMERY
DECL|ECP_NB_CURVES|macro|ECP_NB_CURVES
DECL|ECP_SHORTWEIERSTRASS|macro|ECP_SHORTWEIERSTRASS
DECL|ECP_TYPE_MONTGOMERY|enumerator|ECP_TYPE_MONTGOMERY, /* y^2 = x^3 + a x^2 + x */
DECL|ECP_TYPE_NONE|enumerator|ECP_TYPE_NONE = 0,
DECL|ECP_TYPE_SHORT_WEIERSTRASS|enumerator|ECP_TYPE_SHORT_WEIERSTRASS, /* y^2 = x^3 + a x + b */
DECL|INC_MUL_COUNT|macro|INC_MUL_COUNT
DECL|INC_MUL_COUNT|macro|INC_MUL_COUNT
DECL|MOD_ADD|macro|MOD_ADD
DECL|MOD_MUL|macro|MOD_MUL
DECL|MOD_SUB|macro|MOD_SUB
DECL|add_count|variable|add_count
DECL|dbl_count|variable|dbl_count
DECL|ecp_add_mixed|function|static int ecp_add_mixed( const mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_ecp_point *P, const mbedtls_ecp_point *Q )
DECL|ecp_check_pubkey_mx|function|static int ecp_check_pubkey_mx( const mbedtls_ecp_group *grp, const mbedtls_ecp_point *pt )
DECL|ecp_check_pubkey_sw|function|static int ecp_check_pubkey_sw( const mbedtls_ecp_group *grp, const mbedtls_ecp_point *pt )
DECL|ecp_comb_fixed|function|static void ecp_comb_fixed( unsigned char x[], size_t d, unsigned char w, const mbedtls_mpi *m )
DECL|ecp_curve_type|typedef|} ecp_curve_type;
DECL|ecp_double_add_mxz|function|static int ecp_double_add_mxz( const mbedtls_ecp_group *grp, mbedtls_ecp_point *R, mbedtls_ecp_point *S, const mbedtls_ecp_point *P, const mbedtls_ecp_point *Q, const mbedtls_mpi *d )
DECL|ecp_double_jac|function|static int ecp_double_jac( const mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_ecp_point *P )
DECL|ecp_get_type|function|static inline ecp_curve_type ecp_get_type( const mbedtls_ecp_group *grp )
DECL|ecp_modp|function|static int ecp_modp( mbedtls_mpi *N, const mbedtls_ecp_group *grp )
DECL|ecp_mul_comb_core|function|static int ecp_mul_comb_core( const mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_ecp_point T[], unsigned char t_len, const unsigned char x[], size_t d, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|ecp_mul_comb|function|static int ecp_mul_comb( mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_mpi *m, const mbedtls_ecp_point *P, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|ecp_mul_mxz|function|static int ecp_mul_mxz( mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_mpi *m, const mbedtls_ecp_point *P, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|ecp_normalize_jac_many|function|static int ecp_normalize_jac_many( const mbedtls_ecp_group *grp, mbedtls_ecp_point *T[], size_t t_len )
DECL|ecp_normalize_jac|function|static int ecp_normalize_jac( const mbedtls_ecp_group *grp, mbedtls_ecp_point *pt )
DECL|ecp_normalize_mxz|function|static int ecp_normalize_mxz( const mbedtls_ecp_group *grp, mbedtls_ecp_point *P )
DECL|ecp_precompute_comb|function|static int ecp_precompute_comb( const mbedtls_ecp_group *grp, mbedtls_ecp_point T[], const mbedtls_ecp_point *P, unsigned char w, size_t d )
DECL|ecp_randomize_jac|function|static int ecp_randomize_jac( const mbedtls_ecp_group *grp, mbedtls_ecp_point *pt, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|ecp_randomize_mxz|function|static int ecp_randomize_mxz( const mbedtls_ecp_group *grp, mbedtls_ecp_point *P, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|ecp_safe_invert_jac|function|static int ecp_safe_invert_jac( const mbedtls_ecp_group *grp, mbedtls_ecp_point *Q, unsigned char inv )
DECL|ecp_select_comb|function|static int ecp_select_comb( const mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_ecp_point T[], unsigned char t_len, unsigned char i )
DECL|ecp_supported_curves|variable|ecp_supported_curves
DECL|ecp_supported_grp_id|variable|ecp_supported_grp_id
DECL|inline|macro|inline
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_ecp_check_privkey|function|int mbedtls_ecp_check_privkey( const mbedtls_ecp_group *grp, const mbedtls_mpi *d )
DECL|mbedtls_ecp_check_pub_priv|function|int mbedtls_ecp_check_pub_priv( const mbedtls_ecp_keypair *pub, const mbedtls_ecp_keypair *prv )
DECL|mbedtls_ecp_check_pubkey|function|int mbedtls_ecp_check_pubkey( const mbedtls_ecp_group *grp, const mbedtls_ecp_point *pt )
DECL|mbedtls_ecp_copy|function|int mbedtls_ecp_copy( mbedtls_ecp_point *P, const mbedtls_ecp_point *Q )
DECL|mbedtls_ecp_curve_info_from_grp_id|function|const mbedtls_ecp_curve_info *mbedtls_ecp_curve_info_from_grp_id( mbedtls_ecp_group_id grp_id )
DECL|mbedtls_ecp_curve_info_from_name|function|const mbedtls_ecp_curve_info *mbedtls_ecp_curve_info_from_name( const char *name )
DECL|mbedtls_ecp_curve_info_from_tls_id|function|const mbedtls_ecp_curve_info *mbedtls_ecp_curve_info_from_tls_id( uint16_t tls_id )
DECL|mbedtls_ecp_curve_list|function|const mbedtls_ecp_curve_info *mbedtls_ecp_curve_list( void )
DECL|mbedtls_ecp_gen_keypair_base|function|int mbedtls_ecp_gen_keypair_base( mbedtls_ecp_group *grp, const mbedtls_ecp_point *G, mbedtls_mpi *d, mbedtls_ecp_point *Q, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecp_gen_keypair|function|int mbedtls_ecp_gen_keypair( mbedtls_ecp_group *grp, mbedtls_mpi *d, mbedtls_ecp_point *Q, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecp_gen_key|function|int mbedtls_ecp_gen_key( mbedtls_ecp_group_id grp_id, mbedtls_ecp_keypair *key, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecp_group_copy|function|int mbedtls_ecp_group_copy( mbedtls_ecp_group *dst, const mbedtls_ecp_group *src )
DECL|mbedtls_ecp_group_free|function|void mbedtls_ecp_group_free( mbedtls_ecp_group *grp )
DECL|mbedtls_ecp_group_init|function|void mbedtls_ecp_group_init( mbedtls_ecp_group *grp )
DECL|mbedtls_ecp_grp_id_list|function|const mbedtls_ecp_group_id *mbedtls_ecp_grp_id_list( void )
DECL|mbedtls_ecp_is_zero|function|int mbedtls_ecp_is_zero( mbedtls_ecp_point *pt )
DECL|mbedtls_ecp_keypair_free|function|void mbedtls_ecp_keypair_free( mbedtls_ecp_keypair *key )
DECL|mbedtls_ecp_keypair_init|function|void mbedtls_ecp_keypair_init( mbedtls_ecp_keypair *key )
DECL|mbedtls_ecp_mul_shortcuts|function|static int mbedtls_ecp_mul_shortcuts( mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_mpi *m, const mbedtls_ecp_point *P )
DECL|mbedtls_ecp_muladd|function|int mbedtls_ecp_muladd( mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_mpi *m, const mbedtls_ecp_point *P, const mbedtls_mpi *n, const mbedtls_ecp_point *Q )
DECL|mbedtls_ecp_mul|function|int mbedtls_ecp_mul( mbedtls_ecp_group *grp, mbedtls_ecp_point *R, const mbedtls_mpi *m, const mbedtls_ecp_point *P, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ecp_point_cmp|function|int mbedtls_ecp_point_cmp( const mbedtls_ecp_point *P, const mbedtls_ecp_point *Q )
DECL|mbedtls_ecp_point_free|function|void mbedtls_ecp_point_free( mbedtls_ecp_point *pt )
DECL|mbedtls_ecp_point_init|function|void mbedtls_ecp_point_init( mbedtls_ecp_point *pt )
DECL|mbedtls_ecp_point_read_binary|function|int mbedtls_ecp_point_read_binary( const mbedtls_ecp_group *grp, mbedtls_ecp_point *pt, const unsigned char *buf, size_t ilen )
DECL|mbedtls_ecp_point_read_string|function|int mbedtls_ecp_point_read_string( mbedtls_ecp_point *P, int radix, const char *x, const char *y )
DECL|mbedtls_ecp_point_write_binary|function|int mbedtls_ecp_point_write_binary( const mbedtls_ecp_group *grp, const mbedtls_ecp_point *P, int format, size_t *olen, unsigned char *buf, size_t buflen )
DECL|mbedtls_ecp_self_test|function|int mbedtls_ecp_self_test( int verbose )
DECL|mbedtls_ecp_set_zero|function|int mbedtls_ecp_set_zero( mbedtls_ecp_point *pt )
DECL|mbedtls_ecp_tls_read_group|function|int mbedtls_ecp_tls_read_group( mbedtls_ecp_group *grp, const unsigned char **buf, size_t len )
DECL|mbedtls_ecp_tls_read_point|function|int mbedtls_ecp_tls_read_point( const mbedtls_ecp_group *grp, mbedtls_ecp_point *pt, const unsigned char **buf, size_t buf_len )
DECL|mbedtls_ecp_tls_write_group|function|int mbedtls_ecp_tls_write_group( const mbedtls_ecp_group *grp, size_t *olen, unsigned char *buf, size_t blen )
DECL|mbedtls_ecp_tls_write_point|function|int mbedtls_ecp_tls_write_point( const mbedtls_ecp_group *grp, const mbedtls_ecp_point *pt, int format, size_t *olen, unsigned char *buf, size_t blen )
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|mul_count|variable|mul_count
