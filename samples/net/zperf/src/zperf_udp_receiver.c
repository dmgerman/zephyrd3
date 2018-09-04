DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_DBG_PRINT|macro|MAX_DBG_PRINT
DECL|MY_SRC_PORT|macro|MY_SRC_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|RX_THREAD_STACK_SIZE|macro|RX_THREAD_STACK_SIZE
DECL|TAG|macro|TAG
DECL|build_reply_pkt|function|static inline struct net_pkt *build_reply_pkt(struct net_context *context, struct net_pkt *pkt, struct zperf_udp_datagram *hdr, struct zperf_server_hdr *stat)
DECL|in4_addr_my|variable|in4_addr_my
DECL|in6_addr_my|variable|in6_addr_my
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_pkt *pkt, struct sockaddr *dst_addr)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
DECL|zperf_receiver_init|function|void zperf_receiver_init(int port)
DECL|zperf_receiver_send_stat|function|static int zperf_receiver_send_stat(struct net_context *context, struct net_pkt *pkt, struct zperf_udp_datagram *hdr, struct zperf_server_hdr *stat)
DECL|zperf_rx_thread_data|variable|zperf_rx_thread_data
DECL|zperf_rx_thread|function|static void zperf_rx_thread(int port)
