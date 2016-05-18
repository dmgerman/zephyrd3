DECL|NET_DEVICE_INIT|macro|NET_DEVICE_INIT
DECL|NET_IF_INIT|macro|NET_IF_INIT
DECL|NET_IF_MAX_IPV4_ADDR|macro|NET_IF_MAX_IPV4_ADDR
DECL|NET_IF_MAX_IPV4_MADDR|macro|NET_IF_MAX_IPV4_MADDR
DECL|NET_IF_MAX_IPV6_ADDR|macro|NET_IF_MAX_IPV6_ADDR
DECL|NET_IF_MAX_IPV6_MADDR|macro|NET_IF_MAX_IPV6_MADDR
DECL|NET_IF_MAX_IPV6_PREFIX|macro|NET_IF_MAX_IPV6_PREFIX
DECL|__NET_IF_H__|macro|__NET_IF_H__
DECL|addr_state|member|enum net_addr_state addr_state;
DECL|addr_type|member|enum net_addr_type addr_type;
DECL|address|member|struct net_addr address;
DECL|address|member|struct net_addr address;
DECL|dad_count|member|uint8_t dad_count;
DECL|dad_timer|member|struct nano_timer dad_timer;
DECL|dev|member|struct device *dev;
DECL|hop_limit|member|uint8_t hop_limit;
DECL|init|member|void (*init)(struct net_if *iface);
DECL|ipv4|member|} ipv4;
DECL|ipv6|member|} ipv6;
DECL|is_infinite|member|bool is_infinite;
DECL|is_infinite|member|bool is_infinite;
DECL|is_used|member|bool is_used;
DECL|is_used|member|bool is_used;
DECL|is_used|member|bool is_used;
DECL|len|member|uint8_t len;
DECL|lifetime|member|struct nano_timer lifetime;
DECL|lifetime|member|struct nano_timer lifetime;
DECL|link_addr|member|struct net_linkaddr link_addr;
DECL|mcast|member|struct net_if_mcast_addr mcast[NET_IF_MAX_IPV4_MADDR];
DECL|mcast|member|struct net_if_mcast_addr mcast[NET_IF_MAX_IPV6_MADDR];
DECL|mtu|member|uint16_t mtu;
DECL|net_if_addr|struct|struct net_if_addr {
DECL|net_if_api|struct|struct net_if_api {
DECL|net_if_get_device|function|static inline struct device *net_if_get_device(struct net_if *iface)
DECL|net_if_get_link_addr|function|static inline struct net_linkaddr *net_if_get_link_addr(struct net_if *iface)
DECL|net_if_get_mtu|function|static inline uint16_t net_if_get_mtu(struct net_if *iface)
DECL|net_if_ipv6_get_hop_limit|function|static inline uint8_t net_if_ipv6_get_hop_limit(struct net_if *iface)
DECL|net_if_ipv6_prefix|struct|struct net_if_ipv6_prefix {
DECL|net_if_mcast_addr|struct|struct net_if_mcast_addr {
DECL|net_if_set_link_addr|function|static inline void net_if_set_link_addr(struct net_if *iface,uint8_t *addr, uint8_t len)
DECL|net_if|struct|struct net_if {
DECL|prefix|member|struct in6_addr prefix;
DECL|prefix|member|struct net_if_ipv6_prefix prefix[NET_IF_MAX_IPV6_PREFIX];
DECL|send|member|int (*send)(struct net_if *iface, struct net_buf *buf);
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|unicast|member|struct net_if_addr unicast[NET_IF_MAX_IPV4_ADDR];
DECL|unicast|member|struct net_if_addr unicast[NET_IF_MAX_IPV6_ADDR];
