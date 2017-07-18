DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TLS_STARTUP_TIMEOUT|macro|TLS_STARTUP_TIMEOUT
DECL|_app_connected|function|static void _app_connected(struct net_context *net_ctx, int status, void *user_data)
DECL|connect_dtls|function|static int connect_dtls(struct net_app_ctx *ctx, struct net_context *orig,struct sockaddr *remote)
DECL|dns_cb|function|static void dns_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|get_port_number|function|static int get_port_number(const char *peer_addr_str, char *buf, size_t buf_len)
DECL|net_app_client_tls|function|int net_app_client_tls(struct net_app_ctx *ctx, u8_t *request_buf, size_t request_buf_len, u8_t *personalization_data, size_t personalization_data_len,
DECL|net_app_connect|function|int net_app_connect(struct net_app_ctx *ctx, s32_t timeout)
DECL|net_app_init_client|function|int net_app_init_client(struct net_app_ctx *ctx,enum net_sock_type sock_type, enum net_ip_protocol proto, struct sockaddr *client_addr, struct sockaddr *peer_addr,
DECL|resolve_name|function|static int resolve_name(struct net_app_ctx *ctx,const char *peer_addr_str, enum dns_query_type type, s32_t timeout)
DECL|set_remote_addr|function|static int set_remote_addr(struct net_app_ctx *ctx, const char *peer_addr_str, u16_t peer_port, s32_t timeout)
DECL|start_tls_client|function|static int start_tls_client(struct net_app_ctx *ctx)
DECL|tls_client_handler|function|static void tls_client_handler(struct net_app_ctx *ctx, struct k_sem *startup_sync)
