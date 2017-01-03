DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|echo_request_handler|variable|echo_request_handler
DECL|handle_echo_request|function|static enum net_verdict handle_echo_request(struct net_buf *orig)
DECL|handlers|variable|handlers
DECL|net_icmpv6_init|function|void net_icmpv6_init(void)
DECL|net_icmpv6_input|function|enum net_verdict net_icmpv6_input(struct net_buf *buf, uint16_t len, uint8_t type, uint8_t code)
DECL|net_icmpv6_register_handler|function|void net_icmpv6_register_handler(struct net_icmpv6_handler *handler)
DECL|net_icmpv6_send_echo_request|function|int net_icmpv6_send_echo_request(struct net_if *iface, struct in6_addr *dst, uint16_t identifier, uint16_t sequence)
DECL|net_icmpv6_send_error|function|int net_icmpv6_send_error(struct net_buf *orig, uint8_t type, uint8_t code, uint32_t param)
DECL|setup_ipv6_header|function|static inline void setup_ipv6_header(struct net_buf *buf, uint16_t extra_len, uint8_t hop_limit, uint8_t icmp_type, uint8_t icmp_code)
