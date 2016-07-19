DECL|MBEDTLS_SSL_TICKET_H|macro|MBEDTLS_SSL_TICKET_H
DECL|active|member|unsigned char active; /*!< index of the currently active key */
DECL|ctx|member|mbedtls_cipher_context_t ctx; /*!< context for auth enc/decryption */
DECL|f_rng|member|int (*f_rng)(void *, unsigned char *, size_t);
DECL|generation_time|member|uint32_t generation_time; /*!< key generation timestamp (seconds) */
DECL|keys|member|mbedtls_ssl_ticket_key keys[2]; /*!< ticket protection keys */
DECL|mbedtls_ssl_ticket_context|typedef|mbedtls_ssl_ticket_context;
DECL|mbedtls_ssl_ticket_key|typedef|mbedtls_ssl_ticket_key;
DECL|mbedtls_ssl_ticket_parse|variable|mbedtls_ssl_ticket_parse
DECL|mbedtls_ssl_ticket_write|variable|mbedtls_ssl_ticket_write
DECL|mutex|member|mbedtls_threading_mutex_t mutex;
DECL|name|member|unsigned char name[4]; /*!< random key identifier */
DECL|p_rng|member|void *p_rng; /*!< context for the RNG function */
DECL|ticket_lifetime|member|uint32_t ticket_lifetime; /*!< lifetime of tickets in seconds */
