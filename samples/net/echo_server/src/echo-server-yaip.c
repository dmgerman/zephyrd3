DECL|MAX_DBG_PRINT|macro|MAX_DBG_PRINT
DECL|MCAST_IP4ADDR|macro|MCAST_IP4ADDR
DECL|MCAST_IP6ADDR|macro|MCAST_IP6ADDR
DECL|MY_IP4ADDR|macro|MY_IP4ADDR
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|MY_PORT|macro|MY_PORT
DECL|MY_PREFIX_LEN|macro|MY_PREFIX_LEN
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WAIT_TICKS|macro|WAIT_TICKS
DECL|WAIT_TICKS|macro|WAIT_TICKS
DECL|fiberStack|variable|fiberStack
DECL|get_context|function|static inline bool get_context(struct net_context **udp_recv4, struct net_context **udp_recv6, struct net_context **tcp_recv4, struct net_context **tcp_recv6, struct net_context **mcast_recv6)
DECL|in4addr_my|variable|in4addr_my
DECL|in6addr_mcast|variable|in6addr_mcast
DECL|in6addr_my|variable|in6addr_my
DECL|in6addr_my|variable|in6addr_my
DECL|init_app|function|static inline void init_app(void)
DECL|main|function|void main(void)
DECL|quit_lock|variable|quit_lock
DECL|quit|function|static inline void quit(void)
DECL|receive|function|void receive(void)
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_buf *buf, struct sockaddr *dst_addr)
DECL|setup_tcp_accept|function|static void setup_tcp_accept(struct net_context *tcp_recv4, struct net_context *tcp_recv6)
DECL|setup_udp_recv|function|static void setup_udp_recv(struct net_context *udp_recv4, struct net_context *udp_recv6)
DECL|tcp_received|function|static void tcp_received(struct net_context *context, struct sockaddr *addr, socklen_t addrlen, int error, void *user_data)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|udp_recv|function|static struct net_buf *udp_recv(const char *name,struct net_context *context, struct net_buf *buf)
DECL|udp_sent|function|static inline void udp_sent(struct net_context *context, int status, void *token, void *user_data)
