DECL|CONFIG_NET_TX_STACK_SIZE|macro|CONFIG_NET_TX_STACK_SIZE
DECL|NET_DEVICE_INIT|macro|NET_DEVICE_INIT
DECL|NET_IF_GET_NAME|macro|NET_IF_GET_NAME
DECL|NET_IF_GET|macro|NET_IF_GET
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
DECL|address|member|struct net_addr address;
DECL|dad_count|member|uint8_t dad_count;
DECL|dad_count|member|uint8_t dad_count;
DECL|dad_timer|member|struct nano_delayed_work dad_timer;
DECL|dev|member|struct device *dev;
DECL|gw|member|struct in_addr gw;
DECL|hop_limit|member|uint8_t hop_limit;
DECL|init|member|void (*init)(struct net_if *iface);
DECL|ipv4|member|} ipv4;
DECL|ipv6|member|} ipv6;
DECL|is_default|member|bool is_default;
DECL|is_infinite|member|bool is_infinite;
DECL|is_infinite|member|bool is_infinite;
DECL|is_infinite|member|bool is_infinite;
DECL|is_used|member|bool is_used;
DECL|is_used|member|bool is_used;
DECL|is_used|member|bool is_used;
DECL|l2|member|const struct net_l2 const *l2;
DECL|len|member|uint8_t len;
DECL|lifetime|member|struct nano_timer lifetime;
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
DECL|net_if_get_ll_reserve|function|static inline uint16_t net_if_get_ll_reserve(struct net_if *iface)
DECL|net_if_get_mtu|function|static inline uint16_t net_if_get_mtu(struct net_if *iface)
DECL|net_if_ipv6_addr_lookup_by_iface|function|struct net_if_addr *net_if_ipv6_addr_lookup_by_iface(struct net_if *iface, struct in6_addr *addr)
DECL|net_if_ipv6_get_hop_limit|function|static inline uint8_t net_if_ipv6_get_hop_limit(struct net_if *iface)
DECL|net_if_ipv6_prefix|struct|struct net_if_ipv6_prefix {
DECL|net_if_mcast_addr|struct|struct net_if_mcast_addr {
DECL|net_if_queue_tx|function|static inline void net_if_queue_tx(struct net_if *iface, struct net_buf *buf)
DECL|net_if_recv_data|function|static inline enum net_verdict net_if_recv_data(struct net_if *iface,struct net_buf *buf)
DECL|net_if_router|struct|struct net_if_router {
DECL|net_if_send_data|function|static inline enum net_verdict net_if_send_data(struct net_if *iface,struct net_buf *buf)
DECL|net_if_set_gw|function|static inline void net_if_set_gw(struct net_if *iface, struct in_addr *gw)
DECL|net_if_set_link_addr|function|static inline void net_if_set_link_addr(struct net_if *iface,uint8_t *addr, uint8_t len)
DECL|net_if_set_netmask|function|static inline void net_if_set_netmask(struct net_if *iface, struct in_addr *netmask)
DECL|net_if_start_dad|macro|net_if_start_dad
DECL|net_if|struct|struct net_if {
DECL|netmask|member|struct in_addr netmask;
DECL|prefix|member|struct in6_addr prefix;
DECL|prefix|member|struct net_if_ipv6_prefix prefix[NET_IF_MAX_IPV6_PREFIX];
DECL|rs_count|member|uint8_t rs_count;
DECL|rs_timer|member|struct nano_delayed_work rs_timer;
DECL|send|member|int (*send)(struct net_if *iface, struct net_buf *buf);
DECL|tx_fiber_stack|member|char tx_fiber_stack[CONFIG_NET_TX_STACK_SIZE];
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|unicast|member|struct net_if_addr unicast[NET_IF_MAX_IPV4_ADDR];
DECL|unicast|member|struct net_if_addr unicast[NET_IF_MAX_IPV6_ADDR];
