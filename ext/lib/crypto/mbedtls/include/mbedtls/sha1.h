DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_SHA1_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_SHA1_HW_ACCEL_FAILED
DECL|MBEDTLS_SHA1_H|macro|MBEDTLS_SHA1_H
DECL|buffer|member|unsigned char buffer[64]; /*!< The data block being processed. */
DECL|inline|macro|inline
DECL|mbedtls_sha1_context|typedef|mbedtls_sha1_context;
DECL|mbedtls_sha1_finish|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha1_finish( mbedtls_sha1_context *ctx, unsigned char output[20] )
DECL|mbedtls_sha1_process|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha1_process( mbedtls_sha1_context *ctx, const unsigned char data[64] )
DECL|mbedtls_sha1_starts|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha1_starts( mbedtls_sha1_context *ctx )
DECL|mbedtls_sha1_update|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha1_update( mbedtls_sha1_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_sha1|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha1( const unsigned char *input, size_t ilen, unsigned char output[20] )
DECL|state|member|uint32_t state[5]; /*!< The intermediate digest state. */
DECL|total|member|uint32_t total[2]; /*!< The number of Bytes processed. */
