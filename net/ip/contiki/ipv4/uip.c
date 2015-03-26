DECL|BUF|macro|BUF
DECL|DEBUG_PRINTF|macro|DEBUG_PRINTF
DECL|DEBUG|macro|DEBUG
DECL|FBUF|macro|FBUF
DECL|ICMP6_ECHO_REPLY|macro|ICMP6_ECHO_REPLY
DECL|ICMP6_ECHO|macro|ICMP6_ECHO
DECL|ICMP6_FLAG_S|macro|ICMP6_FLAG_S
DECL|ICMP6_NEIGHBOR_ADVERTISEMENT|macro|ICMP6_NEIGHBOR_ADVERTISEMENT
DECL|ICMP6_NEIGHBOR_SOLICITATION|macro|ICMP6_NEIGHBOR_SOLICITATION
DECL|ICMP6_OPTION_SOURCE_LINK_ADDRESS|macro|ICMP6_OPTION_SOURCE_LINK_ADDRESS
DECL|ICMP6_OPTION_TARGET_LINK_ADDRESS|macro|ICMP6_OPTION_TARGET_LINK_ADDRESS
DECL|ICMPBUF|macro|ICMPBUF
DECL|ICMP_DEST_UNREACHABLE|macro|ICMP_DEST_UNREACHABLE
DECL|ICMP_ECHO_REPLY|macro|ICMP_ECHO_REPLY
DECL|ICMP_ECHO|macro|ICMP_ECHO
DECL|ICMP_PORT_UNREACHABLE|macro|ICMP_PORT_UNREACHABLE
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
DECL|UDPBUF|macro|UDPBUF
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_REASS_BUFSIZE|macro|UIP_REASS_BUFSIZE
DECL|UIP_REASS_FLAG_LASTFRAG|macro|UIP_REASS_FLAG_LASTFRAG
DECL|UIP_STAT|macro|UIP_STAT
DECL|UIP_STAT|macro|UIP_STAT
DECL|bitmap_bits|variable|bitmap_bits
DECL|chksum|function|chksum(uint16_t sum, const uint8_t *data, uint16_t len)
DECL|c|variable|c
DECL|ipid|variable|ipid
DECL|iss|variable|iss
DECL|lastport|variable|lastport
DECL|opt|variable|opt
DECL|tmp16|variable|tmp16
DECL|uip_acc32|variable|uip_acc32
DECL|uip_add32|function|uip_add32(uint8_t *op32, uint16_t op16)
DECL|uip_add_rcv_nxt|function|uip_add_rcv_nxt(uint16_t n)
DECL|uip_all_zeroes_addr|variable|uip_all_zeroes_addr
DECL|uip_broadcast_addr|variable|uip_broadcast_addr
DECL|uip_chksum|function|uip_chksum(uint16_t *data, uint16_t len)
DECL|uip_connect|function|uip_connect(const uip_ipaddr_t *ripaddr, uint16_t rport)
DECL|uip_conns|variable|uip_conns
DECL|uip_draddr|variable|uip_draddr
DECL|uip_draddr|variable|uip_draddr
DECL|uip_hostaddr|variable|uip_hostaddr
DECL|uip_hostaddr|variable|uip_hostaddr
DECL|uip_htonl|function|uip_htonl(uint32_t val)
DECL|uip_htons|function|uip_htons(uint16_t val)
DECL|uip_icmp6chksum|function|uip_icmp6chksum(void)
DECL|uip_init|function|uip_init(void)
DECL|uip_ipchksum|function|uip_ipchksum(struct net_buf *buf)
DECL|uip_listenports|variable|uip_listenports
DECL|uip_listen|function|uip_listen(uint16_t port)
DECL|uip_lladdr|variable|uip_lladdr
DECL|uip_lladdr|variable|uip_lladdr
DECL|uip_netmask|variable|uip_netmask
DECL|uip_netmask|variable|uip_netmask
DECL|uip_process|function|uip_process(struct net_buf *buf, uint8_t flag)
DECL|uip_reassbitmap|variable|uip_reassbitmap
DECL|uip_reassbuf|variable|uip_reassbuf
DECL|uip_reassflags|variable|uip_reassflags
DECL|uip_reasslen|variable|uip_reasslen
DECL|uip_reasstmr|variable|uip_reasstmr
DECL|uip_reass|function|uip_reass(void)
DECL|uip_send|function|uip_send(struct net_buf *buf, const void *data, int len)
DECL|uip_setipid|function|void uip_setipid(uint16_t id) { ipid = id; }
DECL|uip_stat|variable|uip_stat
DECL|uip_tcpchksum|function|uip_tcpchksum(struct net_buf *buf)
DECL|uip_udp_conns|variable|uip_udp_conns
DECL|uip_udp_new|function|uip_udp_new(const uip_ipaddr_t *ripaddr, uint16_t rport)
DECL|uip_udpchksum|function|uip_udpchksum(void)
DECL|uip_unlisten|function|uip_unlisten(uint16_t port)
DECL|upper_layer_chksum|function|upper_layer_chksum(struct net_buf *buf, uint8_t proto)
