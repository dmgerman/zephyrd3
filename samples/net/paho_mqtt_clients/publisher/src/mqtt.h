DECL|MQTT_APP_INIT|macro|MQTT_APP_INIT
DECL|_MQTT_H_|macro|_MQTT_H_
DECL|cb_publish|member|int (*cb_publish)(struct mqtt_msg_t *msg);
DECL|client|member|struct mqtt_client_ctx_t *client;
DECL|mqtt_app_ctx_t|struct|struct mqtt_app_ctx_t {
DECL|netz_ctx|member|struct netz_ctx_t *netz_ctx;
DECL|rx_buf|member|struct app_buf_t *rx_buf;
DECL|sem|member|struct nano_sem sem;
DECL|tx_buf|member|struct app_buf_t *tx_buf;
