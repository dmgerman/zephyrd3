DECL|COAP_BUF_SIZE|macro|COAP_BUF_SIZE
DECL|COAP_LIMITED_BUF_SIZE|macro|COAP_LIMITED_BUF_SIZE
DECL|MY_PORT|macro|MY_PORT
DECL|NUM_OBSERVERS|macro|NUM_OBSERVERS
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|dummy_addr|variable|dummy_addr
DECL|func|member|int (*func)(void);
DECL|get_from_ip_addr|function|static void get_from_ip_addr(struct coap_packet *cpkt, struct sockaddr_in6 *from)
DECL|ipaddr_cmp|function|static bool ipaddr_cmp(const struct sockaddr *a, const struct sockaddr *b)
DECL|ipv6_block|variable|ipv6_block
DECL|ipv6_empty_pdu_1|variable|ipv6_empty_pdu_1
DECL|ipv6_empty_pdu|variable|ipv6_empty_pdu
DECL|ipv6_malformed_marker|variable|ipv6_malformed_marker
DECL|ipv6_not_found_req|variable|ipv6_not_found_req
DECL|ipv6_obs_client|variable|ipv6_obs_client
DECL|ipv6_resource1|variable|ipv6_resource1
DECL|ipv6_simple_pdu|variable|ipv6_simple_pdu
DECL|ipv6_valid_req|variable|ipv6_valid_req
DECL|ipv6_wrong_opt_ext|variable|ipv6_wrong_opt_ext
DECL|ipv6_wrong_opt_len_ext|variable|ipv6_wrong_opt_len_ext
DECL|ipv6_wrong_opt_len|variable|ipv6_wrong_opt_len
DECL|ipv6_wrong_opt|variable|ipv6_wrong_opt
DECL|main|function|int main(int argc, char *argv[])
DECL|name|member|const char *name;
DECL|observers|variable|observers
DECL|peer_addr|macro|peer_addr
DECL|pendings|variable|pendings
DECL|replies|variable|replies
DECL|resource_reply_cb|function|static int resource_reply_cb(const struct coap_packet *response, struct coap_reply *reply, const struct sockaddr *from)
DECL|server_notify_callback|function|static void server_notify_callback(struct coap_resource *resource, struct coap_observer *observer)
DECL|server_resource_1_get|function|static int server_resource_1_get(struct coap_resource *resource, struct coap_packet *request)
DECL|server_resource_1_path|variable|server_resource_1_path
DECL|server_resources|variable|server_resources
DECL|test_block_2_size|function|static int test_block_2_size(void)
DECL|test_block_size|function|static int test_block_size(void)
DECL|test_build_empty_pdu|function|static int test_build_empty_pdu(void)
DECL|test_build_simple_pdu|function|static int test_build_simple_pdu(void)
DECL|test_match_path_uri|function|static int test_match_path_uri(void)
DECL|test_observer_client|function|static int test_observer_client(void)
DECL|test_observer_server|function|static int test_observer_server(void)
DECL|test_parse_empty_pdu_1|function|static int test_parse_empty_pdu_1(void)
DECL|test_parse_empty_pdu|function|static int test_parse_empty_pdu(void)
DECL|test_parse_malformed_marker|function|static int test_parse_malformed_marker(void)
DECL|test_parse_malformed_opt_ext|function|static int test_parse_malformed_opt_ext(void)
DECL|test_parse_malformed_opt_len_ext|function|static int test_parse_malformed_opt_len_ext(void)
DECL|test_parse_malformed_opt_len|function|static int test_parse_malformed_opt_len(void)
DECL|test_parse_malformed_opt|function|static int test_parse_malformed_opt(void)
DECL|test_parse_simple_pdu|function|static int test_parse_simple_pdu(void)
DECL|test_retransmit_second_round|function|static int test_retransmit_second_round(void)
DECL|tests|variable|tests
