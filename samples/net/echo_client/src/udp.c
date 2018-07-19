DECL|CONFIG_NET_APP_TLS_STACK_SIZE|macro|CONFIG_NET_APP_TLS_STACK_SIZE
DECL|HOSTNAME|macro|HOSTNAME
DECL|INSTANCE_INFO|macro|INSTANCE_INFO
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|RESULT_BUF_SIZE|macro|RESULT_BUF_SIZE
DECL|UDP_SLEEP|macro|UDP_SLEEP
DECL|VERIFY_CERTS|macro|VERIFY_CERTS
DECL|compare_udp_data|function|static bool compare_udp_data(struct net_pkt *pkt, int expecting_len)
DECL|connect_udp|function|static int connect_udp(struct net_app_ctx *ctx, const char *peer, void *user_data, u8_t *dtls_result_buf, size_t dtls_result_buf_len, k_thread_stack_t *stack, size_t stack_size)
DECL|data_udp_pool|function|static struct net_buf_pool *data_udp_pool(void)
DECL|data_udp_pool|macro|data_udp_pool
DECL|dtls_result_ipv4|macro|dtls_result_ipv4
DECL|dtls_result_ipv4|variable|dtls_result_ipv4
DECL|dtls_result_ipv6|macro|dtls_result_ipv6
DECL|dtls_result_ipv6|variable|dtls_result_ipv6
DECL|net_app_dtls_stack_ipv4|macro|net_app_dtls_stack_ipv4
DECL|net_app_dtls_stack_ipv6|macro|net_app_dtls_stack_ipv6
DECL|send_udp_data|function|static void send_udp_data(struct net_app_ctx *ctx, struct data *data)
DECL|setup_cert|function|static int setup_cert(struct net_app_ctx *ctx, void *cert)
DECL|start_udp|function|void start_udp(void)
DECL|stop_udp|function|void stop_udp(void)
DECL|tx_udp_slab|function|static struct k_mem_slab *tx_udp_slab(void)
DECL|tx_udp_slab|macro|tx_udp_slab
DECL|udp4|variable|udp4
DECL|udp6|variable|udp6
DECL|udp_connected|function|static void udp_connected(struct net_app_ctx *ctx, int status, void *user_data)
DECL|udp_received|function|static void udp_received(struct net_app_ctx *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|wait_reply|function|static void wait_reply(struct k_work *work)
