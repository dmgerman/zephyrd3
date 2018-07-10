DECL|DTLS_TIMEOUT|macro|DTLS_TIMEOUT
DECL|DTLS_TIMEOUT|macro|DTLS_TIMEOUT
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MBEDTLS_PRINT|macro|MBEDTLS_PRINT
DECL|MBEDTLS_PRINT|macro|MBEDTLS_PRINT
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PORT_STR_LEN|macro|PORT_STR_LEN
DECL|_app_send|function|static void _app_send(struct net_context *net_ctx, int status, void *token, void *user_data)
DECL|_net_app_config_local_ctx|function|int _net_app_config_local_ctx(struct net_app_ctx *ctx, enum net_sock_type sock_type, enum net_ip_protocol proto, struct sockaddr *addr)
DECL|_net_app_dtls_established|function|enum net_verdict _net_app_dtls_established(struct net_conn *conn, struct net_pkt *pkt, void *user_data)
DECL|_net_app_entropy_source|function|int _net_app_entropy_source(void *data, unsigned char *output, size_t len, size_t *olen)
DECL|_net_app_instances|variable|_net_app_instances
DECL|_net_app_print_info|function|void _net_app_print_info(struct net_app_ctx *ctx)
DECL|_net_app_received|function|void _net_app_received(struct net_context *net_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|_net_app_register|function|void _net_app_register(struct net_app_ctx *ctx)
DECL|_net_app_select_net_ctx_debug|function|struct net_context *_net_app_select_net_ctx_debug(struct net_app_ctx *ctx, const struct sockaddr *dst, const char *caller, int line) #else
DECL|_net_app_set_local_addr|function|int _net_app_set_local_addr(struct net_app_ctx *ctx, struct sockaddr *addr, const char *myaddr, u16_t port)
DECL|_net_app_set_net_ctx|function|int _net_app_set_net_ctx(struct net_app_ctx *ctx, struct net_context *net_ctx, struct sockaddr *addr, socklen_t socklen, enum net_ip_protocol proto)
DECL|_net_app_sprint_ipaddr|function|char *_net_app_sprint_ipaddr(char *buf, int buflen, const struct sockaddr *addr)
DECL|_net_app_ssl_mainloop|function|int _net_app_ssl_mainloop(struct net_app_ctx *ctx)
DECL|_net_app_ssl_mux|function|int _net_app_ssl_mux(void *context, unsigned char *buf, size_t size)
DECL|_net_app_ssl_tx|function|int _net_app_ssl_tx(void *context, const unsigned char *buf, size_t size)
DECL|_net_app_tls_handler_stop|function|void _net_app_tls_handler_stop(struct net_app_ctx *ctx)
DECL|_net_app_tls_init|function|int _net_app_tls_init(struct net_app_ctx *ctx, int client_or_server)
DECL|_net_app_tls_received|function|void _net_app_tls_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
DECL|_net_app_tls_sendto|function|int _net_app_tls_sendto(struct net_pkt *pkt,const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|_net_app_tls_trigger_close|function|int _net_app_tls_trigger_close(struct net_app_ctx *ctx)
DECL|_net_app_unregister|function|void _net_app_unregister(struct net_app_ctx *ctx)
DECL|accept_dtls|function|static int accept_dtls(struct net_app_ctx *ctx, struct net_context *context, struct net_pkt *pkt)
DECL|copy_pool_vars|function|static inline void copy_pool_vars(struct net_context *new_context, struct net_context *listen_context)
DECL|copy_pool_vars|macro|copy_pool_vars
DECL|dtls_cleanup|function|static void dtls_cleanup(struct net_app_ctx *ctx, bool cancel_timer)
DECL|dtls_cleanup|macro|dtls_cleanup
DECL|dtls_timeout|function|static void dtls_timeout(struct k_work *work)
DECL|dtls_timing_get_delay|function|static int dtls_timing_get_delay(void *data)
DECL|dtls_timing_set_delay|function|static void dtls_timing_set_delay(void *data, uint32_t int_ms, uint32_t fin_ms)
DECL|get_server_ctx_without_dst|function|static struct net_context *get_server_ctx_without_dst(struct net_app_ctx *ctx)
DECL|get_server_ctx|function|static struct net_context *get_server_ctx(struct net_app_ctx *ctx, const struct sockaddr *dst)
DECL|my_debug|function|static void my_debug(void *ctx, int level, const char *file, int line, const char *str)
DECL|net_app_client_foreach|function|void net_app_client_foreach(net_app_ctx_cb_t cb, void *user_data)
DECL|net_app_close2|function|int net_app_close2(struct net_app_ctx *ctx, struct net_context *net_ctx)
DECL|net_app_close|function|int net_app_close(struct net_app_ctx *ctx)
DECL|net_app_foreach|function|static void net_app_foreach(net_app_ctx_cb_t cb, enum net_app_type type, void *user_data)
DECL|net_app_get_net_buf|function|struct net_buf *net_app_get_net_buf(struct net_app_ctx *ctx, struct net_pkt *pkt, s32_t timeout)
DECL|net_app_get_net_pkt_with_dst|function|struct net_pkt *net_app_get_net_pkt_with_dst(struct net_app_ctx *ctx, const struct sockaddr *dst, s32_t timeout)
DECL|net_app_get_net_pkt|function|struct net_pkt *net_app_get_net_pkt(struct net_app_ctx *ctx, sa_family_t family, s32_t timeout)
DECL|net_app_release|function|int net_app_release(struct net_app_ctx *ctx)
DECL|net_app_send_buf|function|int net_app_send_buf(struct net_app_ctx *ctx, u8_t *buf, size_t buf_len, const struct sockaddr *dst, socklen_t dst_len,
DECL|net_app_send_pkt|function|int net_app_send_pkt(struct net_app_ctx *ctx, struct net_pkt *pkt, const struct sockaddr *dst, socklen_t dst_len, s32_t timeout,
DECL|net_app_server_foreach|function|void net_app_server_foreach(net_app_ctx_cb_t cb, void *user_data)
DECL|net_app_set_cb|function|int net_app_set_cb(struct net_app_ctx *ctx, net_app_connect_cb_t connect_cb, net_app_recv_cb_t recv_cb, net_app_send_cb_t send_cb, net_app_close_cb_t close_cb)
DECL|net_app_set_net_pkt_pool|function|int net_app_set_net_pkt_pool(struct net_app_ctx *ctx, net_pkt_get_slab_func_t tx_slab, net_pkt_get_pool_func_t data_pool)
DECL|select_client_ctx|function|struct net_context *select_client_ctx(struct net_app_ctx *ctx, const struct sockaddr *dst)
DECL|select_client_ctx|macro|select_client_ctx
DECL|select_default_ctx|function|static void select_default_ctx(struct net_app_ctx *ctx)
DECL|select_server_ctx|function|struct net_context *select_server_ctx(struct net_app_ctx *ctx, const struct sockaddr *dst)
DECL|select_server_ctx|macro|select_server_ctx
DECL|set_remote_endpoint|function|static inline void set_remote_endpoint(struct net_app_ctx *ctx, struct net_pkt *pkt)
DECL|setup_ipv4_ctx|function|static int setup_ipv4_ctx(struct net_app_ctx *ctx, enum net_sock_type sock_type, enum net_ip_protocol proto)
DECL|setup_ipv6_ctx|function|static int setup_ipv6_ctx(struct net_app_ctx *ctx, enum net_sock_type sock_type, enum net_ip_protocol proto)
DECL|ssl_sent|function|static void ssl_sent(struct net_context *context, int status, void *token, void *user_data)
DECL|tls_sendto|function|static int tls_sendto(struct net_app_ctx *ctx, struct net_app_fifo_block *tx_data)
