DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_RIPEMD160_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_RIPEMD160_HW_ACCEL_FAILED
DECL|MBEDTLS_RIPEMD160_H|macro|MBEDTLS_RIPEMD160_H
DECL|buffer|member|unsigned char buffer[64]; /*!< data block being processed */
DECL|inline|macro|inline
DECL|mbedtls_ripemd160_context|typedef|mbedtls_ripemd160_context;
DECL|mbedtls_ripemd160_finish|function|MBEDTLS_DEPRECATED static inline void mbedtls_ripemd160_finish( mbedtls_ripemd160_context *ctx, unsigned char output[20] )
DECL|mbedtls_ripemd160_process|function|MBEDTLS_DEPRECATED static inline void mbedtls_ripemd160_process( mbedtls_ripemd160_context *ctx, const unsigned char data[64] )
DECL|mbedtls_ripemd160_starts|function|MBEDTLS_DEPRECATED static inline void mbedtls_ripemd160_starts( mbedtls_ripemd160_context *ctx )
DECL|mbedtls_ripemd160_update|function|MBEDTLS_DEPRECATED static inline void mbedtls_ripemd160_update( mbedtls_ripemd160_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_ripemd160|function|MBEDTLS_DEPRECATED static inline void mbedtls_ripemd160( const unsigned char *input, size_t ilen, unsigned char output[20] )
DECL|state|member|uint32_t state[5]; /*!< intermediate digest state */
DECL|total|member|uint32_t total[2]; /*!< number of bytes processed */
