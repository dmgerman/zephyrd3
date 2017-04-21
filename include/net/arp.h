DECL|NET_ARP_HDR|macro|NET_ARP_HDR
DECL|NET_ARP_HTYPE_ETH|macro|NET_ARP_HTYPE_ETH
DECL|NET_ARP_REPLY|macro|NET_ARP_REPLY
DECL|NET_ARP_REQUEST|macro|NET_ARP_REQUEST
DECL|__ARP_H|macro|__ARP_H
DECL|__packed|variable|__packed
DECL|dst_hwaddr|member|struct net_eth_addr dst_hwaddr; /* THA */
DECL|dst_ipaddr|member|struct in_addr dst_ipaddr; /* TPA */
DECL|hwlen|member|u8_t hwlen; /* HLEN */
DECL|hwtype|member|u16_t hwtype; /* HTYPE */
DECL|net_arp_hdr|struct|struct net_arp_hdr {
DECL|net_arp_init|macro|net_arp_init
DECL|opcode|member|u16_t opcode;
DECL|protocol|member|u16_t protocol; /* PTYPE */
DECL|protolen|member|u8_t protolen; /* PLEN */
DECL|src_hwaddr|member|struct net_eth_addr src_hwaddr; /* SHA */
DECL|src_ipaddr|member|struct in_addr src_ipaddr; /* SPA */
