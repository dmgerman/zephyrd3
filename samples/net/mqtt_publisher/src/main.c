DECL|CONN_TRIES|macro|CONN_TRIES
DECL|PRINT_RESULT|macro|PRINT_RESULT
DECL|RC_STR|macro|RC_STR
DECL|bt_conn_cb|variable|bt_conn_cb
DECL|bt_connect_cb|function|void bt_connect_cb(struct bt_conn *conn, u8_t err)
DECL|bt_connected|variable|bt_connected
DECL|bt_disconnect_cb|function|void bt_disconnect_cb(struct bt_conn *conn, u8_t reason)
DECL|client_ctx|variable|client_ctx
DECL|connect_cb|function|static void connect_cb(struct mqtt_ctx *mqtt_ctx)
DECL|connect_data|member|void *connect_data;
DECL|connect_msg|member|struct mqtt_connect_msg connect_msg;
DECL|disconnect_cb|function|static void disconnect_cb(struct mqtt_ctx *mqtt_ctx)
DECL|disconnect_data|member|void *disconnect_data;
DECL|get_mqtt_payload|function|static char *get_mqtt_payload(enum mqtt_qos qos)
DECL|get_mqtt_topic|function|static char *get_mqtt_topic(void)
DECL|main|function|void main(void)
DECL|malformed_cb|function|static void malformed_cb(struct mqtt_ctx *mqtt_ctx, u16_t pkt_type)
DECL|mqtt_client_ctx|struct|struct mqtt_client_ctx {
DECL|mqtt_ctx|member|struct mqtt_ctx mqtt_ctx;
DECL|net_ctx|variable|net_ctx
DECL|network_setup|function|static int network_setup(struct net_context **net_ctx, const char *local_addr, const char *server_addr, u16_t server_port)
DECL|prepare_mqtt_publish_msg|function|static void prepare_mqtt_publish_msg(struct mqtt_publish_msg *pub_msg, enum mqtt_qos qos)
DECL|pub_msg|member|struct mqtt_publish_msg pub_msg;
DECL|publish_cb|function|static int publish_cb(struct mqtt_ctx *mqtt_ctx, u16_t pkt_id, enum mqtt_packet type)
DECL|publish_data|member|void *publish_data;
DECL|publisher|function|static void publisher(void)
DECL|set_addr|function|static int set_addr(struct sockaddr *sock_addr, const char *addr, u16_t port)
DECL|try_to_connect|function|static int try_to_connect(struct mqtt_client_ctx *client_ctx)
