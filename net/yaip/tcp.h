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
DECL|NET_TCP_RST|macro|NET_TCP_RST
DECL|NET_TCP_SYN_RCVD|enumerator|NET_TCP_SYN_RCVD,
DECL|NET_TCP_SYN_SENT|enumerator|NET_TCP_SYN_SENT,
DECL|NET_TCP_SYN|macro|NET_TCP_SYN
DECL|NET_TCP_TIME_WAIT|enumerator|NET_TCP_TIME_WAIT,
DECL|NET_TCP_URG|macro|NET_TCP_URG
DECL|NET_TCP_WINDOW_HEADER|macro|NET_TCP_WINDOW_HEADER
DECL|NET_TCP_WINDOW_SIZE|macro|NET_TCP_WINDOW_SIZE
DECL|__TCP_H|macro|__TCP_H
DECL|ack_timer|member|struct k_delayed_work ack_timer;
DECL|context|member|struct net_context *context;
DECL|fin_timer|member|struct k_delayed_work fin_timer;
DECL|flags|member|uint8_t flags;
DECL|net_tcp_change_state|macro|net_tcp_change_state
DECL|net_tcp_init|macro|net_tcp_init
DECL|net_tcp_is_used|function|static inline bool net_tcp_is_used(struct net_tcp *tcp)
DECL|net_tcp_register|function|static inline int net_tcp_register(const struct sockaddr *remote_addr, const struct sockaddr *local_addr, uint16_t remote_port, uint16_t local_port, net_conn_cb_t cb,
DECL|net_tcp_state|enum|enum net_tcp_state {
DECL|net_tcp_unregister|function|static inline int net_tcp_unregister(struct net_conn_handle *handle)
DECL|net_tcp|struct|struct net_tcp {
DECL|recv_ack|member|uint32_t recv_ack;
DECL|recv_max_ack|member|uint32_t recv_max_ack;
DECL|recv_mss|member|uint16_t recv_mss;
DECL|recv|member|struct net_buf *recv;
DECL|retransmit_timer|member|struct k_delayed_work retransmit_timer;
DECL|send_ack|member|uint32_t send_ack;
DECL|send_seq|member|uint32_t send_seq;
DECL|send|member|struct net_buf *send;
DECL|state|member|enum net_tcp_state state;
