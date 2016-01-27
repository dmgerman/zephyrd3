DECL|ecdsa_sign|function|int32_t ecdsa_sign(uint32_t r[NUM_ECC_DIGITS], uint32_t s[NUM_ECC_DIGITS], uint32_t p_privateKey[NUM_ECC_DIGITS], uint32_t p_random[NUM_ECC_DIGITS], uint32_t p_hash[NUM_ECC_DIGITS])
DECL|ecdsa_verify|function|int32_t ecdsa_verify(EccPoint *p_publicKey, uint32_t p_hash[NUM_ECC_DIGITS], uint32_t r[NUM_ECC_DIGITS], uint32_t s[NUM_ECC_DIGITS])
