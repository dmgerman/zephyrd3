DECL|COAP_REPLY_NONE|macro|COAP_REPLY_NONE
DECL|COAP_REPLY_PARENT|macro|COAP_REPLY_PARENT
DECL|COAP_REPLY_RANK_VALUE|macro|COAP_REPLY_RANK_VALUE
DECL|COAP_REPLY_RANK|macro|COAP_REPLY_RANK
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_COAP_REQUESTS|macro|MAX_COAP_REQUESTS
DECL|MAX_COAP_REQUEST_ATTEMPTS|macro|MAX_COAP_REQUEST_ATTEMPTS
DECL|MAX_PAYLOAD_SIZE|macro|MAX_PAYLOAD_SIZE
DECL|MY_COAP_PORT|macro|MY_COAP_PORT
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PEER_COAP_PORT|macro|PEER_COAP_PORT
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|RESPONSE_TIME|macro|RESPONSE_TIME
DECL|add_nbr_to_topology|function|static void add_nbr_to_topology(struct in6_addr *nbr)
DECL|add_node_to_topology|function|static void add_node_to_topology(struct in6_addr *node)
DECL|cb|member|coap_reply_cb_t cb;
DECL|clear_coap_request|function|static void clear_coap_request(struct coap_request *request)
DECL|coap_init|function|int coap_init(void)
DECL|coap_remove_node_from_topology|function|void coap_remove_node_from_topology(struct in6_addr *peer)
DECL|coap_request|struct|struct coap_request {
DECL|coap_send_request|function|void coap_send_request(struct in6_addr *peer_addr, enum coap_request_type type, coap_reply_cb_t cb, void *user_data)
DECL|coap|variable|coap
DECL|code|member|u8_t code; /* Expecting reply code */
DECL|count|member|u8_t count; /* Number of trails */
DECL|get_coap_request_by_addr|function|get_coap_request_by_addr(const struct in6_addr *peer)
DECL|get_coap_request_by_id|function|get_coap_request_by_id(const struct sockaddr_in6 *peer, u16_t id)
DECL|get_coap_request_by_type|function|get_coap_request_by_type(const struct sockaddr_in6 *peer, enum coap_request_type type)
DECL|get_free_coap_request|function|static struct coap_request *get_free_coap_request(void)
DECL|get_from_ip_addr|function|static void get_from_ip_addr(struct coap_packet *cpkt, struct sockaddr_in6 *from)
DECL|id|member|u16_t id; /* Message id sent */
DECL|led_uri_path|variable|led_uri_path
DECL|node_obs_reply|function|static void node_obs_reply(struct coap_packet *response, void *user_data)
DECL|peer|member|struct sockaddr_in6 peer; /* Peer CoAP server socket address */
DECL|pkt_receive|function|static void pkt_receive(struct net_context *context,struct net_pkt *pkt, int status, void *user_data)
DECL|remove_node_from_topology|function|static void remove_node_from_topology(struct in6_addr *node)
DECL|request_timeout|function|static void request_timeout(struct k_work *work)
DECL|requests|variable|requests
DECL|rpl_obs_path|variable|rpl_obs_path
DECL|set_rpl_observer|function|static bool set_rpl_observer(const struct sockaddr_in6 *peer, u16_t id)
DECL|timer|member|struct k_delayed_work timer; /* Timer to retransmit messages */
DECL|toggle_led|function|static bool toggle_led(const struct sockaddr_in6 *peer, u16_t id)
DECL|type|member|enum coap_request_type type;
DECL|update_node_topology|function|static void update_node_topology(struct in6_addr *node, struct in6_addr *parent, u16_t rank)
DECL|used|member|bool used; /* Entry used or not */
DECL|user_data|member|void *user_data;
