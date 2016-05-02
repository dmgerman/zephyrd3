DECL|NET_DEVICE_INIT|macro|NET_DEVICE_INIT
DECL|NET_IF_INIT|macro|NET_IF_INIT
DECL|NET_IF_INIT|macro|NET_IF_INIT
DECL|__NET_IF_H__|macro|__NET_IF_H__
DECL|dev|member|struct device *dev;
DECL|init|member|void (*init)(struct net_if *iface);
DECL|link_addr|member|struct net_linkaddr link_addr;
DECL|mtu|member|uint16_t mtu;
DECL|net_if_api|struct|struct net_if_api {
DECL|net_if_get_device|function|static inline struct device *net_if_get_device(struct net_if *iface)
DECL|net_if_get_link_addr|function|static inline struct net_linkaddr *net_if_get_link_addr(struct net_if *iface)
DECL|net_if_get_mtu|function|static inline uint16_t net_if_get_mtu(struct net_if *iface)
DECL|net_if_set_link_addr|function|static inline void net_if_set_link_addr(struct net_if *iface,uint8_t *addr, uint8_t len)
DECL|net_if|struct|struct net_if {
