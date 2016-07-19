DECL|PEM_BEGIN_CRT|macro|PEM_BEGIN_CRT
DECL|PEM_END_CRT|macro|PEM_END_CRT
DECL|mbedtls_x509write_crt_der|function|int mbedtls_x509write_crt_der( mbedtls_x509write_cert *ctx, unsigned char *buf, size_t size, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_x509write_crt_free|function|void mbedtls_x509write_crt_free( mbedtls_x509write_cert *ctx )
DECL|mbedtls_x509write_crt_init|function|void mbedtls_x509write_crt_init( mbedtls_x509write_cert *ctx )
DECL|mbedtls_x509write_crt_pem|function|int mbedtls_x509write_crt_pem( mbedtls_x509write_cert *crt, unsigned char *buf, size_t size, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_x509write_crt_set_authority_key_identifier|function|int mbedtls_x509write_crt_set_authority_key_identifier( mbedtls_x509write_cert *ctx )
DECL|mbedtls_x509write_crt_set_basic_constraints|function|int mbedtls_x509write_crt_set_basic_constraints( mbedtls_x509write_cert *ctx, int is_ca, int max_pathlen )
DECL|mbedtls_x509write_crt_set_extension|function|int mbedtls_x509write_crt_set_extension( mbedtls_x509write_cert *ctx, const char *oid, size_t oid_len, int critical, const unsigned char *val, size_t val_len )
DECL|mbedtls_x509write_crt_set_issuer_key|function|void mbedtls_x509write_crt_set_issuer_key( mbedtls_x509write_cert *ctx, mbedtls_pk_context *key )
DECL|mbedtls_x509write_crt_set_issuer_name|function|int mbedtls_x509write_crt_set_issuer_name( mbedtls_x509write_cert *ctx, const char *issuer_name )
DECL|mbedtls_x509write_crt_set_key_usage|function|int mbedtls_x509write_crt_set_key_usage( mbedtls_x509write_cert *ctx, unsigned int key_usage )
DECL|mbedtls_x509write_crt_set_md_alg|function|void mbedtls_x509write_crt_set_md_alg( mbedtls_x509write_cert *ctx, mbedtls_md_type_t md_alg )
DECL|mbedtls_x509write_crt_set_ns_cert_type|function|int mbedtls_x509write_crt_set_ns_cert_type( mbedtls_x509write_cert *ctx, unsigned char ns_cert_type )
DECL|mbedtls_x509write_crt_set_serial|function|int mbedtls_x509write_crt_set_serial( mbedtls_x509write_cert *ctx, const mbedtls_mpi *serial )
DECL|mbedtls_x509write_crt_set_subject_key_identifier|function|int mbedtls_x509write_crt_set_subject_key_identifier( mbedtls_x509write_cert *ctx )
DECL|mbedtls_x509write_crt_set_subject_key|function|void mbedtls_x509write_crt_set_subject_key( mbedtls_x509write_cert *ctx, mbedtls_pk_context *key )
DECL|mbedtls_x509write_crt_set_subject_name|function|int mbedtls_x509write_crt_set_subject_name( mbedtls_x509write_cert *ctx, const char *subject_name )
DECL|mbedtls_x509write_crt_set_validity|function|int mbedtls_x509write_crt_set_validity( mbedtls_x509write_cert *ctx, const char *not_before, const char *not_after )
DECL|mbedtls_x509write_crt_set_version|function|void mbedtls_x509write_crt_set_version( mbedtls_x509write_cert *ctx, int version )
DECL|mbedtls_zeroize|function|static void mbedtls_zeroize( void *v, size_t n ) {
DECL|x509_write_time|function|static int x509_write_time( unsigned char **p, unsigned char *start, const char *time, size_t size )
