DECL|ETH_HW_RX_CHKSUM_OFFLOAD|enumerator|ETH_HW_RX_CHKSUM_OFFLOAD = BIT(1),
DECL|ETH_HW_TX_CHKSUM_OFFLOAD|enumerator|ETH_HW_TX_CHKSUM_OFFLOAD = BIT(0),
DECL|NET_ETH_HDR|macro|NET_ETH_HDR
DECL|NET_ETH_MINIMAL_FRAME_SIZE|macro|NET_ETH_MINIMAL_FRAME_SIZE
DECL|NET_ETH_PTYPE_ARP|macro|NET_ETH_PTYPE_ARP
DECL|NET_ETH_PTYPE_IPV6|macro|NET_ETH_PTYPE_IPV6
DECL|NET_ETH_PTYPE_IP|macro|NET_ETH_PTYPE_IP
DECL|__ETHERNET_H|macro|__ETHERNET_H
DECL|__packed|variable|__packed
DECL|addr|member|u8_t addr[6];
DECL|dst|member|struct net_eth_addr dst;
DECL|eth_hw_caps|enum|enum eth_hw_caps {
DECL|ethernet_api|struct|struct ethernet_api {
DECL|get_capabilities|member|enum eth_hw_caps (*get_capabilities)(struct device *dev);
DECL|iface_api|member|struct net_if_api iface_api;
DECL|net_eth_addr|struct|struct net_eth_addr {
DECL|net_eth_get_hw_capabilities|function|enum eth_hw_caps net_eth_get_hw_capabilities(struct net_if *iface)
DECL|net_eth_hdr|struct|struct net_eth_hdr {
DECL|net_eth_is_addr_broadcast|function|static inline bool net_eth_is_addr_broadcast(struct net_eth_addr *addr)
DECL|net_eth_is_addr_multicast|function|static inline bool net_eth_is_addr_multicast(struct net_eth_addr *addr)
DECL|src|member|struct net_eth_addr src;
DECL|type|member|u16_t type;
