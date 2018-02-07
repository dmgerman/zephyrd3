DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_DEPRECATED|macro|MBEDTLS_DEPRECATED
DECL|MBEDTLS_ERR_MD2_HW_ACCEL_FAILED|macro|MBEDTLS_ERR_MD2_HW_ACCEL_FAILED
DECL|MBEDTLS_MD2_H|macro|MBEDTLS_MD2_H
DECL|buffer|member|unsigned char buffer[16]; /*!< data block being processed */
DECL|cksum|member|unsigned char cksum[16]; /*!< checksum of the data block */
DECL|inline|macro|inline
DECL|left|member|size_t left; /*!< amount of data in buffer */
DECL|mbedtls_md2_context|typedef|mbedtls_md2_context;
DECL|mbedtls_md2_finish|function|MBEDTLS_DEPRECATED static inline void mbedtls_md2_finish( mbedtls_md2_context *ctx, unsigned char output[16] )
DECL|mbedtls_md2_process|function|MBEDTLS_DEPRECATED static inline void mbedtls_md2_process( mbedtls_md2_context *ctx )
DECL|mbedtls_md2_starts|function|MBEDTLS_DEPRECATED static inline void mbedtls_md2_starts( mbedtls_md2_context *ctx )
DECL|mbedtls_md2_update|function|MBEDTLS_DEPRECATED static inline void mbedtls_md2_update( mbedtls_md2_context *ctx, const unsigned char *input, size_t ilen )
DECL|mbedtls_md2|function|MBEDTLS_DEPRECATED static inline void mbedtls_md2( const unsigned char *input, size_t ilen, unsigned char output[16] )
DECL|state|member|unsigned char state[48]; /*!< intermediate digest state */
