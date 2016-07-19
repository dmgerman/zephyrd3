DECL|MBEDTLS_MD2_H|macro|MBEDTLS_MD2_H
DECL|buffer|member|unsigned char buffer[16]; /*!< data block being processed */
DECL|cksum|member|unsigned char cksum[16]; /*!< checksum of the data block */
DECL|left|member|size_t left; /*!< amount of data in buffer */
DECL|mbedtls_md2_context|typedef|mbedtls_md2_context;
DECL|state|member|unsigned char state[48]; /*!< intermediate digest state */
