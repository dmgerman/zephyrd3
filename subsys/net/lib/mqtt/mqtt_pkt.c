DECL|CONNACK_REMLEN|macro|CONNACK_REMLEN
DECL|CONNACK_SIZE|macro|CONNACK_SIZE
DECL|CONNECT_MIN_SIZE|macro|CONNECT_MIN_SIZE
DECL|CONNECT_VARIABLE_HDR_SIZE|macro|CONNECT_VARIABLE_HDR_SIZE
DECL|ENCLENBUF_MAX_SIZE|macro|ENCLENBUF_MAX_SIZE
DECL|FLAGS_SIZE|macro|FLAGS_SIZE
DECL|INT_SIZE|macro|INT_SIZE
DECL|KEEP_ALIVE_SIZE|macro|KEEP_ALIVE_SIZE
DECL|MSG_PKTID_ONLY_SIZE|macro|MSG_PKTID_ONLY_SIZE
DECL|MSG_ZEROLEN_SIZE|macro|MSG_ZEROLEN_SIZE
DECL|PACKET_ID_SIZE|macro|PACKET_ID_SIZE
DECL|PACKET_TYPE_SIZE|macro|PACKET_TYPE_SIZE
DECL|PUBACK_RESERVED|macro|PUBACK_RESERVED
DECL|PUBCOMP_RESERVED|macro|PUBCOMP_RESERVED
DECL|PUBREC_RESERVED|macro|PUBREC_RESERVED
DECL|PUBREL_RESERVED|macro|PUBREL_RESERVED
DECL|QoS_SIZE|macro|QoS_SIZE
DECL|REM_LEN_MIN_SIZE|macro|REM_LEN_MIN_SIZE
DECL|SUBSCRIBE_RESERVED|macro|SUBSCRIBE_RESERVED
DECL|TOPIC_MIN_SIZE|macro|TOPIC_MIN_SIZE
DECL|TOPIC_STR_MIN_SIZE|macro|TOPIC_STR_MIN_SIZE
DECL|UNSUBACK_RESERVED|macro|UNSUBACK_RESERVED
DECL|UNSUBSCRIBE_RESERVED|macro|UNSUBSCRIBE_RESERVED
DECL|compute_rlen_size|function|int compute_rlen_size(u16_t *size, u32_t len)
DECL|mqtt_pack_connack|function|int mqtt_pack_connack(u8_t *buf, u16_t *length, u16_t size, u8_t session_present, u8_t ret_code)
DECL|mqtt_pack_connect|function|int mqtt_pack_connect(u8_t *buf, u16_t *length, u16_t size, struct mqtt_connect_msg *msg)
DECL|mqtt_pack_disconnect|function|int mqtt_pack_disconnect(u8_t *buf, u16_t *length, u16_t size)
DECL|mqtt_pack_pingreq|function|int mqtt_pack_pingreq(u8_t *buf, u16_t *length, u16_t size)
DECL|mqtt_pack_pingresp|function|int mqtt_pack_pingresp(u8_t *buf, u16_t *length, u16_t size)
DECL|mqtt_pack_puback|function|int mqtt_pack_puback(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id)
DECL|mqtt_pack_pubcomp|function|int mqtt_pack_pubcomp(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id)
DECL|mqtt_pack_publish|function|int mqtt_pack_publish(u8_t *buf, u16_t *length, u16_t size, struct mqtt_publish_msg *msg)
DECL|mqtt_pack_pubrec|function|int mqtt_pack_pubrec(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id)
DECL|mqtt_pack_pubrel|function|int mqtt_pack_pubrel(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id)
DECL|mqtt_pack_suback|function|int mqtt_pack_suback(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id, u8_t elements, enum mqtt_qos granted_qos[])
DECL|mqtt_pack_subscribe_unsubscribe|function|static int mqtt_pack_subscribe_unsubscribe(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id, u8_t items, const char *topics[], const enum mqtt_qos qos[], enum mqtt_packet type)
DECL|mqtt_pack_subscribe|function|int mqtt_pack_subscribe(u8_t *buf, u16_t *length, u16_t size,u16_t pkt_id, u8_t items, const char *topics[], const enum mqtt_qos qos[])
DECL|mqtt_pack_unsuback|function|int mqtt_pack_unsuback(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id)
DECL|mqtt_pack_unsubscribe|function|int mqtt_pack_unsubscribe(u8_t *buf, u16_t *length, u16_t size, u16_t pkt_id, u8_t items, const char *topics[])
DECL|mqtt_strlen|function|u16_t mqtt_strlen(const char *str)
DECL|mqtt_unpack_connack|function|int mqtt_unpack_connack(u8_t *buf, u16_t length, u8_t *session,u8_t *connect_rc)
DECL|mqtt_unpack_connect|function|int mqtt_unpack_connect(u8_t *buf, u16_t length,struct mqtt_connect_msg *msg)
DECL|mqtt_unpack_disconnect|function|int mqtt_unpack_disconnect(u8_t *buf, u16_t length)
DECL|mqtt_unpack_pingreq|function|int mqtt_unpack_pingreq(u8_t *buf, u16_t length)
DECL|mqtt_unpack_pingresp|function|int mqtt_unpack_pingresp(u8_t *buf, u16_t length)
DECL|mqtt_unpack_puback|function|int mqtt_unpack_puback(u8_t *buf, u16_t length, u16_t *pkt_id)
DECL|mqtt_unpack_pubcomp|function|int mqtt_unpack_pubcomp(u8_t *buf, u16_t length, u16_t *pkt_id)
DECL|mqtt_unpack_publish|function|int mqtt_unpack_publish(u8_t *buf, u16_t length,struct mqtt_publish_msg *msg)
DECL|mqtt_unpack_pubrec|function|int mqtt_unpack_pubrec(u8_t *buf, u16_t length, u16_t *pkt_id)
DECL|mqtt_unpack_pubrel|function|int mqtt_unpack_pubrel(u8_t *buf, u16_t length, u16_t *pkt_id)
DECL|mqtt_unpack_suback|function|int mqtt_unpack_suback(u8_t *buf, u16_t length, u16_t *pkt_id, u8_t *items, u8_t elements, enum mqtt_qos granted_qos[])
DECL|mqtt_unpack_subscribe|function|int mqtt_unpack_subscribe(u8_t *buf, u16_t length, u16_t *pkt_id, u8_t *items, u8_t elements, char *topics[], u16_t topic_len[], enum mqtt_qos qos[])
DECL|mqtt_unpack_unsuback|function|int mqtt_unpack_unsuback(u8_t *buf, u16_t length, u16_t *pkt_id)
DECL|pack_pkt_id|function|int pack_pkt_id(u8_t *buf, u16_t *length, u16_t size,enum mqtt_packet type, u8_t reserved, u16_t pkt_id)
DECL|pack_zerolen|function|int pack_zerolen(u8_t *buf, u16_t *length, u16_t size, enum mqtt_packet pkt_type, u8_t reserved)
DECL|recover_value_len|function|int recover_value_len(u8_t *buf, u16_t length, u8_t **val, u16_t *val_len)
DECL|rlen_decode|function|static int rlen_decode(u32_t *rlen, u16_t *rlen_size, u8_t *buf, u16_t size)
DECL|rlen_encode|function|static int rlen_encode(u8_t *buf, u32_t len)
DECL|subscribe_size|function|int subscribe_size(u16_t *rlen_size, u16_t *payload_size, u8_t items, const char *topics[], enum mqtt_qos with_qos)
DECL|unpack_pktid_validate|function|int unpack_pktid_validate(u8_t *buf, u16_t length, u16_t *pkt_id, u8_t expected_type, u8_t expected_reserv)
DECL|unpack_pktid|function|int unpack_pktid(u8_t *buf, u16_t length, enum mqtt_packet *type, u8_t *reserved, u16_t *pkt_id)
DECL|unpack_zerolen_validate|function|int unpack_zerolen_validate(u8_t *buf, u16_t length, enum mqtt_packet expected_type, u8_t expected_reserved)
DECL|unpack_zerolen|function|int unpack_zerolen(u8_t *buf, u16_t length, enum mqtt_packet *pkt_type, u8_t *reserved)
