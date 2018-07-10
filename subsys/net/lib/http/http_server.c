DECL|ADDR_LEN|macro|ADDR_LEN
DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|HTTPS_DEFAULT_PORT|macro|HTTPS_DEFAULT_PORT
DECL|HTTP_DEFAULT_PORT|macro|HTTP_DEFAULT_PORT
DECL|HTTP_STATUS_400_BR|macro|HTTP_STATUS_400_BR
DECL|HTTP_STATUS_500_BR|macro|HTTP_STATUS_500_BR
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PORT_LEN|macro|PORT_LEN
DECL|PORT_STR|macro|PORT_STR
DECL|RC_STR|macro|RC_STR
DECL|_http_change_state|function|void _http_change_state(struct http_ctx *ctx,enum http_state new_state, const char *func, int line)
DECL|ctx_mon|variable|ctx_mon
DECL|get_server_ctx|function|static struct net_context *get_server_ctx(struct net_app_ctx *ctx, const struct sockaddr *dst)
DECL|http_closed|function|static void http_closed(struct net_app_ctx *app_ctx,int status, void *user_data)
DECL|http_conn|variable|http_conn
DECL|http_data_sent|function|static void http_data_sent(struct net_app_ctx *app_ctx, int status, void *user_data_send, void *user_data)
DECL|http_process_recv|function|static int http_process_recv(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_received|function|static void http_received(struct net_app_ctx *app_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|http_send_error|function|int http_send_error(struct http_ctx *ctx, int code, u8_t *html_payload, size_t html_len, const struct sockaddr *dst)
DECL|http_server_add_default|function|struct http_root_url *http_server_add_default(struct http_server_urls *my, http_url_cb_t cb)
DECL|http_server_add_url|function|struct http_root_url *http_server_add_url(struct http_server_urls *my, const char *url, u8_t flags)
DECL|http_server_conn_add|function|void http_server_conn_add(struct http_ctx *ctx)
DECL|http_server_conn_del|function|void http_server_conn_del(struct http_ctx *ctx)
DECL|http_server_conn_foreach|function|void http_server_conn_foreach(http_server_cb_t cb, void *user_data)
DECL|http_server_conn_monitor|function|void http_server_conn_monitor(http_server_cb_t cb, void *user_data)
DECL|http_server_del_default|function|int http_server_del_default(struct http_server_urls *my)
DECL|http_server_del_url|function|int http_server_del_url(struct http_server_urls *my, const char *url)
DECL|http_server_disable|function|int http_server_disable(struct http_ctx *ctx)
DECL|http_server_enable|function|int http_server_enable(struct http_ctx *ctx)
DECL|http_server_init|function|int http_server_init(struct http_ctx *ctx, struct http_server_urls *urls, struct sockaddr *server_addr, u8_t *request_buf, size_t request_buf_len,
DECL|http_server_set_tls|function|int http_server_set_tls(struct http_ctx *ctx,const char *server_banner, u8_t *personalization_data, size_t personalization_data_len, net_app_cert_cb_t cert_cb,
DECL|http_state_str|function|const char * const http_state_str(enum http_state state)
DECL|http_url_cmp|function|static int http_url_cmp(const char *url, u16_t url_len,const char *root_url, u16_t root_url_len)
DECL|http_url_find|function|struct http_root_url *http_url_find(struct http_ctx *ctx, enum http_url_flags flags)
DECL|init_http_parser|function|static int init_http_parser(struct http_ctx *ctx)
DECL|init_net|function|static void init_net(struct http_ctx *ctx, struct sockaddr *server_addr, u16_t port)
DECL|mon_user_data|variable|mon_user_data
DECL|new_client|function|static inline void new_client(struct http_ctx *ctx, enum http_connection_type type, struct net_app_ctx *app_ctx, const struct sockaddr *dst)
DECL|new_server|function|static inline void new_server(struct http_ctx *ctx, const char *server_banner, const struct sockaddr *addr)
DECL|on_header_field|function|static int on_header_field(struct http_parser *parser, const char *at, size_t length)
DECL|on_header_value|function|static int on_header_value(struct http_parser *parser, const char *at, size_t length)
DECL|on_headers_complete|function|static int on_headers_complete(struct http_parser *parser)
DECL|on_url|function|static int on_url(struct http_parser *parser, const char *at, size_t length)
DECL|sprint_ipaddr|function|static char *sprint_ipaddr(char *buf, int buflen, const struct sockaddr *addr)
DECL|url_connected|function|static void url_connected(struct http_ctx *ctx, enum http_connection_type type, const struct sockaddr *dst)
DECL|validate_state_transition|function|static void validate_state_transition(struct http_ctx *ctx, enum http_state current, enum http_state new)
