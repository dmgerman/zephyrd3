DECL|mqtt_auth|function|int mqtt_auth(struct mqtt_app_ctx_t *app, const char *username, const char *pass)
DECL|mqtt_buffers|function|int mqtt_buffers(struct mqtt_app_ctx_t *app, struct app_buf_t *tx_buf, struct app_buf_t *rx_buf)
DECL|mqtt_cb_publish|function|int mqtt_cb_publish(struct mqtt_app_ctx_t *app, int (*cb_publish)(struct mqtt_msg_t *msg))
DECL|mqtt_configure|function|int mqtt_configure(struct mqtt_app_ctx_t *app, const char *client_id, int clean_session, enum mqtt_protocol proto)
DECL|mqtt_connect|function|int mqtt_connect(struct mqtt_app_ctx_t *app)
DECL|mqtt_disconnect|function|int mqtt_disconnect(struct mqtt_app_ctx_t *app)
DECL|mqtt_handle_pingreq|function|int mqtt_handle_pingreq(struct mqtt_app_ctx_t *app)
DECL|mqtt_handle_publish|function|int mqtt_handle_publish(struct mqtt_app_ctx_t *app)
DECL|mqtt_init|function|int mqtt_init(struct mqtt_app_ctx_t *app)
DECL|mqtt_network|function|int mqtt_network(struct mqtt_app_ctx_t *app, struct netz_ctx_t *netz_ctx)
DECL|mqtt_pingreq|function|int mqtt_pingreq(struct mqtt_app_ctx_t *app)
DECL|mqtt_publish_qos1|function|static inline int mqtt_publish_qos1(struct mqtt_app_ctx_t *app, uint16_t id)
DECL|mqtt_publish_qos2|function|static inline int mqtt_publish_qos2(struct mqtt_app_ctx_t *app, const uint16_t pkt_id)
DECL|mqtt_publish|function|int mqtt_publish(struct mqtt_app_ctx_t *app, struct mqtt_msg_t *msg, enum mqtt_qos qos, int retained)
DECL|mqtt_read|function|int mqtt_read(struct mqtt_app_ctx_t *app)
DECL|mqtt_subscribe|function|int mqtt_subscribe(struct mqtt_app_ctx_t *app, char *topic, enum mqtt_qos qos)
DECL|mqtt_unsubscribe|function|int mqtt_unsubscribe(struct mqtt_app_ctx_t *app, char *topic)
DECL|mqtt_will|function|int mqtt_will(struct mqtt_app_ctx_t *app, const char *topic, const char *msg, enum mqtt_qos qos, int retained)
