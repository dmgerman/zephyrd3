DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|DNS_WAIT_SEM|macro|DNS_WAIT_SEM
DECL|DNS_WAIT|macro|DNS_WAIT
DECL|HTTP_CONTENT_TYPE|macro|HTTP_CONTENT_TYPE
DECL|HTTP_CONT_LEN_SIZE|macro|HTTP_CONT_LEN_SIZE
DECL|HTTP_EOF|macro|HTTP_EOF
DECL|MAX_NUM_DIGITS|macro|MAX_NUM_DIGITS
DECL|MAX_OUTPUT_LEN|macro|MAX_OUTPUT_LEN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|client_reset|function|int client_reset(struct http_client_ctx *ctx)
DECL|ctx|member|struct http_client_ctx *ctx;
DECL|dns_cb|function|static void dns_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|get_local_addr|function|static int get_local_addr(struct http_client_ctx *ctx)
DECL|http_client_init|function|int http_client_init(struct http_client_ctx *ctx, const char *server, u16_t server_port)
DECL|http_client_release|function|void http_client_release(struct http_client_ctx *ctx)
DECL|http_client_send_req|function|int http_client_send_req(struct http_client_ctx *ctx, struct http_client_request *req, http_response_cb_t cb, u8_t *response_buf, size_t response_buf_len,
DECL|http_receive_cb|function|static void http_receive_cb(struct http_client_ctx *ctx, struct net_pkt *pkt)
DECL|http_request|function|int http_request(struct net_context *net_ctx, struct http_client_request *req, s32_t timeout)
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
DECL|print_info|function|static inline void print_info(struct http_client_ctx *ctx,enum http_method method)
DECL|recv_cb|function|static void recv_cb(struct net_context *net_ctx, struct net_pkt *pkt, int status, void *data)
DECL|resolve_name|function|static int resolve_name(struct http_client_ctx *ctx,const char *server, enum dns_query_type type)
DECL|set_remote_addr|function|static inline int set_remote_addr(struct http_client_ctx *ctx, const char *server, u16_t server_port)
DECL|sprint_addr|function|static void sprint_addr(char *buf, int len,sa_family_t family, struct sockaddr *addr)
DECL|tcp_connect|function|static int tcp_connect(struct http_client_ctx *ctx)
DECL|tcp_disconnect|function|static void tcp_disconnect(struct http_client_ctx *ctx)
DECL|waiter|struct|struct waiter {
DECL|wait|member|struct k_sem wait;
