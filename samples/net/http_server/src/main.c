DECL|ADDR_OPTION|macro|ADDR_OPTION
DECL|APP_BANNER|macro|APP_BANNER
DECL|APP_BANNER|macro|APP_BANNER
DECL|CONFIG_HTTPS_STACK_SIZE|macro|CONFIG_HTTPS_STACK_SIZE
DECL|HTML_FOOTER|macro|HTML_FOOTER
DECL|HTML_HEADER|macro|HTML_HEADER
DECL|HTTP_MAX_BODY_STR_SIZE|macro|HTTP_MAX_BODY_STR_SIZE
DECL|HTTP_STATUS_200_OK_GZ|macro|HTTP_STATUS_200_OK_GZ
DECL|HTTP_STATUS_200_OK|macro|HTTP_STATUS_200_OK
DECL|INSTANCE_INFO|macro|INSTANCE_INFO
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|RESULT_BUF_SIZE|macro|RESULT_BUF_SIZE
DECL|RX_FIFO_DEPTH|macro|RX_FIFO_DEPTH
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|data_pool|function|static struct net_buf_pool *data_pool(void)
DECL|data_pool|macro|data_pool
DECL|default_handler|function|static enum http_verdict default_handler(struct http_ctx *ctx, enum http_connection_type type)
DECL|echo_apps_cert_der|variable|echo_apps_cert_der
DECL|echo_apps_key_der|variable|echo_apps_key_der
DECL|get_string|function|static const char *get_string(int str_len, const char *str)
DECL|http_closed|function|static void http_closed(struct http_ctx *ctx,int status, void *user_data)
DECL|http_connected|function|static void http_connected(struct http_ctx *ctx, enum http_connection_type type, void *user_data)
DECL|http_ctx|variable|http_ctx
DECL|http_received|function|static void http_received(struct http_ctx *ctx, struct net_pkt *pkt, int status, u32_t flags, void *user_data)
DECL|http_response_soft_404|function|static int http_response_soft_404(struct http_ctx *ctx)
DECL|http_response|function|static int http_response(struct http_ctx *ctx, const char *header, const char *payload, size_t payload_len, char *str)
DECL|http_result|variable|http_result
DECL|http_sent|function|static void http_sent(struct http_ctx *ctx, int status, void *user_data_send, void *user_data)
DECL|http_serve_headers|function|int http_serve_headers(struct http_ctx *ctx)
DECL|http_serve_index_html|function|static int http_serve_index_html(struct http_ctx *ctx)
DECL|http_urls|variable|http_urls
DECL|main|function|void main(void)
DECL|panic|function|void panic(const char *msg)
DECL|print_http_headers|function|static void print_http_headers(struct http_ctx *ctx, char *str, int size)
DECL|setup_cert|function|static int setup_cert(struct net_app_ctx *app_ctx, mbedtls_x509_crt *cert, mbedtls_pk_context *pkey)
DECL|tx_slab|function|static struct k_mem_slab *tx_slab(void)
DECL|tx_slab|macro|tx_slab
