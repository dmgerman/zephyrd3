DECL|EPFNOSUPPORT|macro|EPFNOSUPPORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|bind_default|function|static int bind_default(struct net_context *context)
DECL|check_used_port|function|static int check_used_port(enum net_ip_protocol ip_proto, u16_t local_port, const struct sockaddr *local_addr)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|create_udp_packet|function|static int create_udp_packet(struct net_context *context, struct net_pkt *pkt, const struct sockaddr *dst_addr, struct net_pkt **out_pkt)
DECL|find_available_port|function|static u16_t find_available_port(struct net_context *context, const struct sockaddr *addr)
DECL|find_context|function|static inline struct net_context *find_context(void *conn_handler)
DECL|get_context_priority|function|static int get_context_priority(struct net_context *context,void *value, size_t *len)
DECL|net_context_accept|function|int net_context_accept(struct net_context *context, net_tcp_accept_cb_t cb, s32_t timeout, void *user_data)
DECL|net_context_bind|function|int net_context_bind(struct net_context *context, const struct sockaddr *addr, socklen_t addrlen)
DECL|net_context_connect|function|int net_context_connect(struct net_context *context,const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb, s32_t timeout,
DECL|net_context_create_ipv4|function|struct net_pkt *net_context_create_ipv4(struct net_context *context,struct net_pkt *pkt, const struct in_addr *src, const struct in_addr *dst)
DECL|net_context_foreach|function|void net_context_foreach(net_context_cb_t cb, void *user_data)
DECL|net_context_get_option|function|int net_context_get_option(struct net_context *context, enum net_context_option option, void *value, size_t *len)
DECL|net_context_get|function|int net_context_get(sa_family_t family, enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_listen|function|int net_context_listen(struct net_context *context, int backlog)
DECL|net_context_packet_received|function|enum net_verdict net_context_packet_received(struct net_conn *conn, struct net_pkt *pkt, void *user_data)
DECL|net_context_put|function|int net_context_put(struct net_context *context)
DECL|net_context_recv|function|int net_context_recv(struct net_context *context, net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|net_context_ref|function|int net_context_ref(struct net_context *context)
DECL|net_context_sendto|function|int net_context_sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|net_context_send|function|int net_context_send(struct net_pkt *pkt, net_context_send_cb_t cb, s32_t timeout, void *token, void *user_data)
DECL|net_context_set_appdata_values|function|void net_context_set_appdata_values(struct net_pkt *pkt, enum net_ip_protocol proto)
DECL|net_context_set_option|function|int net_context_set_option(struct net_context *context, enum net_context_option option, const void *value, size_t len)
DECL|net_context_unref|function|int net_context_unref(struct net_context *context)
DECL|net_context_update_recv_wnd|function|int net_context_update_recv_wnd(struct net_context *context,s32_t delta)
DECL|recv_udp|function|static int recv_udp(struct net_context *context, net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|sendto|function|static int sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|set_context_priority|function|static int set_context_priority(struct net_context *context,const void *value, size_t len)
