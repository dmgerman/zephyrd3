DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_NUM_INTERFACES|macro|MAX_NUM_INTERFACES
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|address_setup|function|static void address_setup(void)
DECL|api_funcs|variable|api_funcs
DECL|api|variable|api
DECL|check_interfaces|function|static void check_interfaces(void)
DECL|eth_capabilities|function|static enum ethernet_hw_caps eth_capabilities(struct device *dev)
DECL|eth_context_1|variable|eth_context_1
DECL|eth_context_2|variable|eth_context_2
DECL|eth_context_3|variable|eth_context_3
DECL|eth_context|member|struct eth_context *eth_context;
DECL|eth_context|struct|struct eth_context {
DECL|eth_get_ptp_clock|function|static struct device *eth_get_ptp_clock(struct device *dev)
DECL|eth_if_count|member|int eth_if_count;
DECL|eth_iface_init|function|static void eth_iface_init(struct net_if *iface)
DECL|eth_init|function|static int eth_init(struct device *dev)
DECL|eth_interfaces|variable|eth_interfaces
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|generate_mac|function|static void generate_mac(u8_t *mac_addr)
DECL|iface2str|function|static const char *iface2str(struct net_if *iface)
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface|member|struct net_if *iface;
DECL|ll_addr|variable|ll_addr
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|my_addr1|variable|my_addr1
DECL|my_addr2|variable|my_addr2
DECL|my_addr3|variable|my_addr3
DECL|my_ptp_clock_adjust|function|static int my_ptp_clock_adjust(struct device *dev, int increment)
DECL|my_ptp_clock_get|function|static int my_ptp_clock_get(struct device *dev, struct net_ptp_time *tm)
DECL|my_ptp_clock_rate_adjust|function|static int my_ptp_clock_rate_adjust(struct device *dev, float ratio)
DECL|my_ptp_clock_set|function|static int my_ptp_clock_set(struct device *dev, struct net_ptp_time *tm)
DECL|non_ptp_interface|variable|non_ptp_interface
DECL|ptp_clock|member|struct device *ptp_clock;
DECL|ptp_context|struct|struct ptp_context {
DECL|ptp_interface|variable|ptp_interface
DECL|ptp_test_1_context|variable|ptp_test_1_context
DECL|ptp_test_1_init|function|static int ptp_test_1_init(struct device *port)
DECL|ptp_test_2_context|variable|ptp_test_2_context
DECL|ptp_test_2_init|function|static int ptp_test_2_init(struct device *port)
DECL|test_failed|variable|test_failed
DECL|test_main|function|void test_main(void)
DECL|test_ptp_clock_iface_1|function|static void test_ptp_clock_iface_1(void)
DECL|test_ptp_clock_iface_2|function|static void test_ptp_clock_iface_2(void)
DECL|test_ptp_clock_iface|function|static void test_ptp_clock_iface(int idx)
DECL|test_ptp_clock_interfaces|function|static void test_ptp_clock_interfaces(void)
DECL|test_started|variable|test_started
DECL|timestamp_to_nsec|function|static u64_t timestamp_to_nsec(struct net_ptp_time *ts)
DECL|time|member|struct net_ptp_time time;
DECL|total_if_count|member|int total_if_count;
DECL|user_data|struct|struct user_data {
