DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|DELAY_FIRST_PROBE_TIME|macro|DELAY_FIRST_PROBE_TIME
DECL|FRAG_BUF_WAIT|macro|FRAG_BUF_WAIT
DECL|IPV6_REASSEMBLY_TIMEOUT|macro|IPV6_REASSEMBLY_TIMEOUT
DECL|IPV6_REASSEMBLY_TIMEOUT|macro|IPV6_REASSEMBLY_TIMEOUT
DECL|MAX_IPV6_MTU|macro|MAX_IPV6_MTU
DECL|MAX_MULTICAST_SOLICIT|macro|MAX_MULTICAST_SOLICIT
DECL|MAX_REACHABLE_TIME|macro|MAX_REACHABLE_TIME
DECL|MAX_UNICAST_SOLICIT|macro|MAX_UNICAST_SOLICIT
DECL|MIN_IPV6_MTU|macro|MIN_IPV6_MTU
DECL|MLDv2_LEN|macro|MLDv2_LEN
DECL|ND_NET_BUF_TIMEOUT|macro|ND_NET_BUF_TIMEOUT
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_DEBUG_NBR|macro|NET_DEBUG_NBR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NS_REPLY_TIMEOUT|macro|NS_REPLY_TIMEOUT
DECL|RETRANS_TIMER|macro|RETRANS_TIMER
DECL|ROUTER_ALERT_LEN|macro|ROUTER_ALERT_LEN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TWO_HOURS|macro|TWO_HOURS
DECL|add_route|function|static struct net_route_entry *add_route(struct net_if *iface, struct in6_addr *addr, u8_t prefix_len)
DECL|append_all|macro|append_all
DECL|append|macro|append
DECL|cb|member|net_nbr_cb_t cb;
DECL|check_route|function|static struct in6_addr *check_route(struct net_if *iface, struct in6_addr *dst, bool *try_route)
DECL|check_unknown_option|function|static inline struct net_pkt *check_unknown_option(struct net_pkt *pkt, u8_t opt_type, u16_t length)
DECL|create_mldv2|function|static struct net_pkt *create_mldv2(struct net_pkt *pkt, const struct in6_addr *addr, u16_t record_type, u8_t num_sources)
DECL|dad_failed|function|static inline bool dad_failed(struct net_if *iface, struct in6_addr *addr)
DECL|dbg_addr_recv_tgt|macro|dbg_addr_recv_tgt
DECL|dbg_addr_recv_tgt|macro|dbg_addr_recv_tgt
DECL|dbg_addr_recv|macro|dbg_addr_recv
DECL|dbg_addr_recv|macro|dbg_addr_recv
DECL|dbg_addr_sent_tgt|macro|dbg_addr_sent_tgt
DECL|dbg_addr_sent_tgt|macro|dbg_addr_sent_tgt
DECL|dbg_addr_sent|macro|dbg_addr_sent
DECL|dbg_addr_sent|macro|dbg_addr_sent
DECL|dbg_addr_with_tgt|macro|dbg_addr_with_tgt
DECL|dbg_addr_with_tgt|macro|dbg_addr_with_tgt
DECL|dbg_addr|macro|dbg_addr
DECL|dbg_addr|macro|dbg_addr
DECL|dbg_update_neighbor_lladdr_raw|function|static inline void dbg_update_neighbor_lladdr_raw(u8_t *new_lladdr,struct net_linkaddr_storage *old_lladdr, struct in6_addr *addr)
DECL|dbg_update_neighbor_lladdr_raw|macro|dbg_update_neighbor_lladdr_raw
DECL|dbg_update_neighbor_lladdr|function|static inline void dbg_update_neighbor_lladdr(struct net_linkaddr *new_lladdr,struct net_linkaddr_storage *old_lladdr, struct in6_addr *addr)
DECL|dbg_update_neighbor_lladdr|macro|dbg_update_neighbor_lladdr
DECL|fragment_verify|function|static bool fragment_verify(struct net_ipv6_reassembly *reass)
DECL|get_llao_len|function|static inline u8_t get_llao_len(struct net_if *iface)
DECL|get_nbr_from_data|function|static inline struct net_nbr *get_nbr_from_data(struct net_ipv6_nbr_data *data)
DECL|get_nbr|function|static inline struct net_nbr *get_nbr(int idx)
DECL|handle_ext_hdr_options|function|static inline struct net_buf *handle_ext_hdr_options(struct net_pkt *pkt, struct net_buf *frag, int total_len, u16_t len, u16_t offset,
DECL|handle_fragment_hdr|function|static enum net_verdict handle_fragment_hdr(struct net_pkt *pkt, struct net_buf *frag, int total_len, u16_t buf_offset, u16_t *loc,
DECL|handle_mld_query|function|static enum net_verdict handle_mld_query(struct net_pkt *pkt)
DECL|handle_na_input|function|static enum net_verdict handle_na_input(struct net_pkt *pkt)
DECL|handle_na_neighbor|function|static inline bool handle_na_neighbor(struct net_pkt *pkt, struct net_icmpv6_na_hdr *na_hdr, u16_t tllao_offset)
DECL|handle_ns_input|function|static enum net_verdict handle_ns_input(struct net_pkt *pkt)
DECL|handle_ns_neighbor|function|static inline struct net_nbr *handle_ns_neighbor(struct net_pkt *pkt, u8_t ll_len, u16_t sllao_offset)
DECL|handle_prefix_autonomous|function|static inline void handle_prefix_autonomous(struct net_pkt *pkt,struct net_icmpv6_nd_opt_prefix_info *prefix_info)
DECL|handle_prefix_onlink|function|static inline void handle_prefix_onlink(struct net_pkt *pkt,struct net_icmpv6_nd_opt_prefix_info *prefix_info)
DECL|handle_ra_6co|function|static inline struct net_buf *handle_ra_6co(struct net_pkt *pkt, struct net_buf *frag, u8_t len, u16_t offset, u16_t *pos)
DECL|handle_ra_input|function|static enum net_verdict handle_ra_input(struct net_pkt *pkt)
DECL|handle_ra_neighbor|function|static inline struct net_buf *handle_ra_neighbor(struct net_pkt *pkt, struct net_buf *frag, u8_t len, u16_t offset, u16_t *pos, struct net_nbr **nbr)
DECL|handle_ra_prefix|function|static inline struct net_buf *handle_ra_prefix(struct net_pkt *pkt, struct net_buf *frag, u8_t len, u16_t offset, u16_t *pos)
DECL|iface_cb_data|struct|struct iface_cb_data {
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|in6addr_any|variable|in6addr_any
DECL|in6addr_loopback|variable|in6addr_loopback
DECL|ipv6_nbr_set_state|function|static void ipv6_nbr_set_state(struct net_nbr *nbr, enum net_ipv6_nbr_state new_state)
DECL|is_upper_layer_protocol_header|function|static inline bool is_upper_layer_protocol_header(u8_t proto)
DECL|mld_query_input_handler|variable|mld_query_input_handler
DECL|na_input_handler|variable|na_input_handler
DECL|nbr_add|function|static inline struct net_nbr *nbr_add(struct net_pkt *pkt, struct net_linkaddr *lladdr, bool is_router, enum net_ipv6_nbr_state state)
DECL|nbr_clear_ns_pending|function|static inline void nbr_clear_ns_pending(struct net_ipv6_nbr_data *data)
DECL|nbr_free|function|static inline void nbr_free(struct net_nbr *nbr)
DECL|nbr_init|function|static void nbr_init(struct net_nbr *nbr, struct net_if *iface, struct in6_addr *addr, bool is_router, enum net_ipv6_nbr_state state)
DECL|nbr_lookup|function|static struct net_nbr *nbr_lookup(struct net_nbr_table *table, struct net_if *iface, struct in6_addr *addr)
DECL|nbr_new|function|static struct net_nbr *nbr_new(struct net_if *iface, struct in6_addr *addr, bool is_router, enum net_ipv6_nbr_state state)
DECL|nbr_print|function|void nbr_print(void)
DECL|nbr_print|macro|nbr_print
DECL|nd_reachable_timeout|function|static void nd_reachable_timeout(struct k_work *work)
DECL|net_ipv6_create|function|struct net_pkt *net_ipv6_create(struct net_pkt *pkt,const struct in6_addr *src, const struct in6_addr *dst, struct net_if *iface, u8_t next_header_proto)
DECL|net_ipv6_finalize|function|int net_ipv6_finalize(struct net_pkt *pkt, u8_t next_header_proto)
DECL|net_ipv6_find_last_ext_hdr|function|int net_ipv6_find_last_ext_hdr(struct net_pkt *pkt, u16_t *next_hdr_idx, u16_t *last_hdr_idx)
DECL|net_ipv6_frag_foreach|function|void net_ipv6_frag_foreach(net_ipv6_frag_cb_t cb, void *user_data)
DECL|net_ipv6_get_nbr|function|struct net_nbr *net_ipv6_get_nbr(struct net_if *iface, u8_t idx)
DECL|net_ipv6_init|function|void net_ipv6_init(void)
DECL|net_ipv6_mld_join|function|int net_ipv6_mld_join(struct net_if *iface, const struct in6_addr *addr)
DECL|net_ipv6_mld_leave|function|int net_ipv6_mld_leave(struct net_if *iface, const struct in6_addr *addr)
DECL|net_ipv6_nbr_add|function|struct net_nbr *net_ipv6_nbr_add(struct net_if *iface, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_ipv6_nbr_state state)
DECL|net_ipv6_nbr_foreach|function|void net_ipv6_nbr_foreach(net_nbr_cb_t cb, void *user_data)
DECL|net_ipv6_nbr_lookup_by_index|function|struct in6_addr *net_ipv6_nbr_lookup_by_index(struct net_if *iface, u8_t idx)
DECL|net_ipv6_nbr_lookup|function|struct net_nbr *net_ipv6_nbr_lookup(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_rm|function|bool net_ipv6_nbr_rm(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_set_reachable_timer|function|void net_ipv6_nbr_set_reachable_timer(struct net_if *iface, struct net_nbr *nbr)
DECL|net_ipv6_nbr_state2str|function|const char *net_ipv6_nbr_state2str(enum net_ipv6_nbr_state state)
DECL|net_ipv6_nbr_state2str|function|const char *net_ipv6_nbr_state2str(enum net_ipv6_nbr_state state)
DECL|net_ipv6_prepare_for_send|function|struct net_pkt *net_ipv6_prepare_for_send(struct net_pkt *pkt)
DECL|net_ipv6_process_pkt|function|enum net_verdict net_ipv6_process_pkt(struct net_pkt *pkt)
DECL|net_ipv6_send_fragmented_pkt|function|int net_ipv6_send_fragmented_pkt(struct net_if *iface, struct net_pkt *pkt, u16_t pkt_len)
DECL|net_ipv6_send_na|function|int net_ipv6_send_na(struct net_if *iface, const struct in6_addr *src, const struct in6_addr *dst, const struct in6_addr *tgt, u8_t flags)
DECL|net_ipv6_send_ns|function|int net_ipv6_send_ns(struct net_if *iface, struct net_pkt *pending, struct in6_addr *src, struct in6_addr *dst, struct in6_addr *tgt,
DECL|net_ipv6_send_rs|function|int net_ipv6_send_rs(struct net_if *iface)
DECL|net_ipv6_start_dad|function|int net_ipv6_start_dad(struct net_if *iface, struct net_if_addr *ifaddr)
DECL|net_ipv6_start_rs|function|int net_ipv6_start_rs(struct net_if *iface)
DECL|net_ipv6_unspecified_address|function|const struct in6_addr *net_ipv6_unspecified_address(void)
DECL|net_is_override|function|static inline bool net_is_override(struct net_pkt *pkt)
DECL|net_is_router|function|static inline bool net_is_router(struct net_pkt *pkt)
DECL|net_is_solicited|function|static inline bool net_is_solicited(struct net_pkt *pkt)
DECL|net_neighbor_data_remove|function|void net_neighbor_data_remove(struct net_nbr *nbr)
DECL|net_neighbor_table_clear|function|void net_neighbor_table_clear(struct net_nbr_table *table)
DECL|no_route_info|function|static void no_route_info(struct net_pkt *pkt, struct in6_addr *src, struct in6_addr *dst)
DECL|ns_input_handler|variable|ns_input_handler
DECL|ns_reply_timeout|function|static void ns_reply_timeout(struct k_work *work)
DECL|ns_routing_info|function|static void ns_routing_info(struct net_pkt *pkt, struct in6_addr *nexthop, struct in6_addr *tgt)
DECL|process_icmpv6_pkt|function|static inline enum net_verdict process_icmpv6_pkt(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6)
DECL|ra_input_handler|variable|ra_input_handler
DECL|reassemble_packet|function|static void reassemble_packet(struct net_ipv6_reassembly *reass)
DECL|reassembly_cancel|function|static bool reassembly_cancel(u32_t id, struct in6_addr *src, struct in6_addr *dst)
DECL|reassembly_get|function|static struct net_ipv6_reassembly *reassembly_get(u32_t id, struct in6_addr *src, struct in6_addr *dst)
DECL|reassembly_info|function|static void reassembly_info(char *str, struct net_ipv6_reassembly *reass)
DECL|reassembly_init_done|variable|reassembly_init_done
DECL|reassembly_timeout|function|static void reassembly_timeout(struct k_work *work)
DECL|reassembly|variable|reassembly
DECL|remaining_lifetime|function|static inline u32_t remaining_lifetime(struct net_if_addr *ifaddr)
DECL|route_ipv6_packet|function|static enum net_verdict route_ipv6_packet(struct net_pkt *pkt, struct net_ipv6_hdr *hdr)
DECL|send_ipv6_fragment|function|static int send_ipv6_fragment(struct net_if *iface, struct net_pkt *pkt, struct net_buf **rest, u16_t ipv6_hdrs_len, u16_t fit_len,
DECL|send_mld_report|function|static void send_mld_report(struct net_if *iface)
DECL|send_mldv2_raw|function|static int send_mldv2_raw(struct net_if *iface, struct net_buf *frags)
DECL|send_mldv2|function|static int send_mldv2(struct net_if *iface, const struct in6_addr *addr, u8_t mode)
DECL|set_llao|function|static inline void set_llao(struct net_linkaddr *lladdr, u8_t *llao, u8_t llao_len, u8_t type)
DECL|setup_headers|function|static void setup_headers(struct net_pkt *pkt, u8_t nd6_len, u8_t icmp_type)
DECL|shift_packets|function|static int shift_packets(struct net_ipv6_reassembly *reass, int pos)
DECL|update_ll_reserve|function|static struct net_pkt *update_ll_reserve(struct net_pkt *pkt, struct in6_addr *addr)
DECL|user_data|member|void *user_data;
