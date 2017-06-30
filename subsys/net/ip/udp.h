DECL|NET_UDP_PKT_WAIT_TIME|macro|NET_UDP_PKT_WAIT_TIME
DECL|__UDP_H|macro|__UDP_H
DECL|net_udp_append_raw|function|static inline struct net_pkt *net_udp_append_raw(struct net_pkt *pkt, u16_t src_port, u16_t dst_port)
DECL|net_udp_append_raw|macro|net_udp_append_raw
DECL|net_udp_append|function|static inline struct net_pkt *net_udp_append(struct net_context *context, struct net_pkt *pkt, u16_t port)
DECL|net_udp_append|macro|net_udp_append
DECL|net_udp_get_chksum|function|static inline u16_t net_udp_get_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_udp_get_hdr|function|static inline struct net_udp_hdr *net_udp_get_hdr(struct net_pkt *pkt, struct net_udp_udp *hdr)
DECL|net_udp_init|function|static inline void net_udp_init(void)
DECL|net_udp_init|macro|net_udp_init
DECL|net_udp_register|function|static inline int net_udp_register(const struct sockaddr *remote_addr, const struct sockaddr *local_addr, u16_t remote_port, u16_t local_port, net_conn_cb_t cb,
DECL|net_udp_set_chksum|function|static inline struct net_buf *net_udp_set_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_udp_unregister|function|static inline int net_udp_unregister(struct net_conn_handle *handle)
