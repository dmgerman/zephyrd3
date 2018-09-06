DECL|MBEDTLS_ERR_POLY1305_BAD_INPUT_DATA|macro|MBEDTLS_ERR_POLY1305_BAD_INPUT_DATA
DECL|MBEDTLS_ERR_POLY1305_FEATURE_UNAVAILABLE|macro|MBEDTLS_ERR_POLY1305_FEATURE_UNAVAILABLE
DECL|MBEDTLS_ERR_POLY1305_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_POLY1305_HW_ACCEL_FAILED
DECL|MBEDTLS_POLY1305_H|macro|MBEDTLS_POLY1305_H
DECL|acc|member|uint32_t acc[5]; /** The accumulator number. */
DECL|mbedtls_poly1305_context|typedef|mbedtls_poly1305_context;
DECL|queue_len|member|size_t queue_len; /** The number of bytes stored in 'queue'. */
DECL|queue|member|uint8_t queue[16]; /** The current partial block of data. */
DECL|r|member|uint32_t r[4]; /** The value for 'r' (low 128 bits of the key). */
DECL|s|member|uint32_t s[4]; /** The value for 's' (high 128 bits of the key). */
