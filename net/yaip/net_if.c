DECL|CONFIG_NET_TX_STACK_SIZE|macro|CONFIG_NET_TX_STACK_SIZE
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|init_tx_queue|function|static inline void init_tx_queue(struct net_if *iface)
DECL|net_if_get_by_link_addr|function|struct net_if *net_if_get_by_link_addr(struct net_linkaddr *ll_addr)
DECL|net_if_init|function|int net_if_init(void)
DECL|net_if_ipv4_addr_add|function|struct net_if_addr *net_if_ipv4_addr_add(struct net_if *iface, struct in_addr *addr, enum net_addr_type addr_type, uint32_t vlifetime)
DECL|net_if_ipv4_addr_lookup|function|struct net_if_addr *net_if_ipv4_addr_lookup(struct in_addr *addr)
DECL|net_if_ipv6_addr_add|function|struct net_if_addr *net_if_ipv6_addr_add(struct net_if *iface, struct in6_addr *addr, enum net_addr_type addr_type, uint32_t vlifetime)
DECL|net_if_ipv6_addr_lookup|function|struct net_if_addr *net_if_ipv6_addr_lookup(struct in6_addr *addr)
DECL|net_if_ipv6_maddr_add|function|struct net_if_mcast_addr *net_if_ipv6_maddr_add(struct net_if *iface,struct in6_addr *addr)
DECL|net_if_ipv6_maddr_lookup|function|struct net_if_mcast_addr *net_if_ipv6_maddr_lookup(struct in6_addr *maddr)
DECL|net_if_tx_fiber|function|static void net_if_tx_fiber(struct net_if *iface)
DECL|tx_fiber_stack|variable|tx_fiber_stack
