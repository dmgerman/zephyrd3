DECL|ADDR_OPTION|macro|ADDR_OPTION
DECL|ALLOC_TIMEOUT|macro|ALLOC_TIMEOUT
DECL|APP_BANNER|macro|APP_BANNER
DECL|APP_BANNER|macro|APP_BANNER
DECL|CONFIG_NET_APP_TLS_STACK_SIZE|macro|CONFIG_NET_APP_TLS_STACK_SIZE
DECL|HTML_FOOTER|macro|HTML_FOOTER
DECL|HTML_HEADER|macro|HTML_HEADER
DECL|HTTP_401_STATUS_US|macro|HTTP_401_STATUS_US
DECL|HTTP_CRLF|macro|HTTP_CRLF
DECL|HTTP_STATUS_200_OK_GZ_CSS|macro|HTTP_STATUS_200_OK_GZ_CSS
DECL|HTTP_STATUS_200_OK_GZ|macro|HTTP_STATUS_200_OK_GZ
DECL|HTTP_STATUS_200_OK|macro|HTTP_STATUS_200_OK
DECL|HTTP_STATUS_301_RE|macro|HTTP_STATUS_301_RE
DECL|INSTANCE_INFO|macro|INSTANCE_INFO
DECL|JSON_COAP_PREFIX|macro|JSON_COAP_PREFIX
DECL|MAX_BUF_LEN|macro|MAX_BUF_LEN
DECL|MAX_PAYLOAD_LEN|macro|MAX_PAYLOAD_LEN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|RESULT_BUF_SIZE|macro|RESULT_BUF_SIZE
DECL|RX_FIFO_DEPTH|macro|RX_FIFO_DEPTH
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|WS_HTTP_STACK_SIZE|macro|WS_HTTP_STACK_SIZE
DECL|_add_int|function|static int _add_int(struct user_data *data, const char *name, int value, bool first, bool add_block)
DECL|_add_string|function|static int _add_string(struct user_data *data, const char *name, const char *value, bool first, bool add_block)
DECL|add_int_block|function|static int add_int_block(struct user_data *data, const char *name, int value, bool first)
DECL|add_int|function|static int add_int(struct user_data *data, const char *name, int value, bool first)
DECL|add_rpl_config|function|static int add_rpl_config(struct user_data *data)
DECL|add_string_block|function|static int add_string_block(struct user_data *data, const char *name, const char *value, bool first)
DECL|add_string|function|static int add_string(struct user_data *data, const char *name, const char *value, bool first)
DECL|addrstate2str|function|static const char *addrstate2str(enum net_addr_state addr_state)
DECL|addrtype2str|function|static const char *addrtype2str(enum net_addr_type addr_type)
DECL|append_and_send_data|function|static int append_and_send_data(struct user_data *data,bool final, const char *fmt, ...)
DECL|append_nbr|function|static void append_nbr(struct net_nbr *nbr, struct user_data *data)
DECL|append_route_iface|function|static void append_route_iface(struct net_if *iface, struct net_route_entry *route, void *user_data)
DECL|append_route|function|static void append_route(struct net_route_entry *entry, struct user_data *data)
DECL|append_unicast_addr|function|static void append_unicast_addr(struct net_if *iface, struct user_data *data)
DECL|auth_addr|member|struct sockaddr auth_addr;
DECL|auth_ok|member|bool auth_ok;
DECL|br_mgmt_cb|variable|br_mgmt_cb
DECL|buf|member|char buf[MAX_BUF_LEN];
DECL|calculate_edges|function|static void calculate_edges(void)
DECL|check_addr|function|static bool check_addr(struct http_ctx *ctx)
DECL|check_file_size|function|static bool check_file_size(const char *file, size_t size)
DECL|check_file_size|function|static bool check_file_size(const char *file, size_t size)
DECL|coap_command|struct|struct coap_command {
DECL|coap_descr|variable|coap_descr
DECL|coap_obs_cb|function|static void coap_obs_cb(struct coap_packet *response, void *user_data)
DECL|coap|member|struct coap_command coap;
DECL|command_descr|variable|command_descr
DECL|command|member|const char *command;
DECL|ctx|member|struct http_ctx *ctx;
DECL|ctx|member|struct http_ctx *ctx;
DECL|data_pool|function|static struct net_buf_pool *data_pool(void)
DECL|data_pool|macro|data_pool
DECL|data_set|member|bool data_set;
DECL|default_handler|function|static enum http_verdict default_handler(struct http_ctx *ctx, enum http_connection_type type, const struct sockaddr *dst)
DECL|dst|member|const struct sockaddr *dst;
DECL|dst|member|const struct sockaddr *dst;
DECL|echo_apps_cert_der|variable|echo_apps_cert_der
DECL|echo_apps_key_der|variable|echo_apps_key_der
DECL|failure|member|int failure;
DECL|get_string|function|static const char *get_string(int str_len, const char *str)
DECL|handle_coap_request|function|static void handle_coap_request(struct http_ctx *ctx,struct net_pkt *pkt, void *user_data)
DECL|http_basic_auth|function|static int http_basic_auth(struct http_ctx *ctx, enum http_connection_type type, const struct sockaddr *dst)
DECL|http_closed|function|static void http_closed(struct http_ctx *ctx,int status, void *user_data)
DECL|http_connected|function|static void http_connected(struct http_ctx *ctx, enum http_connection_type type, const struct sockaddr *dst, void *user_data)
DECL|http_ctx|variable|http_ctx
DECL|http_received|function|static void http_received(struct http_ctx *ctx, struct net_pkt *pkt, int status, u32_t flags, const struct sockaddr *dst,
DECL|http_response_401|function|int http_response_401(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_response_soft_404|function|static int http_response_soft_404(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_response|function|static int http_response(struct http_ctx *ctx, const char *header, const char *payload, size_t payload_len, const struct sockaddr *dst)
DECL|http_sent|function|static void http_sent(struct http_ctx *ctx, int status, void *user_data_send, void *user_data)
DECL|http_serve_br_js|function|static int http_serve_br_js(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_serve_favicon_ico|function|static int http_serve_favicon_ico(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_serve_index_html|function|static int http_serve_index_html(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_serve_style_css|function|static int http_serve_style_css(struct http_ctx *ctx,const struct sockaddr *dst)
DECL|http_urls|variable|http_urls
DECL|iface2str|function|static const char *iface2str(struct net_if *iface)
DECL|iface_cb_for_routes|function|static void iface_cb_for_routes(struct net_if *iface, void *user_data)
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface_count|member|int iface_count;
DECL|iface|member|struct net_if *iface;
DECL|ipv6_addr|member|const char *ipv6_addr;
DECL|mgmt_cb|function|static void mgmt_cb(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|mode2str|function|static const char *mode2str(enum net_rpl_mode mode)
DECL|msg_count|member|int msg_count;
DECL|nbr_cb|function|static void nbr_cb(struct net_nbr *nbr, void *user_data)
DECL|nbr_count|member|int nbr_count;
DECL|result|variable|result
DECL|route_cb|function|static void route_cb(struct net_route_entry *entry, void *user_data)
DECL|route_count|member|int route_count;
DECL|rpl_coap_req|struct|struct rpl_coap_req {
DECL|rpl|variable|rpl
DECL|send_iface_configuration|function|static int send_iface_configuration(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|send_ipv6_neighbor_deletion|function|static int send_ipv6_neighbor_deletion(struct http_ctx *ctx, const struct sockaddr *dst, struct net_if *iface, struct in6_addr *addr)
DECL|send_ipv6_neighbors|function|static int send_ipv6_neighbors(struct http_ctx *ctx, const struct sockaddr *dst, struct net_nbr *nbr)
DECL|send_ipv6_route_deletion|function|static int send_ipv6_route_deletion(struct http_ctx *ctx, const struct sockaddr *dst, struct net_if *iface, struct net_event_ipv6_route *info)
DECL|send_ipv6_routes|function|static int send_ipv6_routes(struct http_ctx *ctx, const struct sockaddr *dst, struct net_if *iface, struct net_route_entry *route)
DECL|send_rpl_configuration|function|static int send_rpl_configuration(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|send_topology_information|function|static int send_topology_information(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|setup_cert|function|static int setup_cert(struct net_app_ctx *ctx, mbedtls_x509_crt *cert, mbedtls_pk_context *pkey)
DECL|start_http_server|function|void start_http_server(struct net_if *iface)
DECL|stop_http_server|function|void stop_http_server(void)
DECL|tx_slab|function|static struct k_mem_slab *tx_slab(void)
DECL|tx_slab|macro|tx_slab
DECL|user_data|struct|struct user_data {
DECL|ws_ctx|variable|ws_ctx
DECL|ws_dst|variable|ws_dst
DECL|ws_http_ctx|struct|struct ws_http_ctx {
DECL|ws_http_thread_data|variable|ws_http_thread_data
DECL|ws_http_thread|function|static void ws_http_thread(void)
DECL|ws_send_info|function|static void ws_send_info(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|ws_serve_replies|function|static void ws_serve_replies(void)
