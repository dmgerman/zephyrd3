DECL|arrInc|function|static void arrInc(uint8_t arr[], unsigned int len)
DECL|tc_ctr_prng_generate|function|int tc_ctr_prng_generate(TCCtrPrng_t * const ctx,uint8_t const * const additional_input, unsigned int additionallen, uint8_t * const out, unsigned int outlen)
DECL|tc_ctr_prng_init|function|int tc_ctr_prng_init(TCCtrPrng_t * const ctx, uint8_t const * const entropy, unsigned int entropyLen, uint8_t const * const personalization, unsigned int pLen)
DECL|tc_ctr_prng_reseed|function|int tc_ctr_prng_reseed(TCCtrPrng_t * const ctx,uint8_t const * const entropy, unsigned int entropyLen, uint8_t const * const additional_input, unsigned int additionallen)
DECL|tc_ctr_prng_uninstantiate|function|void tc_ctr_prng_uninstantiate(TCCtrPrng_t * const ctx)
DECL|tc_ctr_prng_update|function|static void tc_ctr_prng_update(TCCtrPrng_t * const ctx, uint8_t const * const providedData)
