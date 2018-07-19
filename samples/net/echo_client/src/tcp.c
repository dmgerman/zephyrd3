DECL|CONFIG_NET_APP_TLS_STACK_SIZE|macro|CONFIG_NET_APP_TLS_STACK_SIZE
DECL|HOSTNAME|macro|HOSTNAME
DECL|INSTANCE_INFO|macro|INSTANCE_INFO
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|RESULT_BUF_SIZE|macro|RESULT_BUF_SIZE
DECL|VERIFY_CERTS|macro|VERIFY_CERTS
DECL|compare_tcp_data|function|static bool compare_tcp_data(struct net_pkt *pkt, int expecting_len, int received_len)
DECL|connect_tcp|function|static int connect_tcp(struct net_app_ctx *ctx, const char *peer, void *user_data, u8_t *result_buf, size_t result_buf_len, k_thread_stack_t *stack, size_t stack_size)
DECL|connected_count|variable|connected_count
DECL|data_tcp_pool|function|static struct net_buf_pool *data_tcp_pool(void)
DECL|data_tcp_pool|macro|data_tcp_pool
DECL|net_app_tls_stack_ipv4|macro|net_app_tls_stack_ipv4
DECL|net_app_tls_stack_ipv6|macro|net_app_tls_stack_ipv6
DECL|send_tcp_data|function|static void send_tcp_data(struct net_app_ctx *ctx, struct data *data)
DECL|setup_cert|function|static int setup_cert(struct net_app_ctx *ctx, void *cert)
DECL|start_tcp|function|int start_tcp(void)
DECL|stop_tcp|function|void stop_tcp(void)
DECL|tcp4|variable|tcp4
DECL|tcp6|variable|tcp6
DECL|tcp_connected|function|static void tcp_connected(struct net_app_ctx *ctx, int status, void *user_data)
DECL|tcp_received|function|static void tcp_received(struct net_app_ctx *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|tls_result_ipv4|macro|tls_result_ipv4
DECL|tls_result_ipv4|variable|tls_result_ipv4
DECL|tls_result_ipv6|macro|tls_result_ipv6
DECL|tls_result_ipv6|variable|tls_result_ipv6
DECL|tx_tcp_slab|function|static struct k_mem_slab *tx_tcp_slab(void)
DECL|tx_tcp_slab|macro|tx_tcp_slab
