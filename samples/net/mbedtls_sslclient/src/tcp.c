DECL|INET_FAMILY|macro|INET_FAMILY
DECL|TCP_BUF_CTR|macro|TCP_BUF_CTR
DECL|TCP_BUF_SIZE|macro|TCP_BUF_SIZE
DECL|if_addr_add|function|static int if_addr_add(struct sockaddr *local_sock)
DECL|set_addr|function|static int set_addr(struct sockaddr *sock_addr, const char *addr, u16_t server_port)
DECL|tcp_init|function|int tcp_init(struct tcp_context *ctx, const char *server_addr, u16_t server_port)
DECL|tcp_received|function|static void tcp_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
DECL|tcp_rx|function|int tcp_rx(void *context, unsigned char *buf, size_t size)
DECL|tcp_set_local_addr|function|int tcp_set_local_addr(struct tcp_context *ctx, const char *local_addr)
DECL|tcp_tx|function|int tcp_tx(void *context, const unsigned char *buf, size_t size)
