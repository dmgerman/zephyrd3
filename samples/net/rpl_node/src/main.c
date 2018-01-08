DECL|ALL_NODES_LOCAL_COAP_MCAST|macro|ALL_NODES_LOCAL_COAP_MCAST
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_PIN|macro|LED0_GPIO_PIN
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|MY_COAP_PORT|macro|MY_COAP_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|NUM_OBSERVERS|macro|NUM_OBSERVERS
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|RPL_MAX_REPLY|macro|RPL_MAX_REPLY
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|append_rpl_parent|function|static int append_rpl_parent(struct coap_packet *response)
DECL|context|variable|context
DECL|get_from_ip_addr|function|static void get_from_ip_addr(struct coap_packet *cpkt, struct sockaddr_in6 *from)
DECL|init_app|function|static void init_app(void)
DECL|join_coap_multicast_group|function|static bool join_coap_multicast_group(void)
DECL|led0|variable|led0
DECL|led_default_attributes|variable|led_default_attributes
DECL|led_default_path|variable|led_default_path
DECL|led_post|function|static int led_post(struct coap_resource *resource, struct coap_packet *request)
DECL|main|function|void main(void)
DECL|observers|variable|observers
DECL|pendings|variable|pendings
DECL|resources|variable|resources
DECL|retransmit_request|function|static void retransmit_request(struct k_work *work)
DECL|retransmit_work|variable|retransmit_work
DECL|rpl_obs_default_attributes|variable|rpl_obs_default_attributes
DECL|rpl_obs_default_path|variable|rpl_obs_default_path
DECL|rpl_obs_get|function|static int rpl_obs_get(struct coap_resource *resource, struct coap_packet *request)
DECL|send_error_response|function|static void send_error_response(struct coap_resource *resource,struct coap_packet *request, struct sockaddr_in6 *from)
DECL|send_notification_packet|function|static int send_notification_packet(const struct sockaddr *addr, u16_t age, socklen_t addrlen, u16_t id, const u8_t *token,
DECL|toggle_led|function|static void toggle_led(void)
DECL|udp_receive|function|static void udp_receive(struct net_context *context,struct net_pkt *pkt, int status, void *user_data)
DECL|well_known_core_get|function|static int well_known_core_get(struct coap_resource *resource, struct coap_packet *request)
