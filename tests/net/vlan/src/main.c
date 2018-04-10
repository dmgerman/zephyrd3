DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|PORT|macro|PORT
DECL|VLAN_TAG_1|macro|VLAN_TAG_1
DECL|VLAN_TAG_2|macro|VLAN_TAG_2
DECL|VLAN_TAG_3|macro|VLAN_TAG_3
DECL|VLAN_TAG_4|macro|VLAN_TAG_4
DECL|VLAN_TAG_5|macro|VLAN_TAG_5
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|add_neighbor|function|static bool add_neighbor(struct net_if *iface, struct in6_addr *addr)
DECL|api_funcs|variable|api_funcs
DECL|dst_addr|variable|dst_addr
DECL|dummy_if_count|member|int dummy_if_count;
DECL|dummy_interfaces|variable|dummy_interfaces
DECL|eth_capabilities|function|static enum ethernet_hw_caps eth_capabilities(struct device *dev)
DECL|eth_context|struct|struct eth_context {
DECL|eth_if_count|member|int eth_if_count;
DECL|eth_init|function|static int eth_init(struct device *dev)
DECL|eth_interfaces|variable|eth_interfaces
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|eth_vlan_context|variable|eth_vlan_context
DECL|eth_vlan_iface_init|function|static void eth_vlan_iface_init(struct net_if *iface)
DECL|eth_vlan_init|function|static int eth_vlan_init(struct device *dev)
DECL|expecting_tag|member|u16_t expecting_tag;
DECL|extra_eth|variable|extra_eth
DECL|generate_mac|function|static void generate_mac(u8_t *mac_addr)
DECL|idx|member|u8_t idx; /* not used for anything, just a dummy value */
DECL|iface2str|function|static const char *iface2str(struct net_if *iface)
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface|member|struct net_if *iface;
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|ll_addr|variable|ll_addr
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|mac_addr|member|u8_t mac_addr[sizeof(struct net_eth_addr)];
DECL|my_addr1|variable|my_addr1
DECL|my_addr2|variable|my_addr2
DECL|my_addr3|variable|my_addr3
DECL|net_if_test|struct|struct net_if_test {
DECL|net_iface1_data|variable|net_iface1_data
DECL|net_iface2_data|variable|net_iface2_data
DECL|net_iface_api|variable|net_iface_api
DECL|net_iface_dev_init|function|static int net_iface_dev_init(struct device *dev)
DECL|net_iface_get_mac|function|static u8_t *net_iface_get_mac(struct device *dev)
DECL|net_iface_init|function|static void net_iface_init(struct net_if *iface)
DECL|sender_iface|function|static int sender_iface(struct net_if *iface, struct net_pkt *pkt)
DECL|test_address_setup|function|static void test_address_setup(void)
DECL|test_data|variable|test_data
DECL|test_failed|variable|test_failed
DECL|test_main|function|void test_main(void)
DECL|test_started|variable|test_started
DECL|test_vlan_disable_all|function|static void test_vlan_disable_all(void)
DECL|test_vlan_disable|function|static void test_vlan_disable(void)
DECL|test_vlan_enable_all|function|static void test_vlan_enable_all(void)
DECL|test_vlan_enable|function|static void test_vlan_enable(void)
DECL|test_vlan_send_data|function|static void test_vlan_send_data(void)
DECL|test_vlan_setup|function|static void test_vlan_setup(void)
DECL|test_vlan_tci|function|static void test_vlan_tci(void)
DECL|total_if_count|member|int total_if_count;
DECL|udp_v6_ctx|variable|udp_v6_ctx
DECL|user_data|struct|struct user_data {
