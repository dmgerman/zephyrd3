DECL|curve_x_side|function|static void curve_x_side(uint32_t p_result[NUM_ECC_DIGITS], uint32_t x[NUM_ECC_DIGITS])
DECL|ecc_make_key|function|int32_t ecc_make_key(EccPoint *p_publicKey, uint32_t p_privateKey[NUM_ECC_DIGITS], uint32_t p_random[NUM_ECC_DIGITS])
DECL|ecc_valid_public_key|function|int32_t ecc_valid_public_key(EccPoint *p_publicKey)
DECL|ecdh_shared_secret|function|int32_t ecdh_shared_secret(uint32_t p_secret[NUM_ECC_DIGITS], EccPoint *p_publicKey, uint32_t p_privateKey[NUM_ECC_DIGITS])
