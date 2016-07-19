DECL|MBEDTLS_SHA512_H|macro|MBEDTLS_SHA512_H
DECL|buffer|member|unsigned char buffer[128]; /*!< data block being processed */
DECL|is384|member|int is384; /*!< 0 => SHA-512, else SHA-384 */
DECL|mbedtls_sha512_context|typedef|mbedtls_sha512_context;
DECL|state|member|uint64_t state[8]; /*!< intermediate digest state */
DECL|total|member|uint64_t total[2]; /*!< number of bytes processed */
