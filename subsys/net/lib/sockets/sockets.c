DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SET_ERRNO|macro|SET_ERRNO
DECL|SOCK_EOF|macro|SOCK_EOF
DECL|SOCK_NONBLOCK|macro|SOCK_NONBLOCK
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|_k_fifo_wait_non_empty|function|static inline int _k_fifo_wait_non_empty(struct k_fifo *fifo, int32_t timeout)
DECL|sock_get_flag|function|static inline u32_t sock_get_flag(struct net_context *ctx, u32_t mask)
DECL|sock_is_eof|macro|sock_is_eof
DECL|sock_is_nonblock|macro|sock_is_nonblock
DECL|sock_set_eof|macro|sock_set_eof
DECL|sock_set_flag|function|static inline void sock_set_flag(struct net_context *ctx, u32_t mask, u32_t flag)
DECL|zsock_accepted_cb|function|static void zsock_accepted_cb(struct net_context *new_ctx, struct sockaddr *addr, socklen_t addrlen, int status, void *user_data)
DECL|zsock_accept|function|int zsock_accept(int sock, struct sockaddr *addr, socklen_t *addrlen)
DECL|zsock_bind|function|int zsock_bind(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|zsock_close|function|int zsock_close(int sock)
DECL|zsock_connect|function|int zsock_connect(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|zsock_fcntl|function|int zsock_fcntl(int sock, int cmd, int flags)
DECL|zsock_flush_queue|function|static void zsock_flush_queue(struct net_context *ctx)
DECL|zsock_getsockopt|function|int zsock_getsockopt(int sock, int level, int optname, void *optval, socklen_t *optlen)
DECL|zsock_inet_pton|function|int zsock_inet_pton(sa_family_t family, const char *src, void *dst)
DECL|zsock_listen|function|int zsock_listen(int sock, int backlog)
DECL|zsock_poll|function|int zsock_poll(struct zsock_pollfd *fds, int nfds, int timeout)
DECL|zsock_received_cb|function|static void zsock_received_cb(struct net_context *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|zsock_recv_dgram|function|static inline ssize_t zsock_recv_dgram(struct net_context *ctx, void *buf, size_t max_len, int flags, struct sockaddr *src_addr,
DECL|zsock_recv_stream|function|static inline ssize_t zsock_recv_stream(struct net_context *ctx,void *buf, size_t max_len, int flags)
DECL|zsock_recvfrom|function|ssize_t zsock_recvfrom(int sock, void *buf, size_t max_len, int flags, struct sockaddr *src_addr, socklen_t *addrlen)
DECL|zsock_recv|function|ssize_t zsock_recv(int sock, void *buf, size_t max_len, int flags)
DECL|zsock_sendto|function|ssize_t zsock_sendto(int sock, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr, socklen_t addrlen)
DECL|zsock_send|function|ssize_t zsock_send(int sock, const void *buf, size_t len, int flags)
DECL|zsock_setsockopt|function|int zsock_setsockopt(int sock, int level, int optname, const void *optval, socklen_t optlen)
DECL|zsock_socket|function|int zsock_socket(int family, int type, int proto)
