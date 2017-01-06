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
DECL|compute_rlen_size|function|int compute_rlen_size(uint16_t *size, uint32_t len)
DECL|mqtt_pack_connack|function|int mqtt_pack_connack(uint8_t *buf, uint16_t *length, uint16_t size, uint8_t session_present, uint8_t ret_code)
DECL|mqtt_pack_connect|function|int mqtt_pack_connect(uint8_t *buf, uint16_t *length, uint16_t size, struct mqtt_connect_msg *msg)
DECL|mqtt_pack_disconnect|function|int mqtt_pack_disconnect(uint8_t *buf, uint16_t *length, uint16_t size)
DECL|mqtt_pack_pingreq|function|int mqtt_pack_pingreq(uint8_t *buf, uint16_t *length, uint16_t size)
DECL|mqtt_pack_pingresp|function|int mqtt_pack_pingresp(uint8_t *buf, uint16_t *length, uint16_t size)
DECL|mqtt_pack_puback|function|int mqtt_pack_puback(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id)
DECL|mqtt_pack_pubcomp|function|int mqtt_pack_pubcomp(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id)
DECL|mqtt_pack_publish|function|int mqtt_pack_publish(uint8_t *buf, uint16_t *length, uint16_t size, struct mqtt_publish_msg *msg)
DECL|mqtt_pack_pubrec|function|int mqtt_pack_pubrec(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id)
DECL|mqtt_pack_pubrel|function|int mqtt_pack_pubrel(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id)
DECL|mqtt_pack_suback|function|int mqtt_pack_suback(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id, uint8_t elements, enum mqtt_qos granted_qos[])
DECL|mqtt_pack_subscribe_unsubscribe|function|static int mqtt_pack_subscribe_unsubscribe(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id, uint8_t items, const char *topics[], const enum mqtt_qos qos[], enum mqtt_packet type)
DECL|mqtt_pack_subscribe|function|int mqtt_pack_subscribe(uint8_t *buf, uint16_t *length, uint16_t size,uint16_t pkt_id, uint8_t items, const char *topics[], const enum mqtt_qos qos[])
DECL|mqtt_pack_unsuback|function|int mqtt_pack_unsuback(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id)
DECL|mqtt_pack_unsubscribe|function|int mqtt_pack_unsubscribe(uint8_t *buf, uint16_t *length, uint16_t size, uint16_t pkt_id, uint8_t items, const char *topics[])
DECL|mqtt_strlen|function|uint16_t mqtt_strlen(const char *str)
DECL|mqtt_unpack_connack|function|int mqtt_unpack_connack(uint8_t *buf, uint16_t length, uint8_t *session,uint8_t *connect_rc)
DECL|mqtt_unpack_connect|function|int mqtt_unpack_connect(uint8_t *buf, uint16_t length,struct mqtt_connect_msg *msg)
DECL|mqtt_unpack_disconnect|function|int mqtt_unpack_disconnect(uint8_t *buf, uint16_t length)
DECL|mqtt_unpack_pingreq|function|int mqtt_unpack_pingreq(uint8_t *buf, uint16_t length)
DECL|mqtt_unpack_pingresp|function|int mqtt_unpack_pingresp(uint8_t *buf, uint16_t length)
DECL|mqtt_unpack_puback|function|int mqtt_unpack_puback(uint8_t *buf, uint16_t length, uint16_t *pkt_id)
DECL|mqtt_unpack_pubcomp|function|int mqtt_unpack_pubcomp(uint8_t *buf, uint16_t length, uint16_t *pkt_id)
DECL|mqtt_unpack_publish|function|int mqtt_unpack_publish(uint8_t *buf, uint16_t length,struct mqtt_publish_msg *msg)
DECL|mqtt_unpack_pubrec|function|int mqtt_unpack_pubrec(uint8_t *buf, uint16_t length, uint16_t *pkt_id)
DECL|mqtt_unpack_pubrel|function|int mqtt_unpack_pubrel(uint8_t *buf, uint16_t length, uint16_t *pkt_id)
DECL|mqtt_unpack_suback|function|int mqtt_unpack_suback(uint8_t *buf, uint16_t length, uint16_t *pkt_id, uint8_t *items, uint8_t elements, enum mqtt_qos granted_qos[])
DECL|mqtt_unpack_subscribe|function|int mqtt_unpack_subscribe(uint8_t *buf, uint16_t length, uint16_t *pkt_id, uint8_t *items, uint8_t elements, char *topics[], uint16_t topic_len[], enum mqtt_qos qos[])
DECL|mqtt_unpack_unsuback|function|int mqtt_unpack_unsuback(uint8_t *buf, uint16_t length, uint16_t *pkt_id)
DECL|pack_pkt_id|function|int pack_pkt_id(uint8_t *buf, uint16_t *length, uint16_t size,enum mqtt_packet type, uint8_t reserved, uint16_t pkt_id)
DECL|pack_zerolen|function|int pack_zerolen(uint8_t *buf, uint16_t *length, uint16_t size, enum mqtt_packet pkt_type, uint8_t reserved)
DECL|recover_value_len|function|int recover_value_len(uint8_t *buf, uint16_t length, uint8_t **val, uint16_t *val_len)
DECL|rlen_decode|function|static int rlen_decode(uint16_t *rlen, uint16_t *rlen_size, uint8_t *buf, uint16_t size)
DECL|rlen_encode|function|static int rlen_encode(uint8_t *buf, int len)
DECL|subscribe_size|function|int subscribe_size(uint16_t *rlen_size, uint16_t *payload_size, uint8_t items, const char *topics[], enum mqtt_qos with_qos)
DECL|unpack_pktid_validate|function|int unpack_pktid_validate(uint8_t *buf, uint16_t length, uint16_t *pkt_id, uint8_t expected_type, uint8_t expected_reserv)
DECL|unpack_pktid|function|int unpack_pktid(uint8_t *buf, uint16_t length, enum mqtt_packet *type, uint8_t *reserved, uint16_t *pkt_id)
DECL|unpack_zerolen_validate|function|int unpack_zerolen_validate(uint8_t *buf, uint16_t length, enum mqtt_packet expected_type, uint8_t expected_reserved)
DECL|unpack_zerolen|function|int unpack_zerolen(uint8_t *buf, uint16_t length, enum mqtt_packet *pkt_type, uint8_t *reserved)
