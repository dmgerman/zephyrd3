DECL|BITS_TO_BYTES|macro|BITS_TO_BYTES
DECL|BITS_TO_WORDS|macro|BITS_TO_WORDS
DECL|BYTES_TO_WORDS_4|macro|BYTES_TO_WORDS_4
DECL|BYTES_TO_WORDS_8|macro|BYTES_TO_WORDS_8
DECL|G|member|uECC_word_t G[NUM_ECC_WORDS * 2];
DECL|HIGH_BIT_SET|macro|HIGH_BIT_SET
DECL|NUM_ECC_BYTES|macro|NUM_ECC_BYTES
DECL|NUM_ECC_WORDS|macro|NUM_ECC_WORDS
DECL|__TC_UECC_H__|macro|__TC_UECC_H__
DECL|bitcount_t|typedef|typedef int16_t bitcount_t;
DECL|b|member|uECC_word_t b[NUM_ECC_WORDS];
DECL|cmpresult_t|typedef|typedef int8_t cmpresult_t;
DECL|curve_secp256r1|variable|curve_secp256r1
DECL|double_jacobian|member|void (*double_jacobian)(uECC_word_t * X1, uECC_word_t * Y1, uECC_word_t * Z1,
DECL|mmod_fast|member|void (*mmod_fast)(uECC_word_t *result, uECC_word_t *product);
DECL|num_bytes|member|wordcount_t num_bytes;
DECL|num_n_bits|member|bitcount_t num_n_bits;
DECL|num_words|member|wordcount_t num_words;
DECL|n|member|uECC_word_t n[NUM_ECC_WORDS];
DECL|p|member|uECC_word_t p[NUM_ECC_WORDS];
DECL|uECC_Curve_t|struct|struct uECC_Curve_t {
DECL|uECC_Curve|typedef|typedef const struct uECC_Curve_t * uECC_Curve;
DECL|uECC_RNG_Function|typedef|typedef int(*uECC_RNG_Function)(uint8_t *dest, unsigned int size);
DECL|uECC_RNG_MAX_TRIES|macro|uECC_RNG_MAX_TRIES
DECL|uECC_WORD_BITS_MASK|macro|uECC_WORD_BITS_MASK
DECL|uECC_WORD_BITS_SHIFT|macro|uECC_WORD_BITS_SHIFT
DECL|uECC_WORD_BITS|macro|uECC_WORD_BITS
DECL|uECC_WORD_SIZE|macro|uECC_WORD_SIZE
DECL|uECC_dword_t|typedef|typedef uint64_t uECC_dword_t;
DECL|uECC_word_t|typedef|typedef unsigned int uECC_word_t;
DECL|wordcount_t|typedef|typedef int8_t wordcount_t;
DECL|x_side|member|void (*x_side)(uECC_word_t *result, const uECC_word_t *x, uECC_Curve curve);
