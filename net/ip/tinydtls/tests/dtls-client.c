DECL|DEFAULT_PORT|macro|DEFAULT_PORT
DECL|DTLS_CLIENT_CMD_CLOSE|macro|DTLS_CLIENT_CMD_CLOSE
DECL|DTLS_CLIENT_CMD_RENEGOTIATE|macro|DTLS_CLIENT_CMD_RENEGOTIATE
DECL|MAX_READ_BUF|macro|MAX_READ_BUF
DECL|PSK_DEFAULT_IDENTITY|macro|PSK_DEFAULT_IDENTITY
DECL|PSK_DEFAULT_KEY|macro|PSK_DEFAULT_KEY
DECL|PSK_ID_MAXLEN|macro|PSK_ID_MAXLEN
DECL|PSK_MAXLEN|macro|PSK_MAXLEN
DECL|PSK_OPTIONS|macro|PSK_OPTIONS
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|__APPLE_USE_RFC_3542|macro|__APPLE_USE_RFC_3542
DECL|buf|variable|buf
DECL|cb|variable|cb
DECL|dtls_context|variable|dtls_context
DECL|dtls_handle_read|function|dtls_handle_read(struct dtls_context_t *ctx) {
DECL|dtls_handle_signal|function|static void dtls_handle_signal(int sig)
DECL|dtls_str|typedef|} dtls_str;
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|get_ecdsa_key|function|get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_psk_info|function|get_psk_info(struct dtls_context_t *ctx UNUSED_PARAM, const session_t *session UNUSED_PARAM, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|handle_stdin|function|handle_stdin() {
DECL|length|member|size_t length; /* length of string */
DECL|len|variable|len
DECL|main|function|main(int argc, char **argv) {
DECL|output_file|variable|output_file
DECL|psk_id_length|variable|psk_id_length
DECL|psk_id|variable|psk_id
DECL|psk_key_length|variable|psk_key_length
DECL|psk_key|variable|psk_key
DECL|read_from_file|function|read_from_file(char *arg, unsigned char *buf, size_t max_buf_len) {
DECL|read_from_peer|function|read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|resolve_address|function|resolve_address(const char *server, struct sockaddr *dst) {
DECL|send_to_peer|function|send_to_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|s|member|unsigned char *s; /* string data */
DECL|try_send|function|try_send(struct dtls_context_t *ctx, session_t *dst) {
DECL|usage|function|usage( const char *program, const char *version) {
DECL|verify_ecdsa_key|function|verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
