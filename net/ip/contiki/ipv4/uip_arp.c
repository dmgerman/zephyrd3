DECL|ARP_HWTYPE_ETH|macro|ARP_HWTYPE_ETH
DECL|ARP_REPLY|macro|ARP_REPLY
DECL|ARP_REQUEST|macro|ARP_REQUEST
DECL|BUF|macro|BUF
DECL|DEBUG|macro|DEBUG
DECL|IPBUF|macro|IPBUF
DECL|PACK_ALIAS_STRUCT|variable|PACK_ALIAS_STRUCT
DECL|PACK_ALIAS_STRUCT|variable|PACK_ALIAS_STRUCT
DECL|PRINTF|macro|PRINTF
DECL|PRINTF|macro|PRINTF
DECL|arp_entry|struct|struct arp_entry {
DECL|arp_hdr|struct|struct arp_hdr {
DECL|arp_table|variable|arp_table
DECL|arptime|variable|arptime
DECL|broadcast_ethaddr|variable|broadcast_ethaddr
DECL|c|variable|c
DECL|destipaddr|member|uip_ipaddr_t srcipaddr, destipaddr;
DECL|dhwaddr|member|struct uip_eth_addr dhwaddr;
DECL|dipaddr|member|uip_ipaddr_t dipaddr;
DECL|ethaddr|member|struct uip_eth_addr ethaddr;
DECL|ethhdr|member|struct uip_eth_hdr ethhdr;
DECL|ethhdr|member|struct uip_eth_hdr ethhdr;
DECL|ethip_hdr|struct|struct ethip_hdr {
DECL|hwlen|member|uint8_t hwlen;
DECL|hwtype|member|uint16_t hwtype;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|variable|ipaddr
DECL|ipchksum|member|uint16_t ipchksum;
DECL|ipid|member|ipid[2],
DECL|ipoffset|member|ipoffset[2],
DECL|i|variable|i
DECL|len|member|len[2],
DECL|opcode|member|uint16_t opcode;
DECL|protocol|member|uint16_t protocol;
DECL|protolen|member|uint8_t protolen;
DECL|proto|member|proto;
DECL|shwaddr|member|struct uip_eth_addr shwaddr;
DECL|sipaddr|member|uip_ipaddr_t sipaddr;
DECL|srcipaddr|member|uip_ipaddr_t srcipaddr, destipaddr;
DECL|time|member|uint8_t time;
DECL|tmpage|variable|tmpage
DECL|tos|member|tos,
DECL|ttl|member|ttl,
DECL|uip_arp_arpin|function|uip_arp_arpin(struct net_buf *buf)
DECL|uip_arp_init|function|uip_arp_init(void)
DECL|uip_arp_out|function|uip_arp_out(struct net_buf *buf)
DECL|uip_arp_timer|function|uip_arp_timer(void)
DECL|uip_arp_update|function|uip_arp_update(uip_ipaddr_t *ipaddr, struct uip_eth_addr *ethaddr)
DECL|vhl|member|uint8_t vhl,
