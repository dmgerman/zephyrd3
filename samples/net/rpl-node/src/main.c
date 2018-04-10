DECL|ALL_NODES_LOCAL_COAP_MCAST|macro|ALL_NODES_LOCAL_COAP_MCAST
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_PIN|macro|LED0_GPIO_PIN
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|MY_COAP_PORT|macro|MY_COAP_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|RPL_MAX_REPLY|macro|RPL_MAX_REPLY
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|context|variable|context
DECL|fake_led|variable|fake_led
DECL|get_from_ip_addr|function|static void get_from_ip_addr(struct coap_packet *cpkt, struct sockaddr_in6 *from)
DECL|init_app|function|static void init_app(void)
DECL|ipv6_nbr_cb|function|static void ipv6_nbr_cb(struct net_nbr *nbr, void *user_data)
DECL|ipv6_nbr_str|struct|struct ipv6_nbr_str {
DECL|ipv6_neighbors_default_attributes|variable|ipv6_neighbors_default_attributes
DECL|ipv6_neighbors_default_path|variable|ipv6_neighbors_default_path
DECL|ipv6_neighbors_get|function|static int ipv6_neighbors_get(struct coap_resource *resource, struct coap_packet *request)
DECL|ipv6_no_nbr|variable|ipv6_no_nbr
DECL|join_coap_multicast_group|function|static bool join_coap_multicast_group(void)
DECL|led0|variable|led0
DECL|led_default_attributes|variable|led_default_attributes
DECL|led_default_path|variable|led_default_path
DECL|led_get|function|static int led_get(struct coap_resource *resource, struct coap_packet *request)
DECL|led_off|variable|led_off
DECL|led_on|variable|led_on
DECL|led_post|function|static int led_post(struct coap_resource *resource, struct coap_packet *request)
DECL|led_put|function|static int led_put(struct coap_resource *resource, struct coap_packet *request)
DECL|led_toggle_off|variable|led_toggle_off
DECL|led_toggle_on|variable|led_toggle_on
DECL|len|member|u8_t len;
DECL|main|function|void main(void)
DECL|plain_text_format|variable|plain_text_format
DECL|read_led|function|static bool read_led(void)
DECL|resources|variable|resources
DECL|rpl_info_default_attributes|variable|rpl_info_default_attributes
DECL|rpl_info_default_path|variable|rpl_info_default_path
DECL|rpl_info_get|function|static int rpl_info_get(struct coap_resource *resource,struct coap_packet *request)
DECL|rpl_link_default_attributes|variable|rpl_link_default_attributes
DECL|rpl_link_default_path|variable|rpl_link_default_path
DECL|rpl_link_metric_get|function|static int rpl_link_metric_get(struct coap_resource *resource, struct coap_packet *request)
DECL|rpl_link|variable|rpl_link
DECL|rpl_no_link|variable|rpl_no_link
DECL|rpl_no_parent|variable|rpl_no_parent
DECL|rpl_no_rank|variable|rpl_no_rank
DECL|rpl_parent_default_attributes|variable|rpl_parent_default_attributes
DECL|rpl_parent_default_path|variable|rpl_parent_default_path
DECL|rpl_parent_get|function|static int rpl_parent_get(struct coap_resource *resource, struct coap_packet *request)
DECL|rpl_parent|variable|rpl_parent
DECL|rpl_rank_default_attributes|variable|rpl_rank_default_attributes
DECL|rpl_rank_default_path|variable|rpl_rank_default_path
DECL|rpl_rank_get|function|static int rpl_rank_get(struct coap_resource *resource,struct coap_packet *request)
DECL|rpl_rank|variable|rpl_rank
DECL|send_error_response|function|static void send_error_response(struct coap_resource *resource,struct coap_packet *request, struct sockaddr_in6 *from)
DECL|str|member|char str[(sizeof("xx:xx:xx:xx:xx:xx:xx:xx") *
DECL|udp_receive|function|static void udp_receive(struct net_context *context,struct net_pkt *pkt, int status, void *user_data)
DECL|well_known_core_get|function|static int well_known_core_get(struct coap_resource *resource, struct coap_packet *request)
DECL|write_led|function|static void write_led(bool led)
