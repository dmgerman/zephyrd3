DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_MD4_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_MD4_HW_ACCEL_FAILED
DECL|MBEDTLS_MD4_H|macro|MBEDTLS_MD4_H
DECL|buffer|member|unsigned char buffer[64]; /*!< data block being processed */
DECL|inline|macro|inline
DECL|mbedtls_md4_context|typedef|mbedtls_md4_context;
DECL|mbedtls_md4_finish|function|MBEDTLS_DEPRECATED static inline void mbedtls_md4_finish( mbedtls_md4_context *ctx, unsigned char output[16] )
DECL|mbedtls_md4_process|function|MBEDTLS_DEPRECATED static inline void mbedtls_md4_process( mbedtls_md4_context *ctx, const unsigned char data[64] )
DECL|mbedtls_md4_starts|function|MBEDTLS_DEPRECATED static inline void mbedtls_md4_starts( mbedtls_md4_context *ctx )
DECL|mbedtls_md4_update|function|MBEDTLS_DEPRECATED static inline void mbedtls_md4_update( mbedtls_md4_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_md4|function|MBEDTLS_DEPRECATED static inline void mbedtls_md4( const unsigned char *input, size_t ilen, unsigned char output[16] )
DECL|state|member|uint32_t state[4]; /*!< intermediate digest state */
DECL|total|member|uint32_t total[2]; /*!< number of bytes processed */
