DECL|A_DATA_LEN|macro|A_DATA_LEN
DECL|A_DATA_LEN|macro|A_DATA_LEN
DECL|CALL|macro|CALL
DECL|CLIENTHELLO|macro|CLIENTHELLO
DECL|DTLS_CE_LENGTH|macro|DTLS_CE_LENGTH
DECL|DTLS_CH_LENGTH_MAX|macro|DTLS_CH_LENGTH_MAX
DECL|DTLS_CH_LENGTH|macro|DTLS_CH_LENGTH
DECL|DTLS_CKXEC_LENGTH|macro|DTLS_CKXEC_LENGTH
DECL|DTLS_CKXPSK_LENGTH_MIN|macro|DTLS_CKXPSK_LENGTH_MIN
DECL|DTLS_COOKIE_LENGTH_MAX|macro|DTLS_COOKIE_LENGTH_MAX
DECL|DTLS_CV_LENGTH|macro|DTLS_CV_LENGTH
DECL|DTLS_FIN_LENGTH|macro|DTLS_FIN_LENGTH
DECL|DTLS_HANDSHAKE_HEADER|macro|DTLS_HANDSHAKE_HEADER
DECL|DTLS_HS_LENGTH|macro|DTLS_HS_LENGTH
DECL|DTLS_HV_LENGTH|macro|DTLS_HV_LENGTH
DECL|DTLS_RECORD_HEADER|macro|DTLS_RECORD_HEADER
DECL|DTLS_RH_LENGTH|macro|DTLS_RH_LENGTH
DECL|DTLS_SH_LENGTH|macro|DTLS_SH_LENGTH
DECL|DTLS_SKEXECPSK_LENGTH_MAX|macro|DTLS_SKEXECPSK_LENGTH_MAX
DECL|DTLS_SKEXECPSK_LENGTH_MIN|macro|DTLS_SKEXECPSK_LENGTH_MIN
DECL|DTLS_SKEXEC_LENGTH|macro|DTLS_SKEXEC_LENGTH
DECL|HANDSHAKE|macro|HANDSHAKE
DECL|HIGH|macro|HIGH
DECL|HS_HDR_LENGTH|macro|HS_HDR_LENGTH
DECL|HV_HDR_LENGTH|macro|HV_HDR_LENGTH
DECL|LOW|macro|LOW
DECL|MUST_HASH|macro|MUST_HASH
DECL|PRF_LABEL_SIZE|macro|PRF_LABEL_SIZE
DECL|PRF_LABEL|macro|PRF_LABEL
DECL|PROCESS_THREAD|function|PROCESS_THREAD(dtls_retransmit_process, ev, data, buf)
DECL|R_KEY_OFFSET|macro|R_KEY_OFFSET
DECL|R_KEY_OFFSET|macro|R_KEY_OFFSET
DECL|SKIP_VAR_FIELD|macro|SKIP_VAR_FIELD
DECL|S_KEY_OFFSET|macro|S_KEY_OFFSET
DECL|S_KEY_OFFSET|macro|S_KEY_OFFSET
DECL|calculate_key_block|function|calculate_key_block(dtls_context_t *ctx, dtls_handshake_parameters_t *handshake, dtls_peer_t *peer, session_t *session, dtls_peer_type role)
DECL|cert_asn1_header|variable|cert_asn1_header
DECL|check_certificate_request|function|check_certificate_request(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_client_certificate_verify|function|check_client_certificate_verify(dtls_context_t *ctx,dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_client_keyexchange|function|check_client_keyexchange(dtls_context_t *ctx, dtls_handshake_parameters_t *handshake, uint8 *data, size_t length)
DECL|check_finished|function|check_finished(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_server_certificate|function|check_server_certificate(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_server_hello_verify_request|function|check_server_hello_verify_request(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_server_hellodone|function|check_server_hellodone(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_server_hello|function|check_server_hello(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_server_key_exchange_ecdsa|function|check_server_key_exchange_ecdsa(dtls_context_t *ctx,dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|check_server_key_exchange_psk|function|check_server_key_exchange_psk(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|clear_hs_hash|function|clear_hs_hash(dtls_peer_t *peer) {
DECL|compression_methods|variable|compression_methods
DECL|content_types|variable|content_types
DECL|copy_hs_hash|function|copy_hs_hash(dtls_peer_t *peer, dtls_hash_ctx *hs_hash) {
DECL|decrypt_verify|function|decrypt_verify(dtls_peer_t *peer, uint8 *packet, size_t length, uint8 **cleartext)
DECL|dtls_add_ecdsa_signature_elem|function|dtls_add_ecdsa_signature_elem(uint8 *p, uint32_t *point_r, uint32_t *point_s)
DECL|dtls_add_peer|function|dtls_add_peer(dtls_context_t *ctx, dtls_peer_t *peer) {
DECL|dtls_alert_send_from_err|function|static int dtls_alert_send_from_err(dtls_context_t *ctx, dtls_peer_t *peer, session_t *session, int err)
DECL|dtls_check_ecdsa_signature_elem|function|dtls_check_ecdsa_signature_elem(uint8 *data, size_t data_length,unsigned char **result_r, unsigned char **result_s)
DECL|dtls_check_retransmit|function|dtls_check_retransmit(dtls_context_t *context, clock_time_t *next) {
DECL|dtls_check_tls_extension|function|dtls_check_tls_extension(dtls_peer_t *peer, uint8 *data, size_t data_length, int client_hello)
DECL|dtls_close|function|dtls_close(dtls_context_t *ctx, const session_t *remote) {
DECL|dtls_connect_peer|function|dtls_connect_peer(dtls_context_t *ctx, dtls_peer_t *peer) {
DECL|dtls_connect|function|dtls_connect(dtls_context_t *ctx, const session_t *dst) {
DECL|dtls_create_cookie|function|dtls_create_cookie(dtls_context_t *ctx, session_t *session, uint8 *msg, size_t msglen, uint8 *cookie, int *clen)
DECL|dtls_debug_keyblock|function|static void dtls_debug_keyblock(dtls_security_parameters_t *config)
DECL|dtls_destroy_peer|function|static void dtls_destroy_peer(dtls_context_t *ctx, dtls_peer_t *peer, int unlink)
DECL|dtls_free_context|function|dtls_free_context(dtls_context_t *ctx) {
DECL|dtls_get_content_type|macro|dtls_get_content_type
DECL|dtls_get_cookie|function|dtls_get_cookie(uint8 *msg, size_t msglen, uint8 **cookie) {
DECL|dtls_get_epoch|macro|dtls_get_epoch
DECL|dtls_get_fragment_length|macro|dtls_get_fragment_length
DECL|dtls_get_peer|function|dtls_get_peer(const dtls_context_t *ctx, const session_t *session) {
DECL|dtls_get_sequence_number|macro|dtls_get_sequence_number
DECL|dtls_get_version|macro|dtls_get_version
DECL|dtls_handle_message|function|dtls_handle_message(dtls_context_t *ctx, session_t *session, uint8 *msg, int msglen)
DECL|dtls_handshake_type_to_name|function|static char *dtls_handshake_type_to_name(int type)
DECL|dtls_init|function|dtls_init() {
DECL|dtls_new_context|function|dtls_new_context(void *app_data) {
DECL|dtls_prepare_record|function|dtls_prepare_record(dtls_peer_t *peer, dtls_security_parameters_t *security, unsigned char type, uint8 *data_array[], size_t data_len_array[], size_t data_array_len, uint8 *sendbuf, size_t *rlen)
DECL|dtls_renegotiate|function|dtls_renegotiate(dtls_context_t *ctx, const session_t *dst)
DECL|dtls_retransmit|function|dtls_retransmit(dtls_context_t *context, netq_t *node) {
DECL|dtls_send_alert|function|dtls_send_alert(dtls_context_t *ctx, dtls_peer_t *peer, dtls_alert_level_t level,dtls_alert_t description)
DECL|dtls_send_ccs|function|dtls_send_ccs(dtls_context_t *ctx, dtls_peer_t *peer) {
DECL|dtls_send_certificate_ecdsa|function|dtls_send_certificate_ecdsa(dtls_context_t *ctx, dtls_peer_t *peer, const dtls_ecdsa_key_t *key)
DECL|dtls_send_certificate_verify_ecdh|function|dtls_send_certificate_verify_ecdh(dtls_context_t *ctx, dtls_peer_t *peer, const dtls_ecdsa_key_t *key)
DECL|dtls_send_client_hello|function|dtls_send_client_hello(dtls_context_t *ctx, dtls_peer_t *peer, uint8 cookie[], size_t cookie_length)
DECL|dtls_send_client_key_exchange|function|dtls_send_client_key_exchange(dtls_context_t *ctx, dtls_peer_t *peer)
DECL|dtls_send_finished|function|dtls_send_finished(dtls_context_t *ctx, dtls_peer_t *peer, const unsigned char *label, size_t labellen)
DECL|dtls_send_handshake_msg_hash|function|dtls_send_handshake_msg_hash(dtls_context_t *ctx, dtls_peer_t *peer, session_t *session, uint8 header_type, uint8 *data, size_t data_length,
DECL|dtls_send_handshake_msg|function|dtls_send_handshake_msg(dtls_context_t *ctx,dtls_peer_t *peer, uint8 header_type, uint8 *data, size_t data_length)
DECL|dtls_send_hello_request|function|dtls_send_hello_request(dtls_context_t *ctx, dtls_peer_t *peer)
DECL|dtls_send_multi|function|dtls_send_multi(dtls_context_t *ctx, dtls_peer_t *peer,dtls_security_parameters_t *security , session_t *session, unsigned char type, uint8 *buf_array[], size_t buf_len_array[], size_t buf_array_len)
DECL|dtls_send_server_certificate_request|function|dtls_send_server_certificate_request(dtls_context_t *ctx, dtls_peer_t *peer)
DECL|dtls_send_server_hello_done|function|dtls_send_server_hello_done(dtls_context_t *ctx, dtls_peer_t *peer)
DECL|dtls_send_server_hello_msgs|function|dtls_send_server_hello_msgs(dtls_context_t *ctx, dtls_peer_t *peer)
DECL|dtls_send_server_hello|function|dtls_send_server_hello(dtls_context_t *ctx, dtls_peer_t *peer)
DECL|dtls_send_server_key_exchange_ecdh|function|dtls_send_server_key_exchange_ecdh(dtls_context_t *ctx, dtls_peer_t *peer, const dtls_ecdsa_key_t *key)
DECL|dtls_send_server_key_exchange_psk|function|dtls_send_server_key_exchange_psk(dtls_context_t *ctx, dtls_peer_t *peer, const unsigned char *psk_hint, size_t len)
DECL|dtls_send|function|dtls_send(dtls_context_t *ctx, dtls_peer_t *peer, unsigned char type, uint8 *buf, size_t buflen)
DECL|dtls_set_content_type|macro|dtls_set_content_type
DECL|dtls_set_handshake_header|function|dtls_set_handshake_header(uint8 type, dtls_peer_t *peer, int length, int frag_offset, int frag_length, uint8 *buf)
DECL|dtls_set_length|macro|dtls_set_length
DECL|dtls_set_record_header|function|dtls_set_record_header(uint8 type, dtls_security_parameters_t *security, uint8 *buf)
DECL|dtls_set_version|macro|dtls_set_version
DECL|dtls_stop_retransmission|function|dtls_stop_retransmission(dtls_context_t *context, dtls_peer_t *peer) {
DECL|dtls_update_parameters|function|dtls_update_parameters(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *data, size_t data_length)
DECL|dtls_verify_peer|function|dtls_verify_peer(dtls_context_t *ctx, dtls_peer_t *peer, session_t *session, uint8 *data, size_t data_length)
DECL|dtls_write|function|dtls_write(struct dtls_context_t *ctx, session_t *dst, uint8 *buf, size_t len)
DECL|finalize_hs_hash|function|finalize_hs_hash(dtls_peer_t *peer, uint8 *buf) {
DECL|free_context|function|free_context(dtls_context_t *context) {
DECL|free_context|function|free_context(dtls_context_t *context) {
DECL|free_tx_bufs|variable|free_tx_bufs
DECL|handle_alert|function|handle_alert(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *record_header, uint8 *data, size_t data_length)
DECL|handle_ccs|function|handle_ccs(dtls_context_t *ctx, dtls_peer_t *peer, uint8 *record_header, uint8 *data, size_t data_length)
DECL|handle_handshake_msg|function|handle_handshake_msg(dtls_context_t *ctx, dtls_peer_t *peer, session_t *session, const dtls_peer_type role, const dtls_state_t state, uint8 *data, size_t data_length)
DECL|handle_handshake|function|handle_handshake(dtls_context_t *ctx, dtls_peer_t *peer, session_t *session, const dtls_peer_type role, const dtls_state_t state, uint8 *data, size_t data_length)
DECL|is_ecdsa_client_auth_supported|function|static inline int is_ecdsa_client_auth_supported(dtls_context_t *ctx)
DECL|is_ecdsa_supported|function|static inline int is_ecdsa_supported(dtls_context_t *ctx, int is_client)
DECL|is_psk_supported|function|static inline int is_psk_supported(dtls_context_t *ctx)
DECL|is_record|function|is_record(uint8 *msg, size_t msglen) {
DECL|is_tls_ecdhe_ecdsa_with_aes_128_ccm_8|function|static inline int is_tls_ecdhe_ecdsa_with_aes_128_ccm_8(dtls_cipher_t cipher)
DECL|is_tls_psk_with_aes_128_ccm_8|function|static inline int is_tls_psk_with_aes_128_ccm_8(dtls_cipher_t cipher)
DECL|known_cipher|function|known_cipher(dtls_context_t *ctx, dtls_cipher_t code, int is_client) {
DECL|malloc_context|function|malloc_context() {
DECL|malloc_context|function|malloc_context() {
DECL|mycookie|macro|mycookie
DECL|mycookie|macro|mycookie
DECL|mycookie|macro|mycookie
DECL|prf_label_client|variable|prf_label_client
DECL|prf_label_finished|variable|prf_label_finished
DECL|prf_label_key|variable|prf_label_key
DECL|prf_label_master|variable|prf_label_master
DECL|prf_label_server|variable|prf_label_server
DECL|the_dtls_context|variable|the_dtls_context
DECL|update_hs_hash|function|update_hs_hash(dtls_peer_t *peer, uint8 *data, size_t length) {
DECL|verify_ext_cert_type|function|static int verify_ext_cert_type(uint8 *data, size_t data_length) {
DECL|verify_ext_ec_point_formats|function|static int verify_ext_ec_point_formats(uint8 *data, size_t data_length) {
DECL|verify_ext_eliptic_curves|function|static int verify_ext_eliptic_curves(uint8 *data, size_t data_length) {
