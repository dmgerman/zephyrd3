DECL|MBEDTLS_MD_WRAP_H|macro|MBEDTLS_MD_WRAP_H
DECL|block_size|member|int block_size;
DECL|clone_func|member|void (*clone_func)( void *dst, const void *src );
DECL|ctx_alloc_func|member|void * (*ctx_alloc_func)( void );
DECL|ctx_free_func|member|void (*ctx_free_func)( void *ctx );
DECL|digest_func|member|int (*digest_func)( const unsigned char *input, size_t ilen,
DECL|finish_func|member|int (*finish_func)( void *ctx, unsigned char *output );
DECL|mbedtls_md_info_t|struct|struct mbedtls_md_info_t
DECL|name|member|const char * name;
DECL|process_func|member|int (*process_func)( void *ctx, const unsigned char *input );
DECL|size|member|int size;
DECL|starts_func|member|int (*starts_func)( void *ctx );
DECL|type|member|mbedtls_md_type_t type;
DECL|update_func|member|int (*update_func)( void *ctx, const unsigned char *input, size_t ilen );
