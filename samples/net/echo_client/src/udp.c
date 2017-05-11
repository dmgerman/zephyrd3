DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|UDP_SLEEP|macro|UDP_SLEEP
DECL|compare_udp_data|function|static bool compare_udp_data(struct net_pkt *pkt, int expecting_len)
DECL|connect_udp|function|static int connect_udp(struct net_app_ctx *ctx, const char *peer, void *user_data)
DECL|data_udp_pool|function|static struct net_buf_pool *data_udp_pool(void)
DECL|data_udp_pool|macro|data_udp_pool
DECL|send_udp_data|function|static void send_udp_data(struct net_app_ctx *ctx, struct data *data)
DECL|start_udp|function|void start_udp(void)
DECL|stop_udp|function|void stop_udp(void)
DECL|tx_udp_slab|function|static struct k_mem_slab *tx_udp_slab(void)
DECL|tx_udp_slab|macro|tx_udp_slab
DECL|udp4|variable|udp4
DECL|udp6|variable|udp6
DECL|udp_connected|function|static void udp_connected(struct net_app_ctx *ctx, int status, void *user_data)
DECL|udp_received|function|static void udp_received(struct net_app_ctx *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|wait_reply|function|static void wait_reply(struct k_work *work)
