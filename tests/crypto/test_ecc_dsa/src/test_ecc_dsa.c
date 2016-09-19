DECL|BUF_SIZE|macro|BUF_SIZE
DECL|RC_STR|macro|RC_STR
DECL|cavp_sign|function|int cavp_sign(int verbose)
DECL|cavp_verify|function|int cavp_verify(int verbose)
DECL|main|function|int main(void)
DECL|montecarlo_signverify|function|int montecarlo_signverify(uint32_t num, int verbose)
DECL|sign_d|variable|sign_d
DECL|sign_k|variable|sign_k
DECL|sign_msg|variable|sign_msg
DECL|sign_qx|variable|sign_qx
DECL|sign_qy|variable|sign_qy
DECL|sign_r|variable|sign_r
DECL|sign_s|variable|sign_s
DECL|sign_vectors|function|int sign_vectors(TCSha256State_t hash, char **d_vec, char **k_vec, char **msg_vec, char **qx_vec, char **qy_vec, char **r_vec, char **s_vec, int tests, int verbose)
DECL|verify_msg|variable|verify_msg
DECL|verify_names|variable|verify_names
DECL|verify_qx|variable|verify_qx
DECL|verify_qy|variable|verify_qy
DECL|verify_results|variable|verify_results
DECL|verify_r|variable|verify_r
DECL|verify_s|variable|verify_s
DECL|verify_vectors|function|int verify_vectors(TCSha256State_t hash, char **msg_vec, char **qx_vec, char **qy_vec, char **r_vec, char **s_vec, char **names, int *verify_results, int tests, int verbose)
