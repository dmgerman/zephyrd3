DECL|MQTT_311|enumerator|MQTT_311
DECL|MQTT_31|enumerator|MQTT_31 = 3,
DECL|MQTT_CLIENT_CTX_INIT|macro|MQTT_CLIENT_CTX_INIT
DECL|MQTT_CONNACK|enumerator|MQTT_CONNACK,
DECL|MQTT_CONNECT|enumerator|MQTT_CONNECT = 1,
DECL|MQTT_DISCONNECT|enumerator|MQTT_DISCONNECT
DECL|MQTT_MSG_INIT|macro|MQTT_MSG_INIT
DECL|MQTT_PINGREQ|enumerator|MQTT_PINGREQ,
DECL|MQTT_PINGRESP|enumerator|MQTT_PINGRESP,
DECL|MQTT_PUBACK|enumerator|MQTT_PUBACK,
DECL|MQTT_PUBCOMP|enumerator|MQTT_PUBCOMP,
DECL|MQTT_PUBLISH|enumerator|MQTT_PUBLISH,
DECL|MQTT_PUBREC|enumerator|MQTT_PUBREC,
DECL|MQTT_PUBREL|enumerator|MQTT_PUBREL,
DECL|MQTT_QoS0|enumerator|MQTT_QoS0 = 0,
DECL|MQTT_QoS1|enumerator|MQTT_QoS1,
DECL|MQTT_QoS2|enumerator|MQTT_QoS2
DECL|MQTT_SUBACK|enumerator|MQTT_SUBACK,
DECL|MQTT_SUBSCRIBE|enumerator|MQTT_SUBSCRIBE,
DECL|MQTT_UNSUBACK|enumerator|MQTT_UNSUBACK,
DECL|MQTT_UNSUBSCRIBE|enumerator|MQTT_UNSUBSCRIBE,
DECL|_MQTT_PKT_H_|macro|_MQTT_PKT_H_
DECL|clean_session|member|int clean_session;
DECL|client_id|member|const char *client_id;
DECL|dup|member|int dup;
DECL|keep_alive|member|int keep_alive;
DECL|mqtt_client_ctx_t|struct|struct mqtt_client_ctx_t {
DECL|mqtt_msg_t|struct|struct mqtt_msg_t {
DECL|mqtt_packet|enum|enum mqtt_packet {
DECL|mqtt_protocol|enum|enum mqtt_protocol {
DECL|mqtt_qos|enum|enum mqtt_qos {
DECL|pass|member|const char *pass;
DECL|payload|member|struct app_buf_t payload;
DECL|pkt_id|member|uint16_t pkt_id;
DECL|pkt_id|member|uint16_t pkt_id;
DECL|proto|member|enum mqtt_protocol proto;
DECL|qos|member|enum mqtt_qos qos;
DECL|retained|member|int retained;
DECL|topic|member|struct app_buf_t topic;
DECL|username|member|const char *username;
DECL|will_enabled|member|int will_enabled;
DECL|will_payload|member|const char *will_payload;
DECL|will_qos|member|enum mqtt_qos will_qos;
DECL|will_retained|member|int will_retained;
DECL|will_topic|member|const char *will_topic;
