DECL|NET_IPV6_DEFAULT_PREFIX_LEN|macro|NET_IPV6_DEFAULT_PREFIX_LEN
DECL|NET_IPV6_EXT_HDR_BITMAP_AH|macro|NET_IPV6_EXT_HDR_BITMAP_AH
DECL|NET_IPV6_EXT_HDR_BITMAP_DESTO1|macro|NET_IPV6_EXT_HDR_BITMAP_DESTO1
DECL|NET_IPV6_EXT_HDR_BITMAP_DESTO2|macro|NET_IPV6_EXT_HDR_BITMAP_DESTO2
DECL|NET_IPV6_EXT_HDR_BITMAP_ESP|macro|NET_IPV6_EXT_HDR_BITMAP_ESP
DECL|NET_IPV6_EXT_HDR_BITMAP_FRAG|macro|NET_IPV6_EXT_HDR_BITMAP_FRAG
DECL|NET_IPV6_EXT_HDR_BITMAP_HBHO|macro|NET_IPV6_EXT_HDR_BITMAP_HBHO
DECL|NET_IPV6_EXT_HDR_BITMAP_ROUTING|macro|NET_IPV6_EXT_HDR_BITMAP_ROUTING
DECL|NET_IPV6_EXT_HDR_OPT_PAD1|macro|NET_IPV6_EXT_HDR_OPT_PAD1
DECL|NET_IPV6_EXT_HDR_OPT_PADN|macro|NET_IPV6_EXT_HDR_OPT_PADN
DECL|NET_IPV6_EXT_HDR_OPT_RPL|macro|NET_IPV6_EXT_HDR_OPT_RPL
DECL|NET_IPV6_ND_HOP_LIMIT|macro|NET_IPV6_ND_HOP_LIMIT
DECL|NET_IPV6_ND_INFINITE_LIFETIME|macro|NET_IPV6_ND_INFINITE_LIFETIME
DECL|NET_MAX_RS_COUNT|macro|NET_MAX_RS_COUNT
DECL|NET_NBR_DELAY|enumerator|NET_NBR_DELAY,
DECL|NET_NBR_INCOMPLETE|enumerator|NET_NBR_INCOMPLETE,
DECL|NET_NBR_PROBE|enumerator|NET_NBR_PROBE,
DECL|NET_NBR_REACHABLE|enumerator|NET_NBR_REACHABLE,
DECL|NET_NBR_STALE|enumerator|NET_NBR_STALE,
DECL|__IPV6_H|macro|__IPV6_H
DECL|addr|member|struct in6_addr addr;
DECL|is_router|member|bool is_router;
DECL|link_metric|member|uint16_t link_metric;
DECL|net_ipv6_init|macro|net_ipv6_init
DECL|net_ipv6_nbr_add|function|static inline struct net_nbr *net_ipv6_nbr_add(struct net_if *iface, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_nbr_state state)
DECL|net_ipv6_nbr_data|function|static inline struct net_ipv6_nbr_data *net_ipv6_nbr_data(struct net_nbr *nbr)
DECL|net_ipv6_nbr_data|struct|struct net_ipv6_nbr_data {
DECL|net_ipv6_nbr_lookup_by_index|function|struct in6_addr *net_ipv6_nbr_lookup_by_index(struct net_if *iface, uint8_t idx)
DECL|net_ipv6_nbr_lookup|function|static inline struct net_nbr *net_ipv6_nbr_lookup(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_set_reachable_timer|function|static inline void net_ipv6_nbr_set_reachable_timer(struct net_if *iface, struct net_nbr *nbr)
DECL|net_ipv6_prepare_for_send|function|static inline struct net_buf *net_ipv6_prepare_for_send(struct net_buf *buf)
DECL|net_nbr_state|enum|enum net_nbr_state {
DECL|ns_count|member|uint8_t ns_count;
DECL|pending|member|struct net_buf *pending;
DECL|reachable|member|struct k_delayed_work reachable;
DECL|send_ns|member|struct k_delayed_work send_ns;
DECL|state|member|enum net_nbr_state state;
