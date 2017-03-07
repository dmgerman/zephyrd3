DECL|DELAY_FIRST_PROBE_TIME|macro|DELAY_FIRST_PROBE_TIME
DECL|MAX_MULTICAST_SOLICIT|macro|MAX_MULTICAST_SOLICIT
DECL|MAX_UNICAST_SOLICIT|macro|MAX_UNICAST_SOLICIT
DECL|MLDv2_LEN|macro|MLDv2_LEN
DECL|NET_DEBUG_NBR|macro|NET_DEBUG_NBR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NS_REPLY_TIMEOUT|macro|NS_REPLY_TIMEOUT
DECL|RETRANS_TIMER|macro|RETRANS_TIMER
DECL|ROUTER_ALERT_LEN|macro|ROUTER_ALERT_LEN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TWO_HOURS|macro|TWO_HOURS
DECL|create_mldv2|function|static struct net_buf *create_mldv2(struct net_buf *buf, const struct in6_addr *addr, uint16_t record_type, uint8_t num_sources)
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
DECL|dbg_update_neighbor_lladdr_raw|function|static inline void dbg_update_neighbor_lladdr_raw(uint8_t *new_lladdr,struct net_linkaddr_storage *old_lladdr, struct in6_addr *addr)
DECL|dbg_update_neighbor_lladdr_raw|macro|dbg_update_neighbor_lladdr_raw
DECL|dbg_update_neighbor_lladdr|function|static inline void dbg_update_neighbor_lladdr(struct net_linkaddr *new_lladdr,struct net_linkaddr_storage *old_lladdr, struct in6_addr *addr)
DECL|dbg_update_neighbor_lladdr|macro|dbg_update_neighbor_lladdr
DECL|get_llao_len|function|static inline uint8_t get_llao_len(struct net_if *iface)
DECL|get_nbr_from_data|function|static inline struct net_nbr *get_nbr_from_data(struct net_ipv6_nbr_data *data)
DECL|get_nbr|function|static inline struct net_nbr *get_nbr(int idx)
DECL|handle_mld_query|function|static enum net_verdict handle_mld_query(struct net_buf *buf)
DECL|handle_na_input|function|static enum net_verdict handle_na_input(struct net_buf *buf)
DECL|handle_na_neighbor|function|static inline bool handle_na_neighbor(struct net_buf *buf, struct net_icmpv6_nd_opt_hdr *hdr, uint8_t *tllao)
DECL|handle_ns_input|function|static enum net_verdict handle_ns_input(struct net_buf *buf)
DECL|handle_ns_neighbor|function|static inline void handle_ns_neighbor(struct net_buf *buf, struct net_icmpv6_nd_opt_hdr *hdr)
DECL|handle_prefix_autonomous|function|static inline void handle_prefix_autonomous(struct net_buf *buf,struct net_icmpv6_nd_opt_prefix_info *prefix_info)
DECL|handle_prefix_onlink|function|static inline void handle_prefix_onlink(struct net_buf *buf,struct net_icmpv6_nd_opt_prefix_info *prefix_info)
DECL|handle_ra_6co|function|static inline struct net_buf *handle_ra_6co(struct net_buf *buf, struct net_buf *frag, uint8_t len, uint16_t offset, uint16_t *pos)
DECL|handle_ra_input|function|static enum net_verdict handle_ra_input(struct net_buf *buf)
DECL|handle_ra_neighbor|function|static inline struct net_buf *handle_ra_neighbor(struct net_buf *buf, struct net_buf *frag, uint8_t len, uint16_t offset, uint16_t *pos, struct net_nbr **nbr)
DECL|handle_ra_prefix|function|static inline struct net_buf *handle_ra_prefix(struct net_buf *buf, struct net_buf *frag, uint8_t len, uint16_t offset, uint16_t *pos)
DECL|mld_query_input_handler|variable|mld_query_input_handler
DECL|na_input_handler|variable|na_input_handler
DECL|nbr_add|function|static inline struct net_nbr *nbr_add(struct net_buf *buf, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_nbr_state state)
DECL|nbr_clear_ns_pending|function|static inline void nbr_clear_ns_pending(struct net_ipv6_nbr_data *data)
DECL|nbr_free|function|static inline void nbr_free(struct net_nbr *nbr)
DECL|nbr_lookup|function|static struct net_nbr *nbr_lookup(struct net_nbr_table *table, struct net_if *iface, struct in6_addr *addr)
DECL|nbr_new|function|static struct net_nbr *nbr_new(struct net_if *iface, struct in6_addr *addr, enum net_nbr_state state)
DECL|nbr_print|function|void nbr_print(void)
DECL|nbr_print|macro|nbr_print
DECL|nbr_set_state|function|static void nbr_set_state(struct net_nbr *nbr, enum net_nbr_state new_state)
DECL|nd_reachable_timeout|function|static void nd_reachable_timeout(struct k_work *work)
DECL|net_ipv6_create_raw|function|struct net_buf *net_ipv6_create_raw(struct net_buf *buf, const struct in6_addr *src, const struct in6_addr *dst, struct net_if *iface, uint8_t next_header)
DECL|net_ipv6_create|function|struct net_buf *net_ipv6_create(struct net_context *context,struct net_buf *buf, const struct in6_addr *src, const struct in6_addr *dst)
DECL|net_ipv6_finalize_raw|function|struct net_buf *net_ipv6_finalize_raw(struct net_buf *buf, uint8_t next_header)
DECL|net_ipv6_finalize|function|struct net_buf *net_ipv6_finalize(struct net_context *context, struct net_buf *buf)
DECL|net_ipv6_get_nbr_by_index|function|struct net_ipv6_nbr_data *net_ipv6_get_nbr_by_index(uint8_t idx)
DECL|net_ipv6_get_nbr|function|struct net_nbr *net_ipv6_get_nbr(struct net_if *iface, uint8_t idx)
DECL|net_ipv6_init|function|void net_ipv6_init(void)
DECL|net_ipv6_mld_join|function|int net_ipv6_mld_join(struct net_if *iface, const struct in6_addr *addr)
DECL|net_ipv6_mld_leave|function|int net_ipv6_mld_leave(struct net_if *iface, const struct in6_addr *addr)
DECL|net_ipv6_nbr_add|function|struct net_nbr *net_ipv6_nbr_add(struct net_if *iface, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_nbr_state state)
DECL|net_ipv6_nbr_foreach|function|void net_ipv6_nbr_foreach(net_nbr_cb_t cb, void *user_data)
DECL|net_ipv6_nbr_lookup_by_index|function|struct in6_addr *net_ipv6_nbr_lookup_by_index(struct net_if *iface, uint8_t idx)
DECL|net_ipv6_nbr_lookup|function|struct net_nbr *net_ipv6_nbr_lookup(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_rm|function|bool net_ipv6_nbr_rm(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_set_reachable_timer|function|void net_ipv6_nbr_set_reachable_timer(struct net_if *iface, struct net_nbr *nbr)
DECL|net_ipv6_prepare_for_send|function|struct net_buf *net_ipv6_prepare_for_send(struct net_buf *buf)
DECL|net_ipv6_send_na|function|int net_ipv6_send_na(struct net_if *iface, struct in6_addr *src, struct in6_addr *dst, struct in6_addr *tgt, uint8_t flags)
DECL|net_ipv6_send_ns|function|int net_ipv6_send_ns(struct net_if *iface, struct net_buf *pending, struct in6_addr *src, struct in6_addr *dst, struct in6_addr *tgt,
DECL|net_ipv6_send_rs|function|int net_ipv6_send_rs(struct net_if *iface)
DECL|net_ipv6_start_dad|function|int net_ipv6_start_dad(struct net_if *iface, struct net_if_addr *ifaddr)
DECL|net_ipv6_start_rs|function|int net_ipv6_start_rs(struct net_if *iface)
DECL|net_ipv6_unspecified_address|function|const struct in6_addr *net_ipv6_unspecified_address(void)
DECL|net_is_override|function|static inline bool net_is_override(struct net_buf *buf)
DECL|net_is_router|function|static inline bool net_is_router(struct net_buf *buf)
DECL|net_is_solicited|function|static inline bool net_is_solicited(struct net_buf *buf)
DECL|net_nbr_state2str|function|const char *net_nbr_state2str(enum net_nbr_state state)
DECL|net_neighbor_data_remove|function|void net_neighbor_data_remove(struct net_nbr *nbr)
DECL|net_neighbor_table_clear|function|void net_neighbor_table_clear(struct net_nbr_table *table)
DECL|ns_input_handler|variable|ns_input_handler
DECL|ns_reply_timeout|function|static void ns_reply_timeout(struct k_work *work)
DECL|ra_input_handler|variable|ra_input_handler
DECL|remaining|function|static inline uint32_t remaining(struct k_delayed_work *work)
DECL|send_mld_report|function|static void send_mld_report(struct net_if *iface)
DECL|send_mldv2_raw|function|static int send_mldv2_raw(struct net_if *iface, struct net_buf *frags)
DECL|send_mldv2|function|static int send_mldv2(struct net_if *iface, const struct in6_addr *addr, uint8_t mode)
DECL|set_llao|function|static inline void set_llao(struct net_linkaddr *lladdr, uint8_t *llao, uint8_t llao_len, uint8_t type)
DECL|setup_headers|function|static void setup_headers(struct net_buf *buf, uint8_t nd6_len, uint8_t icmp_type)
DECL|update_ll_reserve|function|static struct net_buf *update_ll_reserve(struct net_buf *buf, struct in6_addr *addr)
