DECL|MAX_DBG_PRINT|macro|MAX_DBG_PRINT
DECL|MY_IP4ADDR|macro|MY_IP4ADDR
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|MY_PORT|macro|MY_PORT
DECL|MY_PREFIX_LEN|macro|MY_PREFIX_LEN
DECL|NET_BIND_ANY_ADDR|macro|NET_BIND_ANY_ADDR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|build_reply_pkt|function|static struct net_pkt *build_reply_pkt(const char *name, struct net_context *context, struct net_pkt *pkt)
DECL|data_tcp_pool|function|static struct net_buf_pool *data_tcp_pool(void)
DECL|data_udp_pool|function|static struct net_buf_pool *data_udp_pool(void)
DECL|get_context|function|static inline bool get_context(struct net_context **udp_recv4, struct net_context **udp_recv6, struct net_context **tcp_recv4, struct net_context **tcp_recv6)
DECL|in4addr_my|variable|in4addr_my
DECL|in6addr_my|variable|in6addr_my
DECL|init_app|function|static inline void init_app(void)
DECL|main|function|void main(void)
DECL|pkt_sent|function|static inline void pkt_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|quit_lock|variable|quit_lock
DECL|quit|function|static inline void quit(void)
DECL|receive|function|void receive(void)
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_pkt *pkt, struct sockaddr *dst_addr)
DECL|setup_tcp_accept|function|static void setup_tcp_accept(struct net_context *tcp_recv4, struct net_context *tcp_recv6)
DECL|setup_udp_recv|function|static void setup_udp_recv(struct net_context *udp_recv4, struct net_context *udp_recv6)
DECL|tcp_accepted|function|static void tcp_accepted(struct net_context *context, struct sockaddr *addr, socklen_t addrlen, int error, void *user_data)
DECL|tcp_received|function|static void tcp_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
DECL|thread_data|variable|thread_data
DECL|thread_stack|variable|thread_stack
DECL|tx_tcp_slab|function|static struct k_mem_slab *tx_tcp_slab(void)
DECL|tx_udp_slab|function|static struct k_mem_slab *tx_udp_slab(void)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
