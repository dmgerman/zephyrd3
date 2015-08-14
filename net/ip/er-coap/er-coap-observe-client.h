DECL|COAP_MAX_OBSERVEES|macro|COAP_MAX_OBSERVEES
DECL|COAP_MAX_OBSERVEES|macro|COAP_MAX_OBSERVEES
DECL|COAP_OBSERVE_CLIENT|macro|COAP_OBSERVE_CLIENT
DECL|COAP_OBSERVING_CLIENT_H_|macro|COAP_OBSERVING_CLIENT_H_
DECL|ERROR_RESPONSE_CODE|enumerator|ERROR_RESPONSE_CODE,
DECL|IS_RESPONSE_CODE_2_XX|macro|IS_RESPONSE_CODE_2_XX
DECL|NOTIFICATION_OK|enumerator|NOTIFICATION_OK,
DECL|NO_REPLY_FROM_SERVER|enumerator|NO_REPLY_FROM_SERVER,
DECL|OBSERVE_NOT_SUPPORTED|enumerator|OBSERVE_NOT_SUPPORTED,
DECL|OBSERVE_OK|enumerator|OBSERVE_OK,
DECL|addr|member|uip_ipaddr_t addr;
DECL|coap_notification_flag_t|typedef|} coap_notification_flag_t;
DECL|coap_observee_s|struct|struct coap_observee_s {
DECL|coap_observee_t|typedef|typedef struct coap_observee_s coap_observee_t;
DECL|ctx|member|coap_context_t ctx;
DECL|data|member|void *data; /* generic pointer for storing user data */
DECL|last_observe|member|uint32_t last_observe;
DECL|next|member|coap_observee_t *next; /* for LIST */
DECL|notification_callback_t|typedef|typedef void (*notification_callback_t)(coap_observee_t *subject,
DECL|notification_callback|member|notification_callback_t notification_callback;
DECL|port|member|uint16_t port;
DECL|token_len|member|uint8_t token_len;
DECL|token|member|uint8_t token[COAP_TOKEN_LEN];
DECL|url|member|const char *url;
