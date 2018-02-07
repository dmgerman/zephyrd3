DECL|HH|member|uint64_t HH[16]; /*!< Precalculated HTable high. */
DECL|HL|member|uint64_t HL[16]; /*!< Precalculated HTable low. */
DECL|MBEDTLS_ERR_GCM_AUTH_FAILED|macro|MBEDTLS_ERR_GCM_AUTH_FAILED
DECL|MBEDTLS_ERR_GCM_BAD_INPUT|macro|MBEDTLS_ERR_GCM_BAD_INPUT
DECL|MBEDTLS_ERR_GCM_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_GCM_HW_ACCEL_FAILED
DECL|MBEDTLS_GCM_DECRYPT|macro|MBEDTLS_GCM_DECRYPT
DECL|MBEDTLS_GCM_ENCRYPT|macro|MBEDTLS_GCM_ENCRYPT
DECL|MBEDTLS_GCM_H|macro|MBEDTLS_GCM_H
DECL|add_len|member|uint64_t add_len; /*!< The total length of the additional data. */
DECL|base_ectr|member|unsigned char base_ectr[16]; /*!< The first ECTR for tag. */
DECL|buf|member|unsigned char buf[16]; /*!< The buf working value. */
DECL|cipher_ctx|member|mbedtls_cipher_context_t cipher_ctx; /*!< The cipher context used. */
DECL|len|member|uint64_t len; /*!< The total length of the encrypted data. */
DECL|mbedtls_gcm_context|typedef|mbedtls_gcm_context;
DECL|mode|member|int mode; /*!< The operation to perform:
DECL|y|member|unsigned char y[16]; /*!< The Y working value. */
