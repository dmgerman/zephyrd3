DECL|TCHmacPrng_t|typedef|typedef struct tc_hmac_prng_struct *TCHmacPrng_t;
DECL|__TC_HMAC_PRNG_H__|macro|__TC_HMAC_PRNG_H__
DECL|countdown|member|uint32_t countdown; /* calls to tc_hmac_prng_generate left before re-seed */
DECL|h|member|struct tc_hmac_state_struct h; /* the HMAC instance for this PRNG */
DECL|key|member|uint8_t key[TC_SHA256_DIGEST_SIZE]; /* the PRNG key */
DECL|tc_hmac_prng_struct|struct|struct tc_hmac_prng_struct {
DECL|v|member|uint8_t v[TC_SHA256_DIGEST_SIZE]; /* PRNG state */
