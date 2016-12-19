DECL|FIN_TIMEOUT|macro|FIN_TIMEOUT
DECL|INIT_RETRY_MS|macro|INIT_RETRY_MS
DECL|NET_IP_MAX_OPTIONS|macro|NET_IP_MAX_OPTIONS
DECL|NET_IP_MAX_PACKET|macro|NET_IP_MAX_PACKET
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_MAX_TCP_CONTEXT|macro|NET_MAX_TCP_CONTEXT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ack|member|uint32_t ack;
DECL|dst_addr|member|const struct sockaddr *dst_addr;
DECL|fin_timeout|function|static void fin_timeout(struct k_work *work)
DECL|finalize_segment|function|static int finalize_segment(struct net_context *context, struct net_buf *buf)
DECL|flags|member|uint8_t flags;
DECL|get_recv_wnd|function|static inline uint32_t get_recv_wnd(struct net_tcp *tcp)
DECL|get_size|function|static inline uint32_t get_size(uint32_t pos1, uint32_t pos2)
DECL|init_isn|function|static inline uint32_t init_isn(void)
DECL|ip_max_packet_len|function|static inline size_t ip_max_packet_len(struct in_addr *dest_ip)
DECL|ip_max_packet_len|macro|ip_max_packet_len
DECL|net_tcp_ack_received|function|void net_tcp_ack_received(struct net_context *ctx, uint32_t ack)
DECL|net_tcp_add_options|function|static inline int net_tcp_add_options(struct net_buf *header, size_t len, void *data)
DECL|net_tcp_alloc|function|struct net_tcp *net_tcp_alloc(struct net_context *context)
DECL|net_tcp_change_state|function|void net_tcp_change_state(struct net_tcp *tcp, enum net_tcp_state new_state)
DECL|net_tcp_foreach|function|void net_tcp_foreach(net_tcp_cb_t cb, void *user_data)
DECL|net_tcp_init|function|void net_tcp_init(void)
DECL|net_tcp_prepare_ack|function|int net_tcp_prepare_ack(struct net_tcp *tcp, const struct sockaddr *remote,struct net_buf **buf)
DECL|net_tcp_prepare_reset|function|int net_tcp_prepare_reset(struct net_tcp *tcp, const struct sockaddr *remote, struct net_buf **buf)
DECL|net_tcp_prepare_segment|function|int net_tcp_prepare_segment(struct net_tcp *tcp, uint8_t flags, void *options, size_t optlen, const struct sockaddr_ptr *local, const struct sockaddr *remote, struct net_buf **send_buf)
DECL|net_tcp_queue_data|function|int net_tcp_queue_data(struct net_context *context, struct net_buf *buf)
DECL|net_tcp_release|function|int net_tcp_release(struct net_tcp *tcp)
DECL|net_tcp_send_buf|function|int net_tcp_send_buf(struct net_buf *buf)
DECL|net_tcp_send_data|function|int net_tcp_send_data(struct net_context *context)
DECL|net_tcp_set_syn_opt|function|static void net_tcp_set_syn_opt(struct net_tcp *tcp, uint8_t *options,uint8_t *optionlen)
DECL|net_tcp_state_str|function|const char * const net_tcp_state_str(enum net_tcp_state state)
DECL|net_tcp_trace|function|static void net_tcp_trace(char *str, struct net_buf *buf)
DECL|net_tcp_trace|macro|net_tcp_trace
DECL|options|member|void *options;
DECL|optlen|member|uint8_t optlen;
DECL|prepare_segment|function|static struct net_buf *prepare_segment(struct net_tcp *tcp, struct tcp_segment *segment, struct net_buf *buf)
DECL|restart_timer|function|static void restart_timer(struct net_tcp *tcp)
DECL|seq_greater|function|static inline bool seq_greater(uint32_t seq1, uint32_t seq2)
DECL|seq|member|uint32_t seq;
DECL|src_addr|member|struct sockaddr_ptr *src_addr;
DECL|tcp_context|variable|tcp_context
DECL|tcp_lock|variable|tcp_lock
DECL|tcp_retry_expired|function|static void tcp_retry_expired(struct k_timer *timer)
DECL|tcp_segment|struct|struct tcp_segment {
DECL|upper_if_set|function|static char upper_if_set(char chr, bool set)
DECL|validate_state_transition|function|static void validate_state_transition(enum net_tcp_state current, enum net_tcp_state new)
DECL|wnd|member|uint16_t wnd;
