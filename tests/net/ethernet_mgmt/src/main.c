DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|auto_negotiation|member|bool auto_negotiation;
DECL|delta_bandwidth|member|int delta_bandwidth;
DECL|eth_fake_api_funcs|variable|eth_fake_api_funcs
DECL|eth_fake_context|struct|struct eth_fake_context {
DECL|eth_fake_data|variable|eth_fake_data
DECL|eth_fake_get_capabilities|function|static enum ethernet_hw_caps eth_fake_get_capabilities(struct device *dev)
DECL|eth_fake_get_config|function|static int eth_fake_get_config(struct device *dev, enum ethernet_config_type type, struct ethernet_config *config)
DECL|eth_fake_get_total_bandwidth|function|static int eth_fake_get_total_bandwidth(struct eth_fake_context *ctx)
DECL|eth_fake_iface_init|function|static void eth_fake_iface_init(struct net_if *iface)
DECL|eth_fake_init|function|static int eth_fake_init(struct device *dev)
DECL|eth_fake_recalc_qav_delta_bandwidth|function|static void eth_fake_recalc_qav_delta_bandwidth(struct eth_fake_context *ctx)
DECL|eth_fake_recalc_qav_idle_slopes|function|static void eth_fake_recalc_qav_idle_slopes(struct eth_fake_context *ctx)
DECL|eth_fake_send|function|static int eth_fake_send(struct net_if *iface, struct net_pkt *pkt)
DECL|eth_fake_set_config|function|static int eth_fake_set_config(struct device *dev, enum ethernet_config_type type, const struct ethernet_config *config)
DECL|full_duplex|member|bool full_duplex;
DECL|idle_slope|member|int idle_slope;
DECL|iface|member|struct net_if *iface;
DECL|link_100bt|member|bool link_100bt;
DECL|link_10bt|member|bool link_10bt;
DECL|mac_addr_change|variable|mac_addr_change
DECL|mac_addr_init|variable|mac_addr_init
DECL|mac_address|member|u8_t mac_address[6];
DECL|priority_queues|member|} priority_queues[2];
DECL|promisc_mode|member|bool promisc_mode;
DECL|qav_enabled|member|bool qav_enabled;
DECL|test_change_auto_neg|function|static void test_change_auto_neg(void)
DECL|test_change_duplex|function|static void test_change_duplex(void)
DECL|test_change_link|function|static void test_change_link(void)
DECL|test_change_mac_when_down|function|static void test_change_mac_when_down(void)
DECL|test_change_mac_when_up|function|static void test_change_mac_when_up(void)
DECL|test_change_promisc_mode_off|function|static void test_change_promisc_mode_off(void)
DECL|test_change_promisc_mode_on|function|static void test_change_promisc_mode_on(void)
DECL|test_change_promisc_mode|function|static void test_change_promisc_mode(bool mode)
DECL|test_change_qav_params|function|static void test_change_qav_params(void)
DECL|test_change_same_duplex|function|static void test_change_same_duplex(void)
DECL|test_change_same_link|function|static void test_change_same_link(void)
DECL|test_change_to_same_auto_neg|function|static void test_change_to_same_auto_neg(void)
DECL|test_change_to_same_promisc_mode|function|static void test_change_to_same_promisc_mode(void)
DECL|test_change_unsupported_link|function|static void test_change_unsupported_link(void)
DECL|test_main|function|void test_main(void)
