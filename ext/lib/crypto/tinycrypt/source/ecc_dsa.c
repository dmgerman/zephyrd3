DECL|bits2int|function|static void bits2int(uECC_word_t *native, const uint8_t *bits, unsigned bits_size, uECC_Curve curve)
DECL|g_rng_function|variable|g_rng_function
DECL|g_rng_function|variable|g_rng_function
DECL|smax|function|static bitcount_t smax(bitcount_t a, bitcount_t b)
DECL|uECC_sign_with_k|function|int uECC_sign_with_k(const uint8_t *private_key, const uint8_t *message_hash, unsigned hash_size, uECC_word_t *k, uint8_t *signature, uECC_Curve curve)
DECL|uECC_sign|function|int uECC_sign(const uint8_t *private_key, const uint8_t *message_hash, unsigned hash_size, uint8_t *signature, uECC_Curve curve)
DECL|uECC_verify|function|int uECC_verify(const uint8_t *public_key, const uint8_t *message_hash,unsigned hash_size, const uint8_t *signature, uECC_Curve curve)
