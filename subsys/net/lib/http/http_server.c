DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|DEBUG_THRESHOLD|macro|DEBUG_THRESHOLD
DECL|HTTPS_DEFAULT_PORT|macro|HTTPS_DEFAULT_PORT
DECL|HTTP_DEFAULT_PORT|macro|HTTP_DEFAULT_PORT
DECL|HTTP_STATUS_200_OK|macro|HTTP_STATUS_200_OK
DECL|HTTP_STATUS_400_BR|macro|HTTP_STATUS_400_BR
DECL|HTTP_STATUS_403_FBD|macro|HTTP_STATUS_403_FBD
DECL|HTTP_STATUS_404_NF|macro|HTTP_STATUS_404_NF
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|PORT_STR|macro|PORT_STR
DECL|PORT_STR|macro|PORT_STR
DECL|RC_STR|macro|RC_STR
DECL|RX_EXTRA_DEBUG|macro|RX_EXTRA_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|accept_cb|function|static void accept_cb(struct net_context *net_ctx, struct sockaddr *addr, socklen_t addrlen, int status, void *data)
DECL|block|member|struct k_mem_block block;
DECL|ctx_mon|variable|ctx_mon
DECL|entropy_source|function|static int entropy_source(void *data, unsigned char *output, size_t len, size_t *olen)
DECL|http_add_chunk|function|static int http_add_chunk(struct net_pkt *pkt, s32_t timeout, const char *str)
DECL|http_add_header|function|static int http_add_header(struct net_pkt *pkt, s32_t timeout, const char *str)
DECL|http_conn|variable|http_conn
DECL|http_process_recv|function|static int http_process_recv(struct http_server_ctx *http_ctx)
DECL|http_recv|function|static void http_recv(struct net_context *net_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|http_response_400|function|int http_response_400(struct http_server_ctx *ctx, const char *html_payload)
DECL|http_response_403|function|int http_response_403(struct http_server_ctx *ctx, const char *html_payload)
DECL|http_response_404|function|int http_response_404(struct http_server_ctx *ctx, const char *html_payload)
DECL|http_response_wait|function|int http_response_wait(struct http_server_ctx *ctx, const char *http_header, const char *html_payload, s32_t timeout)
DECL|http_response|function|int http_response(struct http_server_ctx *ctx, const char *http_header, const char *html_payload)
DECL|http_server_add_default|function|struct http_root_url *http_server_add_default(struct http_server_urls *my, http_url_cb_t write_cb)
DECL|http_server_add_url|function|struct http_root_url *http_server_add_url(struct http_server_urls *my, const char *url, u8_t flags, http_url_cb_t write_cb)
DECL|http_server_conn_add|function|static void http_server_conn_add(struct http_server_ctx *ctx)
DECL|http_server_conn_add|macro|http_server_conn_add
DECL|http_server_conn_del|function|static void http_server_conn_del(struct http_server_ctx *ctx)
DECL|http_server_conn_del|macro|http_server_conn_del
DECL|http_server_conn_foreach|function|void http_server_conn_foreach(http_server_cb_t cb, void *user_data)
DECL|http_server_conn_monitor|function|void http_server_conn_monitor(http_server_cb_t cb, void *user_data)
DECL|http_server_del_default|function|int http_server_del_default(struct http_server_urls *my)
DECL|http_server_del_url|function|int http_server_del_url(struct http_server_urls *my, const char *url)
DECL|http_server_disable|function|bool http_server_disable(struct http_server_ctx *http_ctx)
DECL|http_server_enable|function|bool http_server_enable(struct http_server_ctx *http_ctx)
DECL|http_server_init|function|int http_server_init(struct http_server_ctx *http_ctx, struct http_server_urls *urls, struct sockaddr *server_addr, u8_t *request_buf, size_t request_buf_len,
DECL|http_server_release|function|void http_server_release(struct http_server_ctx *http_ctx)
DECL|http_server_set_local_addr|function|int http_server_set_local_addr(struct sockaddr *addr, const char *myaddr, u16_t port)
DECL|http_server_set_net_pkt_pool|function|int http_server_set_net_pkt_pool(struct http_server_ctx *ctx, net_pkt_get_slab_func_t tx_slab, net_pkt_get_pool_func_t data_pool)
DECL|http_strlen|function|static inline u16_t http_strlen(const char *str)
DECL|http_url_cmp|function|static int http_url_cmp(const char *url, u16_t url_len,const char *root_url, u16_t root_url_len)
DECL|http_url_find|function|static struct http_root_url *http_url_find(struct http_server_ctx *http_ctx)
DECL|https_disable|function|static void https_disable(struct http_server_ctx *ctx)
DECL|https_enable|function|static void https_enable(struct http_server_ctx *ctx)
DECL|https_handler|function|static void https_handler(struct http_server_ctx *ctx)
DECL|https_init|function|static int https_init(struct http_server_ctx *ctx)
DECL|https_send|function|static int https_send(struct net_pkt *pkt, net_context_send_cb_t cb, s32_t timeout, void *token, void *user_data)
DECL|https_server_init|function|int https_server_init(struct http_server_ctx *ctx, struct http_server_urls *urls, struct sockaddr *server_addr, u8_t *request_buf, size_t request_buf_len,
DECL|init_net|function|static int init_net(struct http_server_ctx *ctx, struct sockaddr *server_addr, u16_t port)
DECL|mon_user_data|variable|mon_user_data
DECL|my_debug|function|static void my_debug(void *ctx, int level, const char *file, int line, const char *str)
DECL|new_client|function|static inline void new_client(struct http_server_ctx *http_ctx, struct net_context *net_ctx, const struct sockaddr *addr)
DECL|new_server|function|static inline void new_server(struct http_server_ctx *ctx, const char *server_banner, const struct sockaddr *addr)
DECL|on_header_field|function|static int on_header_field(struct http_parser *parser, const char *at, size_t length)
DECL|on_header_value|function|static int on_header_value(struct http_parser *parser, const char *at, size_t length)
DECL|on_url|function|static int on_url(struct http_parser *parser, const char *at, size_t length)
DECL|parser_init|function|static int parser_init(struct http_server_ctx *ctx)
DECL|pkt_sent|function|static void pkt_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|pkt|member|struct net_pkt *pkt;
DECL|print_error|macro|print_error
DECL|print_error|macro|print_error
DECL|req_timeout|function|static void req_timeout(struct k_work *work)
DECL|req_timer_cancel|function|static void req_timer_cancel(struct http_server_ctx *ctx)
DECL|rx_fifo_block|struct|struct rx_fifo_block {
DECL|set_net_ctx|function|static int set_net_ctx(struct http_server_ctx *http_ctx, struct net_context *ctx, struct sockaddr *addr, socklen_t socklen)
DECL|setup_ipv4_ctx|function|static int setup_ipv4_ctx(struct http_server_ctx *http_ctx, struct sockaddr *addr)
DECL|setup_ipv6_ctx|function|int setup_ipv6_ctx(struct http_server_ctx *http_ctx, struct sockaddr *addr)
DECL|snode|member|sys_snode_t snode;
DECL|sprint_ipaddr|function|static char *sprint_ipaddr(char *buf, int buflen, const struct sockaddr *addr)
DECL|ssl_received|function|static void ssl_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
DECL|ssl_rx|function|static int ssl_rx(void *context, unsigned char *buf, size_t size)
DECL|ssl_sent|function|static void ssl_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|ssl_tx|function|static int ssl_tx(void *context, const unsigned char *buf, size_t size)
