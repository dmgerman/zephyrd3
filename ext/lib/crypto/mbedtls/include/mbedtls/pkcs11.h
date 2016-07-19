DECL|MBEDTLS_PKCS11_H|macro|MBEDTLS_PKCS11_H
DECL|inline|macro|inline
DECL|len|member|int len;
DECL|mbedtls_pkcs11_context|typedef|} mbedtls_pkcs11_context;
DECL|mbedtls_ssl_pkcs11_decrypt|function|static inline int mbedtls_ssl_pkcs11_decrypt( void *ctx, int mode, size_t *olen, const unsigned char *input, unsigned char *output, size_t output_max_len )
DECL|mbedtls_ssl_pkcs11_key_len|function|static inline size_t mbedtls_ssl_pkcs11_key_len( void *ctx )
DECL|mbedtls_ssl_pkcs11_sign|function|static inline int mbedtls_ssl_pkcs11_sign( void *ctx, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng, int mode, mbedtls_md_type_t md_alg, unsigned int hashlen, const unsigned char *hash, unsigned char *sig )
DECL|pkcs11h_cert|member|pkcs11h_certificate_t pkcs11h_cert;
