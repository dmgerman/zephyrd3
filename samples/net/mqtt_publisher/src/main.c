DECL|CLIENTID|macro|CLIENTID
DECL|PRINT_RESULT|macro|PRINT_RESULT
DECL|RC_STR|macro|RC_STR
DECL|bt_conn_cb|variable|bt_conn_cb
DECL|bt_connect_cb|function|void bt_connect_cb(struct bt_conn *conn, uint8_t err)
DECL|bt_connected|variable|bt_connected
DECL|bt_disconnect_cb|function|void bt_disconnect_cb(struct bt_conn *conn, uint8_t reason)
DECL|client_ctx|variable|client_ctx
DECL|connect_cb|function|void connect_cb(struct mqtt_ctx *mqtt_ctx)
DECL|connect_data|member|void *connect_data;
DECL|connect_msg|member|struct mqtt_connect_msg connect_msg;
DECL|disconnect_cb|function|void disconnect_cb(struct mqtt_ctx *mqtt_ctx)
DECL|disconnect_data|member|void *disconnect_data;
DECL|main|function|void main(void)
DECL|malformed_cb|function|void malformed_cb(struct mqtt_ctx *mqtt_ctx, uint16_t pkt_type)
DECL|mqtt_client_ctx|struct|struct mqtt_client_ctx {
DECL|mqtt_ctx|member|struct mqtt_ctx mqtt_ctx;
DECL|net_ctx|variable|net_ctx
DECL|network_setup|function|int network_setup(struct net_context **net_ctx, const char *local_addr, const char *server_addr, uint16_t server_port)
DECL|payload|variable|payload
DECL|prepare_mqtt_publish_msg|function|void prepare_mqtt_publish_msg(struct mqtt_publish_msg *pub_msg, enum mqtt_qos qos)
DECL|pub_msg|member|struct mqtt_publish_msg pub_msg;
DECL|publish_cb|function|int publish_cb(struct mqtt_ctx *mqtt_ctx, uint16_t pkt_id, enum mqtt_packet type)
DECL|publish_data|member|void *publish_data;
DECL|publisher|function|void publisher(void)
DECL|set_addr|function|int set_addr(struct sockaddr *sock_addr, const char *addr, uint16_t port)
DECL|topic|variable|topic
DECL|try_to_connect|function|int try_to_connect(struct mqtt_client_ctx *client_ctx)
