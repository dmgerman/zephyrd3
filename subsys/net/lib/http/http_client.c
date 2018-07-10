DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|HTTP_CONTENT_LEN|macro|HTTP_CONTENT_LEN
DECL|HTTP_CONTENT_TYPE|macro|HTTP_CONTENT_TYPE
DECL|HTTP_CONT_LEN_SIZE|macro|HTTP_CONT_LEN_SIZE
DECL|HTTP_EOF|macro|HTTP_EOF
DECL|HTTP_HOST|macro|HTTP_HOST
DECL|HTTP_NETWORK_TIMEOUT|macro|HTTP_NETWORK_TIMEOUT
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_NUM_DIGITS|macro|MAX_NUM_DIGITS
DECL|MAX_OUTPUT_LEN|macro|MAX_OUTPUT_LEN
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|RC_STR|macro|RC_STR
DECL|client_reset|function|int client_reset(struct http_ctx *ctx)
DECL|http_client_init|function|int http_client_init(struct http_ctx *ctx, const char *server, u16_t server_port, struct sockaddr *server_addr, s32_t timeout)
DECL|http_client_send_req|function|int http_client_send_req(struct http_ctx *ctx, struct http_request *req, http_response_cb_t cb, u8_t *response_buf, size_t response_buf_len,
DECL|http_client_set_tls|function|int http_client_set_tls(struct http_ctx *ctx,u8_t *request_buf, size_t request_buf_len, u8_t *personalization_data, size_t personalization_data_len,
DECL|http_closed|function|static void http_closed(struct net_app_ctx *app_ctx,int status, void *user_data)
DECL|http_connected|function|static void http_connected(struct net_app_ctx *app_ctx, int status, void *user_data)
DECL|http_data_sent|function|static void http_data_sent(struct net_app_ctx *app_ctx, int status, void *user_data_send, void *user_data)
DECL|http_received|function|static void http_received(struct net_app_ctx *app_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|http_request_cancel|function|int http_request_cancel(struct http_ctx *ctx)
DECL|http_request|function|int http_request(struct http_ctx *ctx, struct http_request *req, s32_t timeout, void *user_data)
DECL|on_body|function|static int on_body(struct http_parser *parser, const char *at, size_t length)
DECL|on_chunk_complete|function|static int on_chunk_complete(struct http_parser *parser)
DECL|on_chunk_header|function|static int on_chunk_header(struct http_parser *parser)
DECL|on_header_field|function|static int on_header_field(struct http_parser *parser, const char *at, size_t length)
DECL|on_header_value|function|static int on_header_value(struct http_parser *parser, const char *at, size_t length)
DECL|on_headers_complete|function|static int on_headers_complete(struct http_parser *parser)
DECL|on_message_begin|function|static int on_message_begin(struct http_parser *parser)
DECL|on_message_complete|function|static int on_message_complete(struct http_parser *parser)
DECL|on_status|function|static int on_status(struct http_parser *parser, const char *at, size_t length)
DECL|on_url|function|static int on_url(struct http_parser *parser, const char *at, size_t length)
DECL|print_header_field|function|static void print_header_field(size_t len, const char *str)
DECL|print_info|function|static inline void print_info(struct http_ctx *ctx, enum http_method method)
DECL|sprint_addr|function|static void sprint_addr(char *buf, int len,sa_family_t family, struct sockaddr *addr)
