DECL|DELAY_FIRST_PROBE_TIME|macro|DELAY_FIRST_PROBE_TIME
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_IPV6_MTU|macro|MAX_IPV6_MTU
DECL|MAX_MULTICAST_SOLICIT|macro|MAX_MULTICAST_SOLICIT
DECL|MAX_REACHABLE_TIME|macro|MAX_REACHABLE_TIME
DECL|MAX_UNICAST_SOLICIT|macro|MAX_UNICAST_SOLICIT
DECL|MIN_IPV6_MTU|macro|MIN_IPV6_MTU
DECL|ND_NET_BUF_TIMEOUT|macro|ND_NET_BUF_TIMEOUT
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_DEBUG_NBR|macro|NET_DEBUG_NBR
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|NS_REPLY_TIMEOUT|macro|NS_REPLY_TIMEOUT
DECL|RETRANS_TIMER|macro|RETRANS_TIMER
DECL|TWO_HOURS|macro|TWO_HOURS
DECL|append_all|macro|append_all
DECL|append|macro|append
DECL|cb|member|net_nbr_cb_t cb;
DECL|check_route|function|static struct in6_addr *check_route(struct net_if *iface, struct in6_addr *dst, bool *try_route)
DECL|dad_failed|function|static inline bool dad_failed(struct net_if *iface, struct in6_addr *addr)
DECL|dbg_addr_recv_tgt|macro|dbg_addr_recv_tgt
DECL|dbg_addr_recv|macro|dbg_addr_recv
DECL|dbg_addr_sent_tgt|macro|dbg_addr_sent_tgt
DECL|dbg_addr_sent|macro|dbg_addr_sent
DECL|dbg_addr_with_tgt|macro|dbg_addr_with_tgt
DECL|dbg_addr|macro|dbg_addr
DECL|dbg_update_neighbor_lladdr_raw|function|static void dbg_update_neighbor_lladdr_raw(u8_t *new_lladdr, struct net_linkaddr_storage *old_lladdr, struct in6_addr *addr)
DECL|dbg_update_neighbor_lladdr|function|static void dbg_update_neighbor_lladdr(struct net_linkaddr *new_lladdr, struct net_linkaddr_storage *old_lladdr, struct in6_addr *addr)
DECL|get_llao_len|function|static inline u8_t get_llao_len(struct net_if *iface)
DECL|get_nbr_from_data|function|static inline struct net_nbr *get_nbr_from_data(struct net_ipv6_nbr_data *data)
DECL|get_nbr|function|static inline struct net_nbr *get_nbr(int idx)
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
DECL|ipv6_nbr_set_state|function|static void ipv6_nbr_set_state(struct net_nbr *nbr, enum net_ipv6_nbr_state new_state)
DECL|ipv6_nd_reachable_timeout|function|static void ipv6_nd_reachable_timeout(struct k_work *work)
DECL|ipv6_nd_reachable_timer|variable|ipv6_nd_reachable_timer
DECL|ipv6_ns_reply_timeout|function|static void ipv6_ns_reply_timeout(struct k_work *work)
DECL|ipv6_ns_reply_timer|variable|ipv6_ns_reply_timer
DECL|na_input_handler|variable|na_input_handler
DECL|nbr_add|function|static inline struct net_nbr *nbr_add(struct net_pkt *pkt, struct net_linkaddr *lladdr, bool is_router, enum net_ipv6_nbr_state state)
DECL|nbr_clear_ns_pending|function|static inline void nbr_clear_ns_pending(struct net_ipv6_nbr_data *data)
DECL|nbr_free|function|static inline void nbr_free(struct net_nbr *nbr)
DECL|nbr_init|function|static void nbr_init(struct net_nbr *nbr, struct net_if *iface, struct in6_addr *addr, bool is_router, enum net_ipv6_nbr_state state)
DECL|nbr_lookup|function|static struct net_nbr *nbr_lookup(struct net_nbr_table *table, struct net_if *iface, struct in6_addr *addr)
DECL|nbr_new|function|static struct net_nbr *nbr_new(struct net_if *iface, struct in6_addr *addr, bool is_router, enum net_ipv6_nbr_state state)
DECL|nbr_print|function|void nbr_print(void)
DECL|nbr_print|macro|nbr_print
DECL|net_ipv6_get_nbr|function|struct net_nbr *net_ipv6_get_nbr(struct net_if *iface, u8_t idx)
DECL|net_ipv6_nbr_add|function|struct net_nbr *net_ipv6_nbr_add(struct net_if *iface, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_ipv6_nbr_state state)
DECL|net_ipv6_nbr_foreach|function|void net_ipv6_nbr_foreach(net_nbr_cb_t cb, void *user_data)
DECL|net_ipv6_nbr_init|function|void net_ipv6_nbr_init(void)
DECL|net_ipv6_nbr_lookup_by_index|function|struct in6_addr *net_ipv6_nbr_lookup_by_index(struct net_if *iface, u8_t idx)
DECL|net_ipv6_nbr_lookup|function|struct net_nbr *net_ipv6_nbr_lookup(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_rm|function|bool net_ipv6_nbr_rm(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_set_reachable_timer|function|void net_ipv6_nbr_set_reachable_timer(struct net_if *iface, struct net_nbr *nbr)
DECL|net_ipv6_nbr_state2str|function|const char *net_ipv6_nbr_state2str(enum net_ipv6_nbr_state state)
DECL|net_ipv6_nbr_state2str|function|const char *net_ipv6_nbr_state2str(enum net_ipv6_nbr_state state)
DECL|net_ipv6_prepare_for_send|function|struct net_pkt *net_ipv6_prepare_for_send(struct net_pkt *pkt)
DECL|net_ipv6_send_na|function|int net_ipv6_send_na(struct net_if *iface, const struct in6_addr *src, const struct in6_addr *dst, const struct in6_addr *tgt, u8_t flags)
DECL|net_ipv6_send_ns|function|int net_ipv6_send_ns(struct net_if *iface, struct net_pkt *pending, struct in6_addr *src, struct in6_addr *dst, struct in6_addr *tgt,
DECL|net_ipv6_send_rs|function|int net_ipv6_send_rs(struct net_if *iface)
DECL|net_ipv6_start_dad|function|int net_ipv6_start_dad(struct net_if *iface, struct net_if_addr *ifaddr)
DECL|net_ipv6_start_rs|function|int net_ipv6_start_rs(struct net_if *iface)
DECL|net_is_override|function|static inline bool net_is_override(struct net_pkt *pkt)
DECL|net_is_router|function|static inline bool net_is_router(struct net_pkt *pkt)
DECL|net_is_solicited|function|static inline bool net_is_solicited(struct net_pkt *pkt)
DECL|net_neighbor_data_remove|function|void net_neighbor_data_remove(struct net_nbr *nbr)
DECL|net_neighbor_table_clear|function|void net_neighbor_table_clear(struct net_nbr_table *table)
DECL|ns_input_handler|variable|ns_input_handler
DECL|ns_routing_info|function|static void ns_routing_info(struct net_pkt *pkt, struct in6_addr *nexthop, struct in6_addr *tgt)
DECL|ra_input_handler|variable|ra_input_handler
DECL|remaining_lifetime|function|static inline u32_t remaining_lifetime(struct net_if_addr *ifaddr)
DECL|set_llao|function|static inline void set_llao(struct net_linkaddr *lladdr, u8_t *llao, u8_t llao_len, u8_t type)
DECL|setup_headers|function|static void setup_headers(struct net_pkt *pkt, u8_t nd6_len, u8_t icmp_type)
DECL|time_diff|function|static u32_t time_diff(u32_t time1, u32_t time2)
DECL|update_ll_reserve|function|static struct net_pkt *update_ll_reserve(struct net_pkt *pkt, struct in6_addr *addr)
DECL|user_data|member|void *user_data;
