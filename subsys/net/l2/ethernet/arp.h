DECL|NET_ARP_HDR|macro|NET_ARP_HDR
DECL|NET_ARP_HTYPE_ETH|macro|NET_ARP_HTYPE_ETH
DECL|NET_ARP_REPLY|macro|NET_ARP_REPLY
DECL|NET_ARP_REQUEST|macro|NET_ARP_REQUEST
DECL|__ARP_H|macro|__ARP_H
DECL|__packed|variable|__packed
DECL|arp_entry|struct|struct arp_entry {
DECL|dst_hwaddr|member|struct net_eth_addr dst_hwaddr; /* THA */
DECL|dst_ipaddr|member|struct in_addr dst_ipaddr; /* TPA */
DECL|eth|member|struct net_eth_addr eth;
DECL|hwlen|member|u8_t hwlen; /* HLEN */
DECL|hwtype|member|u16_t hwtype; /* HTYPE */
DECL|iface|member|struct net_if *iface;
DECL|ip|member|struct in_addr ip;
DECL|net_arp_cb_t|typedef|typedef void (*net_arp_cb_t)(struct arp_entry *entry,
DECL|net_arp_clear_cache|macro|net_arp_clear_cache
DECL|net_arp_hdr|struct|struct net_arp_hdr {
DECL|net_arp_init|macro|net_arp_init
DECL|node|member|sys_snode_t node;
DECL|opcode|member|u16_t opcode;
DECL|pending|member|struct net_pkt *pending;
DECL|protocol|member|u16_t protocol; /* PTYPE */
DECL|protolen|member|u8_t protolen; /* PLEN */
DECL|req_start|member|s64_t req_start;
DECL|src_hwaddr|member|struct net_eth_addr src_hwaddr; /* SHA */
DECL|src_ipaddr|member|struct in_addr src_ipaddr; /* SPA */
