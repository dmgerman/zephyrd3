DECL|EAI_AGAIN|macro|EAI_AGAIN
DECL|EAI_BADFLAGS|macro|EAI_BADFLAGS
DECL|EAI_FAIL|macro|EAI_FAIL
DECL|EAI_NODATA|macro|EAI_NODATA
DECL|EAI_NONAME|macro|EAI_NONAME
DECL|MSG_DONTWAIT|macro|MSG_DONTWAIT
DECL|MSG_PEEK|macro|MSG_PEEK
DECL|POLLIN|macro|POLLIN
DECL|POLLOUT|macro|POLLOUT
DECL|SOL_TLS|macro|SOL_TLS
DECL|TLS_CIPHERSUITE_LIST|macro|TLS_CIPHERSUITE_LIST
DECL|TLS_CIPHERSUITE_USED|macro|TLS_CIPHERSUITE_USED
DECL|TLS_HOSTNAME|macro|TLS_HOSTNAME
DECL|TLS_PEER_VERIFY|macro|TLS_PEER_VERIFY
DECL|TLS_ROLE|macro|TLS_ROLE
DECL|TLS_SEC_TAG_LIST|macro|TLS_SEC_TAG_LIST
DECL|ZSOCK_MSG_DONTWAIT|macro|ZSOCK_MSG_DONTWAIT
DECL|ZSOCK_MSG_PEEK|macro|ZSOCK_MSG_PEEK
DECL|ZSOCK_POLLIN|macro|ZSOCK_POLLIN
DECL|ZSOCK_POLLOUT|macro|ZSOCK_POLLOUT
DECL|__NET_SOCKET_H|macro|__NET_SOCKET_H
DECL|_ai_addr|member|struct sockaddr _ai_addr;
DECL|_ai_canonname|member|char _ai_canonname[DNS_MAX_NAME_SIZE + 1];
DECL|accept|function|static inline int accept(int sock, struct sockaddr *addr, socklen_t *addrlen)
DECL|addrinfo|macro|addrinfo
DECL|ai_addrlen|member|socklen_t ai_addrlen;
DECL|ai_addr|member|struct sockaddr *ai_addr;
DECL|ai_canonname|member|char *ai_canonname;
DECL|ai_family|member|int ai_family;
DECL|ai_flags|member|int ai_flags;
DECL|ai_next|member|struct zsock_addrinfo *ai_next;
DECL|ai_protocol|member|int ai_protocol;
DECL|ai_socktype|member|int ai_socktype;
DECL|bind|function|static inline int bind(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|close|function|static inline int close(int sock)
DECL|connect|function|static inline int connect(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|events|member|short events;
DECL|fcntl|macro|fcntl
DECL|fcntl|macro|fcntl
DECL|fd|member|int fd;
DECL|freeaddrinfo|function|static inline void freeaddrinfo(struct zsock_addrinfo *ai)
DECL|getaddrinfo|function|static inline int getaddrinfo(const char *host, const char *service, const struct zsock_addrinfo *hints, struct zsock_addrinfo **res)
DECL|getsockopt|function|static inline int getsockopt(int sock, int level, int optname, void *optval, socklen_t *optlen)
DECL|inet_ntop|function|static inline char *inet_ntop(sa_family_t family, const void *src, char *dst, size_t size)
DECL|inet_pton|function|static inline int inet_pton(sa_family_t family, const char *src, void *dst)
DECL|listen|function|static inline int listen(int sock, int backlog)
DECL|pollfd|macro|pollfd
DECL|poll|function|static inline int poll(struct zsock_pollfd *fds, int nfds, int timeout)
DECL|recvfrom|function|static inline ssize_t recvfrom(int sock, void *buf, size_t max_len, int flags, struct sockaddr *src_addr, socklen_t *addrlen)
DECL|recv|function|static inline ssize_t recv(int sock, void *buf, size_t max_len, int flags)
DECL|revents|member|short revents;
DECL|sendto|function|static inline ssize_t sendto(int sock, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr, socklen_t addrlen)
DECL|send|function|static inline ssize_t send(int sock, const void *buf, size_t len, int flags)
DECL|setsockopt|function|static inline int setsockopt(int sock, int level, int optname, const void *optval, socklen_t optlen)
DECL|socket|function|static inline int socket(int family, int type, int proto)
DECL|zsock_addrinfo|struct|struct zsock_addrinfo {
DECL|zsock_pollfd|struct|struct zsock_pollfd {
