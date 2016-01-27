DECL|TCHmacPrng_t|typedef|typedef struct tc_hmac_prng_struct *TCHmacPrng_t;
DECL|TC_HMAC_PRNG_RESEED_REQ|macro|TC_HMAC_PRNG_RESEED_REQ
DECL|__TC_HMAC_PRNG_H__|macro|__TC_HMAC_PRNG_H__
DECL|countdown|member|uint32_t countdown;
DECL|h|member|struct tc_hmac_state_struct h;
DECL|key|member|uint8_t key[TC_SHA256_DIGEST_SIZE];
DECL|tc_hmac_prng_struct|struct|struct tc_hmac_prng_struct {
DECL|v|member|uint8_t v[TC_SHA256_DIGEST_SIZE];
