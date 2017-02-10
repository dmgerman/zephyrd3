DECL|RX_FIFO_DEPTH|macro|RX_FIFO_DEPTH
DECL|ssl_accepted|function|static void ssl_accepted(struct net_context *context, struct sockaddr *addr, socklen_t addrlen, int error, void *user_data)
DECL|ssl_init|function|int ssl_init(struct ssl_context *ctx, void *addr)
DECL|ssl_init|function|int ssl_init(struct ssl_context *ctx, void *addr)
DECL|ssl_received|function|static void ssl_received(struct net_context *context, struct net_buf *buf, int status, void *user_data)
DECL|ssl_rx|function|int ssl_rx(void *context, unsigned char *buf, size_t size)
DECL|ssl_sent|function|static inline void ssl_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|ssl_tx|function|int ssl_tx(void *context, const unsigned char *buf, size_t size)
