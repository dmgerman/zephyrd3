DECL|NUM_OF_FIXED_KEYS|macro|NUM_OF_FIXED_KEYS
DECL|NUM_OF_NIST_KEYS|macro|NUM_OF_NIST_KEYS
DECL|in|member|u8_t in[NUM_OF_NIST_KEYS];
DECL|kat_table|struct|struct kat_table {
DECL|out|member|u8_t out[NUM_OF_NIST_KEYS];
DECL|test_fixed_key_variable_text|function|void test_fixed_key_variable_text(void)
DECL|test_key_chain|function|void test_key_chain(void)
DECL|test_variable_key_fixed_text|function|void test_variable_key_fixed_text(void)
DECL|test_vectors|function|void test_vectors(void)
DECL|var_key_test|function|u32_t var_key_test(u32_t r, const u8_t *in, const u8_t *out)
DECL|var_text_test|function|u32_t var_text_test(u32_t r, const u8_t *in, const u8_t *out, TCAesKeySched_t s)
