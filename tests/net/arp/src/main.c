DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|_ETH_L2_CTX_TYPE|macro|_ETH_L2_CTX_TYPE
DECL|_ETH_L2_CTX_TYPE|macro|_ETH_L2_CTX_TYPE
DECL|_ETH_L2_LAYER|macro|_ETH_L2_LAYER
DECL|_ETH_L2_LAYER|macro|_ETH_L2_LAYER
DECL|app_data|variable|app_data
DECL|hwaddr|variable|hwaddr
DECL|if_get_addr|function|static inline struct in_addr *if_get_addr(struct net_if *iface)
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|mac_addr|member|u8_t mac_addr[sizeof(struct net_eth_addr)];
DECL|net_arp_context_data|variable|net_arp_context_data
DECL|net_arp_context|struct|struct net_arp_context {
DECL|net_arp_dev_init|function|int net_arp_dev_init(struct device *dev)
DECL|net_arp_get_mac|function|static u8_t *net_arp_get_mac(struct device *dev)
DECL|net_arp_if_api|variable|net_arp_if_api
DECL|net_arp_if_api|variable|net_arp_if_api
DECL|net_arp_iface_init|function|static void net_arp_iface_init(struct net_if *iface)
DECL|pending_pkt|variable|pending_pkt
DECL|prepare_arp_reply|function|static inline struct net_pkt *prepare_arp_reply(struct net_if *iface,struct net_pkt *req, struct net_eth_addr *addr)
DECL|prepare_arp_request|function|static inline struct net_pkt *prepare_arp_request(struct net_if *iface, struct net_pkt *req, struct net_eth_addr *addr)
DECL|req_test|variable|req_test
DECL|send_status|variable|send_status
DECL|setup_eth_header|function|static void setup_eth_header(struct net_if *iface, struct net_pkt *pkt, struct net_eth_addr *hwaddr, u16_t type)
DECL|test_arp|function|void test_arp(void)
DECL|test_main|function|void test_main(void)
DECL|tester_send|function|static int tester_send(struct net_if *iface, struct net_pkt *pkt)
