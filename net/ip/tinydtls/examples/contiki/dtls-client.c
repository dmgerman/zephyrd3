DECL|DEBUG|macro|DEBUG
DECL|MAX_PAYLOAD_LEN|macro|MAX_PAYLOAD_LEN
DECL|PROCESS_THREAD|function|PROCESS_THREAD(udp_server_process, ev, data)
DECL|PSK_DEFAULT_IDENTITY|macro|PSK_DEFAULT_IDENTITY
DECL|PSK_DEFAULT_KEY|macro|PSK_DEFAULT_KEY
DECL|PSK_ID_MAXLEN|macro|PSK_ID_MAXLEN
DECL|PSK_MAXLEN|macro|PSK_MAXLEN
DECL|QUOTEME|macro|QUOTEME
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_UDP_BUF|macro|UIP_UDP_BUF
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|_QUOTEME|macro|_QUOTEME
DECL|buflen|variable|buflen
DECL|buf|variable|buf
DECL|client_conn|variable|client_conn
DECL|dtls_context|variable|dtls_context
DECL|dtls_handle_read|function|dtls_handle_read(dtls_context_t *ctx) {
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|get_ecdsa_key|function|get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_psk_info|function|get_psk_info(struct dtls_context_t *ctx UNUSED_PARAM, const session_t *session UNUSED_PARAM, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|init_dtls|function|init_dtls(session_t *dst) {
DECL|print_local_addresses|function|print_local_addresses(void)
DECL|psk_id_length|variable|psk_id_length
DECL|psk_id|variable|psk_id
DECL|psk_key_length|variable|psk_key_length
DECL|psk_key|variable|psk_key
DECL|read_from_peer|function|read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|send_to_peer|function|send_to_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|set_connection_address|function|set_connection_address(uip_ipaddr_t *ipaddr)
DECL|try_send|function|try_send(struct dtls_context_t *ctx, session_t *dst) {
DECL|udp_server_process|variable|udp_server_process
DECL|verify_ecdsa_key|function|verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
