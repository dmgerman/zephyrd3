DECL|MQTT_APP_PUBLISHER_SUBSCRIBER|enumerator|MQTT_APP_PUBLISHER_SUBSCRIBER,
DECL|MQTT_APP_PUBLISHER|enumerator|MQTT_APP_PUBLISHER,
DECL|MQTT_APP_SERVER|enumerator|MQTT_APP_SERVER
DECL|MQTT_APP_SUBSCRIBER|enumerator|MQTT_APP_SUBSCRIBER,
DECL|_MQTT_H_|macro|_MQTT_H_
DECL|app_type|member|u8_t app_type;
DECL|clean_session|member|u8_t clean_session:1;
DECL|connected|member|u8_t connected:1;
DECL|connect|member|void (*connect)(struct mqtt_ctx *ctx);
DECL|disconnect|member|void (*disconnect)(struct mqtt_ctx *ctx);
DECL|malformed|member|void (*malformed)(struct mqtt_ctx *ctx, u16_t pkt_type);
DECL|mqtt_app|enum|enum mqtt_app {
DECL|mqtt_ctx|struct|struct mqtt_ctx {
DECL|net_app_ctx|member|struct net_app_ctx net_app_ctx;
DECL|net_init_timeout|member|s32_t net_init_timeout;
DECL|net_timeout|member|s32_t net_timeout;
DECL|peer_addr_str|member|char *peer_addr_str;
DECL|peer_port|member|u16_t peer_port;
DECL|publish_rx|member|int (*publish_rx)(struct mqtt_ctx *ctx, struct mqtt_publish_msg *msg,
DECL|publish_tx|member|int (*publish_tx)(struct mqtt_ctx *ctx, u16_t pkt_id,
DECL|rcv|member|int (*rcv)(struct mqtt_ctx *ctx, struct net_pkt *);
DECL|subscribe|member|int (*subscribe)(struct mqtt_ctx *ctx, u16_t pkt_id,
DECL|unsubscribe|member|int (*unsubscribe)(struct mqtt_ctx *ctx, u16_t pkt_id);
