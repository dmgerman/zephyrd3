DECL|NET_ICMPV4_UNUSED_LEN|macro|NET_ICMPV4_UNUSED_LEN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|handle_echo_request|function|static inline enum net_verdict handle_echo_request(struct net_buf *buf)
DECL|net_icmpv4_input|function|enum net_verdict net_icmpv4_input(struct net_buf *buf, uint16_t len, uint8_t type, uint8_t code)
DECL|net_icmpv4_send_echo_request|function|int net_icmpv4_send_echo_request(struct net_if *iface, struct in_addr *dst, uint16_t identifier, uint16_t sequence)
DECL|net_icmpv4_send_error|function|int net_icmpv4_send_error(struct net_buf *orig, uint8_t type, uint8_t code)
DECL|setup_ipv4_header|function|static inline void setup_ipv4_header(struct net_buf *buf, uint8_t extra_len, uint8_t ttl, uint8_t icmp_type, uint8_t icmp_code)
