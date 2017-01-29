DECL|MCAST_IP4ADDR|macro|MCAST_IP4ADDR
DECL|MCAST_IP6ADDR|macro|MCAST_IP6ADDR
DECL|MY_IP4ADDR|macro|MY_IP4ADDR
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|MY_PORT|macro|MY_PORT
DECL|MY_PREFIX_LEN|macro|MY_PREFIX_LEN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|PEER_IP4ADDR|macro|PEER_IP4ADDR
DECL|PEER_IP6ADDR|macro|PEER_IP6ADDR
DECL|PEER_PORT|macro|PEER_PORT
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|cb|variable|cb
DECL|compare_tcp_data|function|static bool compare_tcp_data(struct net_buf *buf, int expecting_len, int received_len)
DECL|compare_udp_data|function|static bool compare_udp_data(struct net_buf *buf, int expecting_len)
DECL|conf|variable|conf
DECL|data|struct|struct data {
DECL|event_iface_up|function|static void event_iface_up(struct net_mgmt_event_callback *cb, uint32_t mgmt_event, struct net_if *iface)
DECL|expecting_tcp|member|uint32_t expecting_tcp;
DECL|expecting_udp|member|uint32_t expecting_udp;
DECL|get_context|function|static inline bool get_context(struct net_context **udp_recv4, struct net_context **udp_recv6, struct net_context **tcp_recv4, struct net_context **tcp_recv6, struct net_context **mcast_recv6)
DECL|in4addr_my|variable|in4addr_my
DECL|in4addr_peer|variable|in4addr_peer
DECL|in6addr_mcast|variable|in6addr_mcast
DECL|in6addr_my|variable|in6addr_my
DECL|in6addr_peer|variable|in6addr_peer
DECL|init_app|function|static inline void init_app(void)
DECL|ipsum_len|variable|ipsum_len
DECL|ipv4_stack|variable|ipv4_stack
DECL|ipv4|member|struct data ipv4;
DECL|ipv6_stack|variable|ipv6_stack
DECL|ipv6|member|struct data ipv6;
DECL|lorem_ipsum|variable|lorem_ipsum
DECL|main|function|void main(void)
DECL|mcast_addr6|variable|mcast_addr6
DECL|my_addr4|variable|my_addr4
DECL|my_addr6|variable|my_addr6
DECL|peer_addr4|variable|peer_addr4
DECL|peer_addr6|variable|peer_addr6
DECL|prepare_send_buf|function|static struct net_buf *prepare_send_buf(const char *name,struct net_context *context, int expecting_len)
DECL|received_tcp|member|uint32_t received_tcp;
DECL|recv_ipv4|member|struct k_sem recv_ipv4;
DECL|recv_ipv6|member|struct k_sem recv_ipv6;
DECL|send_ipv4|function|static void send_ipv4(struct net_context *udp, struct net_context *tcp)
DECL|send_ipv6|function|static void send_ipv6(struct net_context *udp, struct net_context *tcp)
DECL|send_tcp_data|function|static bool send_tcp_data(struct net_context *ctx, char *proto, struct data *data)
DECL|send_udp_data|function|static bool send_udp_data(struct net_context *udp, sa_family_t family, char *proto, struct data *data)
DECL|send_udp|function|static void send_udp(struct net_context *udp, sa_family_t family, char *proto, struct k_sem *sem, struct data *data)
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_buf *buf, struct sockaddr *dst_addr)
DECL|setup_tcp_recv|function|static void setup_tcp_recv(struct net_context *tcp, net_context_recv_cb_t cb, void *user_data)
DECL|setup_udp_recv|function|static void setup_udp_recv(struct net_context *udp, void *user_data, net_context_recv_cb_t cb)
DECL|tcp_connect4|function|static void tcp_connect4(struct net_context *tcp_send)
DECL|tcp_connect6|function|static void tcp_connect6(struct net_context *tcp_send)
DECL|tcp_connected|function|static void tcp_connected(struct net_context *context, int status, void *user_data)
DECL|tcp_received|function|static void tcp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|tcp_sent|function|static void tcp_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|udp_sent|function|static inline void udp_sent(struct net_context *context, int status, void *bytes_sent, void *user_data)
DECL|wait_reply|function|static inline bool wait_reply(const char *name, struct k_sem *sem)
