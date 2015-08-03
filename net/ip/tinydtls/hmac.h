DECL|DTLS_HASH_CTX_SIZE|macro|DTLS_HASH_CTX_SIZE
DECL|DTLS_HMAC_BLOCKSIZE|macro|DTLS_HMAC_BLOCKSIZE
DECL|DTLS_HMAC_DIGEST_SIZE|macro|DTLS_HMAC_DIGEST_SIZE
DECL|DTLS_HMAC_MAX|macro|DTLS_HMAC_MAX
DECL|HASH_MD5|enumerator|HASH_NONE=0, HASH_MD5=1, HASH_SHA1=2, HASH_SHA224=3,
DECL|HASH_NONE|enumerator|HASH_NONE=0, HASH_MD5=1, HASH_SHA1=2, HASH_SHA224=3,
DECL|HASH_SHA1|enumerator|HASH_NONE=0, HASH_MD5=1, HASH_SHA1=2, HASH_SHA224=3,
DECL|HASH_SHA224|enumerator|HASH_NONE=0, HASH_MD5=1, HASH_SHA1=2, HASH_SHA224=3,
DECL|HASH_SHA256|enumerator|HASH_SHA256=4, HASH_SHA384=5, HASH_SHA512=6
DECL|HASH_SHA384|enumerator|HASH_SHA256=4, HASH_SHA384=5, HASH_SHA512=6
DECL|HASH_SHA512|enumerator|HASH_SHA256=4, HASH_SHA384=5, HASH_SHA512=6
DECL|_DTLS_HMAC_H_|macro|_DTLS_HMAC_H_
DECL|data|member|dtls_hash_ctx data; /**< context for hash function */
DECL|dtls_hash_ctx|typedef|typedef SHA256_CTX dtls_hash_ctx;
DECL|dtls_hash_finalize|function|dtls_hash_finalize(unsigned char *buf, dtls_hash_t ctx) {
DECL|dtls_hash_init|function|dtls_hash_init(dtls_hash_t ctx) {
DECL|dtls_hash_t|typedef|typedef dtls_hash_ctx *dtls_hash_t;
DECL|dtls_hash_update|function|dtls_hash_update(dtls_hash_t ctx, const unsigned char *input, size_t len) {
DECL|dtls_hashfunc_t|typedef|} dtls_hashfunc_t;
DECL|dtls_hmac_context_t|typedef|} dtls_hmac_context_t;
DECL|dtls_hmac_storage_init|function|static inline void dtls_hmac_storage_init()
DECL|pad|member|unsigned char pad[DTLS_HMAC_BLOCKSIZE]; /**< ipad and opad storage */
