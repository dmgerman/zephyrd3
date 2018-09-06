DECL|MBEDTLS_CHACHAPOLY_DECRYPT|enumerator|MBEDTLS_CHACHAPOLY_DECRYPT /**< The mode value for performing decryption. */
DECL|MBEDTLS_CHACHAPOLY_ENCRYPT|enumerator|MBEDTLS_CHACHAPOLY_ENCRYPT, /**< The mode value for performing encryption. */
DECL|MBEDTLS_CHACHAPOLY_H|macro|MBEDTLS_CHACHAPOLY_H
DECL|MBEDTLS_ERR_CHACHAPOLY_AUTH_FAILED|macro|MBEDTLS_ERR_CHACHAPOLY_AUTH_FAILED
DECL|MBEDTLS_ERR_CHACHAPOLY_BAD_STATE|macro|MBEDTLS_ERR_CHACHAPOLY_BAD_STATE
DECL|aad_len|member|uint64_t aad_len; /**< The length (bytes) of the Additional Authenticated Data. */
DECL|chacha20_ctx|member|mbedtls_chacha20_context chacha20_ctx; /**< The ChaCha20 context. */
DECL|ciphertext_len|member|uint64_t ciphertext_len; /**< The length (bytes) of the ciphertext. */
DECL|mbedtls_chachapoly_context|typedef|mbedtls_chachapoly_context;
DECL|mbedtls_chachapoly_mode_t|typedef|mbedtls_chachapoly_mode_t;
DECL|mode|member|mbedtls_chachapoly_mode_t mode; /**< Cipher mode (encrypt or decrypt). */
DECL|poly1305_ctx|member|mbedtls_poly1305_context poly1305_ctx; /**< The Poly1305 context. */
DECL|state|member|int state; /**< The current state of the context. */
