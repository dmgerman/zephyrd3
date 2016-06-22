DECL|NET_DEBUG|macro|NET_DEBUG
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|check_used_port|function|static int check_used_port(enum ip_protocol ip_proto, uint16_t local_port, const struct sockaddr *local_addr)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|find_available_port|function|static uint16_t find_available_port(struct net_context *context, const struct sockaddr *addr)
DECL|find_context|function|static inline struct net_context *find_context(void *conn_handler)
DECL|net_context_accept|function|int net_context_accept(struct net_context *context, net_context_accept_cb_t cb, int32_t timeout, void *user_data)
DECL|net_context_bind|function|int net_context_bind(struct net_context *context, const struct sockaddr *addr)
DECL|net_context_connect|function|int net_context_connect(struct net_context *context,const struct sockaddr *addr, net_context_connect_cb_t cb, int32_t timeout, void *user_data)
DECL|net_context_get|function|int net_context_get(sa_family_t family, enum net_sock_type type, enum ip_protocol ip_proto, struct net_context **context)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_listen|function|int net_context_listen(struct net_context *context, int backlog)
DECL|net_context_put|function|int net_context_put(struct net_context *context)
DECL|net_context_recv|function|int net_context_recv(struct net_context *context, net_context_recv_cb_t cb, int32_t timeout, void *user_data)
DECL|net_context_sendto|function|int net_context_sendto(struct net_buf *buf, const struct sockaddr *dst_addr, net_context_send_cb_t cb, int32_t timeout, void *token,
DECL|net_context_send|function|int net_context_send(struct net_buf *buf, net_context_send_cb_t cb, int32_t timeout, void *token, void *user_data)
DECL|packet_received|function|enum net_verdict packet_received(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|send_data|function|static int send_data(struct net_context *context, struct net_buf *buf, net_context_send_cb_t cb, int32_t timeout, void *token,
DECL|set_appdata_values|function|static void set_appdata_values(struct net_buf *buf, enum ip_protocol proto, size_t total_len)
