DECL|MBEDTLS_CHACHA20_H|macro|MBEDTLS_CHACHA20_H
DECL|MBEDTLS_ERR_CHACHA20_BAD_INPUT_DATA|macro|MBEDTLS_ERR_CHACHA20_BAD_INPUT_DATA
DECL|MBEDTLS_ERR_CHACHA20_FEATURE_UNAVAILABLE|macro|MBEDTLS_ERR_CHACHA20_FEATURE_UNAVAILABLE
DECL|MBEDTLS_ERR_CHACHA20_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_CHACHA20_HW_ACCEL_FAILED
DECL|keystream8|member|uint8_t keystream8[64]; /*! Leftover keystream bytes. */
DECL|keystream_bytes_used|member|size_t keystream_bytes_used; /*! Number of keystream bytes already used. */
DECL|mbedtls_chacha20_context|typedef|mbedtls_chacha20_context;
DECL|state|member|uint32_t state[16]; /*! The state (before round operations). */
