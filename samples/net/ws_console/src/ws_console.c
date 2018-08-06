DECL|ADDR_OPTION|macro|ADDR_OPTION
DECL|APP_BANNER|macro|APP_BANNER
DECL|CONFIG_NET_APP_TLS_STACK_SIZE|macro|CONFIG_NET_APP_TLS_STACK_SIZE
DECL|EXTRA_DEBUG|macro|EXTRA_DEBUG
DECL|HTML_FOOTER|macro|HTML_FOOTER
DECL|HTML_HEADER|macro|HTML_HEADER
DECL|HTTP_STATUS_200_OK_CSS|macro|HTTP_STATUS_200_OK_CSS
DECL|HTTP_STATUS_200_OK_GZ_CSS|macro|HTTP_STATUS_200_OK_GZ_CSS
DECL|HTTP_STATUS_200_OK_GZ|macro|HTTP_STATUS_200_OK_GZ
DECL|HTTP_STATUS_200_OK|macro|HTTP_STATUS_200_OK
DECL|INSTANCE_INFO|macro|INSTANCE_INFO
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_URL_LEN|macro|MAX_URL_LEN
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|RESULT_BUF_SIZE|macro|RESULT_BUF_SIZE
DECL|RX_FIFO_DEPTH|macro|RX_FIFO_DEPTH
DECL|SEND_TIMEOUT|macro|SEND_TIMEOUT
DECL|data_tcp_pool|function|static struct net_buf_pool *data_tcp_pool(void)
DECL|data_tcp_pool|macro|data_tcp_pool
DECL|default_handler|function|static enum http_verdict default_handler(struct http_ctx *ctx, enum http_connection_type type, const struct sockaddr *dst)
DECL|echo_apps_cert_der|variable|echo_apps_cert_der
DECL|echo_apps_key_der|variable|echo_apps_key_der
DECL|get_string|function|static const char *get_string(int str_len, const char *str)
DECL|http_ctx|variable|http_ctx
DECL|http_response_soft_404|function|static int http_response_soft_404(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_response|function|static int http_response(struct http_ctx *ctx, const char *header, const char *payload, size_t payload_len, const struct sockaddr *dst)
DECL|http_serve_favicon_ico|function|static int http_serve_favicon_ico(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_serve_index_html|function|static int http_serve_index_html(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_serve_style_css|function|static int http_serve_style_css(struct http_ctx *ctx,const struct sockaddr *dst)
DECL|http_urls|variable|http_urls
DECL|result|variable|result
DECL|setup_cert|function|static int setup_cert(struct net_app_ctx *ctx, mbedtls_x509_crt *cert, mbedtls_pk_context *pkey)
DECL|start_ws_console|function|void start_ws_console(void)
DECL|stop_ws_console|function|void stop_ws_console(void)
DECL|tx_tcp_slab|function|static struct k_mem_slab *tx_tcp_slab(void)
DECL|tx_tcp_slab|macro|tx_tcp_slab
DECL|ws_closed|function|static void ws_closed(struct http_ctx *ctx, int status, void *user_data)
DECL|ws_connected|function|static void ws_connected(struct http_ctx *ctx, enum http_connection_type type, const struct sockaddr *dst, void *user_data)
DECL|ws_received|function|static void ws_received(struct http_ctx *ctx,struct net_pkt *pkt, int status, u32_t flags, const struct sockaddr *dst,
DECL|ws_sent|function|static void ws_sent(struct http_ctx *ctx, int status, void *user_data_send, void *user_data)
