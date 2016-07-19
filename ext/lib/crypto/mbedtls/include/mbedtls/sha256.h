DECL|MBEDTLS_SHA256_H|macro|MBEDTLS_SHA256_H
DECL|buffer|member|unsigned char buffer[64]; /*!< data block being processed */
DECL|is224|member|int is224; /*!< 0 => SHA-256, else SHA-224 */
DECL|mbedtls_sha256_context|typedef|mbedtls_sha256_context;
DECL|state|member|uint32_t state[8]; /*!< intermediate digest state */
DECL|total|member|uint32_t total[2]; /*!< number of bytes processed */
