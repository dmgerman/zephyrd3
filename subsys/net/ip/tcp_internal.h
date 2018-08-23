DECL|NET_TCP_ACK|macro|NET_TCP_ACK
DECL|NET_TCP_BUF_MAX_LEN|macro|NET_TCP_BUF_MAX_LEN
DECL|NET_TCP_CLOSED|enumerator|NET_TCP_CLOSED = 0,
DECL|NET_TCP_CLOSE_WAIT|enumerator|NET_TCP_CLOSE_WAIT,
DECL|NET_TCP_CLOSING|enumerator|NET_TCP_CLOSING,
DECL|NET_TCP_CTL|macro|NET_TCP_CTL
DECL|NET_TCP_DEFAULT_MSS|macro|NET_TCP_DEFAULT_MSS
DECL|NET_TCP_END_OPT|macro|NET_TCP_END_OPT
DECL|NET_TCP_END_SIZE|macro|NET_TCP_END_SIZE
DECL|NET_TCP_ESTABLISHED|enumerator|NET_TCP_ESTABLISHED,
DECL|NET_TCP_FIN_WAIT_1|enumerator|NET_TCP_FIN_WAIT_1,
DECL|NET_TCP_FIN_WAIT_2|enumerator|NET_TCP_FIN_WAIT_2,
DECL|NET_TCP_FIN|macro|NET_TCP_FIN
DECL|NET_TCP_FLAGS|macro|NET_TCP_FLAGS
DECL|NET_TCP_HDR_LEN|macro|NET_TCP_HDR_LEN
DECL|NET_TCP_IN_USE|macro|NET_TCP_IN_USE
DECL|NET_TCP_IS_SHUTDOWN|macro|NET_TCP_IS_SHUTDOWN
DECL|NET_TCP_LAST_ACK|enumerator|NET_TCP_LAST_ACK,
DECL|NET_TCP_LISTEN|enumerator|NET_TCP_LISTEN,
DECL|NET_TCP_MAX_OPT_SIZE|macro|NET_TCP_MAX_OPT_SIZE
DECL|NET_TCP_MAX_SEG_LIFETIME|macro|NET_TCP_MAX_SEG_LIFETIME
DECL|NET_TCP_MAX_SEQ|macro|NET_TCP_MAX_SEQ
DECL|NET_TCP_MAX_WIN|macro|NET_TCP_MAX_WIN
DECL|NET_TCP_MSS_OPT|macro|NET_TCP_MSS_OPT
DECL|NET_TCP_MSS_SIZE|macro|NET_TCP_MSS_SIZE
DECL|NET_TCP_NOP_OPT|macro|NET_TCP_NOP_OPT
DECL|NET_TCP_NOP_SIZE|macro|NET_TCP_NOP_SIZE
DECL|NET_TCP_PSH|macro|NET_TCP_PSH
DECL|NET_TCP_RECV_MSS_SET|macro|NET_TCP_RECV_MSS_SET
DECL|NET_TCP_RETRYING|macro|NET_TCP_RETRYING
DECL|NET_TCP_RST|macro|NET_TCP_RST
DECL|NET_TCP_SYN_RCVD|enumerator|NET_TCP_SYN_RCVD,
DECL|NET_TCP_SYN_SENT|enumerator|NET_TCP_SYN_SENT,
DECL|NET_TCP_SYN|macro|NET_TCP_SYN
DECL|NET_TCP_TIME_WAIT|enumerator|NET_TCP_TIME_WAIT,
DECL|NET_TCP_URG|macro|NET_TCP_URG
DECL|NET_TCP_WINDOW_SCALE_OPT|macro|NET_TCP_WINDOW_SCALE_OPT
DECL|NET_TCP_WINDOW_SCALE_SIZE|macro|NET_TCP_WINDOW_SCALE_SIZE
DECL|__TCP_INTERNAL_H|macro|__TCP_INTERNAL_H
DECL|_padding|member|u32_t _padding : 13;
DECL|accept_cb|member|net_tcp_accept_cb_t accept_cb;
DECL|ack_timer|member|struct k_delayed_work ack_timer;
DECL|connect_wait|member|struct k_sem connect_wait;
DECL|context|member|struct net_context *context;
DECL|fin_rcvd|member|u32_t fin_rcvd : 1;
DECL|fin_sent|member|u32_t fin_sent : 1;
DECL|fin_timer|member|struct k_delayed_work fin_timer;
DECL|flags|member|u32_t flags : 8;
DECL|mss|member|u16_t mss;
DECL|net_tcp_accept|function|static inline int net_tcp_accept(struct net_context *context, net_tcp_accept_cb_t cb, void *user_data)
DECL|net_tcp_ack_received|function|static inline bool net_tcp_ack_received(struct net_context *ctx, u32_t ack)
DECL|net_tcp_alloc|function|static inline struct net_tcp *net_tcp_alloc(struct net_context *context)
DECL|net_tcp_cb_t|typedef|typedef void (*net_tcp_cb_t)(struct net_tcp *tcp, void *user_data);
DECL|net_tcp_change_state|macro|net_tcp_change_state
DECL|net_tcp_connect|function|static inline int net_tcp_connect(struct net_context *context, const struct sockaddr *addr, struct sockaddr *laddr, u16_t rport, u16_t lport, s32_t timeout, net_context_connect_cb_t cb, void *user_data)
DECL|net_tcp_foreach|function|static inline void net_tcp_foreach(net_tcp_cb_t cb, void *user_data)
DECL|net_tcp_get_chksum|function|static inline u16_t net_tcp_get_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_tcp_get_hdr|function|static inline struct net_tcp_hdr *net_tcp_get_hdr(struct net_pkt *pkt, struct net_tcp_hdr *hdr)
DECL|net_tcp_get_recv_mss|function|static inline u16_t net_tcp_get_recv_mss(const struct net_tcp *tcp)
DECL|net_tcp_get_recv_wnd|function|static inline u32_t net_tcp_get_recv_wnd(const struct net_tcp *tcp)
DECL|net_tcp_get_state|function|static inline enum net_tcp_state net_tcp_get_state(const struct net_tcp *tcp)
DECL|net_tcp_get_state|function|static inline enum net_tcp_state net_tcp_get_state(const struct net_tcp *tcp)
DECL|net_tcp_get|function|static inline int net_tcp_get(struct net_context *context)
DECL|net_tcp_init|macro|net_tcp_init
DECL|net_tcp_is_used|function|static inline bool net_tcp_is_used(struct net_tcp *tcp)
DECL|net_tcp_listen|function|static inline int net_tcp_listen(struct net_context *context)
DECL|net_tcp_options|struct|struct net_tcp_options {
DECL|net_tcp_prepare_ack|function|static inline int net_tcp_prepare_ack(struct net_tcp *tcp, const struct sockaddr *remote, struct net_pkt **pkt)
DECL|net_tcp_prepare_reset|function|static inline int net_tcp_prepare_reset(struct net_tcp *tcp,const struct sockaddr *remote, struct net_pkt **pkt)
DECL|net_tcp_prepare_segment|function|static inline int net_tcp_prepare_segment(struct net_tcp *tcp, u8_t flags, void *options, size_t optlen, const struct sockaddr_ptr *local, const struct sockaddr *remote, struct net_pkt **send_pkt)
DECL|net_tcp_put|function|static inline int net_tcp_put(struct net_context *context)
DECL|net_tcp_queue_data|function|static inline int net_tcp_queue_data(struct net_context *context, struct net_pkt *pkt)
DECL|net_tcp_recv|function|static inline int net_tcp_recv(struct net_context *context, net_context_recv_cb_t cb, void *user_data)
DECL|net_tcp_register|function|static inline int net_tcp_register(const struct sockaddr *remote_addr, const struct sockaddr *local_addr, u16_t remote_port, u16_t local_port, net_conn_cb_t cb,
DECL|net_tcp_release|function|static inline int net_tcp_release(struct net_tcp *tcp)
DECL|net_tcp_send_data|function|static inline int net_tcp_send_data(struct net_context *context, net_context_send_cb_t cb, void *token, void *user_data)
DECL|net_tcp_send_pkt|function|static inline int net_tcp_send_pkt(struct net_pkt *pkt)
DECL|net_tcp_set_chksum|function|static inline struct net_buf *net_tcp_set_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_tcp_set_hdr|function|static inline struct net_tcp_hdr *net_tcp_set_hdr(struct net_pkt *pkt, struct net_tcp_hdr *hdr)
DECL|net_tcp_state|enum|enum net_tcp_state {
DECL|net_tcp_unref|function|static inline int net_tcp_unref(struct net_context *context)
DECL|net_tcp_unregister|function|static inline int net_tcp_unregister(struct net_conn_handle *handle)
DECL|net_tcp_update_recv_wnd|function|static inline int net_tcp_update_recv_wnd(struct net_context *context, s32_t delta)
DECL|net_tcp_validate_seq|function|static inline bool net_tcp_validate_seq(struct net_tcp *tcp,struct net_pkt *pkt)
DECL|net_tcp|struct|struct net_tcp {
DECL|recv_user_data|member|void *recv_user_data;
DECL|recv_wnd|member|u16_t recv_wnd;
DECL|retry_timeout_shift|member|u32_t retry_timeout_shift : 5;
DECL|retry_timer|member|struct k_delayed_work retry_timer;
DECL|send_ack|member|u32_t send_ack;
DECL|send_mss|member|u16_t send_mss;
DECL|send_seq|member|u32_t send_seq;
DECL|sent_ack|member|u32_t sent_ack;
DECL|sent_list|member|sys_slist_t sent_list;
DECL|state|member|u32_t state : 4;
DECL|tcp_hdr_len|function|static inline int tcp_hdr_len(struct net_pkt *pkt)
DECL|tcp_init_isn|function|static inline u32_t tcp_init_isn(void)
DECL|timewait_timer|member|struct k_delayed_work timewait_timer;
