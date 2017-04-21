DECL|NET_TCP_ACK|macro|NET_TCP_ACK
DECL|NET_TCP_BUF_MAX_LEN|macro|NET_TCP_BUF_MAX_LEN
DECL|NET_TCP_CLOSED|enumerator|NET_TCP_CLOSED = 0,
DECL|NET_TCP_CLOSE_WAIT|enumerator|NET_TCP_CLOSE_WAIT,
DECL|NET_TCP_CLOSING|enumerator|NET_TCP_CLOSING,
DECL|NET_TCP_CTL|macro|NET_TCP_CTL
DECL|NET_TCP_ESTABLISHED|enumerator|NET_TCP_ESTABLISHED,
DECL|NET_TCP_FINAL_RECV|macro|NET_TCP_FINAL_RECV
DECL|NET_TCP_FINAL_SENT|macro|NET_TCP_FINAL_SENT
DECL|NET_TCP_FIN_WAIT_1|enumerator|NET_TCP_FIN_WAIT_1,
DECL|NET_TCP_FIN_WAIT_2|enumerator|NET_TCP_FIN_WAIT_2,
DECL|NET_TCP_FIN|macro|NET_TCP_FIN
DECL|NET_TCP_FLAGS|macro|NET_TCP_FLAGS
DECL|NET_TCP_IN_USE|macro|NET_TCP_IN_USE
DECL|NET_TCP_IS_SHUTDOWN|macro|NET_TCP_IS_SHUTDOWN
DECL|NET_TCP_LAST_ACK|enumerator|NET_TCP_LAST_ACK,
DECL|NET_TCP_LISTEN|enumerator|NET_TCP_LISTEN,
DECL|NET_TCP_MAX_OPT_SIZE|macro|NET_TCP_MAX_OPT_SIZE
DECL|NET_TCP_MAX_SEG_LIFETIME|macro|NET_TCP_MAX_SEG_LIFETIME
DECL|NET_TCP_MAX_SEQ|macro|NET_TCP_MAX_SEQ
DECL|NET_TCP_MAX_WIN|macro|NET_TCP_MAX_WIN
DECL|NET_TCP_MSS_HEADER|macro|NET_TCP_MSS_HEADER
DECL|NET_TCP_MSS_SIZE|macro|NET_TCP_MSS_SIZE
DECL|NET_TCP_PSH|macro|NET_TCP_PSH
DECL|NET_TCP_RECV_MSS_SET|macro|NET_TCP_RECV_MSS_SET
DECL|NET_TCP_RETRYING|macro|NET_TCP_RETRYING
DECL|NET_TCP_RST|macro|NET_TCP_RST
DECL|NET_TCP_SYN_RCVD|enumerator|NET_TCP_SYN_RCVD,
DECL|NET_TCP_SYN_SENT|enumerator|NET_TCP_SYN_SENT,
DECL|NET_TCP_SYN|macro|NET_TCP_SYN
DECL|NET_TCP_TIME_WAIT|enumerator|NET_TCP_TIME_WAIT,
DECL|NET_TCP_URG|macro|NET_TCP_URG
DECL|NET_TCP_WINDOW_HEADER|macro|NET_TCP_WINDOW_HEADER
DECL|NET_TCP_WINDOW_SIZE|macro|NET_TCP_WINDOW_SIZE
DECL|__TCP_H|macro|__TCP_H
DECL|_padding|member|uint32_t _padding : 11;
DECL|accept_cb|member|net_tcp_accept_cb_t accept_cb;
DECL|ack_timer_cancelled|member|uint32_t ack_timer_cancelled : 1;
DECL|ack_timer|member|struct k_delayed_work ack_timer;
DECL|connect_wait|member|struct k_sem connect_wait;
DECL|context|member|struct net_context *context;
DECL|fin_queued|member|uint32_t fin_queued : 1;
DECL|fin_rcvd|member|uint32_t fin_rcvd : 1;
DECL|fin_sent|member|uint32_t fin_sent : 1;
DECL|flags|member|uint32_t flags : 8;
DECL|net_tcp_cb_t|typedef|typedef void (*net_tcp_cb_t)(struct net_tcp *tcp, void *user_data);
DECL|net_tcp_change_state|macro|net_tcp_change_state
DECL|net_tcp_get_state|function|static inline enum net_tcp_state net_tcp_get_state(const struct net_tcp *tcp)
DECL|net_tcp_init|macro|net_tcp_init
DECL|net_tcp_is_used|function|static inline bool net_tcp_is_used(struct net_tcp *tcp)
DECL|net_tcp_register|function|static inline int net_tcp_register(const struct sockaddr *remote_addr, const struct sockaddr *local_addr, uint16_t remote_port, uint16_t local_port, net_conn_cb_t cb,
DECL|net_tcp_state|enum|enum net_tcp_state {
DECL|net_tcp_unregister|function|static inline int net_tcp_unregister(struct net_conn_handle *handle)
DECL|net_tcp|struct|struct net_tcp {
DECL|recv_max_ack|member|uint32_t recv_max_ack;
DECL|recv_user_data|member|void *recv_user_data;
DECL|retry_timeout_shift|member|uint32_t retry_timeout_shift : 5;
DECL|retry_timer|member|struct k_timer retry_timer;
DECL|send_ack|member|uint32_t send_ack;
DECL|send_seq|member|uint32_t send_seq;
DECL|sent_ack|member|uint32_t sent_ack;
DECL|sent_list|member|sys_slist_t sent_list;
DECL|state|member|uint32_t state : 4;
