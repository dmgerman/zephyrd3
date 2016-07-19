DECL|MBEDTLS_SSL_CACHE_DEFAULT_MAX_ENTRIES|macro|MBEDTLS_SSL_CACHE_DEFAULT_MAX_ENTRIES
DECL|MBEDTLS_SSL_CACHE_DEFAULT_TIMEOUT|macro|MBEDTLS_SSL_CACHE_DEFAULT_TIMEOUT
DECL|MBEDTLS_SSL_CACHE_H|macro|MBEDTLS_SSL_CACHE_H
DECL|chain|member|mbedtls_ssl_cache_entry *chain; /*!< start of the chain */
DECL|max_entries|member|int max_entries; /*!< maximum entries */
DECL|mbedtls_ssl_cache_context|struct|struct mbedtls_ssl_cache_context
DECL|mbedtls_ssl_cache_context|typedef|typedef struct mbedtls_ssl_cache_context mbedtls_ssl_cache_context;
DECL|mbedtls_ssl_cache_entry|struct|struct mbedtls_ssl_cache_entry
DECL|mbedtls_ssl_cache_entry|typedef|typedef struct mbedtls_ssl_cache_entry mbedtls_ssl_cache_entry;
DECL|mutex|member|mbedtls_threading_mutex_t mutex; /*!< mutex */
DECL|next|member|mbedtls_ssl_cache_entry *next; /*!< chain pointer */
DECL|peer_cert|member|mbedtls_x509_buf peer_cert; /*!< entry peer_cert */
DECL|session|member|mbedtls_ssl_session session; /*!< entry session */
DECL|timeout|member|int timeout; /*!< cache entry timeout */
DECL|timestamp|member|mbedtls_time_t timestamp; /*!< entry timestamp */
