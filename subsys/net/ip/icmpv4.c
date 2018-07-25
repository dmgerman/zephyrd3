DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|append|macro|append
DECL|echo_request_handler|variable|echo_request_handler
DECL|handlers|variable|handlers
DECL|icmpv4_create|function|static struct net_buf *icmpv4_create(struct net_pkt *pkt, u8_t icmp_type, u8_t icmp_code)
DECL|icmpv4_handle_echo_request|function|static inline enum net_verdict icmpv4_handle_echo_request(struct net_pkt *pkt)
DECL|net_icmpv4_get_hdr|function|int net_icmpv4_get_hdr(struct net_pkt *pkt, struct net_icmp_hdr *hdr)
DECL|net_icmpv4_init|function|void net_icmpv4_init(void)
DECL|net_icmpv4_input|function|enum net_verdict net_icmpv4_input(struct net_pkt *pkt)
DECL|net_icmpv4_register_handler|function|void net_icmpv4_register_handler(struct net_icmpv4_handler *handler)
DECL|net_icmpv4_send_echo_request|function|int net_icmpv4_send_echo_request(struct net_if *iface, struct in_addr *dst, u16_t identifier, u16_t sequence)
DECL|net_icmpv4_send_error|function|int net_icmpv4_send_error(struct net_pkt *orig, u8_t type, u8_t code)
DECL|net_icmpv4_set_chksum|function|int net_icmpv4_set_chksum(struct net_pkt *pkt)
DECL|net_icmpv4_set_hdr|function|int net_icmpv4_set_hdr(struct net_pkt *pkt, struct net_icmp_hdr *hdr)
DECL|net_icmpv4_unregister_handler|function|void net_icmpv4_unregister_handler(struct net_icmpv4_handler *handler)
