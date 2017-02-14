DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|MY_PORT|macro|MY_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|PEER_PORT|macro|PEER_PORT
DECL|WAIT_TIME_LONG|macro|WAIT_TIME_LONG
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|_ETH_L2_CTX_TYPE|macro|_ETH_L2_CTX_TYPE
DECL|_ETH_L2_LAYER|macro|_ETH_L2_LAYER
DECL|catch_join_group|function|static void catch_join_group(void)
DECL|catch_leave_group|function|static void catch_leave_group(void)
DECL|cb|member|struct net_mgmt_event_callback cb;
DECL|event|member|uint32_t event;
DECL|group_joined|function|static void group_joined(struct net_mgmt_event_callback *cb, uint32_t nm_event, struct net_if *iface)
DECL|group_left|function|static void group_left(struct net_mgmt_event_callback *cb, uint32_t nm_event, struct net_if *iface)
DECL|handler|member|net_mgmt_event_handler_t handler;
DECL|iface|variable|iface
DECL|is_group_joined|variable|is_group_joined
DECL|is_group_left|variable|is_group_left
DECL|is_join_msg_ok|variable|is_join_msg_ok
DECL|is_leave_msg_ok|variable|is_leave_msg_ok
DECL|join_group|function|static void join_group(void)
DECL|leave_group|function|static void leave_group(void)
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|mac_addr|member|uint8_t mac_addr[sizeof(struct net_eth_addr)];
DECL|mcast_addr|variable|mcast_addr
DECL|mgmt_events|struct|static struct mgmt_events {
DECL|mgmt_events|variable|mgmt_events
DECL|mld_setup|function|static void mld_setup(void)
DECL|my_addr|variable|my_addr
DECL|net_test_data|variable|net_test_data
DECL|net_test_dev_init|function|int net_test_dev_init(struct device *dev)
DECL|net_test_get_mac|function|static uint8_t *net_test_get_mac(struct device *dev)
DECL|net_test_if_api|variable|net_test_if_api
DECL|net_test_iface_init|function|static void net_test_iface_init(struct net_if *iface)
DECL|net_test_mld|struct|struct net_test_mld {
DECL|setup_mgmt_events|function|static void setup_mgmt_events(void)
DECL|test_main|function|void test_main(void)
DECL|tester_send|function|static int tester_send(struct net_if *iface, struct net_buf *buf)
DECL|verify_join_group|function|static void verify_join_group(void)
DECL|verify_leave_group|function|static void verify_leave_group(void)
DECL|wait_data|variable|wait_data
