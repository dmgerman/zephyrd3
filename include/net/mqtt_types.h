DECL|MQTT_311|enumerator|MQTT_311 = 4
DECL|MQTT_CONNACK|enumerator|MQTT_CONNACK,
DECL|MQTT_CONNECT|enumerator|MQTT_CONNECT,
DECL|MQTT_DISCONNECT|enumerator|MQTT_DISCONNECT
DECL|MQTT_INVALID|enumerator|MQTT_INVALID = 0,
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
DECL|ZEPHYR_INCLUDE_NET_MQTT_TYPES_H_|macro|ZEPHYR_INCLUDE_NET_MQTT_TYPES_H_
DECL|clean_session|member|u8_t clean_session:1;
DECL|client_id_len|member|u16_t client_id_len;
DECL|client_id|member|char *client_id;
DECL|dup|member|u8_t dup;
DECL|keep_alive|member|u16_t keep_alive;
DECL|mqtt_connect_msg|struct|struct mqtt_connect_msg {
DECL|mqtt_packet|enum|enum mqtt_packet {
DECL|mqtt_protocol|enum|enum mqtt_protocol {
DECL|mqtt_publish_msg|struct|struct mqtt_publish_msg {
DECL|mqtt_qos|enum|enum mqtt_qos {
DECL|msg_len|member|u16_t msg_len;
DECL|msg|member|u8_t *msg;
DECL|password_len|member|u16_t password_len;
DECL|password|member|u8_t *password;
DECL|pkt_id|member|u16_t pkt_id;
DECL|qos|member|enum mqtt_qos qos;
DECL|retain|member|u8_t retain;
DECL|topic_len|member|u16_t topic_len;
DECL|topic|member|char *topic;
DECL|user_name_len|member|u16_t user_name_len;
DECL|user_name|member|const char *user_name;
DECL|will_flag|member|u8_t will_flag:1;
DECL|will_msg_len|member|u16_t will_msg_len;
DECL|will_msg|member|u8_t *will_msg;
DECL|will_qos|member|enum mqtt_qos will_qos;
DECL|will_retain|member|u8_t will_retain:1;
DECL|will_topic_len|member|u16_t will_topic_len;
DECL|will_topic|member|char *will_topic;
