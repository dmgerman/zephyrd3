DECL|HH|member|uint64_t HH[16]; /*!< Precalculated HTable */
DECL|HL|member|uint64_t HL[16]; /*!< Precalculated HTable */
DECL|MBEDTLS_ERR_GCM_AUTH_FAILED|macro|MBEDTLS_ERR_GCM_AUTH_FAILED
DECL|MBEDTLS_ERR_GCM_BAD_INPUT|macro|MBEDTLS_ERR_GCM_BAD_INPUT
DECL|MBEDTLS_GCM_DECRYPT|macro|MBEDTLS_GCM_DECRYPT
DECL|MBEDTLS_GCM_ENCRYPT|macro|MBEDTLS_GCM_ENCRYPT
DECL|MBEDTLS_GCM_H|macro|MBEDTLS_GCM_H
DECL|add_len|member|uint64_t add_len; /*!< Total add length */
DECL|base_ectr|member|unsigned char base_ectr[16];/*!< First ECTR for tag */
DECL|buf|member|unsigned char buf[16]; /*!< buf working value */
DECL|cipher_ctx|member|mbedtls_cipher_context_t cipher_ctx;/*!< cipher context used */
DECL|len|member|uint64_t len; /*!< Total data length */
DECL|mbedtls_gcm_context|typedef|mbedtls_gcm_context;
DECL|mode|member|int mode; /*!< Encrypt or Decrypt */
DECL|y|member|unsigned char y[16]; /*!< Y working value */
