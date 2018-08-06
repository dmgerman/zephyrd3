DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ca_chain|member|mbedtls_x509_crt ca_chain;
DECL|ciphersuites|member|int ciphersuites[CONFIG_NET_SOCKETS_TLS_MAX_CIPHERSUITES + 1];
DECL|config|member|mbedtls_ssl_config config;
DECL|context_lock|variable|context_lock
DECL|cookie|member|mbedtls_ssl_cookie_ctx cookie;
DECL|dtls_is_peer_addr_valid|function|static bool dtls_is_peer_addr_valid(struct net_context *context, const struct sockaddr *peer_addr, socklen_t addrlen)
DECL|dtls_peer_address_get|function|static void dtls_peer_address_get(struct net_context *context, struct sockaddr *peer_addr, socklen_t *addrlen)
DECL|dtls_peer_address_set|function|static void dtls_peer_address_set(struct net_context *context, const struct sockaddr *peer_addr, socklen_t addrlen)
DECL|dtls_peer_addrlen|member|socklen_t dtls_peer_addrlen;
DECL|dtls_peer_addr|member|struct sockaddr dtls_peer_addr;
DECL|dtls_rx|function|static int dtls_rx(void *ctx, unsigned char *buf, size_t len, uint32_t timeout)
DECL|dtls_timing_context|struct|struct dtls_timing_context {
DECL|dtls_timing_get_delay|function|static int dtls_timing_get_delay(void *data)
DECL|dtls_timing_set_delay|function|static void dtls_timing_set_delay(void *data, uint32_t int_ms, uint32_t fin_ms)
DECL|dtls_timing|member|struct dtls_timing_context dtls_timing;
DECL|dtls_tx|function|static int dtls_tx(void *ctx, const unsigned char *buf, size_t len)
DECL|fin_ms|member|u32_t fin_ms;
DECL|flags|member|int flags;
DECL|int_ms|member|u32_t int_ms;
DECL|is_hostname_set|member|bool is_hostname_set;
DECL|is_used|member|bool is_used;
DECL|options|member|} options;
DECL|own_cert|member|mbedtls_x509_crt own_cert;
DECL|priv_key|member|mbedtls_pk_context priv_key;
DECL|role|member|s8_t role;
DECL|sec_tag_count|member|int sec_tag_count;
DECL|sec_tag_list|member|struct sec_tag_list sec_tag_list;
DECL|sec_tag_list|struct|struct sec_tag_list {
DECL|sec_tags|member|sec_tag_t sec_tags[CONFIG_NET_SOCKETS_TLS_MAX_CREDENTIALS];
DECL|snapshot|member|u32_t snapshot;
DECL|ssl|member|mbedtls_ssl_context ssl;
DECL|time_left|function|static inline int time_left(u32_t start, u32_t timeout)
DECL|tls_add_ca_certificate|function|static int tls_add_ca_certificate(struct tls_context *tls, struct tls_credential *ca_cert)
DECL|tls_alloc|function|static struct tls_context *tls_alloc(void)
DECL|tls_clone|function|static struct tls_context *tls_clone(struct tls_context *source_tls)
DECL|tls_contexts|variable|tls_contexts
DECL|tls_context|struct|struct tls_context {
DECL|tls_ctr_drbg|variable|tls_ctr_drbg
DECL|tls_debug|function|static void tls_debug(void *ctx, int level, const char *file, int line, const char *str)
DECL|tls_entropy_func|function|static int tls_entropy_func(void *ctx, unsigned char *buf, size_t len)
DECL|tls_entropy_func|function|static int tls_entropy_func(void *ctx, unsigned char *buf, size_t len)
DECL|tls_established|member|bool tls_established;
DECL|tls_init|function|static int tls_init(struct device *unused)
DECL|tls_mbedtls_handshake|function|static int tls_mbedtls_handshake(struct net_context *context)
DECL|tls_mbedtls_init|function|static int tls_mbedtls_init(struct net_context *context, bool is_server)
DECL|tls_mbedtls_reset|function|static int tls_mbedtls_reset(struct net_context *context)
DECL|tls_mbedtls_set_credentials|function|static int tls_mbedtls_set_credentials(struct tls_context *tls)
DECL|tls_opt_ciphersuite_list_get|function|static int tls_opt_ciphersuite_list_get(struct net_context *context,void *optval, socklen_t *optlen)
DECL|tls_opt_ciphersuite_list_set|function|static int tls_opt_ciphersuite_list_set(struct net_context *context,const void *optval, socklen_t optlen)
DECL|tls_opt_ciphersuite_used_get|function|static int tls_opt_ciphersuite_used_get(struct net_context *context,void *optval, socklen_t *optlen)
DECL|tls_opt_hostname_set|function|static int tls_opt_hostname_set(struct net_context *context,const void *optval, socklen_t optlen)
DECL|tls_opt_peer_verify_set|function|static int tls_opt_peer_verify_set(struct net_context *context, const void *optval, socklen_t optlen)
DECL|tls_opt_role_set|function|static int tls_opt_role_set(struct net_context *context, const void *optval, socklen_t optlen)
DECL|tls_opt_sec_tag_list_get|function|static int tls_opt_sec_tag_list_get(struct net_context *context, void *optval, socklen_t *optlen)
DECL|tls_opt_sec_tag_list_set|function|static int tls_opt_sec_tag_list_set(struct net_context *context, const void *optval, socklen_t optlen)
DECL|tls_release|function|static int tls_release(struct tls_context *tls)
DECL|tls_rx|function|static int tls_rx(void *ctx, unsigned char *buf, size_t len)
DECL|tls_set_ca_chain|function|static void tls_set_ca_chain(struct tls_context *tls)
DECL|tls_set_credential|function|static int tls_set_credential(struct tls_context *tls, struct tls_credential *cred)
DECL|tls_set_own_cert|function|static int tls_set_own_cert(struct tls_context *tls, struct tls_credential *own_cert, struct tls_credential *priv_key)
DECL|tls_set_psk|function|static int tls_set_psk(struct tls_context *tls, struct tls_credential *psk, struct tls_credential *psk_id)
DECL|tls_tx|function|static int tls_tx(void *ctx, const unsigned char *buf, size_t len)
DECL|tls_version|member|enum net_ip_protocol_secure tls_version;
DECL|verify_level|member|s8_t verify_level;
DECL|ztls_accept|function|int ztls_accept(int sock, struct sockaddr *addr, socklen_t *addrlen)
DECL|ztls_bind|function|int ztls_bind(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|ztls_close|function|int ztls_close(int sock)
DECL|ztls_connect|function|int ztls_connect(int sock, const struct sockaddr *addr, socklen_t addrlen)
DECL|ztls_fcntl|function|int ztls_fcntl(int sock, int cmd, int flags)
DECL|ztls_getsockopt|function|int ztls_getsockopt(int sock, int level, int optname, void *optval, socklen_t *optlen)
DECL|ztls_listen|function|int ztls_listen(int sock, int backlog)
DECL|ztls_poll|function|int ztls_poll(struct zsock_pollfd *fds, int nfds, int timeout)
DECL|ztls_recvfrom|function|ssize_t ztls_recvfrom(int sock, void *buf, size_t max_len, int flags, struct sockaddr *src_addr, socklen_t *addrlen)
DECL|ztls_recv|function|ssize_t ztls_recv(int sock, void *buf, size_t max_len, int flags)
DECL|ztls_sendto|function|ssize_t ztls_sendto(int sock, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr, socklen_t addrlen)
DECL|ztls_send|function|ssize_t ztls_send(int sock, const void *buf, size_t len, int flags)
DECL|ztls_setsockopt|function|int ztls_setsockopt(int sock, int level, int optname, const void *optval, socklen_t optlen)
DECL|ztls_socket|function|int ztls_socket(int family, int type, int proto)
