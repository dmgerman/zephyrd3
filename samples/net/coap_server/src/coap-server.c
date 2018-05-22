DECL|ALL_NODES_LOCAL_COAP_MCAST|macro|ALL_NODES_LOCAL_COAP_MCAST
DECL|BLOCK_WISE_TRANSFER_SIZE_GET|macro|BLOCK_WISE_TRANSFER_SIZE_GET
DECL|GET_BLOCK_NUM|macro|GET_BLOCK_NUM
DECL|GET_BLOCK_SIZE|macro|GET_BLOCK_SIZE
DECL|GET_MORE|macro|GET_MORE
DECL|MY_COAP_PORT|macro|MY_COAP_PORT
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NUM_OBSERVERS|macro|NUM_OBSERVERS
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|context|variable|context
DECL|context|variable|context
DECL|core_1_attributes|variable|core_1_attributes
DECL|core_1_path|variable|core_1_path
DECL|core_2_attributes|variable|core_2_attributes
DECL|core_2_path|variable|core_2_path
DECL|core_get|function|static int core_get(struct coap_resource *resource, struct coap_packet *request)
DECL|find_resouce_by_observer|function|static struct coap_resource *find_resouce_by_observer(struct coap_resource *resources, struct coap_observer *o)
DECL|get_from_ip_addr|function|static void get_from_ip_addr(struct coap_packet *cpkt, struct sockaddr_in6 *from)
DECL|get_option_int|function|static int get_option_int(const struct coap_packet *pkt, u8_t opt)
DECL|join_coap_multicast_group|function|static bool join_coap_multicast_group(void)
DECL|large_create_path|variable|large_create_path
DECL|large_create_post|function|static int large_create_post(struct coap_resource *resource, struct coap_packet *request)
DECL|large_get|function|static int large_get(struct coap_resource *resource, struct coap_packet *request)
DECL|large_path|variable|large_path
DECL|large_update_path|variable|large_update_path
DECL|large_update_put|function|static int large_update_put(struct coap_resource *resource, struct coap_packet *request)
DECL|location_query_path|variable|location_query_path
DECL|location_query_post|function|static int location_query_post(struct coap_resource *resource, struct coap_packet *request)
DECL|main|function|void main(void)
DECL|obs_counter|variable|obs_counter
DECL|obs_get|function|static int obs_get(struct coap_resource *resource, struct coap_packet *request)
DECL|obs_notify|function|static void obs_notify(struct coap_resource *resource, struct coap_observer *observer)
DECL|obs_path|variable|obs_path
DECL|observer_work|variable|observer_work
DECL|observers|variable|observers
DECL|payload_dump|function|static void payload_dump(const char *s, struct net_buf *frag, u16_t offset, u16_t len)
DECL|pendings|variable|pendings
DECL|piggyback_get|function|static int piggyback_get(struct coap_resource *resource, struct coap_packet *request)
DECL|plain_text_format|variable|plain_text_format
DECL|query_get|function|static int query_get(struct coap_resource *resource, struct coap_packet *request)
DECL|query_path|variable|query_path
DECL|resource_to_notify|variable|resource_to_notify
DECL|resources|variable|resources
DECL|retransmit_request|function|static void retransmit_request(struct k_work *work)
DECL|retransmit_work|variable|retransmit_work
DECL|segments_path|variable|segments_path
DECL|send_notification_packet|function|static int send_notification_packet(const struct sockaddr *addr, u16_t age, socklen_t addrlen, u16_t id, const u8_t *token, u8_t tkl, bool is_response)
DECL|separate_get|function|static int separate_get(struct coap_resource *resource,struct coap_packet *request)
DECL|separate_path|variable|separate_path
DECL|test_del|function|static int test_del(struct coap_resource *resource, struct coap_packet *request)
DECL|test_path|variable|test_path
DECL|test_post|function|static int test_post(struct coap_resource *resource, struct coap_packet *request)
DECL|test_put|function|static int test_put(struct coap_resource *resource, struct coap_packet *request)
DECL|udp_receive|function|static void udp_receive(struct net_context *context,struct net_pkt *pkt, int status, void *user_data)
DECL|update_counter|function|static void update_counter(struct k_work *work)
DECL|well_known_core_get|function|static int well_known_core_get(struct coap_resource *resource, struct coap_packet *request)
