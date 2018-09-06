DECL|MAX_KEY_BYTES|macro|MAX_KEY_BYTES
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_ssl_ticket_free|function|void mbedtls_ssl_ticket_free( mbedtls_ssl_ticket_context *ctx )
DECL|mbedtls_ssl_ticket_init|function|void mbedtls_ssl_ticket_init( mbedtls_ssl_ticket_context *ctx )
DECL|mbedtls_ssl_ticket_parse|function|int mbedtls_ssl_ticket_parse( void *p_ticket, mbedtls_ssl_session *session, unsigned char *buf, size_t len )
DECL|mbedtls_ssl_ticket_setup|function|int mbedtls_ssl_ticket_setup( mbedtls_ssl_ticket_context *ctx, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng, mbedtls_cipher_type_t cipher, uint32_t lifetime )
DECL|mbedtls_ssl_ticket_write|function|int mbedtls_ssl_ticket_write( void *p_ticket, const mbedtls_ssl_session *session, unsigned char *start, const unsigned char *end, size_t *tlen,
DECL|ssl_load_session|function|static int ssl_load_session( mbedtls_ssl_session *session, const unsigned char *buf, size_t len )
DECL|ssl_save_session|function|static int ssl_save_session( const mbedtls_ssl_session *session, unsigned char *buf, size_t buf_len, size_t *olen )
DECL|ssl_ticket_gen_key|function|static int ssl_ticket_gen_key( mbedtls_ssl_ticket_context *ctx, unsigned char index )
DECL|ssl_ticket_select_key|function|static mbedtls_ssl_ticket_key *ssl_ticket_select_key( mbedtls_ssl_ticket_context *ctx, const unsigned char name[4] )
DECL|ssl_ticket_update_keys|function|static int ssl_ticket_update_keys( mbedtls_ssl_ticket_context *ctx )
