DECL|ACK_TIMEOUT|macro|ACK_TIMEOUT
DECL|ACK_TIMEOUT|macro|ACK_TIMEOUT
DECL|FIN_TIMEOUT|macro|FIN_TIMEOUT
DECL|NET_CONN_CB|function|NET_CONN_CB(tcp_established)
DECL|NET_CONN_CB|function|NET_CONN_CB(tcp_syn_rcvd)
DECL|NET_CONN_CB|function|NET_CONN_CB(tcp_synack_received)
DECL|NET_CONN_CB|macro|NET_CONN_CB
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ack_timer|member|struct k_delayed_work ack_timer;
DECL|backlog_ack_timeout|function|static void backlog_ack_timeout(struct k_work *work)
DECL|bind_default|function|static int bind_default(struct net_context *context)
DECL|cancelled|member|bool cancelled;
DECL|check_used_port|function|static int check_used_port(enum net_ip_protocol ip_proto, u16_t local_port, const struct sockaddr *local_addr)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|copy_pool_vars|function|static inline void copy_pool_vars(struct net_context *new_context, struct net_context *listen_context)
DECL|copy_pool_vars|macro|copy_pool_vars
DECL|create_sockaddr|function|static struct sockaddr *create_sockaddr(struct net_pkt *pkt,struct sockaddr *addr)
DECL|create_udp_packet|function|static int create_udp_packet(struct net_context *context, struct net_pkt *pkt, const struct sockaddr *dst_addr, struct net_pkt **out_pkt)
DECL|find_available_port|function|static u16_t find_available_port(struct net_context *context, const struct sockaddr *addr)
DECL|find_context|function|static inline struct net_context *find_context(void *conn_handler)
DECL|handle_ack_timeout|function|static void handle_ack_timeout(struct k_work *work)
DECL|handle_fin_timeout|function|static void handle_fin_timeout(struct k_work *work)
DECL|net_context_accept|function|int net_context_accept(struct net_context *context, net_tcp_accept_cb_t cb, s32_t timeout, void *user_data)
DECL|net_context_bind|function|int net_context_bind(struct net_context *context, const struct sockaddr *addr, socklen_t addrlen)
DECL|net_context_connect|function|int net_context_connect(struct net_context *context,const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb, s32_t timeout,
DECL|net_context_foreach|function|void net_context_foreach(net_context_cb_t cb, void *user_data)
DECL|net_context_get|function|int net_context_get(sa_family_t family, enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_listen|function|int net_context_listen(struct net_context *context, int backlog)
DECL|net_context_put|function|int net_context_put(struct net_context *context)
DECL|net_context_recv|function|int net_context_recv(struct net_context *context, net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|net_context_ref|function|int net_context_ref(struct net_context *context)
DECL|net_context_sendto|function|int net_context_sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|net_context_send|function|int net_context_send(struct net_pkt *pkt, net_context_send_cb_t cb, s32_t timeout, void *token, void *user_data)
DECL|net_context_unref|function|int net_context_unref(struct net_context *context)
DECL|net_context_update_recv_wnd|function|int net_context_update_recv_wnd(struct net_context *context,s32_t delta)
DECL|net_tcp_print_recv_info|macro|net_tcp_print_recv_info
DECL|net_tcp_print_recv_info|macro|net_tcp_print_recv_info
DECL|net_tcp_print_send_info|macro|net_tcp_print_send_info
DECL|net_tcp_print_send_info|macro|net_tcp_print_send_info
DECL|packet_received|function|static enum net_verdict packet_received(struct net_conn *conn,struct net_pkt *pkt, void *user_data)
DECL|pkt_get_sockaddr|function|static void pkt_get_sockaddr(sa_family_t family, struct net_pkt *pkt, struct sockaddr_ptr *addr)
DECL|print_send_info|function|static void print_send_info(struct net_pkt *pkt, const char *msg)
DECL|queue_fin|function|static void queue_fin(struct net_context *ctx)
DECL|recv_max_ack|member|u32_t recv_max_ack;
DECL|recv_udp|function|static int recv_udp(struct net_context *context, net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|remote|member|struct sockaddr remote;
DECL|send_ack|function|static int send_ack(struct net_context *context, struct sockaddr *remote, bool force)
DECL|send_ack|member|u32_t send_ack;
DECL|send_control_segment|function|static inline int send_control_segment(struct net_context *context, const struct sockaddr_ptr *local, const struct sockaddr *remote, int flags, const char *msg)
DECL|send_data|function|static int send_data(struct net_context *context, struct net_pkt *pkt, net_context_send_cb_t cb, s32_t timeout, void *token,
DECL|send_reset|function|static int send_reset(struct net_context *context, struct sockaddr *remote)
DECL|send_seq|member|u32_t send_seq;
DECL|send_syn_ack|function|static inline int send_syn_ack(struct net_context *context, struct sockaddr_ptr *local, struct sockaddr *remote)
DECL|send_syn|function|static inline int send_syn(struct net_context *context, const struct sockaddr *remote)
DECL|sendto|function|static int sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|set_appdata_values|function|static void set_appdata_values(struct net_pkt *pkt, enum net_ip_protocol proto)
DECL|tcp_backlog_ack|function|static int tcp_backlog_ack(struct net_pkt *pkt, struct net_context *context)
DECL|tcp_backlog_entry|struct|static struct tcp_backlog_entry {
DECL|tcp_backlog_find|function|static int tcp_backlog_find(struct net_pkt *pkt, int *empty_slot)
DECL|tcp_backlog_rst|function|static int tcp_backlog_rst(struct net_pkt *pkt)
DECL|tcp_backlog_syn|function|static int tcp_backlog_syn(struct net_pkt *pkt, struct net_context *context)
DECL|tcp_backlog|variable|tcp_backlog
DECL|tcp_hdr_len|function|static int tcp_hdr_len(struct net_pkt *pkt)
DECL|tcp|member|struct net_tcp *tcp;
