DECL|ETHERNET_AUTO_NEGOTIATION_SET|enumerator|ETHERNET_AUTO_NEGOTIATION_SET = BIT(3),
DECL|ETHERNET_CONFIG_TYPE_AUTO_NEG|enumerator|ETHERNET_CONFIG_TYPE_AUTO_NEG,
DECL|ETHERNET_CONFIG_TYPE_DUPLEX|enumerator|ETHERNET_CONFIG_TYPE_DUPLEX,
DECL|ETHERNET_CONFIG_TYPE_LINK|enumerator|ETHERNET_CONFIG_TYPE_LINK,
DECL|ETHERNET_CONFIG_TYPE_MAC_ADDRESS|enumerator|ETHERNET_CONFIG_TYPE_MAC_ADDRESS,
DECL|ETHERNET_DUPLEX_SET|enumerator|ETHERNET_DUPLEX_SET = BIT(7),
DECL|ETHERNET_HW_RX_CHKSUM_OFFLOAD|enumerator|ETHERNET_HW_RX_CHKSUM_OFFLOAD = BIT(1),
DECL|ETHERNET_HW_TX_CHKSUM_OFFLOAD|enumerator|ETHERNET_HW_TX_CHKSUM_OFFLOAD = BIT(0),
DECL|ETHERNET_HW_VLAN|enumerator|ETHERNET_HW_VLAN = BIT(2),
DECL|ETHERNET_L2_CTX_TYPE|macro|ETHERNET_L2_CTX_TYPE
DECL|ETHERNET_LINK_1000BASE_T|enumerator|ETHERNET_LINK_1000BASE_T = BIT(6),
DECL|ETHERNET_LINK_100BASE_T|enumerator|ETHERNET_LINK_100BASE_T = BIT(5),
DECL|ETHERNET_LINK_10BASE_T|enumerator|ETHERNET_LINK_10BASE_T = BIT(4),
DECL|ETHERNET_PTP|enumerator|ETHERNET_PTP = BIT(8),
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
DECL|auto_negotiation|member|bool auto_negotiation;
DECL|carrier_mgmt|member|} carrier_mgmt;
DECL|dst|member|struct net_eth_addr dst;
DECL|dst|member|struct net_eth_addr dst;
DECL|ethernet_api|struct|struct ethernet_api {
DECL|ethernet_config_type|enum|enum ethernet_config_type {
DECL|ethernet_config|struct|struct ethernet_config {
DECL|ethernet_context|struct|struct ethernet_context {
DECL|ethernet_hw_caps|enum|enum ethernet_hw_caps {
DECL|ethernet_vlan|struct|struct ethernet_vlan {
DECL|full_duplex|member|bool full_duplex;
DECL|get_capabilities|member|enum ethernet_hw_caps (*get_capabilities)(struct device *dev);
DECL|get_ptp_clock|member|struct device *(*get_ptp_clock)(struct device *eth_dev);
DECL|iface_api|member|struct net_if_api iface_api;
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|is_init|member|bool is_init;
DECL|link_1000bt|member|bool link_1000bt;
DECL|link_100bt|member|bool link_100bt;
DECL|link_10bt|member|bool link_10bt;
DECL|l|member|} l;
DECL|mac_address|member|struct net_eth_addr mac_address;
DECL|net_eth_addr|struct|struct net_eth_addr {
DECL|net_eth_get_hw_capabilities|function|enum ethernet_hw_caps net_eth_get_hw_capabilities(struct net_if *iface)
DECL|net_eth_get_vlan_iface|function|struct net_if *net_eth_get_vlan_iface(struct net_if *iface, u16_t tag)
DECL|net_eth_get_vlan_tag|function|static inline u16_t net_eth_get_vlan_tag(struct net_if *iface)
DECL|net_eth_hdr|struct|struct net_eth_hdr {
DECL|net_eth_is_addr_broadcast|function|static inline bool net_eth_is_addr_broadcast(struct net_eth_addr *addr)
DECL|net_eth_is_addr_multicast|function|static inline bool net_eth_is_addr_multicast(struct net_eth_addr *addr)
DECL|net_eth_vlan_disable|function|static inline int net_eth_vlan_disable(struct net_if *iface, u16_t vlan_tag)
DECL|net_eth_vlan_enable|function|static inline int net_eth_vlan_enable(struct net_if *iface, u16_t vlan_tag)
DECL|net_eth_vlan_hdr|struct|struct net_eth_vlan_hdr {
DECL|set_config|member|int (*set_config)(struct device *dev,
DECL|src|member|struct net_eth_addr src;
DECL|src|member|struct net_eth_addr src;
DECL|stats|member|struct net_stats_eth *stats;
DECL|tag|member|u16_t tag;
DECL|tci|member|u16_t tci; /* tag control info */
DECL|tpid|member|u16_t tpid; /* tag protocol id */
DECL|type|member|u16_t type;
DECL|type|member|u16_t type;
DECL|vlan_enabled|member|s8_t vlan_enabled;
DECL|vlan_setup|member|int (*vlan_setup)(struct device *dev, struct net_if *iface,
DECL|vlan|member|struct ethernet_vlan vlan[NET_VLAN_MAX_COUNT];
DECL|vlan|member|} vlan;
DECL|work|member|struct k_work work;
