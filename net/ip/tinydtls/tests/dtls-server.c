DECL|DEFAULT_PORT|macro|DEFAULT_PORT
DECL|DTLS_SERVER_CMD_CLOSE|macro|DTLS_SERVER_CMD_CLOSE
DECL|DTLS_SERVER_CMD_RENEGOTIATE|macro|DTLS_SERVER_CMD_RENEGOTIATE
DECL|__APPLE_USE_RFC_3542|macro|__APPLE_USE_RFC_3542
DECL|cb|variable|cb
DECL|dtls_handle_read|function|dtls_handle_read(struct dtls_context_t *ctx) {
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|get_ecdsa_key|function|get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_psk_info|function|get_psk_info(struct dtls_context_t *ctx, const session_t *session, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|main|function|main(int argc, char **argv) {
DECL|read_from_peer|function|read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|resolve_address|function|resolve_address(const char *server, struct sockaddr *dst) {
DECL|send_to_peer|function|send_to_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|usage|function|usage(const char *program, const char *version) {
DECL|verify_ecdsa_key|function|verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
