DECL|COAP_OBSERVER_URL_LEN|macro|COAP_OBSERVER_URL_LEN
DECL|COAP_OBSERVE_H_|macro|COAP_OBSERVE_H_
DECL|addr|member|uip_ipaddr_t addr;
DECL|buffer|member|uint8_t buffer[COAP_MAX_PACKET_SIZE + 1];
DECL|coap_ctx|member|coap_context_t *coap_ctx;
DECL|coap_observable_t|typedef|} coap_observable_t;
DECL|coap_observable|struct|typedef struct coap_observable {
DECL|coap_observer_t|typedef|} coap_observer_t;
DECL|coap_observer|struct|typedef struct coap_observer {
DECL|last_mid|member|uint16_t last_mid;
DECL|next|member|struct coap_observer *next; /* for LIST */
DECL|notification|member|coap_packet_t notification;
DECL|obs_counter|member|int32_t obs_counter;
DECL|observe_clock|member|uint32_t observe_clock;
DECL|observers|member|list_t observers;
DECL|orphan_timer|member|struct stimer orphan_timer;
DECL|port|member|uint16_t port;
DECL|retrans_counter|member|uint8_t retrans_counter;
DECL|retrans_timer|member|struct etimer retrans_timer;
DECL|token_len|member|uint8_t token_len;
DECL|token|member|uint8_t token[COAP_TOKEN_LEN];
DECL|url|member|char url[COAP_OBSERVER_URL_LEN];
