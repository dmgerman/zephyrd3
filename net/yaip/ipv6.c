DECL|NET_DEBUG|macro|NET_DEBUG
DECL|NET_NBR_DELAY|enumerator|NET_NBR_DELAY,
DECL|NET_NBR_INCOMPLETE|enumerator|NET_NBR_INCOMPLETE,
DECL|NET_NBR_PROBE|enumerator|NET_NBR_PROBE,
DECL|NET_NBR_REACHABLE|enumerator|NET_NBR_REACHABLE,
DECL|NET_NBR_STALE|enumerator|NET_NBR_STALE,
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|addr|member|struct in6_addr addr;
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
DECL|handle_na_input|function|static enum net_verdict handle_na_input(struct net_buf *buf)
DECL|handle_na_neighbor|function|static inline bool handle_na_neighbor(struct net_buf *buf, struct net_icmpv6_nd_opt_hdr *hdr, uint8_t *tllao)
DECL|handle_ns_input|function|static enum net_verdict handle_ns_input(struct net_buf *buf)
DECL|handle_ns_neighbor|function|static inline void handle_ns_neighbor(struct net_buf *buf, struct net_icmpv6_nd_opt_hdr *hdr)
DECL|is_router|member|bool is_router;
DECL|link_metric|member|uint16_t link_metric;
DECL|na_input_handler|variable|na_input_handler
DECL|nbr_add|function|static struct net_nbr *nbr_add(struct net_buf *buf, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_nbr_state state)
DECL|nbr_lookup|function|static struct net_nbr *nbr_lookup(struct net_nbr_table *table, struct net_if *iface, struct in6_addr *addr)
DECL|nbr_new|function|static struct net_nbr *nbr_new(struct in6_addr *addr, enum net_nbr_state state)
DECL|net_ipv6_init|function|void net_ipv6_init(void)
DECL|net_ipv6_send_ns|function|int net_ipv6_send_ns(struct net_if *iface, struct net_buf *pending, struct in6_addr *src, struct in6_addr *dst, struct in6_addr *tgt,
DECL|net_ipv6_start_dad|function|int net_ipv6_start_dad(struct net_if *iface, struct net_if_addr *ifaddr)
DECL|net_is_override|macro|net_is_override
DECL|net_is_router|macro|net_is_router
DECL|net_is_solicited|macro|net_is_solicited
DECL|net_nbr_data|macro|net_nbr_data
DECL|net_nbr_data|struct|struct net_nbr_data {
DECL|net_nbr_state|enum|enum net_nbr_state {
DECL|net_neighbor_data_remove|function|void net_neighbor_data_remove(struct net_nbr *nbr)
DECL|net_neighbor_table_clear|function|void net_neighbor_table_clear(struct net_nbr_table *table)
DECL|ns_count|member|uint8_t ns_count;
DECL|ns_input_handler|variable|ns_input_handler
DECL|pending|member|struct net_buf *pending;
DECL|reachable|member|struct nano_delayed_work reachable;
DECL|send_ns|member|struct nano_delayed_work send_ns;
DECL|set_llao|function|static inline void set_llao(struct net_linkaddr *lladdr, uint8_t *llao, uint8_t llao_len, uint8_t type)
DECL|setup_headers|function|static void setup_headers(struct net_buf *buf, uint8_t nd6_len, uint8_t icmp_type)
DECL|state|member|enum net_nbr_state state;
