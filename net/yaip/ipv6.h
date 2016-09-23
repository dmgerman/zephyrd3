DECL|NET_IPV6_DEFAULT_PREFIX_LEN|macro|NET_IPV6_DEFAULT_PREFIX_LEN
DECL|NET_IPV6_ND_HOP_LIMIT|macro|NET_IPV6_ND_HOP_LIMIT
DECL|NET_IPV6_ND_INFINITE_LIFETIME|macro|NET_IPV6_ND_INFINITE_LIFETIME
DECL|NET_MAX_RS_COUNT|macro|NET_MAX_RS_COUNT
DECL|NET_NBR_DELAY|enumerator|NET_NBR_DELAY,
DECL|NET_NBR_INCOMPLETE|enumerator|NET_NBR_INCOMPLETE,
DECL|NET_NBR_PROBE|enumerator|NET_NBR_PROBE,
DECL|NET_NBR_REACHABLE|enumerator|NET_NBR_REACHABLE,
DECL|NET_NBR_STALE|enumerator|NET_NBR_STALE,
DECL|__IPV6_H|macro|__IPV6_H
DECL|net_ipv6_init|macro|net_ipv6_init
DECL|net_ipv6_nbr_add|function|static inline struct net_nbr *net_ipv6_nbr_add(struct net_if *iface, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_nbr_state state)
DECL|net_ipv6_nbr_lookup_by_index|function|struct in6_addr *net_ipv6_nbr_lookup_by_index(struct net_if *iface, uint8_t idx)
DECL|net_ipv6_nbr_lookup|function|static inline struct net_nbr *net_ipv6_nbr_lookup(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_prepare_for_send|function|static inline struct net_buf *net_ipv6_prepare_for_send(struct net_buf *buf)
DECL|net_nbr_state|enum|enum net_nbr_state {
