DECL|MQTT_APP_PUBLISHER_SUBSCRIBER|enumerator|MQTT_APP_PUBLISHER_SUBSCRIBER,
DECL|MQTT_APP_PUBLISHER|enumerator|MQTT_APP_PUBLISHER,
DECL|MQTT_APP_SERVER|enumerator|MQTT_APP_SERVER
DECL|MQTT_APP_SUBSCRIBER|enumerator|MQTT_APP_SUBSCRIBER,
DECL|_MQTT_H_|macro|_MQTT_H_
DECL|app_type|member|uint8_t app_type;
DECL|clean_session|member|uint8_t clean_session:1;
DECL|connect_data|member|void *connect_data;
DECL|connected|member|uint8_t connected:1;
DECL|connect|member|void (*connect)(void *data);
DECL|disconnect_data|member|void *disconnect_data;
DECL|disconnect|member|void (*disconnect)(void *data);
DECL|mqtt_app|enum|enum mqtt_app {
DECL|mqtt_ctx|struct|struct mqtt_ctx {
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|net_timeout|member|int32_t net_timeout;
DECL|publish_rx_data|member|void *publish_rx_data;
DECL|publish_rx|member|int (*publish_rx)(void *data, struct mqtt_publish_msg *msg,
DECL|publish_tx_data|member|void *publish_tx_data;
DECL|publish_tx|member|int (*publish_tx)(void *data, uint16_t pkt_id, enum mqtt_packet type);
DECL|subscribe_data|member|void *subscribe_data;
DECL|subscribe|member|int (*subscribe)(void *data, uint16_t pkt_id,
DECL|unsubscribe_data|member|void *unsubscribe_data;
DECL|unsubscribe|member|int (*unsubscribe)(void *data, uint16_t pkt_id);
