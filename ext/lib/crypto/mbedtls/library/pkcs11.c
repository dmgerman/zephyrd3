DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_pkcs11_decrypt|function|int mbedtls_pkcs11_decrypt( mbedtls_pkcs11_context *ctx, int mode, size_t *olen, const unsigned char *input, unsigned char *output, size_t output_max_len )
DECL|mbedtls_pkcs11_init|function|void mbedtls_pkcs11_init( mbedtls_pkcs11_context *ctx )
DECL|mbedtls_pkcs11_priv_key_bind|function|int mbedtls_pkcs11_priv_key_bind( mbedtls_pkcs11_context *priv_key, pkcs11h_certificate_t pkcs11_cert )
DECL|mbedtls_pkcs11_priv_key_free|function|void mbedtls_pkcs11_priv_key_free( mbedtls_pkcs11_context *priv_key )
DECL|mbedtls_pkcs11_sign|function|int mbedtls_pkcs11_sign( mbedtls_pkcs11_context *ctx, int mode, mbedtls_md_type_t md_alg, unsigned int hashlen, const unsigned char *hash,
DECL|mbedtls_pkcs11_x509_cert_bind|function|int mbedtls_pkcs11_x509_cert_bind( mbedtls_x509_crt *cert, pkcs11h_certificate_t pkcs11_cert )
