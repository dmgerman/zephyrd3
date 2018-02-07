DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_SHA256_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_SHA256_HW_ACCEL_FAILED
DECL|MBEDTLS_SHA256_H|macro|MBEDTLS_SHA256_H
DECL|buffer|member|unsigned char buffer[64]; /*!< The data block being processed. */
DECL|inline|macro|inline
DECL|is224|member|int is224; /*!< Determines which function to use.
DECL|mbedtls_sha256_context|typedef|mbedtls_sha256_context;
DECL|mbedtls_sha256_finish|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha256_finish( mbedtls_sha256_context *ctx, unsigned char output[32] )
DECL|mbedtls_sha256_process|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha256_process( mbedtls_sha256_context *ctx, const unsigned char data[64] )
DECL|mbedtls_sha256_starts|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha256_starts( mbedtls_sha256_context *ctx, int is224 )
DECL|mbedtls_sha256_update|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha256_update( mbedtls_sha256_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_sha256|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha256( const unsigned char *input, size_t ilen, unsigned char output[32], int is224 )
DECL|state|member|uint32_t state[8]; /*!< The intermediate digest state. */
DECL|total|member|uint32_t total[2]; /*!< The number of Bytes processed. */
