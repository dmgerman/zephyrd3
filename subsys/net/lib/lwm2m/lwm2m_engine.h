DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|COAP_REPLY_STATUS_ERROR|macro|COAP_REPLY_STATUS_ERROR
DECL|COAP_REPLY_STATUS_NONE|macro|COAP_REPLY_STATUS_NONE
DECL|COAP_RESPONSE_CODE_CLASS|macro|COAP_RESPONSE_CODE_CLASS
DECL|COAP_RESPONSE_CODE_DETAIL|macro|COAP_RESPONSE_CODE_DETAIL
DECL|LWM2M_ENGINE_H|macro|LWM2M_ENGINE_H
DECL|LWM2M_FORMAT_APP_EXI|macro|LWM2M_FORMAT_APP_EXI
DECL|LWM2M_FORMAT_APP_JSON|macro|LWM2M_FORMAT_APP_JSON
DECL|LWM2M_FORMAT_APP_LINK_FORMAT|macro|LWM2M_FORMAT_APP_LINK_FORMAT
DECL|LWM2M_FORMAT_APP_OCTET_STREAM|macro|LWM2M_FORMAT_APP_OCTET_STREAM
DECL|LWM2M_FORMAT_NONE|macro|LWM2M_FORMAT_NONE
DECL|LWM2M_FORMAT_OMA_JSON|macro|LWM2M_FORMAT_OMA_JSON
DECL|LWM2M_FORMAT_OMA_OLD_JSON|macro|LWM2M_FORMAT_OMA_OLD_JSON
DECL|LWM2M_FORMAT_OMA_OLD_OPAQUE|macro|LWM2M_FORMAT_OMA_OLD_OPAQUE
DECL|LWM2M_FORMAT_OMA_OLD_TLV|macro|LWM2M_FORMAT_OMA_OLD_TLV
DECL|LWM2M_FORMAT_OMA_PLAIN_TEXT|macro|LWM2M_FORMAT_OMA_PLAIN_TEXT
DECL|LWM2M_FORMAT_OMA_TLV|macro|LWM2M_FORMAT_OMA_TLV
DECL|LWM2M_FORMAT_PLAIN_TEXT|macro|LWM2M_FORMAT_PLAIN_TEXT
DECL|LWM2M_MSG_TOKEN_LEN_SKIP|macro|LWM2M_MSG_TOKEN_LEN_SKIP
DECL|LWM2M_PROTOCOL_VERSION|macro|LWM2M_PROTOCOL_VERSION
DECL|NOTIFY_OBSERVER_PATH|macro|NOTIFY_OBSERVER_PATH
DECL|NOTIFY_OBSERVER|macro|NOTIFY_OBSERVER
DECL|code|member|u8_t code;
DECL|cpkt|member|struct coap_packet cpkt;
DECL|ctx|member|struct lwm2m_ctx *ctx;
DECL|lwm2m_message_timeout_cb_t|typedef|typedef void (*lwm2m_message_timeout_cb_t)(struct lwm2m_message *msg);
DECL|lwm2m_message|struct|struct lwm2m_message {
DECL|message_timeout_cb|member|lwm2m_message_timeout_cb_t message_timeout_cb;
DECL|mid|member|u16_t mid;
DECL|pending|member|struct coap_pending *pending;
DECL|reply_cb|member|coap_reply_t reply_cb;
DECL|reply|member|struct coap_reply *reply;
DECL|send_attempts|member|u8_t send_attempts;
DECL|tkl|member|u8_t tkl;
DECL|token|member|u8_t *token;
DECL|type|member|u8_t type;
DECL|udp_request_handler_cb_t|typedef|typedef int (*udp_request_handler_cb_t)(struct coap_packet *request,
