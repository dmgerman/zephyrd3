DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_SHA512_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_SHA512_HW_ACCEL_FAILED
DECL|MBEDTLS_SHA512_H|macro|MBEDTLS_SHA512_H
DECL|buffer|member|unsigned char buffer[128]; /*!< The data block being processed. */
DECL|inline|macro|inline
DECL|is384|member|int is384; /*!< Determines which function to use.
DECL|mbedtls_sha512_context|typedef|mbedtls_sha512_context;
DECL|mbedtls_sha512_finish|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha512_finish( mbedtls_sha512_context *ctx, unsigned char output[64] )
DECL|mbedtls_sha512_process|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha512_process( mbedtls_sha512_context *ctx, const unsigned char data[128] )
DECL|mbedtls_sha512_starts|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha512_starts( mbedtls_sha512_context *ctx, int is384 )
DECL|mbedtls_sha512_update|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha512_update( mbedtls_sha512_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_sha512|function|MBEDTLS_DEPRECATED static inline void mbedtls_sha512( const unsigned char *input, size_t ilen, unsigned char output[64], int is384 )
DECL|state|member|uint64_t state[8]; /*!< The intermediate digest state. */
DECL|total|member|uint64_t total[2]; /*!< The number of Bytes processed. */
