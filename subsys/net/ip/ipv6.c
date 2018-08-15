DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|FRAG_BUF_WAIT|macro|FRAG_BUF_WAIT
DECL|IPV6_REASSEMBLY_TIMEOUT|macro|IPV6_REASSEMBLY_TIMEOUT
DECL|IPV6_REASSEMBLY_TIMEOUT|macro|IPV6_REASSEMBLY_TIMEOUT
DECL|MAX_REACHABLE_TIME|macro|MAX_REACHABLE_TIME
DECL|ND_NET_BUF_TIMEOUT|macro|ND_NET_BUF_TIMEOUT
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_DEBUG_NBR|macro|NET_DEBUG_NBR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|add_route|function|static struct net_route_entry *add_route(struct net_if *iface, struct in6_addr *addr, u8_t prefix_len)
DECL|check_unknown_option|function|static inline struct net_pkt *check_unknown_option(struct net_pkt *pkt, u8_t opt_type, u16_t length)
DECL|fragment_verify|function|static bool fragment_verify(struct net_ipv6_reassembly *reass)
DECL|handle_ext_hdr_options|function|static inline struct net_buf *handle_ext_hdr_options(struct net_pkt *pkt, struct net_buf *frag, int total_len, u16_t len, u16_t offset,
DECL|handle_fragment_hdr|function|static enum net_verdict handle_fragment_hdr(struct net_pkt *pkt, struct net_buf *frag, int total_len, u16_t buf_offset, u16_t *loc,
DECL|in6addr_any|variable|in6addr_any
DECL|in6addr_loopback|variable|in6addr_loopback
DECL|is_upper_layer_protocol_header|function|static inline bool is_upper_layer_protocol_header(u8_t proto)
DECL|net_ipv6_create|function|struct net_pkt *net_ipv6_create(struct net_pkt *pkt,const struct in6_addr *src, const struct in6_addr *dst, struct net_if *iface, u8_t next_header_proto)
DECL|net_ipv6_finalize|function|int net_ipv6_finalize(struct net_pkt *pkt, u8_t next_header_proto)
DECL|net_ipv6_find_last_ext_hdr|function|int net_ipv6_find_last_ext_hdr(struct net_pkt *pkt, u16_t *next_hdr_idx, u16_t *last_hdr_idx)
DECL|net_ipv6_frag_foreach|function|void net_ipv6_frag_foreach(net_ipv6_frag_cb_t cb, void *user_data)
DECL|net_ipv6_init|function|void net_ipv6_init(void)
DECL|net_ipv6_process_pkt|function|enum net_verdict net_ipv6_process_pkt(struct net_pkt *pkt)
DECL|net_ipv6_send_fragmented_pkt|function|int net_ipv6_send_fragmented_pkt(struct net_if *iface, struct net_pkt *pkt, u16_t pkt_len)
DECL|net_ipv6_unspecified_address|function|const struct in6_addr *net_ipv6_unspecified_address(void)
DECL|no_route_info|function|static void no_route_info(struct net_pkt *pkt, struct in6_addr *src, struct in6_addr *dst)
DECL|process_icmpv6_pkt|function|static inline enum net_verdict process_icmpv6_pkt(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6)
DECL|reassemble_packet|function|static void reassemble_packet(struct net_ipv6_reassembly *reass)
DECL|reassembly_cancel|function|static bool reassembly_cancel(u32_t id, struct in6_addr *src, struct in6_addr *dst)
DECL|reassembly_get|function|static struct net_ipv6_reassembly *reassembly_get(u32_t id, struct in6_addr *src, struct in6_addr *dst)
DECL|reassembly_info|function|static void reassembly_info(char *str, struct net_ipv6_reassembly *reass)
DECL|reassembly_init_done|variable|reassembly_init_done
DECL|reassembly_timeout|function|static void reassembly_timeout(struct k_work *work)
DECL|reassembly|variable|reassembly
DECL|route_ipv6_packet|function|static enum net_verdict route_ipv6_packet(struct net_pkt *pkt, struct net_ipv6_hdr *hdr)
DECL|send_ipv6_fragment|function|static int send_ipv6_fragment(struct net_if *iface, struct net_pkt *pkt, struct net_buf **rest, u16_t ipv6_hdrs_len, u16_t fit_len,
DECL|shift_packets|function|static int shift_packets(struct net_ipv6_reassembly *reass, int pos)
