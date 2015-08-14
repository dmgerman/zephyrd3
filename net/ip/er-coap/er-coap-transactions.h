DECL|COAP_RESPONSE_TIMEOUT_BACKOFF_MASK|macro|COAP_RESPONSE_TIMEOUT_BACKOFF_MASK
DECL|COAP_RESPONSE_TIMEOUT_TICKS|macro|COAP_RESPONSE_TIMEOUT_TICKS
DECL|COAP_TRANSACTIONS_H_|macro|COAP_TRANSACTIONS_H_
DECL|addr|member|uip_ipaddr_t addr;
DECL|callback_data|member|void *callback_data;
DECL|callback|member|restful_response_handler callback;
DECL|coap_ctx|member|coap_context_t *coap_ctx;
DECL|coap_transaction_t|typedef|} coap_transaction_t;
DECL|coap_transaction|struct|typedef struct coap_transaction {
DECL|mid|member|uint16_t mid;
DECL|next|member|struct coap_transaction *next; /* for LIST */
DECL|packet_len|member|uint16_t packet_len;
DECL|packet|member|uint8_t packet[COAP_MAX_PACKET_SIZE + 1]; /* +1 for the terminating '\0' which will not be sent
DECL|port|member|uint16_t port;
DECL|retrans_counter|member|uint8_t retrans_counter;
DECL|retrans_timer|member|struct etimer retrans_timer;
