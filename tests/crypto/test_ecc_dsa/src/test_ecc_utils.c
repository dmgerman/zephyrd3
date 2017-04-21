DECL|check_code|function|int check_code(const int num, const char *name, const int expected, const int computed, const int verbose)
DECL|check_ecc_result|function|int check_ecc_result(const int num, const char *name, const u32_t *expected, const u32_t *computed, const u32_t num_word32, int verbose)
DECL|hex_to_num_str|function|int hex_to_num_str(u8_t *buf, const size_t buflen, const char *hex, const size_t hexlen)
DECL|hex_to_num|function|int hex_to_num(char hex)
DECL|keygen_vectors|function|int keygen_vectors(EccPoint *pub, char **d_vec, char **qx_vec, char **qy_vec, int tests, int verbose)
DECL|random_bytes|function|int random_bytes(u32_t *out, size_t len)
DECL|random_end|function|int random_end(void)
DECL|random_start|function|int random_start(const char *fn)
DECL|str_to_scalar|function|int str_to_scalar(u32_t *scalar, u32_t num_word32, char *str)
DECL|vli_print|function|void vli_print(u32_t *p_vli, unsigned int p_size)
