DECL|MAX_DBG_PRINT|macro|MAX_DBG_PRINT
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|MY_PORT|macro|MY_PORT
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|bind_address|function|static int bind_address(void)
DECL|close_context|function|static int close_context(void)
DECL|context|variable|context
DECL|create_context|function|static int create_context(void)
DECL|in6addr_my|variable|in6addr_my
DECL|init_app|function|static inline void init_app(void)
DECL|main|function|void main(void)
DECL|my_addr6|variable|my_addr6
DECL|quit|function|static inline void quit(void)
DECL|receive_data|function|static int receive_data(void)
DECL|ret|variable|ret
DECL|set_dst_addr|function|static inline void set_dst_addr(sa_family_t family,struct net_buf *buf, struct sockaddr *dst_addr)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|udp_recv|function|static struct net_buf *udp_recv(const char *name,struct net_context *context, struct net_buf *buf)
DECL|udp_sent|function|static inline void udp_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|waiter|variable|waiter
