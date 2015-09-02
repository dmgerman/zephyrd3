DECL|COAP_CONTEXT_BLOCKING_REQUEST|macro|COAP_CONTEXT_BLOCKING_REQUEST
DECL|COAP_CONTEXT_CONNECT|macro|COAP_CONTEXT_CONNECT
DECL|COAP_CONTEXT_CONNECT|macro|COAP_CONTEXT_CONNECT
DECL|COAP_CONTEXT_H_|macro|COAP_CONTEXT_H_
DECL|COAP_CONTEXT_NONE|macro|COAP_CONTEXT_NONE
DECL|WITH_DTLS|macro|WITH_DTLS
DECL|WITH_DTLS|macro|WITH_DTLS
DECL|addr|member|struct net_addr addr;
DECL|buf|member|struct net_buf *buf;
DECL|coap_context_event|macro|coap_context_event
DECL|coap_context_has_errors|function|coap_context_has_errors(const coap_context_t *coap_ctx)
DECL|coap_context_init|function|coap_context_init(void)
DECL|coap_context_is_connected|function|coap_context_is_connected(const coap_context_t *coap_ctx)
DECL|coap_context_is_connecting|function|coap_context_is_connecting(const coap_context_t *coap_ctx)
DECL|coap_context_is_secure|function|coap_context_is_secure(const coap_context_t *coap_ctx)
DECL|coap_context_set_key_handlers|macro|coap_context_set_key_handlers
DECL|coap_context_t|typedef|} coap_context_t;
DECL|coap_context|struct|typedef struct coap_context {
DECL|dtls_context|member|struct dtls_context_t *dtls_context;
DECL|dtls_get_ecdsa_key_t|typedef|typedef int (*dtls_get_ecdsa_key_t)(struct dtls_context_t *ctx,
DECL|dtls_get_psk_info_t|typedef|typedef int (*dtls_get_psk_info_t)(struct dtls_context_t *ctx,
DECL|dtls_handler|member|dtls_handler_t dtls_handler;
DECL|dtls_verify_ecdsa_key_t|typedef|typedef int (*dtls_verify_ecdsa_key_t)(struct dtls_context_t *ctx,
DECL|is_used|member|uint8_t is_used;
DECL|my_addr|member|struct net_addr my_addr;
DECL|my_port|member|uint16_t my_port;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|port|member|uint16_t port;
DECL|process|member|struct process *process;
DECL|status|member|uint8_t status;
