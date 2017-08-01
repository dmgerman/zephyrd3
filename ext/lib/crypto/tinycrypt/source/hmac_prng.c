DECL|MAX_ALEN|variable|MAX_ALEN
DECL|MAX_GENS|variable|MAX_GENS
DECL|MAX_OUT|variable|MAX_OUT
DECL|MAX_PLEN|variable|MAX_PLEN
DECL|MAX_SLEN|variable|MAX_SLEN
DECL|MIN_SLEN|variable|MIN_SLEN
DECL|tc_hmac_prng_generate|function|int tc_hmac_prng_generate(uint8_t *out, unsigned int outlen, TCHmacPrng_t prng)
DECL|tc_hmac_prng_init|function|int tc_hmac_prng_init(TCHmacPrng_t prng, const uint8_t *personalization, unsigned int plen)
DECL|tc_hmac_prng_reseed|function|int tc_hmac_prng_reseed(TCHmacPrng_t prng,const uint8_t *seed, unsigned int seedlen, const uint8_t *additional_input, unsigned int additionallen)
DECL|update|function|static void update(TCHmacPrng_t prng, const uint8_t *e, unsigned int len)
