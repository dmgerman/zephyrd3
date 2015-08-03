DECL|HMAC_UPDATE_SEED|macro|HMAC_UPDATE_SEED
DECL|cipher_context_mutex|variable|cipher_context_mutex
DECL|cipher_context|variable|cipher_context
DECL|crypto_init|function|void crypto_init()
DECL|crypto_init|function|void crypto_init() {
DECL|dtls_ccm_decrypt|function|dtls_ccm_decrypt(aes128_ccm_t *ccm_ctx, const unsigned char *src, size_t srclen, unsigned char *buf, unsigned char *nounce, const unsigned char *aad, size_t la)
DECL|dtls_ccm_encrypt|function|dtls_ccm_encrypt(aes128_ccm_t *ccm_ctx, const unsigned char *src, size_t srclen, unsigned char *buf, unsigned char *nounce, const unsigned char *aad, size_t la)
DECL|dtls_cipher_context_get|function|static struct dtls_cipher_context_t *dtls_cipher_context_get(void)
DECL|dtls_cipher_context_release|function|static void dtls_cipher_context_release(void)
DECL|dtls_decrypt|function|dtls_decrypt(const unsigned char *src, size_t length, unsigned char *buf, unsigned char *nounce, unsigned char *key, size_t keylen, const unsigned char *aad, size_t la)
DECL|dtls_ec_key_from_uint32_asn1|function|int dtls_ec_key_from_uint32_asn1(const uint32_t *key, size_t key_size, unsigned char *buf)
DECL|dtls_ec_key_from_uint32|function|static void dtls_ec_key_from_uint32(const uint32_t *key, size_t key_size, unsigned char *result)
DECL|dtls_ec_key_to_uint32|function|static void dtls_ec_key_to_uint32(const unsigned char *key, size_t key_size, uint32_t *result)
DECL|dtls_ecdh_pre_master_secret|function|int dtls_ecdh_pre_master_secret(unsigned char *priv_key, unsigned char *pub_key_x, unsigned char *pub_key_y, size_t key_size, unsigned char *result,
DECL|dtls_ecdsa_create_sig_hash|function|dtls_ecdsa_create_sig_hash(const unsigned char *priv_key, size_t key_size, const unsigned char *sign_hash, size_t sign_hash_size, uint32_t point_r[9], uint32_t point_s[9])
DECL|dtls_ecdsa_create_sig|function|dtls_ecdsa_create_sig(const unsigned char *priv_key, size_t key_size, const unsigned char *client_random, size_t client_random_size, const unsigned char *server_random, size_t server_random_size, const unsigned char *keyx_params, size_t keyx_params_size, uint32_t point_r[9], uint32_t point_s[9])
DECL|dtls_ecdsa_generate_key|function|dtls_ecdsa_generate_key(unsigned char *priv_key,unsigned char *pub_key_x, unsigned char *pub_key_y, size_t key_size)
DECL|dtls_ecdsa_verify_sig_hash|function|dtls_ecdsa_verify_sig_hash(const unsigned char *pub_key_x, const unsigned char *pub_key_y, size_t key_size, const unsigned char *sign_hash, size_t sign_hash_size, unsigned char *result_r, unsigned char *result_s)
DECL|dtls_ecdsa_verify_sig|function|dtls_ecdsa_verify_sig(const unsigned char *pub_key_x, const unsigned char *pub_key_y, size_t key_size, const unsigned char *client_random, size_t client_random_size, const unsigned char *server_random, size_t server_random_size, const unsigned char *keyx_params, size_t keyx_params_size,
DECL|dtls_encrypt|function|dtls_encrypt(const unsigned char *src, size_t length, unsigned char *buf, unsigned char *nounce, unsigned char *key, size_t keylen, const unsigned char *aad, size_t la)
DECL|dtls_handshake_dealloc|function|static void dtls_handshake_dealloc(dtls_handshake_parameters_t *handshake) {
DECL|dtls_handshake_dealloc|function|static void dtls_handshake_dealloc(dtls_handshake_parameters_t *handshake) {
DECL|dtls_handshake_free|function|void dtls_handshake_free(dtls_handshake_parameters_t *handshake)
DECL|dtls_handshake_malloc|function|static dtls_handshake_parameters_t *dtls_handshake_malloc() {
DECL|dtls_handshake_malloc|function|static dtls_handshake_parameters_t *dtls_handshake_malloc() {
DECL|dtls_handshake_new|function|dtls_handshake_parameters_t *dtls_handshake_new()
DECL|dtls_mac|function|dtls_mac(dtls_hmac_context_t *hmac_ctx, const unsigned char *record, const unsigned char *packet, size_t length, unsigned char *buf)
DECL|dtls_p_hash|function|dtls_p_hash(dtls_hashfunc_t h, const unsigned char *key, size_t keylen, const unsigned char *label, size_t labellen, const unsigned char *random1, size_t random1len, const unsigned char *random2, size_t random2len,
DECL|dtls_prf|function|dtls_prf(const unsigned char *key, size_t keylen, const unsigned char *label, size_t labellen, const unsigned char *random1, size_t random1len, const unsigned char *random2, size_t random2len, unsigned char *buf, size_t buflen)
DECL|dtls_psk_pre_master_secret|function|dtls_psk_pre_master_secret(unsigned char *key, size_t keylen, unsigned char *result, size_t result_len)
DECL|dtls_security_dealloc|function|static void dtls_security_dealloc(dtls_security_parameters_t *security) {
DECL|dtls_security_dealloc|function|static void dtls_security_dealloc(dtls_security_parameters_t *security) {
DECL|dtls_security_free|function|void dtls_security_free(dtls_security_parameters_t *security)
DECL|dtls_security_malloc|function|static dtls_security_parameters_t *dtls_security_malloc() {
DECL|dtls_security_malloc|function|static dtls_security_parameters_t *dtls_security_malloc() {
DECL|dtls_security_new|function|dtls_security_parameters_t *dtls_security_new()
