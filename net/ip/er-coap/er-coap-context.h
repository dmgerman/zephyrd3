DECL|COAP_CONTEXT_BLOCKING_REQUEST|macro|COAP_CONTEXT_BLOCKING_REQUEST
DECL|COAP_CONTEXT_CONNECT|macro|COAP_CONTEXT_CONNECT
DECL|COAP_CONTEXT_CONNECT|macro|COAP_CONTEXT_CONNECT
DECL|COAP_CONTEXT_H_|macro|COAP_CONTEXT_H_
DECL|COAP_CONTEXT_NONE|macro|COAP_CONTEXT_NONE
DECL|addr|member|uip_ipaddr_t addr;
DECL|coap_context_close|function|coap_context_close(coap_context_t *coap_ctx)
DECL|coap_context_connect|function|coap_context_connect(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port)
DECL|coap_context_event|macro|coap_context_event
DECL|coap_context_has_errors|function|coap_context_has_errors(const coap_context_t *coap_ctx)
DECL|coap_context_init|function|coap_context_init(void)
DECL|coap_context_is_connected|function|coap_context_is_connected(const coap_context_t *coap_ctx)
DECL|coap_context_is_connecting|function|coap_context_is_connecting(const coap_context_t *coap_ctx)
DECL|coap_context_is_secure|function|coap_context_is_secure(const coap_context_t *coap_ctx)
DECL|coap_context_new|function|coap_context_new(uint16_t port)
DECL|coap_context_send_message|function|coap_context_send_message(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, const uint8_t *data, uint16_t length)
DECL|coap_context_t|typedef|} coap_context_t;
DECL|coap_context|struct|typedef struct coap_context {
DECL|conn|member|struct uip_udp_conn *conn;
DECL|dtls_context|member|struct dtls_context_t *dtls_context;
DECL|dtls_handler|member|dtls_handler_t dtls_handler;
DECL|is_used|member|uint8_t is_used;
DECL|port|member|uint16_t port;
DECL|process|member|struct process *process;
DECL|status|member|uint8_t status;
