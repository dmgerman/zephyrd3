DECL|NET_ARP_HTYPE_ETH|macro|NET_ARP_HTYPE_ETH
DECL|NET_ARP_REPLY|macro|NET_ARP_REPLY
DECL|NET_ARP_REQUEST|macro|NET_ARP_REQUEST
DECL|NET_ETH_PTYPE_ARP|macro|NET_ETH_PTYPE_ARP
DECL|NET_ETH_PTYPE_IPV6|macro|NET_ETH_PTYPE_IPV6
DECL|NET_ETH_PTYPE_IP|macro|NET_ETH_PTYPE_IP
DECL|__ARP_H|macro|__ARP_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|addr|member|uint8_t addr[6];
DECL|dst_hwaddr|member|struct net_eth_addr dst_hwaddr; /* THA */
DECL|dst_ipaddr|member|struct in_addr dst_ipaddr; /* TPA */
DECL|dst|member|struct net_eth_addr dst;
DECL|eth_hdr|member|struct net_eth_hdr eth_hdr;
DECL|hwlen|member|uint8_t hwlen; /* HLEN */
DECL|hwtype|member|uint16_t hwtype; /* HTYPE */
DECL|net_arp_hdr|struct|struct net_arp_hdr {
DECL|net_eth_addr|struct|struct net_eth_addr {
DECL|net_eth_hdr|struct|struct net_eth_hdr {
DECL|opcode|member|uint16_t opcode;
DECL|protocol|member|uint16_t protocol; /* PTYPE */
DECL|protolen|member|uint8_t protolen; /* PLEN */
DECL|src_hwaddr|member|struct net_eth_addr src_hwaddr; /* SHA */
DECL|src_ipaddr|member|struct in_addr src_ipaddr; /* SPA */
DECL|src|member|struct net_eth_addr src;
DECL|type|member|uint16_t type;
