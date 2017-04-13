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
DECL|NET_IPV6_FRAGMENTS_MAX_BUF|macro|NET_IPV6_FRAGMENTS_MAX_BUF
DECL|NET_IPV6_MLDv2_ALLOW_NEW_SOURCES|macro|NET_IPV6_MLDv2_ALLOW_NEW_SOURCES
DECL|NET_IPV6_MLDv2_BLOCK_OLD_SOURCES|macro|NET_IPV6_MLDv2_BLOCK_OLD_SOURCES
DECL|NET_IPV6_MLDv2_CHANGE_TO_EXCLUDE_MODE|macro|NET_IPV6_MLDv2_CHANGE_TO_EXCLUDE_MODE
DECL|NET_IPV6_MLDv2_CHANGE_TO_INCLUDE_MODE|macro|NET_IPV6_MLDv2_CHANGE_TO_INCLUDE_MODE
DECL|NET_IPV6_MLDv2_MODE_IS_EXCLUDE|macro|NET_IPV6_MLDv2_MODE_IS_EXCLUDE
DECL|NET_IPV6_MLDv2_MODE_IS_INCLUDE|macro|NET_IPV6_MLDv2_MODE_IS_INCLUDE
DECL|NET_IPV6_NBR_STATE_DELAY|enumerator|NET_IPV6_NBR_STATE_DELAY,
DECL|NET_IPV6_NBR_STATE_INCOMPLETE|enumerator|NET_IPV6_NBR_STATE_INCOMPLETE,
DECL|NET_IPV6_NBR_STATE_PROBE|enumerator|NET_IPV6_NBR_STATE_PROBE,
DECL|NET_IPV6_NBR_STATE_REACHABLE|enumerator|NET_IPV6_NBR_STATE_REACHABLE,
DECL|NET_IPV6_NBR_STATE_STALE|enumerator|NET_IPV6_NBR_STATE_STALE,
DECL|NET_IPV6_ND_HOP_LIMIT|macro|NET_IPV6_ND_HOP_LIMIT
DECL|NET_IPV6_ND_INFINITE_LIFETIME|macro|NET_IPV6_ND_INFINITE_LIFETIME
DECL|NET_MAX_RS_COUNT|macro|NET_MAX_RS_COUNT
DECL|__IPV6_H|macro|__IPV6_H
DECL|addr|member|struct in6_addr addr;
DECL|buf|member|struct net_buf *buf[NET_IPV6_FRAGMENTS_MAX_BUF];
DECL|dst|member|struct in6_addr dst;
DECL|id|member|uint32_t id;
DECL|is_router|member|bool is_router;
DECL|link_metric|member|uint16_t link_metric;
DECL|net_ipv6_frag_cb_t|typedef|typedef void (*net_ipv6_frag_cb_t)(struct net_ipv6_reassembly *reass,
DECL|net_ipv6_init|macro|net_ipv6_init
DECL|net_ipv6_mld_join|macro|net_ipv6_mld_join
DECL|net_ipv6_mld_leave|macro|net_ipv6_mld_leave
DECL|net_ipv6_nbr_add|function|static inline struct net_nbr *net_ipv6_nbr_add(struct net_if *iface, struct in6_addr *addr, struct net_linkaddr *lladdr, bool is_router, enum net_ipv6_nbr_state state)
DECL|net_ipv6_nbr_data|function|static inline struct net_ipv6_nbr_data *net_ipv6_nbr_data(struct net_nbr *nbr)
DECL|net_ipv6_nbr_data|struct|struct net_ipv6_nbr_data {
DECL|net_ipv6_nbr_foreach|function|static inline void net_ipv6_nbr_foreach(net_nbr_cb_t cb, void *user_data)
DECL|net_ipv6_nbr_lookup_by_index|function|struct in6_addr *net_ipv6_nbr_lookup_by_index(struct net_if *iface, uint8_t idx)
DECL|net_ipv6_nbr_lookup|function|static inline struct net_nbr *net_ipv6_nbr_lookup(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_rm|function|static inline bool net_ipv6_nbr_rm(struct net_if *iface, struct in6_addr *addr)
DECL|net_ipv6_nbr_set_reachable_timer|function|static inline void net_ipv6_nbr_set_reachable_timer(struct net_if *iface, struct net_nbr *nbr)
DECL|net_ipv6_nbr_state|enum|enum net_ipv6_nbr_state {
DECL|net_ipv6_prepare_for_send|function|static inline struct net_buf *net_ipv6_prepare_for_send(struct net_buf *buf)
DECL|net_ipv6_reassembly|struct|struct net_ipv6_reassembly {
DECL|net_nbr_cb_t|typedef|typedef void (*net_nbr_cb_t)(struct net_nbr *nbr, void *user_data);
DECL|ns_count|member|uint8_t ns_count;
DECL|pending|member|struct net_buf *pending;
DECL|reachable|member|struct k_delayed_work reachable;
DECL|send_ns|member|struct k_delayed_work send_ns;
DECL|src|member|struct in6_addr src;
DECL|state|member|enum net_ipv6_nbr_state state;
DECL|timer|member|struct k_delayed_work timer;
