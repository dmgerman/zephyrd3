DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|broadcast_eth_addr|variable|broadcast_eth_addr
DECL|check_if_dst_is_broadcast_or_mcast|function|static inline bool check_if_dst_is_broadcast_or_mcast(struct net_if *iface, struct net_pkt *pkt)
DECL|ethernet_enable|function|static inline int ethernet_enable(struct net_if *iface, bool state)
DECL|ethernet_recv|function|static enum net_verdict ethernet_recv(struct net_if *iface, struct net_pkt *pkt)
DECL|ethernet_reserve|function|static inline u16_t ethernet_reserve(struct net_if *iface, void *unused)
DECL|ethernet_send|function|static enum net_verdict ethernet_send(struct net_if *iface, struct net_pkt *pkt)
DECL|ethernet_update_length|function|static inline void ethernet_update_length(struct net_if *iface, struct net_pkt *pkt)
DECL|multicast_eth_addr|variable|multicast_eth_addr
DECL|net_eth_broadcast_addr|function|const struct net_eth_addr *net_eth_broadcast_addr(void)
DECL|net_eth_ipv6_mcast_to_mac_addr|function|void net_eth_ipv6_mcast_to_mac_addr(const struct in6_addr *ipv6_addr, struct net_eth_addr *mac_addr)
DECL|print_ll_addrs|macro|print_ll_addrs
DECL|print_ll_addrs|macro|print_ll_addrs
