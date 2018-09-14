DECL|ZEPHYR_INCLUDE_BLUETOOTH_AVDTP_H_|macro|ZEPHYR_INCLUDE_BLUETOOTH_AVDTP_H_
DECL|__packed|variable|__packed
DECL|bt_avdtp_seid_info|struct|struct bt_avdtp_seid_info {
DECL|bt_avdtp_seid_lsep|struct|struct bt_avdtp_seid_lsep {
DECL|bt_avdtp_stream|struct|struct bt_avdtp_stream {
DECL|chan|member|struct bt_l2cap_br_chan chan; /* Transport Channel*/
DECL|id|member|u8_t id:6;
DECL|inuse|member|u8_t inuse:1;
DECL|lsep|member|struct bt_avdtp_seid_info lsep; /* Configured Local SEP */
DECL|media_type|member|u8_t media_type:4;
DECL|next|member|struct bt_avdtp_seid_lsep *next;
DECL|next|member|struct bt_avdtp_stream *next;
DECL|rfa0|member|u8_t rfa0:1;
DECL|rfa1|member|u8_t rfa1:3;
DECL|rsep|member|struct bt_avdtp_seid_info rsep; /* Configured Remote SEP*/
DECL|sep|member|struct bt_avdtp_seid_info sep;
DECL|state|member|u8_t state; /* current state of the stream */
DECL|tsep|member|u8_t tsep:1;
