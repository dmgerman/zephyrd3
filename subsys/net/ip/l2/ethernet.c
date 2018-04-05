DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|broadcast_eth_addr|variable|broadcast_eth_addr
DECL|check_if_dst_is_broadcast_or_mcast|function|static inline bool check_if_dst_is_broadcast_or_mcast(struct net_if *iface, struct net_pkt *pkt)
DECL|disable_vlan_iface|function|static bool disable_vlan_iface(struct ethernet_context *ctx, struct net_if *iface)
DECL|enable_vlan_iface|function|static bool enable_vlan_iface(struct ethernet_context *ctx, struct net_if *iface)
DECL|ethernet_enable|function|static inline int ethernet_enable(struct net_if *iface, bool state)
DECL|ethernet_init|function|void ethernet_init(struct net_if *iface)
DECL|ethernet_recv|function|static enum net_verdict ethernet_recv(struct net_if *iface, struct net_pkt *pkt)
DECL|ethernet_reserve|function|static inline u16_t ethernet_reserve(struct net_if *iface, void *unused)
DECL|ethernet_send|function|static enum net_verdict ethernet_send(struct net_if *iface, struct net_pkt *pkt)
DECL|ethernet_update_length|function|static inline void ethernet_update_length(struct net_if *iface, struct net_pkt *pkt)
DECL|get_vlan|function|static struct ethernet_vlan *get_vlan(struct ethernet_context *ctx, struct net_if *iface, u16_t vlan_tag)
DECL|is_vlan_enabled_for_iface|function|static bool is_vlan_enabled_for_iface(struct ethernet_context *ctx, struct net_if *iface)
DECL|multicast_eth_addr|variable|multicast_eth_addr
DECL|net_eth_broadcast_addr|function|const struct net_eth_addr *net_eth_broadcast_addr(void)
DECL|net_eth_fill_header|function|struct net_eth_hdr *net_eth_fill_header(struct ethernet_context *ctx,struct net_pkt *pkt, struct net_buf *frag, u32_t ptype, u8_t *src,
DECL|net_eth_get_vlan_iface|function|struct net_if *net_eth_get_vlan_iface(struct net_if *iface, u16_t tag)
DECL|net_eth_get_vlan_tag|function|u16_t net_eth_get_vlan_tag(struct net_if *iface)
DECL|net_eth_ipv6_mcast_to_mac_addr|function|void net_eth_ipv6_mcast_to_mac_addr(const struct in6_addr *ipv6_addr, struct net_eth_addr *mac_addr)
DECL|net_eth_is_vlan_enabled|function|bool net_eth_is_vlan_enabled(struct ethernet_context *ctx, struct net_if *iface)
DECL|net_eth_vlan_disable|function|int net_eth_vlan_disable(struct net_if *iface, u16_t tag)
DECL|net_eth_vlan_enable|function|int net_eth_vlan_enable(struct net_if *iface, u16_t tag)
DECL|print_ll_addrs|macro|print_ll_addrs
DECL|print_ll_addrs|macro|print_ll_addrs
DECL|print_vlan_ll_addrs|macro|print_vlan_ll_addrs
DECL|print_vlan_ll_addrs|macro|print_vlan_ll_addrs
DECL|set_vlan_tag|function|static enum net_verdict set_vlan_tag(struct ethernet_context *ctx, struct net_if *iface, struct net_pkt *pkt)
