DECL|MCAST_IP4ADDR|macro|MCAST_IP4ADDR
DECL|MCAST_IP6ADDR|macro|MCAST_IP6ADDR
DECL|MY_IP4ADDR|macro|MY_IP4ADDR
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|MY_PORT|macro|MY_PORT
DECL|MY_PREFIX_LEN|macro|MY_PREFIX_LEN
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|PEER_IP4ADDR|macro|PEER_IP4ADDR
DECL|PEER_IP6ADDR|macro|PEER_IP6ADDR
DECL|PEER_PORT|macro|PEER_PORT
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WAIT_TICKS|macro|WAIT_TICKS
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|WAIT_TINY_TICKS|macro|WAIT_TINY_TICKS
DECL|compare_data|function|static bool compare_data(struct net_buf *buf, int expecting_len)
DECL|expecting_ipv4|variable|expecting_ipv4
DECL|expecting_ipv6|variable|expecting_ipv6
DECL|fiber_ipv4_stack|variable|fiber_ipv4_stack
DECL|fiber_ipv6_stack|variable|fiber_ipv6_stack
DECL|get_context|function|static inline bool get_context(struct net_context **udp_recv4, struct net_context **udp_recv6, struct net_context **mcast_recv6)
DECL|in4addr_my|variable|in4addr_my
DECL|in4addr_peer|variable|in4addr_peer
DECL|in6addr_mcast|variable|in6addr_mcast
DECL|in6addr_my|variable|in6addr_my
DECL|in6addr_peer|variable|in6addr_peer
DECL|init_app|function|static inline void init_app(void)
DECL|ipsum_len|variable|ipsum_len
DECL|lorem_ipsum|variable|lorem_ipsum
DECL|main|function|void main(void)
DECL|prepare_send_buf|function|static struct net_buf *prepare_send_buf(const char *name,struct net_context *context, int expecting_len)
DECL|recv_ipv4|variable|recv_ipv4
DECL|recv_ipv6|variable|recv_ipv6
DECL|send_ipv4_data|function|static bool send_ipv4_data(struct net_context *udp)
DECL|send_ipv4|function|static void send_ipv4(struct net_context *udp)
DECL|send_ipv6_data|function|static bool send_ipv6_data(struct net_context *udp)
DECL|send_ipv6|function|static void send_ipv6(struct net_context *udp)
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_buf *buf, struct sockaddr *dst_addr)
DECL|setup_udp_recv|function|static void setup_udp_recv(struct net_context *udp, void *user_data, net_context_recv_cb_t cb)
DECL|udp_ipv4_received|function|static void udp_ipv4_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|udp_ipv6_received|function|static void udp_ipv6_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|udp_sent|function|static inline void udp_sent(struct net_context *context, int status, void *bytes_sent, void *user_data)
DECL|wait_reply|function|static inline bool wait_reply(const char *name, struct nano_sem *sem)
