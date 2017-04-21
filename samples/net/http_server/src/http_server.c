DECL|HTTP_BUF_CTR|macro|HTTP_BUF_CTR
DECL|HTTP_BUF_SIZE|macro|HTTP_BUF_SIZE
DECL|URL_DEFAULT_HANDLER_INDEX|macro|URL_DEFAULT_HANDLER_INDEX
DECL|http_accept_cb|function|void http_accept_cb(struct net_context *net_ctx, struct sockaddr *addr, socklen_t addr_len, int status, void *data)
DECL|http_auth|function|int http_auth(struct http_server_ctx *ctx)
DECL|http_ctx_get|function|struct http_server_ctx *http_ctx_get(void)
DECL|http_ctx_init|function|int http_ctx_init(void)
DECL|http_ctx_release|function|static int http_ctx_release(struct http_server_ctx *http_ctx)
DECL|http_ctx_set|function|int http_ctx_set(struct http_server_ctx *http_ctx, struct net_context *net_ctx)
DECL|http_rx_tx|function|void http_rx_tx(struct net_context *net_ctx, struct net_pkt *rx, int status,void *user_data)
DECL|http_tx|function|static void http_tx(struct http_server_ctx *http_ctx)
DECL|http_url_add|function|int http_url_add(const char *url, u8_t flags, int (*write_cb)(struct http_server_ctx *http_ctx))
DECL|http_url_cmp|function|static int http_url_cmp(const char *url, u16_t url_len,const char *root_url, u16_t root_url_len)
DECL|http_url_default_handler|function|int http_url_default_handler(int (*write_cb)(struct http_server_ctx *))
DECL|http_url_find|function|static struct http_root_url *http_url_find(struct http_server_ctx *http_ctx)
DECL|on_header_field|function|int on_header_field(struct http_parser *parser, const char *at, size_t length)
DECL|on_header_value|function|int on_header_value(struct http_parser *parser, const char *at, size_t length)
DECL|on_url|function|int on_url(struct http_parser *parser, const char *at, size_t length)
DECL|parser_init|function|int parser_init(struct http_server_ctx *ctx)
DECL|parser_parse_request|function|int parser_parse_request(struct http_server_ctx *ctx, struct net_buf *rx)
DECL|server_collection|variable|server_collection
DECL|url_ctx|variable|url_ctx
