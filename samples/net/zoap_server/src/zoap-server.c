DECL|ALL_NODES_LOCAL_COAP_MCAST|macro|ALL_NODES_LOCAL_COAP_MCAST
DECL|BLOCK_WISE_TRANSFER_SIZE_GET|macro|BLOCK_WISE_TRANSFER_SIZE_GET
DECL|MY_COAP_PORT|macro|MY_COAP_PORT
DECL|MY_IP6ADDR|macro|MY_IP6ADDR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NUM_OBSERVERS|macro|NUM_OBSERVERS
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|context|variable|context
DECL|context|variable|context
DECL|core_1_attributes|variable|core_1_attributes
DECL|core_1_path|variable|core_1_path
DECL|core_2_attributes|variable|core_2_attributes
DECL|core_2_path|variable|core_2_path
DECL|core_get|function|static int core_get(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|find_resouce_by_observer|function|static struct zoap_resource *find_resouce_by_observer(struct zoap_resource *resources, struct zoap_observer *o)
DECL|join_coap_multicast_group|function|static bool join_coap_multicast_group(void)
DECL|large_create_path|variable|large_create_path
DECL|large_create_post|function|static int large_create_post(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|large_get|function|static int large_get(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|large_path|variable|large_path
DECL|large_update_path|variable|large_update_path
DECL|large_update_put|function|static int large_update_put(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|location_query_path|variable|location_query_path
DECL|location_query_post|function|static int location_query_post(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|main|function|void main(void)
DECL|obs_counter|variable|obs_counter
DECL|obs_get|function|static int obs_get(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|obs_notify|function|static void obs_notify(struct zoap_resource *resource, struct zoap_observer *observer)
DECL|obs_path|variable|obs_path
DECL|observer_work|variable|observer_work
DECL|observers|variable|observers
DECL|piggyback_get|function|static int piggyback_get(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|plain_text_format|variable|plain_text_format
DECL|query_get|function|static int query_get(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|query_path|variable|query_path
DECL|resource_to_notify|variable|resource_to_notify
DECL|resources|variable|resources
DECL|segments_path|variable|segments_path
DECL|send_notification_packet|function|static int send_notification_packet(const struct sockaddr *addr, uint16_t age, socklen_t addrlen, uint16_t id, const uint8_t *token, uint8_t tkl, bool is_response)
DECL|separate_get|function|static int separate_get(struct zoap_resource *resource,struct zoap_packet *request, const struct sockaddr *from)
DECL|separate_path|variable|separate_path
DECL|test_del|function|static int test_del(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|test_path|variable|test_path
DECL|test_post|function|static int test_post(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|test_put|function|static int test_put(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|udp_receive|function|static void udp_receive(struct net_context *context,struct net_buf *buf, int status, void *user_data)
DECL|update_counter|function|static void update_counter(struct k_work *work)
