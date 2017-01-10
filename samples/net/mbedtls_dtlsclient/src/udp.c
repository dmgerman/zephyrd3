DECL|server_addr|variable|server_addr
DECL|udp_init|function|int udp_init(struct udp_context *ctx)
DECL|udp_received|function|static void udp_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|udp_rx|function|int udp_rx(void *context, unsigned char *buf, size_t size)
DECL|udp_tx|function|int udp_tx(void *context, const unsigned char *buf, size_t size)
