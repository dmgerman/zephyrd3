DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|config|member|mbedtls_ssl_config config;
DECL|context_lock|variable|context_lock
DECL|flags|member|int flags;
DECL|is_used|member|bool is_used;
DECL|ssl|member|mbedtls_ssl_context ssl;
DECL|tls_alloc|function|static struct tls_context *tls_alloc(void)
DECL|tls_clone|function|static struct tls_context *tls_clone(struct tls_context *source_tls)
DECL|tls_contexts|variable|tls_contexts
DECL|tls_context|struct|struct tls_context {
DECL|tls_ctr_drbg|variable|tls_ctr_drbg
DECL|tls_debug|function|static void tls_debug(void *ctx, int level, const char *file, int line, const char *str)
DECL|tls_entropy_func|function|static int tls_entropy_func(void *ctx, unsigned char *buf, size_t len)
DECL|tls_entropy_func|function|static int tls_entropy_func(void *ctx, unsigned char *buf, size_t len)
DECL|tls_init|function|static int tls_init(struct device *unused)
DECL|tls_mbedtls_handshake|function|static int tls_mbedtls_handshake(struct net_context *context)
DECL|tls_mbedtls_init|function|static int tls_mbedtls_init(struct net_context *context, bool is_server)
DECL|tls_mbedtls_set_credentials|function|static int tls_mbedtls_set_credentials(struct tls_context *tls)
DECL|tls_release|function|static int tls_release(struct tls_context *tls)
DECL|tls_rx|function|static int tls_rx(void *ctx, unsigned char *buf, size_t len)
DECL|tls_tx|function|static int tls_tx(void *ctx, const unsigned char *buf, size_t len)
DECL|tls_version|member|enum net_ip_protocol_secure tls_version;
DECL|ztls_accept|function|int ztls_accept(int sock, struct sockaddr *addr, socklen_t *addrlen)
DECL|ztls_bind|function|int ztls_bind(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|ztls_close|function|int ztls_close(int sock)
DECL|ztls_connect|function|int ztls_connect(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|ztls_fcntl|function|int ztls_fcntl(int sock, int cmd, int flags)
DECL|ztls_listen|function|int ztls_listen(int sock, int backlog)
DECL|ztls_poll|function|int ztls_poll(struct zsock_pollfd *fds, int nfds, int timeout)
DECL|ztls_recvfrom|function|ssize_t ztls_recvfrom(int sock, void *buf, size_t max_len, int flags, struct sockaddr *src_addr, socklen_t *addrlen)
DECL|ztls_recv|function|ssize_t ztls_recv(int sock, void *buf, size_t max_len, int flags)
DECL|ztls_sendto|function|ssize_t ztls_sendto(int sock, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr, socklen_t addrlen)
DECL|ztls_send|function|ssize_t ztls_send(int sock, const void *buf, size_t len, int flags)
DECL|ztls_socket|function|int ztls_socket(int family, int type, int proto)
