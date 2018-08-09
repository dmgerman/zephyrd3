DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|echo_reply_debug|function|static inline void echo_reply_debug(struct net_pkt *pkt)
DECL|echo_reply_debug|macro|echo_reply_debug
DECL|echo_request_debug|function|static inline void echo_request_debug(struct net_pkt *pkt)
DECL|echo_request_debug|macro|echo_request_debug
DECL|echo_request_handler|variable|echo_request_handler
DECL|handle_echo_request|function|static enum net_verdict handle_echo_request(struct net_pkt *orig)
DECL|handlers|variable|handlers
DECL|net_icmpv6_get_hdr|function|int net_icmpv6_get_hdr(struct net_pkt *pkt, struct net_icmp_hdr *hdr)
DECL|net_icmpv6_get_na_hdr|function|int net_icmpv6_get_na_hdr(struct net_pkt *pkt, struct net_icmpv6_na_hdr *hdr)
DECL|net_icmpv6_get_nd_opt_hdr|function|int net_icmpv6_get_nd_opt_hdr(struct net_pkt *pkt, struct net_icmpv6_nd_opt_hdr *hdr)
DECL|net_icmpv6_get_ns_hdr|function|int net_icmpv6_get_ns_hdr(struct net_pkt *pkt, struct net_icmpv6_ns_hdr *hdr)
DECL|net_icmpv6_get_ra_hdr|function|int net_icmpv6_get_ra_hdr(struct net_pkt *pkt, struct net_icmpv6_ra_hdr *hdr)
DECL|net_icmpv6_init|function|void net_icmpv6_init(void)
DECL|net_icmpv6_input|function|enum net_verdict net_icmpv6_input(struct net_pkt *pkt, u8_t type, u8_t code)
DECL|net_icmpv6_register_handler|function|void net_icmpv6_register_handler(struct net_icmpv6_handler *handler)
DECL|net_icmpv6_send_echo_request|function|int net_icmpv6_send_echo_request(struct net_if *iface, struct in6_addr *dst, u16_t identifier, u16_t sequence)
DECL|net_icmpv6_send_error|function|int net_icmpv6_send_error(struct net_pkt *orig, u8_t type, u8_t code, u32_t param)
DECL|net_icmpv6_set_chksum|function|int net_icmpv6_set_chksum(struct net_pkt *pkt)
DECL|net_icmpv6_set_hdr|function|int net_icmpv6_set_hdr(struct net_pkt *pkt, struct net_icmp_hdr *hdr)
DECL|net_icmpv6_set_na_hdr|function|int net_icmpv6_set_na_hdr(struct net_pkt *pkt, struct net_icmpv6_na_hdr *hdr)
DECL|net_icmpv6_set_ns_hdr|function|int net_icmpv6_set_ns_hdr(struct net_pkt *pkt, struct net_icmpv6_ns_hdr *hdr)
DECL|net_icmpv6_type2str|function|const char *net_icmpv6_type2str(int icmpv6_type)
DECL|net_icmpv6_unregister_handler|function|void net_icmpv6_unregister_handler(struct net_icmpv6_handler *handler)
DECL|setup_ipv6_header|function|static inline void setup_ipv6_header(struct net_pkt *pkt, u16_t extra_len, u8_t hop_limit, u8_t icmp_type, u8_t icmp_code)
