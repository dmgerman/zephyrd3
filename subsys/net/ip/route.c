DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_ROUTE_EXTRA_DATA_SIZE|macro|NET_ROUTE_EXTRA_DATA_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|get_nbr|function|static inline struct net_nbr *get_nbr(int idx)
DECL|get_nexthop_nbr|function|static inline struct net_nbr *get_nexthop_nbr(struct net_nbr *start, int idx)
DECL|get_nexthop_route|function|static struct net_nbr *get_nexthop_route(void)
DECL|nbr_free|function|static inline void nbr_free(struct net_nbr *nbr)
DECL|nbr_new|function|static struct net_nbr *nbr_new(struct net_if *iface, struct in6_addr *addr, uint8_t prefix_len)
DECL|nbr_nexthop_get|function|static struct net_nbr *nbr_nexthop_get(struct net_if *iface, struct in6_addr *addr)
DECL|nbr_nexthop_put|function|static int nbr_nexthop_put(struct net_nbr *nbr)
DECL|net_nexthop_data|function|static inline struct net_route_nexthop *net_nexthop_data(struct net_nbr *nbr)
DECL|net_route_add|function|struct net_route_entry *net_route_add(struct net_if *iface, struct in6_addr *addr, uint8_t prefix_len, struct in6_addr *nexthop)
DECL|net_route_data|function|static inline struct net_route_entry *net_route_data(struct net_nbr *nbr)
DECL|net_route_del_by_nexthop_data|function|int net_route_del_by_nexthop_data(struct net_if *iface, struct in6_addr *nexthop, void *data)
DECL|net_route_del_by_nexthop|function|int net_route_del_by_nexthop(struct net_if *iface, struct in6_addr *nexthop)
DECL|net_route_del|function|int net_route_del(struct net_route_entry *route)
DECL|net_route_entries_table_clear|function|static void net_route_entries_table_clear(struct net_nbr_table *table)
DECL|net_route_entry_remove|function|static void net_route_entry_remove(struct net_nbr *nbr)
DECL|net_route_foreach|function|int net_route_foreach(net_route_cb_t cb, void *user_data)
DECL|net_route_get_info|function|bool net_route_get_info(struct net_if *iface,struct in6_addr *dst, struct net_route_entry **route, struct in6_addr **nexthop)
DECL|net_route_get_nbr|function|struct net_nbr *net_route_get_nbr(struct net_route_entry *route)
DECL|net_route_get_nexthop|function|struct in6_addr *net_route_get_nexthop(struct net_route_entry *route)
DECL|net_route_info|macro|net_route_info
DECL|net_route_info|macro|net_route_info
DECL|net_route_init|function|void net_route_init(void)
DECL|net_route_lookup|function|struct net_route_entry *net_route_lookup(struct net_if *iface, struct in6_addr *dst)
DECL|net_route_mcast_add|function|struct net_route_entry_mcast *net_route_mcast_add(struct net_if *iface, struct in6_addr *group)
DECL|net_route_mcast_del|function|bool net_route_mcast_del(struct net_route_entry_mcast *route)
DECL|net_route_mcast_foreach|function|int net_route_mcast_foreach(net_route_mcast_cb_t cb, struct in6_addr *skip, void *user_data)
DECL|net_route_mcast_lookup|function|net_route_mcast_lookup(struct in6_addr *group)
DECL|net_route_nexthop_remove|function|static void net_route_nexthop_remove(struct net_nbr *nbr)
DECL|net_route_packet|function|int net_route_packet(struct net_buf *buf, struct in6_addr *nexthop)
DECL|net_routes_print|function|void net_routes_print(void)
DECL|net_routes_print|macro|net_routes_print
DECL|route_mcast_entries|variable|route_mcast_entries
DECL|routes|variable|routes
DECL|update_route_access|function|static inline void update_route_access(struct net_route_entry *route)
