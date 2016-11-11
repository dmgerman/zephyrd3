DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|broadcast_eth_addr|variable|broadcast_eth_addr
DECL|check_if_dst_is_broadcast_or_mcast|function|static inline bool check_if_dst_is_broadcast_or_mcast(struct net_if *iface, struct net_buf *buf)
DECL|ethernet_recv|function|static enum net_verdict ethernet_recv(struct net_if *iface, struct net_buf *buf)
DECL|ethernet_reserve|function|static inline uint16_t ethernet_reserve(struct net_if *iface, void *unused)
DECL|ethernet_send|function|static enum net_verdict ethernet_send(struct net_if *iface, struct net_buf *buf)
DECL|multicast_eth_addr|variable|multicast_eth_addr
DECL|net_eth_broadcast_addr|function|const struct net_eth_addr *net_eth_broadcast_addr(void)
DECL|print_ll_addrs|macro|print_ll_addrs
DECL|print_ll_addrs|macro|print_ll_addrs
