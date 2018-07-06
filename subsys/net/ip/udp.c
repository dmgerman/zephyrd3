DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|net_udp_get_chksum|function|u16_t net_udp_get_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_udp_get_hdr|function|struct net_udp_hdr *net_udp_get_hdr(struct net_pkt *pkt, struct net_udp_hdr *hdr)
DECL|net_udp_insert|function|struct net_pkt *net_udp_insert(struct net_pkt *pkt, u16_t offset, u16_t src_port, u16_t dst_port)
DECL|net_udp_register|function|int net_udp_register(const struct sockaddr *remote_addr, const struct sockaddr *local_addr, u16_t remote_port, u16_t local_port, net_conn_cb_t cb,
DECL|net_udp_set_chksum|function|struct net_buf *net_udp_set_chksum(struct net_pkt *pkt, struct net_buf *frag)
DECL|net_udp_set_hdr|function|struct net_udp_hdr *net_udp_set_hdr(struct net_pkt *pkt, struct net_udp_hdr *hdr)
DECL|net_udp_unregister|function|int net_udp_unregister(struct net_conn_handle *handle)
