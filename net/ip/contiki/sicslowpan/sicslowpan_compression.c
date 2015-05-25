DECL|COMPRESSION_THRESHOLD|macro|COMPRESSION_THRESHOLD
DECL|COMPRESSION_THRESHOLD|macro|COMPRESSION_THRESHOLD
DECL|DEBUG|macro|DEBUG
DECL|GET16|macro|GET16
DECL|MAC_MAX_PAYLOAD|macro|MAC_MAX_PAYLOAD
DECL|MAC_MAX_PAYLOAD|macro|MAC_MAX_PAYLOAD
DECL|PACKETBUF_FRAG_DISPATCH_SIZE|macro|PACKETBUF_FRAG_DISPATCH_SIZE
DECL|PACKETBUF_FRAG_OFFSET|macro|PACKETBUF_FRAG_OFFSET
DECL|PACKETBUF_FRAG_PTR|macro|PACKETBUF_FRAG_PTR
DECL|PACKETBUF_FRAG_TAG|macro|PACKETBUF_FRAG_TAG
DECL|PACKETBUF_HC1_DISPATCH|macro|PACKETBUF_HC1_DISPATCH
DECL|PACKETBUF_HC1_ENCODING|macro|PACKETBUF_HC1_ENCODING
DECL|PACKETBUF_HC1_HC_UDP_CHKSUM|macro|PACKETBUF_HC1_HC_UDP_CHKSUM
DECL|PACKETBUF_HC1_HC_UDP_DISPATCH|macro|PACKETBUF_HC1_HC_UDP_DISPATCH
DECL|PACKETBUF_HC1_HC_UDP_HC1_ENCODING|macro|PACKETBUF_HC1_HC_UDP_HC1_ENCODING
DECL|PACKETBUF_HC1_HC_UDP_PORTS|macro|PACKETBUF_HC1_HC_UDP_PORTS
DECL|PACKETBUF_HC1_HC_UDP_PTR|macro|PACKETBUF_HC1_HC_UDP_PTR
DECL|PACKETBUF_HC1_HC_UDP_TTL|macro|PACKETBUF_HC1_HC_UDP_TTL
DECL|PACKETBUF_HC1_HC_UDP_UDP_ENCODING|macro|PACKETBUF_HC1_HC_UDP_UDP_ENCODING
DECL|PACKETBUF_HC1_PTR|macro|PACKETBUF_HC1_PTR
DECL|PACKETBUF_HC1_TTL|macro|PACKETBUF_HC1_TTL
DECL|PACKETBUF_IPHC_BUF|macro|PACKETBUF_IPHC_BUF
DECL|PRINTFI|macro|PRINTFI
DECL|PRINTFI|macro|PRINTFI
DECL|PRINTFO|macro|PRINTFO
DECL|PRINTFO|macro|PRINTFO
DECL|PRINTPACKETBUF|macro|PRINTPACKETBUF
DECL|PRINTPACKETBUF|macro|PRINTPACKETBUF
DECL|PRINTSICSLOWPANBUF|macro|PRINTSICSLOWPANBUF
DECL|PRINTSICSLOWPANBUF|macro|PRINTSICSLOWPANBUF
DECL|PRINTUIPBUF|macro|PRINTUIPBUF
DECL|PRINTUIPBUF|macro|PRINTUIPBUF
DECL|SET16|macro|SET16
DECL|SICSLOWPAN_COMPRESSION|macro|SICSLOWPAN_COMPRESSION
DECL|SICSLOWPAN_COMPRESSION|macro|SICSLOWPAN_COMPRESSION
DECL|SICSLOWPAN_IP_BUF|macro|SICSLOWPAN_IP_BUF
DECL|SICSLOWPAN_MAX_MAC_TRANSMISSIONS|macro|SICSLOWPAN_MAX_MAC_TRANSMISSIONS
DECL|SICSLOWPAN_MAX_MAC_TRANSMISSIONS|macro|SICSLOWPAN_MAX_MAC_TRANSMISSIONS
DECL|SICSLOWPAN_UDP_BUF|macro|SICSLOWPAN_UDP_BUF
DECL|TCP_ACK|macro|TCP_ACK
DECL|TCP_CTL|macro|TCP_CTL
DECL|TCP_FIN|macro|TCP_FIN
DECL|UIP_ICMP_BUF|macro|UIP_ICMP_BUF
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_TCP_BUF|macro|UIP_TCP_BUF
DECL|UIP_UDP_BUF|macro|UIP_UDP_BUF
DECL|addr_context_lookup_by_number|function|addr_context_lookup_by_number(uint8_t number)
DECL|addr_context_lookup_by_prefix|function|addr_context_lookup_by_prefix(uip_ipaddr_t *ipaddr)
DECL|addr_contexts|variable|addr_contexts
DECL|compress_addr_64|function|compress_addr_64(uint8_t bitpos, uip_ipaddr_t *ipaddr, uip_lladdr_t *lladdr)
DECL|compress_hdr_hc06|function|compress_hdr_hc06(struct net_buf *mbuf, struct net_buf *buf, linkaddr_t *link_destaddr)
DECL|compress_hdr_hc1|function|compress_hdr_hc1(struct net_mbuf *mbuf, struct net_buf *buf, linkaddr_t *link_destaddr)
DECL|compress_hdr_ipv6|function|compress_hdr_ipv6(struct net_mbuf *mbuf, struct net_buf *buf, linkaddr_t *link_destaddr)
DECL|compress|function|static uint8_t compress(struct net_buf *buf, const uip_lladdr_t *localdest)
DECL|context|variable|context
DECL|hc06_ptr|variable|hc06_ptr
DECL|init|function|static void init(void)
DECL|llprefix|variable|llprefix
DECL|p|variable|p
DECL|sicslowpan_buf|macro|sicslowpan_buf
DECL|sicslowpan_compression|variable|sicslowpan_compression
DECL|sicslowpan_len|macro|sicslowpan_len
DECL|ttl_values|variable|ttl_values
DECL|unc_ctxconf|variable|unc_ctxconf
DECL|unc_llconf|variable|unc_llconf
DECL|unc_mxconf|variable|unc_mxconf
DECL|uncompress_addr|function|uncompress_addr(uip_ipaddr_t *ipaddr, uint8_t const prefix[], uint8_t pref_post_count, uip_lladdr_t *lladdr)
DECL|uncompress_hdr_hc06|function|uncompress_hdr_hc06(struct net_buf *buf, uint16_t ip_len)
DECL|uncompress_hdr_hc1|function|uncompress_hdr_hc1(struct net_buf *buf, uint16_t ip_len)
DECL|uncompress|function|static int uncompress(struct net_buf *buf)
