DECL|NUM_OF_FIXED_KEYS|macro|NUM_OF_FIXED_KEYS
DECL|NUM_OF_NIST_KEYS|macro|NUM_OF_NIST_KEYS
DECL|in|member|u8_t in[NUM_OF_NIST_KEYS];
DECL|kat_table|struct|struct kat_table {
DECL|out|member|u8_t out[NUM_OF_NIST_KEYS];
DECL|test_1|function|void test_1(void)
DECL|test_2|function|void test_2(void)
DECL|test_3|function|void test_3(void)
DECL|test_4|function|void test_4(void)
DECL|var_key_test|function|u32_t var_key_test(u32_t r, const u8_t *in, const u8_t *out)
DECL|var_text_test|function|u32_t var_text_test(u32_t r, const u8_t *in, const u8_t *out, TCAesKeySched_t s)
