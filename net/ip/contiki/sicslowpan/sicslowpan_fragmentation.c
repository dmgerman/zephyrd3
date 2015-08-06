DECL|DEBUG|macro|DEBUG
DECL|GET16|macro|GET16
DECL|MAC_MAX_PAYLOAD|macro|MAC_MAX_PAYLOAD
DECL|MAC_MAX_PAYLOAD|macro|MAC_MAX_PAYLOAD
DECL|PACKETBUF_FRAG_DISPATCH_SIZE|macro|PACKETBUF_FRAG_DISPATCH_SIZE
DECL|PACKETBUF_FRAG_OFFSET|macro|PACKETBUF_FRAG_OFFSET
DECL|PACKETBUF_FRAG_TAG|macro|PACKETBUF_FRAG_TAG
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
DECL|SICSLOWPAN_FIRST_FRAGMENT_SIZE|macro|SICSLOWPAN_FIRST_FRAGMENT_SIZE
DECL|SICSLOWPAN_FRAGMENT_BUFFERS|macro|SICSLOWPAN_FRAGMENT_BUFFERS
DECL|SICSLOWPAN_FRAGMENT_BUFFERS|macro|SICSLOWPAN_FRAGMENT_BUFFERS
DECL|SICSLOWPAN_FRAGMENT_SIZE|macro|SICSLOWPAN_FRAGMENT_SIZE
DECL|SICSLOWPAN_FRAGMENT_SIZE|macro|SICSLOWPAN_FRAGMENT_SIZE
DECL|SICSLOWPAN_IP_BUF|macro|SICSLOWPAN_IP_BUF
DECL|SICSLOWPAN_MAX_MAC_TRANSMISSIONS|macro|SICSLOWPAN_MAX_MAC_TRANSMISSIONS
DECL|SICSLOWPAN_MAX_MAC_TRANSMISSIONS|macro|SICSLOWPAN_MAX_MAC_TRANSMISSIONS
DECL|SICSLOWPAN_REASS_CONTEXTS|macro|SICSLOWPAN_REASS_CONTEXTS
DECL|SICSLOWPAN_REASS_CONTEXTS|macro|SICSLOWPAN_REASS_CONTEXTS
DECL|SICSLOWPAN_UDP_BUF|macro|SICSLOWPAN_UDP_BUF
DECL|UIP_ICMP_BUF|macro|UIP_ICMP_BUF
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_TCP_BUF|macro|UIP_TCP_BUF
DECL|UIP_UDP_BUF|macro|UIP_UDP_BUF
DECL|USE_FRAMER_HDRLEN|macro|USE_FRAMER_HDRLEN
DECL|add_fragment|function|add_fragment(struct net_mbuf *mbuf, uint16_t tag, uint16_t frag_size, uint8_t offset)
DECL|clear_fragments|function|clear_fragments(uint8_t frag_info_index)
DECL|copy_frags2uip|function|static struct net_buf *copy_frags2uip(int context)
DECL|data|member|uint8_t data[SICSLOWPAN_FRAGMENT_SIZE];
DECL|frag_buf|variable|frag_buf
DECL|frag_info|variable|frag_info
DECL|fragment|function|static int fragment(struct net_buf *buf, void *ptr)
DECL|index|member|uint8_t index;
DECL|last_rssi|variable|last_rssi
DECL|len|member|uint16_t len;
DECL|len|member|uint8_t len;
DECL|my_tag|variable|my_tag
DECL|offset|member|uint8_t offset;
DECL|packet_sent|function|packet_sent(struct net_mbuf *buf, void *ptr, int status, int transmissions)
DECL|p|variable|p
DECL|reass_timer|member|struct timer reass_timer;
DECL|reassembled_len|member|uint16_t reassembled_len;
DECL|reassemble|function|static int reassemble(struct net_mbuf *mbuf)
DECL|receiver|member|linkaddr_t receiver;
DECL|send_packet|function|send_packet(struct net_mbuf *buf, linkaddr_t *dest, bool last_fragment, void *ptr)
DECL|sender|member|linkaddr_t sender;
DECL|sicslowpan_buf|macro|sicslowpan_buf
DECL|sicslowpan_frag_buf|struct|struct sicslowpan_frag_buf {
DECL|sicslowpan_frag_info|struct|struct sicslowpan_frag_info {
DECL|sicslowpan_fragmentation|variable|sicslowpan_fragmentation
DECL|sicslowpan_len|macro|sicslowpan_len
DECL|store_fragment|function|store_fragment(struct net_mbuf *mbuf, uint8_t index, uint8_t offset)
DECL|tag|member|uint16_t tag;
