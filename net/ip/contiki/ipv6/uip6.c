DECL|DEBUG|macro|DEBUG
DECL|FBUF|macro|FBUF
DECL|IP_MF|macro|IP_MF
DECL|MIN|macro|MIN
DECL|TCP_ACK|macro|TCP_ACK
DECL|TCP_CTL|macro|TCP_CTL
DECL|TCP_FIN|macro|TCP_FIN
DECL|TCP_OPT_END|macro|TCP_OPT_END
DECL|TCP_OPT_MSS_LEN|macro|TCP_OPT_MSS_LEN
DECL|TCP_OPT_MSS|macro|TCP_OPT_MSS
DECL|TCP_OPT_NOOP|macro|TCP_OPT_NOOP
DECL|TCP_PSH|macro|TCP_PSH
DECL|TCP_RST|macro|TCP_RST
DECL|TCP_SYN|macro|TCP_SYN
DECL|TCP_URG|macro|TCP_URG
DECL|UIP_DESTO_BUF|macro|UIP_DESTO_BUF
DECL|UIP_EXT_BUF|macro|UIP_EXT_BUF
DECL|UIP_EXT_HDR_OPT_BUF|macro|UIP_EXT_HDR_OPT_BUF
DECL|UIP_EXT_HDR_OPT_PADN_BUF|macro|UIP_EXT_HDR_OPT_PADN_BUF
DECL|UIP_EXT_HDR_OPT_RPL_BUF|macro|UIP_EXT_HDR_OPT_RPL_BUF
DECL|UIP_FRAG_BUF|macro|UIP_FRAG_BUF
DECL|UIP_HBHO_BUF|macro|UIP_HBHO_BUF
DECL|UIP_ICMP6_ERROR_BUF|macro|UIP_ICMP6_ERROR_BUF
DECL|UIP_ICMP_BUF|macro|UIP_ICMP_BUF
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_REASS_BUFSIZE|macro|UIP_REASS_BUFSIZE
DECL|UIP_REASS_FLAG_ERROR_MSG|macro|UIP_REASS_FLAG_ERROR_MSG
DECL|UIP_REASS_FLAG_FIRSTFRAG|macro|UIP_REASS_FLAG_FIRSTFRAG
DECL|UIP_REASS_FLAG_LASTFRAG|macro|UIP_REASS_FLAG_LASTFRAG
DECL|UIP_ROUTING_BUF|macro|UIP_ROUTING_BUF
DECL|UIP_TCP_BUF|macro|UIP_TCP_BUF
DECL|UIP_UDP_BUF|macro|UIP_UDP_BUF
DECL|bitmap_bits|variable|bitmap_bits
DECL|chksum|function|chksum(uint16_t sum, const uint8_t *data, uint16_t len)
DECL|ext_hdr_options_process|function|ext_hdr_options_process(struct net_buf *buf)
DECL|handle_tcp_retransmit_timer|function|static inline void handle_tcp_retransmit_timer(struct net_buf *not_used, void *ptr)
DECL|iss|variable|iss
DECL|lastport|variable|lastport
DECL|opt|variable|opt
DECL|remove_ext_hdr|function|remove_ext_hdr(struct net_buf *buf)
DECL|tcp_cancel_retrans_timer|function|static inline void tcp_cancel_retrans_timer(struct uip_conn *conn)
DECL|tcp_set_retrans_timer|function|static inline void tcp_set_retrans_timer(struct uip_conn *conn)
DECL|tmp16|variable|tmp16
DECL|uip_acc32|variable|uip_acc32
DECL|uip_add32|function|uip_add32(uint8_t *op32, uint16_t op16)
DECL|uip_add_rcv_nxt|function|uip_add_rcv_nxt(struct net_buf *buf, uint16_t n)
DECL|uip_chksum|function|uip_chksum(uint16_t *data, uint16_t len)
DECL|uip_connect|function|uip_connect(const uip_ipaddr_t *ripaddr, uint16_t rport)
DECL|uip_conns|variable|uip_conns
DECL|uip_htonl|function|uip_htonl(uint32_t val)
DECL|uip_htons|function|uip_htons(uint16_t val)
DECL|uip_icmp6_conns|variable|uip_icmp6_conns
DECL|uip_icmp6chksum|function|uip_icmp6chksum(struct net_buf *buf)
DECL|uip_id|variable|uip_id
DECL|uip_init|function|uip_init(void)
DECL|uip_ipchksum|function|uip_ipchksum(struct net_buf *buf)
DECL|uip_listenports|variable|uip_listenports
DECL|uip_listen|function|uip_listen(uint16_t port)
DECL|uip_lladdr|variable|uip_lladdr
DECL|uip_lladdr|variable|uip_lladdr
DECL|uip_process|function|uip_process(struct net_buf **buf_out, uint8_t flag)
DECL|uip_reass_on|variable|uip_reass_on
DECL|uip_reass_over|function|uip_reass_over(struct net_buf *buf)
DECL|uip_reass_timer|variable|uip_reass_timer
DECL|uip_reassbitmap|variable|uip_reassbitmap
DECL|uip_reassbuf|variable|uip_reassbuf
DECL|uip_reassflags|variable|uip_reassflags
DECL|uip_reasslen|variable|uip_reasslen
DECL|uip_reass|function|uip_reass(void)
DECL|uip_send|function|uip_send(struct net_buf *buf, const void *data, int len)
DECL|uip_stat|variable|uip_stat
DECL|uip_surglen|variable|uip_surglen
DECL|uip_tcpchksum|function|uip_tcpchksum(struct net_buf *buf)
DECL|uip_udp_conns|variable|uip_udp_conns
DECL|uip_udp_new|function|uip_udp_new(const uip_ipaddr_t *ripaddr, uint16_t rport)
DECL|uip_udpchksum|function|uip_udpchksum(struct net_buf *buf)
DECL|uip_unlisten|function|uip_unlisten(uint16_t port)
DECL|uip_urgdata|variable|uip_urgdata
DECL|uip_urglen|variable|uip_urglen
DECL|upper_layer_chksum|function|upper_layer_chksum(struct net_buf *buf, uint8_t proto)
