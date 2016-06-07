DECL|NET_ARP_BUF|macro|NET_ARP_BUF
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|_ETH_L2_LAYER|macro|_ETH_L2_LAYER
DECL|_ETH_L2_LAYER|macro|_ETH_L2_LAYER
DECL|app_data|variable|app_data
DECL|broadcast_eth_addr|variable|broadcast_eth_addr
DECL|hwaddr|variable|hwaddr
DECL|if_get_addr|function|static inline struct in_addr *if_get_addr(struct net_if *iface)
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|mac_addr|member|uint8_t mac_addr[sizeof(struct net_eth_addr)];
DECL|mainloop|function|void mainloop(void)
DECL|multicast_eth_addr|variable|multicast_eth_addr
DECL|net_arp_context_data|variable|net_arp_context_data
DECL|net_arp_context|struct|struct net_arp_context {
DECL|net_arp_dev_init|function|int net_arp_dev_init(struct device *dev)
DECL|net_arp_get_mac|function|static uint8_t *net_arp_get_mac(struct device *dev)
DECL|net_arp_if_api|variable|net_arp_if_api
DECL|net_arp_iface_init|function|static void net_arp_iface_init(struct net_if *iface)
DECL|pending_buf|variable|pending_buf
DECL|pkt1|variable|pkt1
DECL|prepare_arp_reply|function|static inline struct net_buf *prepare_arp_reply(struct net_if *iface,struct net_buf *req, struct net_eth_addr *addr)
DECL|prepare_arp_request|function|static inline struct net_buf *prepare_arp_request(struct net_if *iface, struct net_buf *req, struct net_eth_addr *addr)
DECL|req_test|variable|req_test
DECL|send_status|variable|send_status
DECL|setup_eth_header|function|static void setup_eth_header(struct net_if *iface, struct net_buf *buf, struct net_eth_addr *hwaddr, uint16_t type)
DECL|tester_send|function|static int tester_send(struct net_if *iface, struct net_buf *buf)
