DECL|MBEDTLS_ERR_HMAC_DRBG_ENTROPY_SOURCE_FAILED|macro|MBEDTLS_ERR_HMAC_DRBG_ENTROPY_SOURCE_FAILED
DECL|MBEDTLS_ERR_HMAC_DRBG_FILE_IO_ERROR|macro|MBEDTLS_ERR_HMAC_DRBG_FILE_IO_ERROR
DECL|MBEDTLS_ERR_HMAC_DRBG_INPUT_TOO_BIG|macro|MBEDTLS_ERR_HMAC_DRBG_INPUT_TOO_BIG
DECL|MBEDTLS_ERR_HMAC_DRBG_REQUEST_TOO_BIG|macro|MBEDTLS_ERR_HMAC_DRBG_REQUEST_TOO_BIG
DECL|MBEDTLS_HMAC_DRBG_H|macro|MBEDTLS_HMAC_DRBG_H
DECL|MBEDTLS_HMAC_DRBG_MAX_INPUT|macro|MBEDTLS_HMAC_DRBG_MAX_INPUT
DECL|MBEDTLS_HMAC_DRBG_MAX_REQUEST|macro|MBEDTLS_HMAC_DRBG_MAX_REQUEST
DECL|MBEDTLS_HMAC_DRBG_MAX_SEED_INPUT|macro|MBEDTLS_HMAC_DRBG_MAX_SEED_INPUT
DECL|MBEDTLS_HMAC_DRBG_PR_OFF|macro|MBEDTLS_HMAC_DRBG_PR_OFF
DECL|MBEDTLS_HMAC_DRBG_PR_ON|macro|MBEDTLS_HMAC_DRBG_PR_ON
DECL|MBEDTLS_HMAC_DRBG_RESEED_INTERVAL|macro|MBEDTLS_HMAC_DRBG_RESEED_INTERVAL
DECL|V|member|unsigned char V[MBEDTLS_MD_MAX_SIZE]; /*!< V in the spec */
DECL|entropy_len|member|size_t entropy_len; /*!< entropy bytes grabbed on each (re)seed */
DECL|f_entropy|member|int (*f_entropy)(void *, unsigned char *, size_t); /*!< entropy function */
DECL|mbedtls_hmac_drbg_context|typedef|} mbedtls_hmac_drbg_context;
DECL|md_ctx|member|mbedtls_md_context_t md_ctx; /*!< HMAC context (inc. K) */
DECL|mutex|member|mbedtls_threading_mutex_t mutex;
DECL|p_entropy|member|void *p_entropy; /*!< context for the entropy function */
DECL|prediction_resistance|member|int prediction_resistance; /*!< enable prediction resistance (Automatic
DECL|reseed_counter|member|int reseed_counter; /*!< reseed counter */
DECL|reseed_interval|member|int reseed_interval; /*!< reseed interval */
