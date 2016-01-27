DECL|Curve_B|macro|Curve_B
DECL|Curve_G|macro|Curve_G
DECL|Curve_N_Barrett|macro|Curve_N_Barrett
DECL|Curve_N|macro|Curve_N
DECL|Curve_P_Barrett|macro|Curve_P_Barrett
DECL|Curve_P|macro|Curve_P
DECL|EccPointJacobi_isZero|function|uint32_t EccPointJacobi_isZero(EccPointJacobi *p_point_jacobi)
DECL|EccPointJacobi_set|function|static void EccPointJacobi_set(EccPointJacobi *target, EccPointJacobi *input)
DECL|EccPoint_add|function|void EccPoint_add(EccPointJacobi *P1, EccPointJacobi *P2)
DECL|EccPoint_double|function|static void EccPoint_double(EccPointJacobi *P)
DECL|EccPoint_fromAffine|function|static void EccPoint_fromAffine(EccPointJacobi *p_point_jacobi,EccPoint *p_point)
DECL|EccPoint_isZero|function|uint32_t EccPoint_isZero(EccPoint *p_point)
DECL|EccPoint_mult|function|void EccPoint_mult(EccPointJacobi *p_result, EccPoint *p_point, uint32_t *p_scalar)
DECL|EccPoint_toAffine|function|void EccPoint_toAffine(EccPoint *p_point, EccPointJacobi *p_point_jacobi)
DECL|curve_G|variable|curve_G
DECL|curve_b|variable|curve_b
DECL|curve_nb|variable|curve_nb
DECL|curve_n|variable|curve_n
DECL|curve_pb|variable|curve_pb
DECL|curve_p|variable|curve_p
DECL|ecc_bytes2native|function|void ecc_bytes2native(uint32_t p_native[NUM_ECC_DIGITS], uint8_t p_bytes[NUM_ECC_DIGITS * 4])
DECL|ecc_native2bytes|function|void ecc_native2bytes(uint8_t p_bytes[NUM_ECC_DIGITS * 4],uint32_t p_native[NUM_ECC_DIGITS])
DECL|vli_add|function|static uint32_t vli_add(uint32_t *p_result, uint32_t *p_left,uint32_t *p_right)
DECL|vli_clear|function|static void vli_clear(uint32_t *p_vli)
DECL|vli_cmp|function|int32_t vli_cmp(uint32_t *p_left, uint32_t *p_right, int32_t word_size)
DECL|vli_cond_set|function|void vli_cond_set(uint32_t *output, uint32_t *p_true, uint32_t *p_false,uint32_t cond)
DECL|vli_isZero|function|uint32_t vli_isZero(uint32_t *p_vli)
DECL|vli_mmod_barrett|function|static void vli_mmod_barrett(uint32_t *p_result, uint32_t *p_product, uint32_t *p_mod, uint32_t *p_barrett)
DECL|vli_modAdd|function|void vli_modAdd(uint32_t *p_result, uint32_t *p_left, uint32_t *p_right,uint32_t *p_mod)
DECL|vli_modExp|function|static void vli_modExp(uint32_t *p_result, uint32_t *p_base, uint32_t *p_exp, uint32_t *p_mod, uint32_t *p_barrett)
DECL|vli_modInv|function|void vli_modInv(uint32_t *p_result, uint32_t *p_input, uint32_t *p_mod,uint32_t *p_barrett)
DECL|vli_modMult_fast|function|void vli_modMult_fast(uint32_t *p_result, uint32_t *p_left,uint32_t *p_right)
DECL|vli_modMult|function|void vli_modMult(uint32_t *p_result, uint32_t *p_left, uint32_t *p_right, uint32_t *p_mod, uint32_t *p_barrett)
DECL|vli_modSquare_fast|function|void vli_modSquare_fast(uint32_t *p_result, uint32_t *p_left)
DECL|vli_modSub|function|void vli_modSub(uint32_t *p_result, uint32_t *p_left, uint32_t *p_right,uint32_t *p_mod)
DECL|vli_mult|function|static void vli_mult(uint32_t *p_result, uint32_t *p_left, uint32_t *p_right, uint32_t word_size)
DECL|vli_numBits|function|static uint32_t vli_numBits(uint32_t *p_vli)
DECL|vli_numDigits|function|static uint32_t vli_numDigits(uint32_t *p_vli)
DECL|vli_set|function|void vli_set(uint32_t *p_dest, uint32_t *p_src)
DECL|vli_square|function|static void vli_square(uint32_t *p_result, uint32_t *p_left)
DECL|vli_sub|function|uint32_t vli_sub(uint32_t *p_result, uint32_t *p_left, uint32_t *p_right,uint32_t word_size)
DECL|vli_testBit|function|static uint32_t vli_testBit(uint32_t *p_vli, uint32_t p_bit)
