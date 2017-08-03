DECL|MBEDTLS_AES_DECRYPT|macro|MBEDTLS_AES_DECRYPT
DECL|MBEDTLS_AES_ENCRYPT|macro|MBEDTLS_AES_ENCRYPT
DECL|MBEDTLS_AES_H|macro|MBEDTLS_AES_H
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_AES_INVALID_INPUT_LENGTH|macro|MBEDTLS_ERR_AES_INVALID_INPUT_LENGTH
DECL|MBEDTLS_ERR_AES_INVALID_KEY_LENGTH|macro|MBEDTLS_ERR_AES_INVALID_KEY_LENGTH
DECL|buf|member|uint32_t buf[68]; /*!< unaligned data */
DECL|inline|macro|inline
DECL|mbedtls_aes_context|typedef|mbedtls_aes_context;
DECL|mbedtls_aes_decrypt|function|MBEDTLS_DEPRECATED static inline void mbedtls_aes_decrypt( mbedtls_aes_context *ctx, const unsigned char input[16], unsigned char output[16] )
DECL|mbedtls_aes_encrypt|function|MBEDTLS_DEPRECATED static inline void mbedtls_aes_encrypt( mbedtls_aes_context *ctx, const unsigned char input[16], unsigned char output[16] )
DECL|nr|member|int nr; /*!< number of rounds */
DECL|rk|member|uint32_t *rk; /*!< AES round keys */
