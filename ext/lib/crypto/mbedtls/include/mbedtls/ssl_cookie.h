DECL|MBEDTLS_SSL_COOKIE_H|macro|MBEDTLS_SSL_COOKIE_H
DECL|MBEDTLS_SSL_COOKIE_TIMEOUT|macro|MBEDTLS_SSL_COOKIE_TIMEOUT
DECL|hmac_ctx|member|mbedtls_md_context_t hmac_ctx; /*!< context for the HMAC portion */
DECL|mbedtls_ssl_cookie_check|variable|mbedtls_ssl_cookie_check
DECL|mbedtls_ssl_cookie_ctx|typedef|} mbedtls_ssl_cookie_ctx;
DECL|mbedtls_ssl_cookie_write|variable|mbedtls_ssl_cookie_write
DECL|mutex|member|mbedtls_threading_mutex_t mutex;
DECL|serial|member|unsigned long serial; /*!< serial number for expiration */
DECL|timeout|member|unsigned long timeout; /*!< timeout delay, in seconds if HAVE_TIME,
