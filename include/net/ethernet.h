DECL|ETHERNET_L2_CTX_TYPE|macro|ETHERNET_L2_CTX_TYPE
DECL|ETH_HW_RX_CHKSUM_OFFLOAD|enumerator|ETH_HW_RX_CHKSUM_OFFLOAD = BIT(1),
DECL|ETH_HW_TX_CHKSUM_OFFLOAD|enumerator|ETH_HW_TX_CHKSUM_OFFLOAD = BIT(0),
DECL|ETH_HW_VLAN|enumerator|ETH_HW_VLAN = BIT(2),
DECL|ETH_NET_DEVICE_INIT|macro|ETH_NET_DEVICE_INIT
DECL|ETH_NET_DEVICE_INIT|macro|ETH_NET_DEVICE_INIT
DECL|NET_ETH_HDR|macro|NET_ETH_HDR
DECL|NET_ETH_MINIMAL_FRAME_SIZE|macro|NET_ETH_MINIMAL_FRAME_SIZE
DECL|NET_ETH_PTYPE_ARP|macro|NET_ETH_PTYPE_ARP
DECL|NET_ETH_PTYPE_IPV6|macro|NET_ETH_PTYPE_IPV6
DECL|NET_ETH_PTYPE_IP|macro|NET_ETH_PTYPE_IP
DECL|NET_ETH_PTYPE_VLAN|macro|NET_ETH_PTYPE_VLAN
DECL|NET_VLAN_MAX_COUNT|macro|NET_VLAN_MAX_COUNT
DECL|NET_VLAN_MAX_COUNT|macro|NET_VLAN_MAX_COUNT
DECL|__ETHERNET_H|macro|__ETHERNET_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|addr|member|u8_t addr[6];
DECL|dst|member|struct net_eth_addr dst;
DECL|dst|member|struct net_eth_addr dst;
DECL|eth_hw_caps|enum|enum eth_hw_caps {
DECL|ethernet_api|struct|struct ethernet_api {
DECL|ethernet_context|struct|struct ethernet_context {
DECL|ethernet_vlan|struct|struct ethernet_vlan {
DECL|get_capabilities|member|enum eth_hw_caps (*get_capabilities)(struct device *dev);
DECL|iface_api|member|struct net_if_api iface_api;
DECL|iface|member|struct net_if *iface;
DECL|is_init|member|bool is_init;
DECL|net_eth_addr|struct|struct net_eth_addr {
DECL|net_eth_get_hw_capabilities|function|enum eth_hw_caps net_eth_get_hw_capabilities(struct net_if *iface)
DECL|net_eth_get_vlan_iface|function|struct net_if *net_eth_get_vlan_iface(struct net_if *iface, u16_t tag)
DECL|net_eth_get_vlan_tag|function|static inline u16_t net_eth_get_vlan_tag(struct net_if *iface)
DECL|net_eth_hdr|struct|struct net_eth_hdr {
DECL|net_eth_is_addr_broadcast|function|static inline bool net_eth_is_addr_broadcast(struct net_eth_addr *addr)
DECL|net_eth_is_addr_multicast|function|static inline bool net_eth_is_addr_multicast(struct net_eth_addr *addr)
DECL|net_eth_vlan_disable|function|static inline int net_eth_vlan_disable(struct net_if *iface, u16_t vlan_tag)
DECL|net_eth_vlan_enable|function|static inline int net_eth_vlan_enable(struct net_if *iface, u16_t vlan_tag)
DECL|net_eth_vlan_hdr|struct|struct net_eth_vlan_hdr {
DECL|src|member|struct net_eth_addr src;
DECL|src|member|struct net_eth_addr src;
DECL|tag|member|u16_t tag;
DECL|tci|member|u16_t tci; /* tag control info */
DECL|tpid|member|u16_t tpid; /* tag protocol id */
DECL|type|member|u16_t type;
DECL|type|member|u16_t type;
DECL|vlan_enabled|member|s8_t vlan_enabled;
DECL|vlan_setup|member|int (*vlan_setup)(struct net_if *iface, u16_t tag, bool enable);
DECL|vlan|member|struct ethernet_vlan vlan[NET_VLAN_MAX_COUNT];
DECL|vlan|member|} vlan;
