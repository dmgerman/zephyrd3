DECL|ACK_TIMEOUT|macro|ACK_TIMEOUT
DECL|ACK_TIMEOUT|macro|ACK_TIMEOUT
DECL|ALLOC_TIMEOUT|macro|ALLOC_TIMEOUT
DECL|FIN_TIMEOUT|macro|FIN_TIMEOUT
DECL|NET_CONN_CB|function|NET_CONN_CB(tcp_established)
DECL|NET_CONN_CB|function|NET_CONN_CB(tcp_syn_rcvd)
DECL|NET_CONN_CB|function|NET_CONN_CB(tcp_synack_received)
DECL|NET_CONN_CB|macro|NET_CONN_CB
DECL|NET_IP_MAX_OPTIONS|macro|NET_IP_MAX_OPTIONS
DECL|NET_IP_MAX_PACKET|macro|NET_IP_MAX_PACKET
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_MAX_TCP_CONTEXT|macro|NET_MAX_TCP_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|abort_connection|function|static void abort_connection(struct net_tcp *tcp)
DECL|ack_timer_cancel|function|static void ack_timer_cancel(struct net_tcp *tcp)
DECL|ack_timer|member|struct k_delayed_work ack_timer;
DECL|ack|member|u32_t ack;
DECL|backlog_ack_timeout|function|static void backlog_ack_timeout(struct k_work *work)
DECL|copy_pool_vars|function|static inline void copy_pool_vars(struct net_context *new_context, struct net_context *listen_context)
DECL|copy_pool_vars|macro|copy_pool_vars
DECL|copy_sockaddr_to_sockaddr_ptr|function|static inline void copy_sockaddr_to_sockaddr_ptr(struct net_tcp *tcp, const struct sockaddr *local, struct sockaddr_ptr *addr)
DECL|do_ref_if_needed|macro|do_ref_if_needed
DECL|dst_addr|member|const struct sockaddr *dst_addr;
DECL|fin_timer_cancel|function|static void fin_timer_cancel(struct net_tcp *tcp)
DECL|finalize_segment|function|static int finalize_segment(struct net_context *context, struct net_pkt *pkt)
DECL|flags|member|u8_t flags;
DECL|get_size|function|static inline u32_t get_size(u32_t pos1, u32_t pos2)
DECL|handle_ack_timeout|function|static void handle_ack_timeout(struct k_work *work)
DECL|handle_fin_timeout|function|static void handle_fin_timeout(struct k_work *work)
DECL|handle_timewait_timeout|function|static void handle_timewait_timeout(struct k_work *work)
DECL|ip_max_packet_len|function|static inline size_t ip_max_packet_len(struct in_addr *dest_ip)
DECL|ip_max_packet_len|macro|ip_max_packet_len
DECL|is_6lo_technology|macro|is_6lo_technology
DECL|net_tcp_accept|function|int net_tcp_accept(struct net_context *context, net_tcp_accept_cb_t cb, void *user_data)
DECL|net_tcp_ack_received|function|bool net_tcp_ack_received(struct net_context *ctx, u32_t ack)
DECL|net_tcp_add_options|function|static inline u8_t net_tcp_add_options(struct net_buf *header, size_t len, void *data)
DECL|net_tcp_alloc|function|struct net_tcp *net_tcp_alloc(struct net_context *context)
DECL|net_tcp_change_state|function|void net_tcp_change_state(struct net_tcp *tcp, enum net_tcp_state new_state)
DECL|net_tcp_connect|function|int net_tcp_connect(struct net_context *context, const struct sockaddr *addr, struct sockaddr *laddr, u16_t rport, u16_t lport,
DECL|net_tcp_foreach|function|void net_tcp_foreach(net_tcp_cb_t cb, void *user_data)
DECL|net_tcp_get_chksum|function|u16_t net_tcp_get_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_tcp_get_hdr|function|struct net_tcp_hdr *net_tcp_get_hdr(struct net_pkt *pkt, struct net_tcp_hdr *hdr)
DECL|net_tcp_get_recv_mss|function|u16_t net_tcp_get_recv_mss(const struct net_tcp *tcp)
DECL|net_tcp_get_recv_wnd|function|u32_t net_tcp_get_recv_wnd(const struct net_tcp *tcp)
DECL|net_tcp_get|function|int net_tcp_get(struct net_context *context)
DECL|net_tcp_init|function|void net_tcp_init(void)
DECL|net_tcp_listen|function|int net_tcp_listen(struct net_context *context)
DECL|net_tcp_parse_opts|function|int net_tcp_parse_opts(struct net_pkt *pkt, int opt_totlen, struct net_tcp_options *opts)
DECL|net_tcp_prepare_ack|function|int net_tcp_prepare_ack(struct net_tcp *tcp, const struct sockaddr *remote,struct net_pkt **pkt)
DECL|net_tcp_prepare_reset|function|int net_tcp_prepare_reset(struct net_tcp *tcp, const struct sockaddr *local, const struct sockaddr *remote, struct net_pkt **pkt)
DECL|net_tcp_prepare_segment|function|int net_tcp_prepare_segment(struct net_tcp *tcp, u8_t flags, void *options, size_t optlen, const struct sockaddr_ptr *local, const struct sockaddr *remote, struct net_pkt **send_pkt)
DECL|net_tcp_print_recv_info|macro|net_tcp_print_recv_info
DECL|net_tcp_print_recv_info|macro|net_tcp_print_recv_info
DECL|net_tcp_print_send_info|macro|net_tcp_print_send_info
DECL|net_tcp_print_send_info|macro|net_tcp_print_send_info
DECL|net_tcp_put|function|int net_tcp_put(struct net_context *context)
DECL|net_tcp_queue_data|function|int net_tcp_queue_data(struct net_context *context, struct net_pkt *pkt)
DECL|net_tcp_recv|function|int net_tcp_recv(struct net_context *context, net_context_recv_cb_t cb, void *user_data)
DECL|net_tcp_release|function|int net_tcp_release(struct net_tcp *tcp)
DECL|net_tcp_send_data|function|int net_tcp_send_data(struct net_context *context, net_context_send_cb_t cb, void *token, void *user_data)
DECL|net_tcp_send_pkt|function|int net_tcp_send_pkt(struct net_pkt *pkt)
DECL|net_tcp_set_chksum|function|struct net_buf *net_tcp_set_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_tcp_set_hdr|function|struct net_tcp_hdr *net_tcp_set_hdr(struct net_pkt *pkt, struct net_tcp_hdr *hdr)
DECL|net_tcp_set_syn_opt|function|static void net_tcp_set_syn_opt(struct net_tcp *tcp, u8_t *options,u8_t *optionlen)
DECL|net_tcp_state_str|function|const char *net_tcp_state_str(enum net_tcp_state state)
DECL|net_tcp_trace|function|static void net_tcp_trace(struct net_pkt *pkt, struct net_tcp *tcp)
DECL|net_tcp_trace|macro|net_tcp_trace
DECL|net_tcp_unref|function|int net_tcp_unref(struct net_context *context)
DECL|net_tcp_update_recv_wnd|function|int net_tcp_update_recv_wnd(struct net_context *context, s32_t delta)
DECL|net_tcp_validate_seq|function|bool net_tcp_validate_seq(struct net_tcp *tcp, struct net_pkt *pkt)
DECL|options|member|void *options;
DECL|optlen|member|u8_t optlen;
DECL|pkt_get_sockaddr|function|static void pkt_get_sockaddr(sa_family_t family, struct net_pkt *pkt, struct sockaddr_ptr *addr)
DECL|prepare_segment|function|static int prepare_segment(struct net_tcp *tcp, struct tcp_segment *segment, struct net_pkt *pkt, struct net_pkt **out_pkt)
DECL|print_send_info|function|static void print_send_info(struct net_pkt *pkt, const char *msg)
DECL|queue_fin|function|static void queue_fin(struct net_context *ctx)
DECL|remote|member|struct sockaddr remote;
DECL|restart_timer|function|static void restart_timer(struct net_tcp *tcp)
DECL|retry_timeout|function|static inline u32_t retry_timeout(const struct net_tcp *tcp)
DECL|retry_timer_cancel|function|static void retry_timer_cancel(struct net_tcp *tcp)
DECL|send_ack|function|static int send_ack(struct net_context *context, struct sockaddr *remote, bool force)
DECL|send_ack|member|u32_t send_ack;
DECL|send_mss|member|u16_t send_mss;
DECL|send_reset|function|static int send_reset(struct net_context *context, struct sockaddr *local, struct sockaddr *remote)
DECL|send_seq|member|u32_t send_seq;
DECL|send_syn_ack|function|static inline int send_syn_ack(struct net_context *context, struct sockaddr_ptr *local, struct sockaddr *remote)
DECL|send_syn_segment|function|static inline int send_syn_segment(struct net_context *context, const struct sockaddr_ptr *local, const struct sockaddr *remote, int flags, const char *msg)
DECL|send_syn|function|static inline int send_syn(struct net_context *context, const struct sockaddr *remote)
DECL|seq|member|u32_t seq;
DECL|src_addr|member|struct sockaddr_ptr *src_addr;
DECL|tcp_backlog_ack|function|static int tcp_backlog_ack(struct net_pkt *pkt, struct net_context *context)
DECL|tcp_backlog_entry|struct|static struct tcp_backlog_entry {
DECL|tcp_backlog_find|function|static int tcp_backlog_find(struct net_pkt *pkt, int *empty_slot)
DECL|tcp_backlog_rst|function|static int tcp_backlog_rst(struct net_pkt *pkt)
DECL|tcp_backlog_syn|function|static int tcp_backlog_syn(struct net_pkt *pkt, struct net_context *context, u16_t send_mss)
DECL|tcp_backlog|variable|tcp_backlog
DECL|tcp_context|variable|tcp_context
DECL|tcp_hdr_len|function|int tcp_hdr_len(struct net_pkt *pkt)
DECL|tcp_retry_expired|function|static void tcp_retry_expired(struct k_work *work)
DECL|tcp_segment|struct|struct tcp_segment {
DECL|tcp|member|struct net_tcp *tcp;
DECL|timewait_timer_cancel|function|static void timewait_timer_cancel(struct net_tcp *tcp)
DECL|upper_if_set|function|static char upper_if_set(char chr, bool set)
DECL|validate_state_transition|function|static void validate_state_transition(enum net_tcp_state current, enum net_tcp_state new)
DECL|wnd|member|u16_t wnd;
