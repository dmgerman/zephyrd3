DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SET_ERRNO|macro|SET_ERRNO
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|sock_is_eof|macro|sock_is_eof
DECL|sock_set_eof|macro|sock_set_eof
DECL|zsock_accepted_cb|function|static void zsock_accepted_cb(struct net_context *new_ctx, struct sockaddr *addr, socklen_t addrlen, int status, void *user_data)
DECL|zsock_accept|function|int zsock_accept(int sock, struct sockaddr *addr, socklen_t *addrlen)
DECL|zsock_bind|function|int zsock_bind(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|zsock_close|function|int zsock_close(int sock)
DECL|zsock_connect|function|int zsock_connect(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|zsock_listen|function|int zsock_listen(int sock, int backlog)
DECL|zsock_received_cb|function|static void zsock_received_cb(struct net_context *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|zsock_socket|function|int zsock_socket(int family, int type, int proto)
