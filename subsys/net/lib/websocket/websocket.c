DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|HTTP_CRLF|macro|HTTP_CRLF
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|WS_MAGIC|macro|WS_MAGIC
DECL|check_ws_headers|function|static bool check_ws_headers(struct http_ctx *ctx, struct http_parser *parser, int *ws_sec_key, int *host, int *subprotocol)
DECL|field_contains|function|static bool field_contains(const char *field, int field_len, const char *str, int str_len)
DECL|prepare_reply|function|static struct net_pkt *prepare_reply(struct http_ctx *ctx, int ws_sec_key, int host, int subprotocol)
DECL|ws_headers_complete|function|int ws_headers_complete(struct http_parser *parser)
DECL|ws_mask_payload|function|static void ws_mask_payload(u8_t *payload, size_t payload_len, u32_t masking_value)
DECL|ws_mask_pkt|function|void ws_mask_pkt(struct net_pkt *pkt, u32_t masking_value, u32_t *data_read)
DECL|ws_send_msg|function|int ws_send_msg(struct http_ctx *ctx, u8_t *payload, size_t payload_len,enum ws_opcode opcode, bool mask, bool final, const struct sockaddr *dst, void *user_send_data)
DECL|ws_strip_header|function|int ws_strip_header(struct net_pkt *pkt, bool *masked, u32_t *mask_value, u32_t *message_length, u32_t *message_type_flag, u32_t *header_len)
