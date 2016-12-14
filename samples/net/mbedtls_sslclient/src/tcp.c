DECL|CLIENT_IP_ADDR|macro|CLIENT_IP_ADDR
DECL|INET_FAMILY|macro|INET_FAMILY
DECL|SERVER_IP_ADDR|macro|SERVER_IP_ADDR
DECL|client_addr|variable|client_addr
DECL|server_addr|variable|server_addr
DECL|tcp_init|function|int tcp_init(struct tcp_context *ctx)
DECL|tcp_received|function|static void tcp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|tcp_rx|function|int tcp_rx(void *context, unsigned char *buf, size_t size)
DECL|tcp_tx|function|int tcp_tx(void *context, const unsigned char *buf, size_t size)
