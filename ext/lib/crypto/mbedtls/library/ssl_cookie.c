DECL|COOKIE_HMAC_LEN|macro|COOKIE_HMAC_LEN
DECL|COOKIE_HMAC_LEN|macro|COOKIE_HMAC_LEN
DECL|COOKIE_HMAC_LEN|macro|COOKIE_HMAC_LEN
DECL|COOKIE_LEN|macro|COOKIE_LEN
DECL|COOKIE_MD_OUTLEN|macro|COOKIE_MD_OUTLEN
DECL|COOKIE_MD_OUTLEN|macro|COOKIE_MD_OUTLEN
DECL|COOKIE_MD_OUTLEN|macro|COOKIE_MD_OUTLEN
DECL|COOKIE_MD|macro|COOKIE_MD
DECL|COOKIE_MD|macro|COOKIE_MD
DECL|COOKIE_MD|macro|COOKIE_MD
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_ssl_cookie_check|function|int mbedtls_ssl_cookie_check( void *p_ctx, const unsigned char *cookie, size_t cookie_len, const unsigned char *cli_id, size_t cli_id_len )
DECL|mbedtls_ssl_cookie_free|function|void mbedtls_ssl_cookie_free( mbedtls_ssl_cookie_ctx *ctx )
DECL|mbedtls_ssl_cookie_init|function|void mbedtls_ssl_cookie_init( mbedtls_ssl_cookie_ctx *ctx )
DECL|mbedtls_ssl_cookie_set_timeout|function|void mbedtls_ssl_cookie_set_timeout( mbedtls_ssl_cookie_ctx *ctx, unsigned long delay )
DECL|mbedtls_ssl_cookie_setup|function|int mbedtls_ssl_cookie_setup( mbedtls_ssl_cookie_ctx *ctx, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_ssl_cookie_write|function|int mbedtls_ssl_cookie_write( void *p_ctx, unsigned char **p, unsigned char *end, const unsigned char *cli_id, size_t cli_id_len )
DECL|ssl_cookie_hmac|function|static int ssl_cookie_hmac( mbedtls_md_context_t *hmac_ctx, const unsigned char time[4], unsigned char **p, unsigned char *end, const unsigned char *cli_id, size_t cli_id_len )
