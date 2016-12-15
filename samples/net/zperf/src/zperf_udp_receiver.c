DECL|MAX_DBG_PRINT|macro|MAX_DBG_PRINT
DECL|MY_SRC_PORT|macro|MY_SRC_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|RX_THREAD_STACK_SIZE|macro|RX_THREAD_STACK_SIZE
DECL|TAG|macro|TAG
DECL|build_reply_buf|function|static inline struct net_buf *build_reply_buf(struct net_context *context, struct net_buf *buf, struct zperf_udp_datagram *hdr, struct zperf_server_hdr *stat)
DECL|in4_addr_my|variable|in4_addr_my
DECL|in6_addr_my|variable|in6_addr_my
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_buf *buf, struct sockaddr *dst_addr)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|zperf_receiver_init|function|void zperf_receiver_init(int port)
DECL|zperf_receiver_send_stat|function|static int zperf_receiver_send_stat(struct net_context *context, struct net_buf *buf, struct zperf_udp_datagram *hdr, struct zperf_server_hdr *stat)
DECL|zperf_rx_stack|variable|zperf_rx_stack
DECL|zperf_rx_thread|function|static void zperf_rx_thread(int port)
