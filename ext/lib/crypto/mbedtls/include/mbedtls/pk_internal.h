DECL|MBEDTLS_PK_WRAP_H|macro|MBEDTLS_PK_WRAP_H
DECL|can_do|member|int (*can_do)( mbedtls_pk_type_t type );
DECL|check_pair_func|member|int (*check_pair_func)( const void *pub, const void *prv );
DECL|ctx_alloc_func|member|void * (*ctx_alloc_func)( void );
DECL|ctx_free_func|member|void (*ctx_free_func)( void *ctx );
DECL|debug_func|member|void (*debug_func)( const void *ctx, mbedtls_pk_debug_item *items );
DECL|decrypt_func|member|int (*decrypt_func)( void *ctx, const unsigned char *input, size_t ilen,
DECL|decrypt_func|member|mbedtls_pk_rsa_alt_decrypt_func decrypt_func;
DECL|encrypt_func|member|int (*encrypt_func)( void *ctx, const unsigned char *input, size_t ilen,
DECL|get_bitlen|member|size_t (*get_bitlen)( const void * );
DECL|key_len_func|member|mbedtls_pk_rsa_alt_key_len_func key_len_func;
DECL|key|member|void *key;
DECL|mbedtls_pk_info_t|struct|struct mbedtls_pk_info_t
DECL|mbedtls_rsa_alt_context|typedef|} mbedtls_rsa_alt_context;
DECL|name|member|const char *name;
DECL|sign_func|member|int (*sign_func)( void *ctx, mbedtls_md_type_t md_alg,
DECL|sign_func|member|mbedtls_pk_rsa_alt_sign_func sign_func;
DECL|type|member|mbedtls_pk_type_t type;
DECL|verify_func|member|int (*verify_func)( void *ctx, mbedtls_md_type_t md_alg,
