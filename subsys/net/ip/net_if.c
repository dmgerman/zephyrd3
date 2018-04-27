DECL|DAD_TIMEOUT|macro|DAD_TIMEOUT
DECL|MAX_RANDOM_DENOM|macro|MAX_RANDOM_DENOM
DECL|MAX_RANDOM_NUMER|macro|MAX_RANDOM_NUMER
DECL|MIN_RANDOM_DENOM|macro|MIN_RANDOM_DENOM
DECL|MIN_RANDOM_NUMER|macro|MIN_RANDOM_NUMER
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|REACHABLE_TIME|macro|REACHABLE_TIME
DECL|RS_COUNT|macro|RS_COUNT
DECL|RS_TIMEOUT|macro|RS_TIMEOUT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|check_global_addr|function|static inline struct in6_addr *check_global_addr(struct net_if *iface)
DECL|dad_timeout|function|static void dad_timeout(struct k_work *work)
DECL|debug_check_packet|macro|debug_check_packet
DECL|debug_check_packet|macro|debug_check_packet
DECL|debug_check_packet|macro|debug_check_packet
DECL|get_diff_ipv4|function|static u8_t get_diff_ipv4(const struct in_addr *src, const struct in_addr *dst)
DECL|get_diff_ipv6|function|static u8_t get_diff_ipv6(const struct in6_addr *src, const struct in6_addr *dst)
DECL|get_ipaddr_diff|function|static u8_t get_ipaddr_diff(const u8_t *src, const u8_t *dst, int addr_len)
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|init_iface|function|static inline void init_iface(struct net_if *iface)
DECL|ipv4_addr_find|function|static struct net_if_addr *ipv4_addr_find(struct net_if *iface, struct in_addr *addr)
DECL|ipv4_addresses|variable|ipv4_addresses
DECL|ipv4_maddr_find|function|static struct net_if_mcast_addr *ipv4_maddr_find(struct net_if *iface, bool is_used, const struct in_addr *addr)
DECL|ipv4|member|struct net_if_ipv4 ipv4;
DECL|ipv6_addr_expired|function|static void ipv6_addr_expired(struct k_work *work)
DECL|ipv6_addr_find|function|static struct net_if_addr *ipv6_addr_find(struct net_if *iface, struct in6_addr *addr)
DECL|ipv6_addresses|variable|ipv6_addresses
DECL|ipv6_prefix_find|function|static struct net_if_ipv6_prefix *ipv6_prefix_find(struct net_if *iface, struct in6_addr *prefix, u8_t prefix_len)
DECL|ipv6_router_expired|function|static void ipv6_router_expired(struct k_work *work)
DECL|ipv6|member|struct net_if_ipv6 ipv6;
DECL|is_proper_ipv4_address|function|static inline bool is_proper_ipv4_address(struct net_if_addr *addr)
DECL|is_proper_ipv6_address|function|static inline bool is_proper_ipv6_address(struct net_if_addr *addr)
DECL|join_mcast_allnodes|function|static void join_mcast_allnodes(struct net_if *iface)
DECL|join_mcast_allnodes|macro|join_mcast_allnodes
DECL|join_mcast_allnodes|macro|join_mcast_allnodes
DECL|join_mcast_solicit_node|function|static void join_mcast_solicit_node(struct net_if *iface, struct in6_addr *my_addr)
DECL|join_mcast_solicit_node|macro|join_mcast_solicit_node
DECL|join_mcast_solicit_node|macro|join_mcast_solicit_node
DECL|leave_mcast_all|function|static void leave_mcast_all(struct net_if *iface)
DECL|leave_mcast_all|macro|leave_mcast_all
DECL|leave_mcast_all|macro|leave_mcast_all
DECL|link_callbacks|variable|link_callbacks
DECL|mcast_monitor_callbacks|variable|mcast_monitor_callbacks
DECL|need_calc_checksum|function|static bool need_calc_checksum(struct net_if *iface, enum ethernet_hw_caps caps)
DECL|net_context_send_cb|function|static inline void net_context_send_cb(struct net_context *context, void *token, int status)
DECL|net_if_addr_init|function|static inline void net_if_addr_init(struct net_if_addr *ifaddr, struct in6_addr *addr, enum net_addr_type addr_type, u32_t vlifetime)
DECL|net_if_call_link_cb|function|void net_if_call_link_cb(struct net_if *iface, struct net_linkaddr *lladdr, int status)
DECL|net_if_carrier_down|function|void net_if_carrier_down(struct net_if *iface)
DECL|net_if_config_ipv4_get|function|int net_if_config_ipv4_get(struct net_if *iface, struct net_if_ipv4 **ipv4)
DECL|net_if_config_ipv4_put|function|int net_if_config_ipv4_put(struct net_if *iface)
DECL|net_if_config_ipv6_get|function|int net_if_config_ipv6_get(struct net_if *iface, struct net_if_ipv6 **ipv6)
DECL|net_if_config_ipv6_put|function|int net_if_config_ipv6_put(struct net_if *iface)
DECL|net_if_down|function|int net_if_down(struct net_if *iface)
DECL|net_if_foreach|function|void net_if_foreach(net_if_cb_t cb, void *user_data)
DECL|net_if_get_by_iface|function|u8_t net_if_get_by_iface(struct net_if *iface)
DECL|net_if_get_by_index|function|struct net_if *net_if_get_by_index(u8_t index)
DECL|net_if_get_by_link_addr|function|struct net_if *net_if_get_by_link_addr(struct net_linkaddr *ll_addr)
DECL|net_if_get_default|function|struct net_if *net_if_get_default(void)
DECL|net_if_get_first_by_type|function|struct net_if *net_if_get_first_by_type(const struct net_l2 *l2)
DECL|net_if_init|function|void net_if_init(void)
DECL|net_if_ipv4_addr_add|function|struct net_if_addr *net_if_ipv4_addr_add(struct net_if *iface, struct in_addr *addr, enum net_addr_type addr_type, u32_t vlifetime)
DECL|net_if_ipv4_addr_lookup|function|struct net_if_addr *net_if_ipv4_addr_lookup(const struct in_addr *addr, struct net_if **ret)
DECL|net_if_ipv4_addr_mask_cmp|function|bool net_if_ipv4_addr_mask_cmp(struct net_if *iface, struct in_addr *addr)
DECL|net_if_ipv4_addr_rm|function|bool net_if_ipv4_addr_rm(struct net_if *iface, struct in_addr *addr)
DECL|net_if_ipv4_get_best_match|function|static struct in_addr *net_if_ipv4_get_best_match(struct net_if *iface, struct in_addr *dst, u8_t *best_so_far)
DECL|net_if_ipv4_get_ll|function|struct in_addr *net_if_ipv4_get_ll(struct net_if *iface, enum net_addr_state addr_state)
DECL|net_if_ipv4_maddr_add|function|struct net_if_mcast_addr *net_if_ipv4_maddr_add(struct net_if *iface,const struct in_addr *addr)
DECL|net_if_ipv4_maddr_lookup|function|struct net_if_mcast_addr *net_if_ipv4_maddr_lookup(const struct in_addr *maddr, struct net_if **ret)
DECL|net_if_ipv4_maddr_rm|function|bool net_if_ipv4_maddr_rm(struct net_if *iface, const struct in_addr *addr)
DECL|net_if_ipv4_router_add|function|struct net_if_router *net_if_ipv4_router_add(struct net_if *iface, struct in_addr *addr, bool is_default, u16_t lifetime)
DECL|net_if_ipv4_router_lookup|function|struct net_if_router *net_if_ipv4_router_lookup(struct net_if *iface,struct in_addr *addr)
DECL|net_if_ipv4_select_src_addr|function|const struct in_addr *net_if_ipv4_select_src_addr(struct net_if *dst_iface, struct in_addr *dst)
DECL|net_if_ipv4_select_src_iface|function|struct net_if *net_if_ipv4_select_src_iface(struct in_addr *dst)
DECL|net_if_ipv6_addr_add|function|struct net_if_addr *net_if_ipv6_addr_add(struct net_if *iface, struct in6_addr *addr, enum net_addr_type addr_type, u32_t vlifetime)
DECL|net_if_ipv6_addr_lookup|function|struct net_if_addr *net_if_ipv6_addr_lookup(const struct in6_addr *addr, struct net_if **ret)
DECL|net_if_ipv6_addr_onlink|function|bool net_if_ipv6_addr_onlink(struct net_if **iface, struct in6_addr *addr)
DECL|net_if_ipv6_addr_rm|function|bool net_if_ipv6_addr_rm(struct net_if *iface, const struct in6_addr *addr)
DECL|net_if_ipv6_addr_update_lifetime|function|void net_if_ipv6_addr_update_lifetime(struct net_if_addr *ifaddr, u32_t vlifetime)
DECL|net_if_ipv6_calc_reachable_time|function|u32_t net_if_ipv6_calc_reachable_time(struct net_if_ipv6 *ipv6)
DECL|net_if_ipv6_dad_failed|function|void net_if_ipv6_dad_failed(struct net_if *iface, const struct in6_addr *addr)
DECL|net_if_ipv6_get_best_match|function|static inline struct in6_addr *net_if_ipv6_get_best_match(struct net_if *iface, struct in6_addr *dst, u8_t *best_so_far)
DECL|net_if_ipv6_get_global_addr|function|struct in6_addr *net_if_ipv6_get_global_addr(struct net_if **iface)
DECL|net_if_ipv6_get_ll_addr|function|struct in6_addr *net_if_ipv6_get_ll_addr(enum net_addr_state state, struct net_if **iface)
DECL|net_if_ipv6_get_ll|function|struct in6_addr *net_if_ipv6_get_ll(struct net_if *iface, enum net_addr_state addr_state)
DECL|net_if_ipv6_maddr_add|function|struct net_if_mcast_addr *net_if_ipv6_maddr_add(struct net_if *iface,const struct in6_addr *addr)
DECL|net_if_ipv6_maddr_lookup|function|struct net_if_mcast_addr *net_if_ipv6_maddr_lookup(const struct in6_addr *maddr, struct net_if **ret)
DECL|net_if_ipv6_maddr_rm|function|bool net_if_ipv6_maddr_rm(struct net_if *iface, const struct in6_addr *addr)
DECL|net_if_ipv6_prefix_add|function|struct net_if_ipv6_prefix *net_if_ipv6_prefix_add(struct net_if *iface, struct in6_addr *prefix, u8_t len, u32_t lifetime)
DECL|net_if_ipv6_prefix_init|function|static void net_if_ipv6_prefix_init(struct net_if_ipv6_prefix *prefix, struct in6_addr *addr, u8_t len, u32_t lifetime)
DECL|net_if_ipv6_prefix_lookup|function|struct net_if_ipv6_prefix *net_if_ipv6_prefix_lookup(struct net_if *iface, struct in6_addr *addr, u8_t len)
DECL|net_if_ipv6_prefix_rm|function|bool net_if_ipv6_prefix_rm(struct net_if *iface, struct in6_addr *addr, u8_t len)
DECL|net_if_ipv6_prefix_set_timer|function|void net_if_ipv6_prefix_set_timer(struct net_if_ipv6_prefix *prefix, u32_t lifetime)
DECL|net_if_ipv6_prefix_unset_timer|function|void net_if_ipv6_prefix_unset_timer(struct net_if_ipv6_prefix *prefix)
DECL|net_if_ipv6_router_add|function|struct net_if_router *net_if_ipv6_router_add(struct net_if *iface, struct in6_addr *addr, u16_t lifetime)
DECL|net_if_ipv6_router_find_default|function|struct net_if_router *net_if_ipv6_router_find_default(struct net_if *iface, struct in6_addr *addr)
DECL|net_if_ipv6_router_lookup|function|struct net_if_router *net_if_ipv6_router_lookup(struct net_if *iface,struct in6_addr *addr)
DECL|net_if_ipv6_router_rm|function|bool net_if_ipv6_router_rm(struct net_if_router *router)
DECL|net_if_ipv6_router_update_lifetime|function|void net_if_ipv6_router_update_lifetime(struct net_if_router *router,u32_t lifetime)
DECL|net_if_ipv6_select_src_addr|function|const struct in6_addr *net_if_ipv6_select_src_addr(struct net_if *dst_iface, struct in6_addr *dst)
DECL|net_if_ipv6_start_dad|function|static inline void net_if_ipv6_start_dad(struct net_if *iface, struct net_if_addr *ifaddr)
DECL|net_if_ipv6_start_dad|function|static void net_if_ipv6_start_dad(struct net_if *iface, struct net_if_addr *ifaddr)
DECL|net_if_lookup_by_dev|function|struct net_if *net_if_lookup_by_dev(struct device *dev)
DECL|net_if_mcast_mon_register|function|void net_if_mcast_mon_register(struct net_if_mcast_monitor *mon, struct net_if *iface, net_if_mcast_callback_t cb)
DECL|net_if_mcast_mon_unregister|function|void net_if_mcast_mon_unregister(struct net_if_mcast_monitor *mon)
DECL|net_if_mcast_monitor|function|void net_if_mcast_monitor(struct net_if *iface, const struct in6_addr *addr, bool is_joined)
DECL|net_if_need_calc_rx_checksum|function|bool net_if_need_calc_rx_checksum(struct net_if *iface)
DECL|net_if_need_calc_tx_checksum|function|bool net_if_need_calc_tx_checksum(struct net_if *iface)
DECL|net_if_post_init|function|void net_if_post_init(void)
DECL|net_if_queue_tx|function|void net_if_queue_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|net_if_register_link_cb|function|void net_if_register_link_cb(struct net_if_link_cb *link, net_if_link_callback_t cb)
DECL|net_if_router_init|function|static inline void net_if_router_init(struct net_if_router *router, struct net_if *iface, struct in6_addr *addr, u16_t lifetime)
DECL|net_if_send_data|function|enum net_verdict net_if_send_data(struct net_if *iface, struct net_pkt *pkt)
DECL|net_if_start_dad|function|void net_if_start_dad(struct net_if *iface)
DECL|net_if_start_rs|function|void net_if_start_rs(struct net_if *iface)
DECL|net_if_tx|function|static bool net_if_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|net_if_unregister_link_cb|function|void net_if_unregister_link_cb(struct net_if_link_cb *link)
DECL|net_if_up|function|int net_if_up(struct net_if *iface)
DECL|prefix_lf_timeout|function|static inline void prefix_lf_timeout(struct k_work *work)
DECL|process_tx_packet|function|static void process_tx_packet(struct k_work *work)
DECL|routers|variable|routers
DECL|rs_timeout|function|static void rs_timeout(struct k_work *work)
