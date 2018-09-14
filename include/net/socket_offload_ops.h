DECL|ZEPHYR_INCLUDE_NET_SOCKET_OFFLOAD_OPS_H_|macro|ZEPHYR_INCLUDE_NET_SOCKET_OFFLOAD_OPS_H_
DECL|accept|member|int (*accept)(int sock, struct sockaddr *addr, socklen_t *addrlen);
DECL|bind|member|int (*bind)(int sock, const struct sockaddr *addr, socklen_t addrlen);
DECL|close|member|int (*close)(int sock);
DECL|connect|member|int (*connect)(int sock, const struct sockaddr *addr,
DECL|getsockopt|member|int (*getsockopt)(int sock, int level, int optname, void *optval,
DECL|listen|member|int (*listen)(int sock, int backlog);
DECL|poll|member|int (*poll)(struct pollfd *fds, int nfds, int timeout);
DECL|recvfrom|member|ssize_t (*recvfrom)(int sock, void *buf, short int len,
DECL|recv|member|ssize_t (*recv)(int sock, void *buf, size_t max_len, int flags);
DECL|sendto|member|ssize_t (*sendto)(int sock, const void *buf, size_t len, int flags,
DECL|send|member|ssize_t (*send)(int sock, const void *buf, size_t len, int flags);
DECL|setsockopt|member|int (*setsockopt)(int sock, int level, int optname,
DECL|socket_offload|struct|struct socket_offload {
DECL|socket|member|int (*socket)(int family, int type, int proto);
