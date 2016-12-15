DECL|ACK_TIMEOUT|macro|ACK_TIMEOUT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ack_timeout|function|static void ack_timeout(struct k_work *work)
DECL|check_used_port|function|static int check_used_port(enum net_ip_protocol ip_proto, uint16_t local_port, const struct sockaddr *local_addr)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|create_sockaddr|function|static struct sockaddr *create_sockaddr(struct net_buf *buf,struct sockaddr *addr)
DECL|create_udp_packet|function|static int create_udp_packet(struct net_context *context, struct net_buf *buf, const struct sockaddr *dst_addr, struct net_buf **out_buf)
DECL|find_available_port|function|static uint16_t find_available_port(struct net_context *context, const struct sockaddr *addr)
DECL|find_context|function|static inline struct net_context *find_context(void *conn_handler)
DECL|net_context_accept|function|int net_context_accept(struct net_context *context, net_context_accept_cb_t cb, int32_t timeout, void *user_data)
DECL|net_context_bind|function|int net_context_bind(struct net_context *context, const struct sockaddr *addr, socklen_t addrlen)
DECL|net_context_connect|function|int net_context_connect(struct net_context *context,const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb, int32_t timeout,
DECL|net_context_foreach|function|void net_context_foreach(net_context_cb_t cb, void *user_data)
DECL|net_context_get|function|int net_context_get(sa_family_t family, enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_listen|function|int net_context_listen(struct net_context *context, int backlog)
DECL|net_context_put|function|int net_context_put(struct net_context *context)
DECL|net_context_recv|function|int net_context_recv(struct net_context *context, net_context_recv_cb_t cb, int32_t timeout, void *user_data)
DECL|net_context_sendto|function|int net_context_sendto(struct net_buf *buf, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, int32_t timeout,
DECL|net_context_send|function|int net_context_send(struct net_buf *buf, net_context_send_cb_t cb, int32_t timeout, void *token, void *user_data)
DECL|net_tcp_print_recv_info|macro|net_tcp_print_recv_info
DECL|net_tcp_print_recv_info|macro|net_tcp_print_recv_info
DECL|net_tcp_print_send_info|macro|net_tcp_print_send_info
DECL|net_tcp_print_send_info|macro|net_tcp_print_send_info
DECL|packet_received|function|enum net_verdict packet_received(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|recv_udp|function|static int recv_udp(struct net_context *context, net_context_recv_cb_t cb, int32_t timeout, void *user_data)
DECL|send_ack|function|static inline int send_ack(struct net_context *context, struct sockaddr *remote)
DECL|send_control_segment|function|static inline int send_control_segment(struct net_context *context, const struct sockaddr *remote, int flags, const char *msg)
DECL|send_data|function|static int send_data(struct net_context *context, struct net_buf *buf, net_context_send_cb_t cb, int32_t timeout, void *token,
DECL|send_fin_ack|function|static inline int send_fin_ack(struct net_context *context, struct sockaddr *remote)
DECL|send_fin_if_active_close|function|static bool send_fin_if_active_close(struct net_context *context)
DECL|send_fin|function|static inline int send_fin(struct net_context *context, struct sockaddr *remote)
DECL|send_reset|function|static int send_reset(struct net_context *context, struct sockaddr *remote)
DECL|send_syn_ack|function|static inline int send_syn_ack(struct net_context *context, struct sockaddr *remote)
DECL|send_syn|function|static inline int send_syn(struct net_context *context, const struct sockaddr *remote)
DECL|sendto|function|static int sendto(struct net_buf *buf, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, int32_t timeout,
DECL|set_appdata_values|function|static void set_appdata_values(struct net_buf *buf, enum net_ip_protocol proto, size_t total_len)
DECL|tcp_active_close|function|static enum net_verdict tcp_active_close(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|tcp_established|function|static enum net_verdict tcp_established(struct net_conn *conn,struct net_buf *buf, void *user_data)
DECL|tcp_hdr_len|function|static int tcp_hdr_len(struct net_buf *buf)
DECL|tcp_passive_close|function|static enum net_verdict tcp_passive_close(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|tcp_syn_rcvd|function|static enum net_verdict tcp_syn_rcvd(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|tcp_synack_received|function|static enum net_verdict tcp_synack_received(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|update_ll_reserve|function|static inline struct net_buf *update_ll_reserve(struct net_buf *buf,struct in6_addr *addr)
