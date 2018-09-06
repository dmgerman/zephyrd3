DECL|MBEDTLS_CIPHER_WRAP_H|macro|MBEDTLS_CIPHER_WRAP_H
DECL|cbc_func|member|int (*cbc_func)( void *ctx, mbedtls_operation_t mode, size_t length,
DECL|cfb_func|member|int (*cfb_func)( void *ctx, mbedtls_operation_t mode, size_t length, size_t *iv_off,
DECL|cipher|member|mbedtls_cipher_id_t cipher;
DECL|ctr_func|member|int (*ctr_func)( void *ctx, size_t length, size_t *nc_off,
DECL|ctx_alloc_func|member|void * (*ctx_alloc_func)( void );
DECL|ctx_free_func|member|void (*ctx_free_func)( void *ctx );
DECL|ecb_func|member|int (*ecb_func)( void *ctx, mbedtls_operation_t mode,
DECL|info|member|const mbedtls_cipher_info_t *info;
DECL|mbedtls_cipher_base_t|struct|struct mbedtls_cipher_base_t
DECL|mbedtls_cipher_definition_t|typedef|} mbedtls_cipher_definition_t;
DECL|ofb_func|member|int (*ofb_func)( void *ctx, size_t length, size_t *iv_off,
DECL|setkey_dec_func|member|int (*setkey_dec_func)( void *ctx, const unsigned char *key,
DECL|setkey_enc_func|member|int (*setkey_enc_func)( void *ctx, const unsigned char *key,
DECL|stream_func|member|int (*stream_func)( void *ctx, size_t length,
DECL|type|member|mbedtls_cipher_type_t type;
DECL|xts_func|member|int (*xts_func)( void *ctx, mbedtls_operation_t mode, size_t length,
