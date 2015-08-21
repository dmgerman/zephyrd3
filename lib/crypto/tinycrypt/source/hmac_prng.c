DECL|MAX_ALEN|variable|MAX_ALEN
DECL|MAX_GENS|variable|MAX_GENS
DECL|MAX_OUT|variable|MAX_OUT
DECL|MAX_PLEN|variable|MAX_PLEN
DECL|MAX_SLEN|variable|MAX_SLEN
DECL|MIN_SLEN|variable|MIN_SLEN
DECL|tc_hmac_prng_generate|function|int32_t tc_hmac_prng_generate(uint8_t *out, uint32_t outlen, TCHmacPrng_t prng)
DECL|tc_hmac_prng_init|function|int32_t tc_hmac_prng_init(TCHmacPrng_t prng, const uint8_t *personalization, uint32_t plen)
DECL|tc_hmac_prng_reseed|function|int32_t tc_hmac_prng_reseed(TCHmacPrng_t prng, const uint8_t *seed, uint32_t seedlen, const uint8_t *additional_input, uint32_t additionallen)
DECL|update|function|static void update(TCHmacPrng_t prng, const uint8_t *e, uint32_t len)
