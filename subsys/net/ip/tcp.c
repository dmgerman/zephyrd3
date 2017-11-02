DECL|ALLOC_TIMEOUT|macro|ALLOC_TIMEOUT
DECL|NET_IP_MAX_OPTIONS|macro|NET_IP_MAX_OPTIONS
DECL|NET_IP_MAX_PACKET|macro|NET_IP_MAX_PACKET
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_MAX_TCP_CONTEXT|macro|NET_MAX_TCP_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TIME_WAIT_MS|macro|TIME_WAIT_MS
DECL|TIME_WAIT_MS|macro|TIME_WAIT_MS
DECL|abort_connection|function|static void abort_connection(struct net_tcp *tcp)
DECL|ack_timer_cancel|function|static void ack_timer_cancel(struct net_tcp *tcp)
DECL|ack|member|u32_t ack;
DECL|do_ref_if_needed|macro|do_ref_if_needed
DECL|dst_addr|member|const struct sockaddr *dst_addr;
DECL|fin_timer_cancel|function|static void fin_timer_cancel(struct net_tcp *tcp)
DECL|finalize_segment|function|static int finalize_segment(struct net_context *context, struct net_pkt *pkt)
DECL|flags|member|u8_t flags;
DECL|get_size|function|static inline u32_t get_size(u32_t pos1, u32_t pos2)
DECL|ip_max_packet_len|function|static inline size_t ip_max_packet_len(struct in_addr *dest_ip)
DECL|ip_max_packet_len|macro|ip_max_packet_len
DECL|is_6lo_technology|macro|is_6lo_technology
DECL|net_tcp_ack_received|function|void net_tcp_ack_received(struct net_context *ctx, u32_t ack)
DECL|net_tcp_add_options|function|static inline u8_t net_tcp_add_options(struct net_buf *header, size_t len, void *data)
DECL|net_tcp_alloc|function|struct net_tcp *net_tcp_alloc(struct net_context *context)
DECL|net_tcp_change_state|function|void net_tcp_change_state(struct net_tcp *tcp, enum net_tcp_state new_state)
DECL|net_tcp_foreach|function|void net_tcp_foreach(net_tcp_cb_t cb, void *user_data)
DECL|net_tcp_get_chksum|function|u16_t net_tcp_get_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_tcp_get_hdr|function|struct net_tcp_hdr *net_tcp_get_hdr(struct net_pkt *pkt, struct net_tcp_hdr *hdr)
DECL|net_tcp_get_recv_mss|function|u16_t net_tcp_get_recv_mss(const struct net_tcp *tcp)
DECL|net_tcp_get_recv_wnd|function|u32_t net_tcp_get_recv_wnd(const struct net_tcp *tcp)
DECL|net_tcp_init|function|void net_tcp_init(void)
DECL|net_tcp_parse_opts|function|int net_tcp_parse_opts(struct net_pkt *pkt, int opt_totlen, struct net_tcp_options *opts)
DECL|net_tcp_prepare_ack|function|int net_tcp_prepare_ack(struct net_tcp *tcp, const struct sockaddr *remote,struct net_pkt **pkt)
DECL|net_tcp_prepare_reset|function|int net_tcp_prepare_reset(struct net_tcp *tcp, const struct sockaddr *remote, struct net_pkt **pkt)
DECL|net_tcp_prepare_segment|function|int net_tcp_prepare_segment(struct net_tcp *tcp, u8_t flags, void *options, size_t optlen, const struct sockaddr_ptr *local, const struct sockaddr *remote, struct net_pkt **send_pkt)
DECL|net_tcp_queue_data|function|int net_tcp_queue_data(struct net_context *context, struct net_pkt *pkt)
DECL|net_tcp_release|function|int net_tcp_release(struct net_tcp *tcp)
DECL|net_tcp_send_data|function|int net_tcp_send_data(struct net_context *context)
DECL|net_tcp_send_pkt|function|int net_tcp_send_pkt(struct net_pkt *pkt)
DECL|net_tcp_set_chksum|function|struct net_buf *net_tcp_set_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_tcp_set_hdr|function|struct net_tcp_hdr *net_tcp_set_hdr(struct net_pkt *pkt, struct net_tcp_hdr *hdr)
DECL|net_tcp_set_syn_opt|function|static void net_tcp_set_syn_opt(struct net_tcp *tcp, u8_t *options,u8_t *optionlen)
DECL|net_tcp_state_str|function|const char *net_tcp_state_str(enum net_tcp_state state)
DECL|net_tcp_trace|function|static void net_tcp_trace(struct net_pkt *pkt, struct net_tcp *tcp)
DECL|net_tcp_trace|macro|net_tcp_trace
DECL|net_tcp_validate_seq|function|bool net_tcp_validate_seq(struct net_tcp *tcp, struct net_pkt *pkt)
DECL|options|member|void *options;
DECL|optlen|member|u8_t optlen;
DECL|prepare_segment|function|static struct net_pkt *prepare_segment(struct net_tcp *tcp, struct tcp_segment *segment, struct net_pkt *pkt)
DECL|restart_timer|function|static void restart_timer(struct net_tcp *tcp)
DECL|retry_timeout|function|static inline u32_t retry_timeout(const struct net_tcp *tcp)
DECL|retry_timer_cancel|function|static void retry_timer_cancel(struct net_tcp *tcp)
DECL|seq|member|u32_t seq;
DECL|src_addr|member|struct sockaddr_ptr *src_addr;
DECL|tcp_context|variable|tcp_context
DECL|tcp_retry_expired|function|static void tcp_retry_expired(struct k_work *work)
DECL|tcp_segment|struct|struct tcp_segment {
DECL|upper_if_set|function|static char upper_if_set(char chr, bool set)
DECL|validate_state_transition|function|static void validate_state_transition(enum net_tcp_state current, enum net_tcp_state new)
DECL|wnd|member|u16_t wnd;
