DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_REACHABLE_TIME|macro|MAX_REACHABLE_TIME
DECL|ND_NET_BUF_TIMEOUT|macro|ND_NET_BUF_TIMEOUT
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_DEBUG_NBR|macro|NET_DEBUG_NBR
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|add_route|function|static struct net_route_entry *add_route(struct net_if *iface, struct in6_addr *addr, u8_t prefix_len)
DECL|check_unknown_option|function|static inline struct net_pkt *check_unknown_option(struct net_pkt *pkt, u8_t opt_type, u16_t length)
DECL|handle_ext_hdr_options|function|static inline struct net_buf *handle_ext_hdr_options(struct net_pkt *pkt, struct net_buf *frag, int total_len, u16_t len, u16_t offset,
DECL|in6addr_any|variable|in6addr_any
DECL|in6addr_loopback|variable|in6addr_loopback
DECL|is_upper_layer_protocol_header|function|static inline bool is_upper_layer_protocol_header(u8_t proto)
DECL|net_ipv6_create|function|struct net_pkt *net_ipv6_create(struct net_pkt *pkt,const struct in6_addr *src, const struct in6_addr *dst, struct net_if *iface, u8_t next_header_proto)
DECL|net_ipv6_finalize|function|int net_ipv6_finalize(struct net_pkt *pkt, u8_t next_header_proto)
DECL|net_ipv6_init|function|void net_ipv6_init(void)
DECL|net_ipv6_process_pkt|function|enum net_verdict net_ipv6_process_pkt(struct net_pkt *pkt)
DECL|net_ipv6_unspecified_address|function|const struct in6_addr *net_ipv6_unspecified_address(void)
DECL|no_route_info|function|static void no_route_info(struct net_pkt *pkt, struct in6_addr *src, struct in6_addr *dst)
DECL|process_icmpv6_pkt|function|static inline enum net_verdict process_icmpv6_pkt(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6)
DECL|route_ipv6_packet|function|static enum net_verdict route_ipv6_packet(struct net_pkt *pkt, struct net_ipv6_hdr *hdr)
