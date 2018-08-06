DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|STATS_CHECK|macro|STATS_CHECK
DECL|TYPE_SEQ_NUM|macro|TYPE_SEQ_NUM
DECL|__packed|variable|__packed
DECL|data_udp_pool|function|static struct net_buf_pool *data_udp_pool(void)
DECL|data_udp_pool|macro|data_udp_pool
DECL|header|struct|struct header {
DECL|len|member|unsigned char len;
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_pkt *pkt, struct sockaddr *dst_addr)
DECL|start_udp|function|void start_udp(void)
DECL|stop_udp|function|void stop_udp(void)
DECL|tx_udp_slab|function|static struct k_mem_slab *tx_udp_slab(void)
DECL|tx_udp_slab|macro|tx_udp_slab
DECL|type|member|unsigned char type;
DECL|udp_received|function|static void udp_received(struct net_app_ctx *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|udp|variable|udp
DECL|value|member|unsigned char value[0];
