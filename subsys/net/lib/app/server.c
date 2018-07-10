DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PORT_STR|macro|PORT_STR
DECL|PORT_STR|macro|PORT_STR
DECL|TLS_STARTUP_TIMEOUT|macro|TLS_STARTUP_TIMEOUT
DECL|_net_app_accept_cb|function|void _net_app_accept_cb(struct net_context *net_ctx,struct sockaddr *addr, socklen_t addrlen, int status, void *data)
DECL|_net_app_server_tls_disable|function|bool _net_app_server_tls_disable(struct net_app_ctx *ctx)
DECL|_net_app_server_tls_enable|function|bool _net_app_server_tls_enable(struct net_app_ctx *ctx)
DECL|find_net_ctx|function|static struct net_context *find_net_ctx(struct net_app_ctx *ctx,int *idx)
DECL|get_avail_net_ctx|function|static int get_avail_net_ctx(struct net_app_ctx *ctx)
DECL|net_app_init_server|function|int net_app_init_server(struct net_app_ctx *ctx,enum net_sock_type sock_type, enum net_ip_protocol proto, struct sockaddr *server_addr, u16_t port,
DECL|net_app_listen|function|int net_app_listen(struct net_app_ctx *ctx)
DECL|net_app_server_disable|function|bool net_app_server_disable(struct net_app_ctx *ctx)
DECL|net_app_server_enable|function|bool net_app_server_enable(struct net_app_ctx *ctx)
DECL|net_app_server_tls|function|int net_app_server_tls(struct net_app_ctx *ctx, u8_t *request_buf, size_t request_buf_len, const char *server_banner, u8_t *personalization_data,
DECL|new_client|function|static void new_client(struct net_context *net_ctx, const struct sockaddr *addr)
DECL|new_server|function|static inline void new_server(struct net_app_ctx *ctx, const char *server_banner)
DECL|tls_server_handler|function|static void tls_server_handler(struct net_app_ctx *ctx, struct k_sem *startup_sync)
