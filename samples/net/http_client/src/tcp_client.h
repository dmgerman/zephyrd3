DECL|_TCP_CLIENT_H_|macro|_TCP_CLIENT_H_
DECL|local_sock|member|struct sockaddr local_sock;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|receive_cb|member|void (*receive_cb)(struct tcp_client_ctx *ctx, struct net_pkt *rx);
DECL|tcp_client_ctx|struct|struct tcp_client_ctx {
DECL|timeout|member|int32_t timeout;
