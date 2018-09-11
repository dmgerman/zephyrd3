DECL|BUF_SIZE|macro|BUF_SIZE
DECL|ENABLE_TESTS|macro|ENABLE_TESTS
DECL|cavp_sign|function|int cavp_sign(bool verbose)
DECL|cavp_verify|function|int cavp_verify(bool verbose)
DECL|default_CSPRNG|function|int default_CSPRNG(u8_t *dest, unsigned int size)
DECL|montecarlo_signverify|function|int montecarlo_signverify(int num_tests, bool verbose)
DECL|sign_vectors|function|int sign_vectors(TCSha256State_t hash, char **d_vec, char **k_vec, char **msg_vec, char **qx_vec, char **qy_vec, char **r_vec, char **s_vec, int tests, bool verbose)
DECL|test_ecc_dsa|function|void test_ecc_dsa(void)
DECL|vrfy_vectors|function|int vrfy_vectors(TCSha256State_t hash, char **msg_vec, char **qx_vec, char **qy_vec, char **r_vec, char **s_vec, int res_vec[], int tests, bool verbose)
