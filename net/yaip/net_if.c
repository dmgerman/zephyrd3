DECL|DAD_TIMEOUT|macro|DAD_TIMEOUT
DECL|MAX_RANDOM_FACTOR|macro|MAX_RANDOM_FACTOR
DECL|MIN_RANDOM_FACTOR|macro|MIN_RANDOM_FACTOR
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|REACHABLE_TIME|macro|REACHABLE_TIME
DECL|RS_COUNT|macro|RS_COUNT
DECL|RS_TIMEOUT|macro|RS_TIMEOUT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|dad_timeout|function|static void dad_timeout(struct nano_work *work)
DECL|debug_check_packet|macro|debug_check_packet
DECL|debug_check_packet|macro|debug_check_packet
DECL|get_length|function|static inline uint8_t get_length(struct in6_addr *src, struct in6_addr *dst)
DECL|init_tx_queue|function|static inline void init_tx_queue(struct net_if *iface)
DECL|is_proper_ipv6_address|function|static inline bool is_proper_ipv6_address(struct net_if_addr *addr)
DECL|net_if_get_by_iface|function|uint8_t net_if_get_by_iface(struct net_if *iface)
DECL|net_if_get_by_index|function|struct net_if *net_if_get_by_index(uint8_t index)
DECL|net_if_get_by_link_addr|function|struct net_if *net_if_get_by_link_addr(struct net_linkaddr *ll_addr)
DECL|net_if_get_default|function|struct net_if *net_if_get_default(void)
DECL|net_if_init|function|void net_if_init(void)
DECL|net_if_ipv4_addr_add|function|struct net_if_addr *net_if_ipv4_addr_add(struct net_if *iface, struct in_addr *addr, enum net_addr_type addr_type, uint32_t vlifetime)
DECL|net_if_ipv4_addr_lookup|function|struct net_if_addr *net_if_ipv4_addr_lookup(const struct in_addr *addr, struct net_if **ret)
DECL|net_if_ipv4_addr_mask_cmp|function|bool net_if_ipv4_addr_mask_cmp(struct net_if *iface, struct in_addr *addr)
DECL|net_if_ipv4_addr_rm|function|bool net_if_ipv4_addr_rm(struct net_if *iface, struct in_addr *addr)
DECL|net_if_ipv4_broadcast_addr|function|const struct in_addr *net_if_ipv4_broadcast_addr(void)
DECL|net_if_ipv4_router_add|function|struct net_if_router *net_if_ipv4_router_add(struct net_if *iface, struct in_addr *addr, bool is_default, uint16_t lifetime)
DECL|net_if_ipv4_router_lookup|function|struct net_if_router *net_if_ipv4_router_lookup(struct net_if *iface,struct in_addr *addr)
DECL|net_if_ipv6_addr_add|function|struct net_if_addr *net_if_ipv6_addr_add(struct net_if *iface, struct in6_addr *addr, enum net_addr_type addr_type, uint32_t vlifetime)
DECL|net_if_ipv6_addr_lookup|function|struct net_if_addr *net_if_ipv6_addr_lookup(const struct in6_addr *addr, struct net_if **ret)
DECL|net_if_ipv6_addr_rm|function|bool net_if_ipv6_addr_rm(struct net_if *iface, struct in6_addr *addr)
DECL|net_if_ipv6_calc_reachable_time|function|uint32_t net_if_ipv6_calc_reachable_time(struct net_if *iface)
DECL|net_if_ipv6_get_best_match|function|static inline struct in6_addr *net_if_ipv6_get_best_match(struct net_if *iface, struct in6_addr *dst, uint8_t *best_so_far)
DECL|net_if_ipv6_get_ll|function|struct in6_addr *net_if_ipv6_get_ll(struct net_if *iface, enum net_addr_state addr_state)
DECL|net_if_ipv6_maddr_add|function|struct net_if_mcast_addr *net_if_ipv6_maddr_add(struct net_if *iface,struct in6_addr *addr)
DECL|net_if_ipv6_maddr_lookup|function|struct net_if_mcast_addr *net_if_ipv6_maddr_lookup(const struct in6_addr *maddr, struct net_if **ret)
DECL|net_if_ipv6_maddr_rm|function|bool net_if_ipv6_maddr_rm(struct net_if *iface, struct in6_addr *addr)
DECL|net_if_ipv6_prefix_add|function|struct net_if_ipv6_prefix *net_if_ipv6_prefix_add(struct net_if *iface, struct in6_addr *prefix, uint8_t len, uint32_t lifetime)
DECL|net_if_ipv6_prefix_lookup|function|struct net_if_ipv6_prefix *net_if_ipv6_prefix_lookup(struct net_if *iface, struct in6_addr *addr, uint8_t len)
DECL|net_if_ipv6_prefix_rm|function|bool net_if_ipv6_prefix_rm(struct net_if *iface, struct in6_addr *addr, uint8_t len)
DECL|net_if_ipv6_prefix_set_timer|function|void net_if_ipv6_prefix_set_timer(struct net_if_ipv6_prefix *prefix, uint32_t lifetime)
DECL|net_if_ipv6_prefix_unset_timer|function|void net_if_ipv6_prefix_unset_timer(struct net_if_ipv6_prefix *prefix)
DECL|net_if_ipv6_router_add|function|struct net_if_router *net_if_ipv6_router_add(struct net_if *iface, struct in6_addr *addr, uint16_t lifetime)
DECL|net_if_ipv6_router_lookup|function|struct net_if_router *net_if_ipv6_router_lookup(struct net_if *iface,struct in6_addr *addr)
DECL|net_if_ipv6_select_src_addr|function|const struct in6_addr *net_if_ipv6_select_src_addr(struct net_if *dst_iface, struct in6_addr *dst)
DECL|net_if_ipv6_unspecified_addr|function|const struct in6_addr *net_if_ipv6_unspecified_addr(void)
DECL|net_if_lookup_by_dev|function|struct net_if *net_if_lookup_by_dev(struct device *dev)
DECL|net_if_send_data|function|enum net_verdict net_if_send_data(struct net_if *iface, struct net_buf *buf)
DECL|net_if_start_dad|function|void net_if_start_dad(struct net_if *iface)
DECL|net_if_start_rs|function|void net_if_start_rs(struct net_if *iface)
DECL|net_if_tx_fiber|function|static void net_if_tx_fiber(struct net_if *iface)
DECL|prefix_lf_timeout|function|static inline void prefix_lf_timeout(struct nano_work *work)
DECL|routers|variable|routers
DECL|rs_timeout|function|static void rs_timeout(struct nano_work *work)
