DECL|MY_PORT|macro|MY_PORT
DECL|NUM_OBSERVERS|macro|NUM_OBSERVERS
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|ZOAP_BUF_SIZE|macro|ZOAP_BUF_SIZE
DECL|ZOAP_LIMITED_BUF_SIZE|macro|ZOAP_LIMITED_BUF_SIZE
DECL|dummy_addr|variable|dummy_addr
DECL|func|member|int (*func)(void);
DECL|main|function|int main(int argc, char *argv[])
DECL|name|member|const char *name;
DECL|observers|variable|observers
DECL|pendings|variable|pendings
DECL|replies|variable|replies
DECL|resource_reply_cb|function|static int resource_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const uip_ipaddr_t *addr, uint16_t port)
DECL|server_notify_callback|function|static void server_notify_callback(struct zoap_resource *resource, struct zoap_observer *observer)
DECL|server_resource_1_get|function|static int server_resource_1_get(struct zoap_resource *resource, struct zoap_packet *request, const uip_ipaddr_t *addr, uint16_t port)
DECL|server_resource_1_path|variable|server_resource_1_path
DECL|server_resources|variable|server_resources
DECL|test_block_size|function|static int test_block_size(void)
DECL|test_build_empty_pdu|function|static int test_build_empty_pdu(void)
DECL|test_build_no_size_for_options|function|static int test_build_no_size_for_options(void)
DECL|test_build_simple_pdu|function|static int test_build_simple_pdu(void)
DECL|test_observer_client|function|static int test_observer_client(void)
DECL|test_observer_server|function|static int test_observer_server(void)
DECL|test_parse_empty_pdu|function|static int test_parse_empty_pdu(void)
DECL|test_parse_simple_pdu|function|static int test_parse_simple_pdu(void)
DECL|test_retransmit_second_round|function|static int test_retransmit_second_round(void)
DECL|tests|variable|tests
DECL|zoap_fifo|variable|zoap_fifo
DECL|zoap_incoming_fifo|variable|zoap_incoming_fifo
DECL|zoap_limited_fifo|variable|zoap_limited_fifo
