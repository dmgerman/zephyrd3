DECL|mbedtls_pk_can_do|function|int mbedtls_pk_can_do( const mbedtls_pk_context *ctx, mbedtls_pk_type_t type )
DECL|mbedtls_pk_check_pair|function|int mbedtls_pk_check_pair( const mbedtls_pk_context *pub, const mbedtls_pk_context *prv )
DECL|mbedtls_pk_debug|function|int mbedtls_pk_debug( const mbedtls_pk_context *ctx, mbedtls_pk_debug_item *items )
DECL|mbedtls_pk_decrypt|function|int mbedtls_pk_decrypt( mbedtls_pk_context *ctx, const unsigned char *input, size_t ilen, unsigned char *output, size_t *olen, size_t osize, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_pk_encrypt|function|int mbedtls_pk_encrypt( mbedtls_pk_context *ctx, const unsigned char *input, size_t ilen, unsigned char *output, size_t *olen, size_t osize, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_pk_free|function|void mbedtls_pk_free( mbedtls_pk_context *ctx )
DECL|mbedtls_pk_get_bitlen|function|size_t mbedtls_pk_get_bitlen( const mbedtls_pk_context *ctx )
DECL|mbedtls_pk_get_name|function|const char *mbedtls_pk_get_name( const mbedtls_pk_context *ctx )
DECL|mbedtls_pk_get_type|function|mbedtls_pk_type_t mbedtls_pk_get_type( const mbedtls_pk_context *ctx )
DECL|mbedtls_pk_info_from_type|function|const mbedtls_pk_info_t * mbedtls_pk_info_from_type( mbedtls_pk_type_t pk_type )
DECL|mbedtls_pk_init|function|void mbedtls_pk_init( mbedtls_pk_context *ctx )
DECL|mbedtls_pk_setup_rsa_alt|function|int mbedtls_pk_setup_rsa_alt( mbedtls_pk_context *ctx, void * key, mbedtls_pk_rsa_alt_decrypt_func decrypt_func, mbedtls_pk_rsa_alt_sign_func sign_func, mbedtls_pk_rsa_alt_key_len_func key_len_func )
DECL|mbedtls_pk_setup|function|int mbedtls_pk_setup( mbedtls_pk_context *ctx, const mbedtls_pk_info_t *info )
DECL|mbedtls_pk_sign|function|int mbedtls_pk_sign( mbedtls_pk_context *ctx, mbedtls_md_type_t md_alg, const unsigned char *hash, size_t hash_len, unsigned char *sig, size_t *sig_len, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_pk_verify_ext|function|int mbedtls_pk_verify_ext( mbedtls_pk_type_t type, const void *options, mbedtls_pk_context *ctx, mbedtls_md_type_t md_alg, const unsigned char *hash, size_t hash_len, const unsigned char *sig, size_t sig_len )
DECL|mbedtls_pk_verify|function|int mbedtls_pk_verify( mbedtls_pk_context *ctx, mbedtls_md_type_t md_alg, const unsigned char *hash, size_t hash_len, const unsigned char *sig, size_t sig_len )
DECL|pk_hashlen_helper|function|static inline int pk_hashlen_helper( mbedtls_md_type_t md_alg, size_t *hash_len )
