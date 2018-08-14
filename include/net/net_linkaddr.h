DECL|NET_LINK_ADDR_MAX_LENGTH|macro|NET_LINK_ADDR_MAX_LENGTH
DECL|NET_LINK_ADDR_MAX_LENGTH|macro|NET_LINK_ADDR_MAX_LENGTH
DECL|NET_LINK_BLUETOOTH|enumerator|NET_LINK_BLUETOOTH,
DECL|NET_LINK_DUMMY|enumerator|NET_LINK_DUMMY,
DECL|NET_LINK_ETHERNET|enumerator|NET_LINK_ETHERNET,
DECL|NET_LINK_IEEE802154|enumerator|NET_LINK_IEEE802154,
DECL|NET_LINK_UNKNOWN|enumerator|NET_LINK_UNKNOWN = 0,
DECL|__NET_LINKADDR_H__|macro|__NET_LINKADDR_H__
DECL|__packed|variable|__packed
DECL|addr|member|u8_t *addr;
DECL|addr|member|u8_t addr[NET_LINK_ADDR_MAX_LENGTH];
DECL|len|member|u8_t len;
DECL|len|member|u8_t len;
DECL|net_link_type|enum|enum net_link_type {
DECL|net_linkaddr_cmp|function|static inline bool net_linkaddr_cmp(struct net_linkaddr *lladdr1, struct net_linkaddr *lladdr2)
DECL|net_linkaddr_set|function|static inline int net_linkaddr_set(struct net_linkaddr_storage *lladdr_store, u8_t *new_addr, u8_t new_len)
DECL|net_linkaddr_storage|struct|struct net_linkaddr_storage {
DECL|net_linkaddr|struct|struct net_linkaddr {
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
