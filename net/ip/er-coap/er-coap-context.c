DECL|DEBUG|macro|DEBUG
DECL|MAX_CONTEXTS|macro|MAX_CONTEXTS
DECL|MAX_CONTEXTS|macro|MAX_CONTEXTS
DECL|PROCESS_THREAD|function|PROCESS_THREAD(coap_context_process, ev, data, buf)
DECL|STATUS_ALERT|macro|STATUS_ALERT
DECL|STATUS_CONNECTED|macro|STATUS_CONNECTED
DECL|STATUS_CONNECTING|macro|STATUS_CONNECTING
DECL|coap_context_close|function|coap_context_close(coap_context_t *coap_ctx)
DECL|coap_context_close|function|coap_context_close(coap_context_t *coap_ctx)
DECL|coap_context_connect|function|coap_context_connect(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port)
DECL|coap_context_event|variable|coap_context_event
DECL|coap_context_has_errors|function|coap_context_has_errors(const coap_context_t *coap_ctx)
DECL|coap_context_init|function|coap_context_init(void)
DECL|coap_context_is_connected|function|coap_context_is_connected(const coap_context_t *coap_ctx)
DECL|coap_context_is_connecting|function|coap_context_is_connecting(const coap_context_t *coap_ctx)
DECL|coap_context_is_secure|function|coap_context_is_secure(const coap_context_t *coap_ctx)
DECL|coap_context_listen|function|int coap_context_listen(coap_context_t *coap_ctx, uip_ipaddr_t *peer_addr,uint16_t peer_port)
DECL|coap_context_new|function|coap_context_new(uip_ipaddr_t *my_addr, uint16_t port)
DECL|coap_context_new|function|coap_context_new(uip_ipaddr_t *my_addr, uint16_t port)
DECL|coap_context_reply|function|int coap_context_reply(coap_context_t *ctx, struct net_buf *buf)
DECL|coap_context_send_message|function|coap_context_send_message(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, const uint8_t *data, uint16_t length)
DECL|coap_context_send_message|function|coap_context_send_message(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, const uint8_t *data, uint16_t length)
DECL|coap_context_set_key_handlers|function|coap_context_set_key_handlers(coap_context_t *ctx, dtls_get_psk_info_t get_psk_info, dtls_get_ecdsa_key_t get_ecdsa_key, dtls_verify_ecdsa_key_t verify_ecdsa_key)
DECL|coap_context_wait_data|function|int coap_context_wait_data(coap_context_t *coap_ctx, int32_t ticks)
DECL|coap_context_wait_data|function|int coap_context_wait_data(coap_context_t *coap_ctx, int32_t ticks)
DECL|coap_contexts|variable|coap_contexts
DECL|event|function|event(struct dtls_context_t *ctx, session_t *session, dtls_alert_level_t level, unsigned short code)
DECL|get_from_peer|function|get_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|prepare_and_send_buf|function|static int prepare_and_send_buf(coap_context_t *ctx, session_t *session,uint8_t *data, size_t len)
DECL|send_to_peer|function|send_to_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
