DECL|CLIENT_PORT|macro|CLIENT_PORT
DECL|DISCOVER|macro|DISCOVER
DECL|MSG_TYPE|macro|MSG_TYPE
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|REQUEST|macro|REQUEST
DECL|SERVER_PORT|macro|SERVER_PORT
DECL|STACKSIZE|macro|STACKSIZE
DECL|ack|variable|ack
DECL|broascast_addr|variable|broascast_addr
DECL|client_addr|variable|client_addr
DECL|dst_addr|variable|dst_addr
DECL|fiberStack|variable|fiberStack
DECL|get_byte|function|static struct net_buf *get_byte(struct net_buf *buf, uint8_t offset,uint8_t *pos, uint8_t *value)
DECL|get_dhcp_message_type|function|static uint8_t get_dhcp_message_type(struct net_buf *buf)
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|mac_addr|member|uint8_t mac_addr[sizeof(struct net_eth_addr)];
DECL|main_fiber|function|void main_fiber(void)
DECL|main|function|void main(void)
DECL|nbuf_get_data|function|static struct net_buf *nbuf_get_data(struct net_if *iface)
DECL|net_dhcpv4_context_data|variable|net_dhcpv4_context_data
DECL|net_dhcpv4_context|struct|struct net_dhcpv4_context {
DECL|net_dhcpv4_dev_init|function|static int net_dhcpv4_dev_init(struct device *dev)
DECL|net_dhcpv4_get_mac|function|static uint8_t *net_dhcpv4_get_mac(struct device *dev)
DECL|net_dhcpv4_if_api|variable|net_dhcpv4_if_api
DECL|net_dhcpv4_iface_init|function|static void net_dhcpv4_iface_init(struct net_if *iface)
DECL|offer|variable|offer
DECL|prepare_dhcp_ack|function|struct net_buf *prepare_dhcp_ack(struct net_if *iface)
DECL|prepare_dhcp_offer|function|struct net_buf *prepare_dhcp_offer(struct net_if *iface)
DECL|server_addr|variable|server_addr
DECL|set_ipv4_header|function|static void set_ipv4_header(struct net_buf *buf)
DECL|set_udp_header|function|static void set_udp_header(struct net_buf *buf)
DECL|skip_nbytes|function|static struct net_buf *skip_nbytes(struct net_buf *buf, uint8_t offset,uint8_t *pos, uint16_t nbytes)
DECL|src_addr|variable|src_addr
DECL|test_result|function|static void test_result(bool pass)
DECL|tester_send|function|static int tester_send(struct net_if *iface, struct net_buf *buf)
DECL|zero_addr|variable|zero_addr
