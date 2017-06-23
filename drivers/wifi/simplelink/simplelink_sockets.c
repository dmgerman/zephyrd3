DECL|ONE_THOUSAND|macro|ONE_THOUSAND
DECL|SO_BROADCAST|macro|SO_BROADCAST
DECL|SO_REUSEADDR|macro|SO_REUSEADDR
DECL|SO_SNDBUF|macro|SO_SNDBUF
DECL|TCP_NODELAY|macro|TCP_NODELAY
DECL|handle_recv_flags|function|static int handle_recv_flags(int sd, int flags, bool set, int *nb_enabled)
DECL|simplelink_accept|function|static int simplelink_accept(int sd, struct sockaddr *addr, socklen_t *addrlen)
DECL|simplelink_bind|function|static int simplelink_bind(int sd, const struct sockaddr *addr, socklen_t addrlen)
DECL|simplelink_close|function|static int simplelink_close(int sd)
DECL|simplelink_connect|function|static int simplelink_connect(int sd, const struct sockaddr *addr, socklen_t addrlen)
DECL|simplelink_getsockopt|function|static int simplelink_getsockopt(int sd, int level, int optname, void *optval, socklen_t *optlen)
DECL|simplelink_listen|function|static int simplelink_listen(int sd, int backlog)
DECL|simplelink_ops|variable|simplelink_ops
DECL|simplelink_poll|function|static int simplelink_poll(struct pollfd *fds, int nfds, int msecs)
DECL|simplelink_recvfrom|function|static ssize_t simplelink_recvfrom(int sd, void *buf, short int len, short int flags, struct sockaddr *from, socklen_t *fromlen)
DECL|simplelink_recv|function|static ssize_t simplelink_recv(int sd, void *buf, size_t max_len, int flags)
DECL|simplelink_sendto|function|static ssize_t simplelink_sendto(int sd, const void *buf, size_t len, int flags, const struct sockaddr *to, socklen_t tolen)
DECL|simplelink_send|function|static ssize_t simplelink_send(int sd, const void *buf, size_t len, int flags)
DECL|simplelink_setsockopt|function|static int simplelink_setsockopt(int sd, int level, int optname, const void *optval, socklen_t optlen)
DECL|simplelink_socket|function|static int simplelink_socket(int family, int type, int proto)
DECL|translate_sl_to_z_addr|function|static void translate_sl_to_z_addr(SlSockAddr_t *sl_addr, SlSocklen_t sl_addrlen, struct sockaddr *addr, socklen_t *addrlen)
DECL|translate_z_to_sl_addrlen|function|static SlSockAddr_t *translate_z_to_sl_addrlen(socklen_t addrlen, SlSockAddrIn_t *sl_addr_in, SlSockAddrIn6_t *sl_addr_in6, SlSocklen_t *sl_addrlen)
DECL|translate_z_to_sl_addrs|function|static SlSockAddr_t *translate_z_to_sl_addrs(const struct sockaddr *addr, socklen_t addrlen, SlSockAddrIn_t *sl_addr_in, SlSockAddrIn6_t *sl_addr_in6, SlSocklen_t *sl_addrlen)
