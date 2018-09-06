DECL|PEM_BEGIN_CSR|macro|PEM_BEGIN_CSR
DECL|PEM_END_CSR|macro|PEM_END_CSR
DECL|mbedtls_x509write_csr_der|function|int mbedtls_x509write_csr_der( mbedtls_x509write_csr *ctx, unsigned char *buf, size_t size, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_x509write_csr_free|function|void mbedtls_x509write_csr_free( mbedtls_x509write_csr *ctx )
DECL|mbedtls_x509write_csr_init|function|void mbedtls_x509write_csr_init( mbedtls_x509write_csr *ctx )
DECL|mbedtls_x509write_csr_pem|function|int mbedtls_x509write_csr_pem( mbedtls_x509write_csr *ctx, unsigned char *buf, size_t size, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_x509write_csr_set_extension|function|int mbedtls_x509write_csr_set_extension( mbedtls_x509write_csr *ctx, const char *oid, size_t oid_len, const unsigned char *val, size_t val_len )
DECL|mbedtls_x509write_csr_set_key_usage|function|int mbedtls_x509write_csr_set_key_usage( mbedtls_x509write_csr *ctx, unsigned char key_usage )
DECL|mbedtls_x509write_csr_set_key|function|void mbedtls_x509write_csr_set_key( mbedtls_x509write_csr *ctx, mbedtls_pk_context *key )
DECL|mbedtls_x509write_csr_set_md_alg|function|void mbedtls_x509write_csr_set_md_alg( mbedtls_x509write_csr *ctx, mbedtls_md_type_t md_alg )
DECL|mbedtls_x509write_csr_set_ns_cert_type|function|int mbedtls_x509write_csr_set_ns_cert_type( mbedtls_x509write_csr *ctx, unsigned char ns_cert_type )
DECL|mbedtls_x509write_csr_set_subject_name|function|int mbedtls_x509write_csr_set_subject_name( mbedtls_x509write_csr *ctx, const char *subject_name )
