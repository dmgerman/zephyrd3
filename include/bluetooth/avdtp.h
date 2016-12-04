DECL|__BT_AVDTP_H|macro|__BT_AVDTP_H
DECL|__packed|variable|__packed
DECL|bt_avdtp_seid_info|struct|struct bt_avdtp_seid_info {
DECL|bt_avdtp_seid_lsep|struct|struct bt_avdtp_seid_lsep {
DECL|id|member|uint8_t id:6;
DECL|inuse|member|uint8_t inuse:1;
DECL|media_type|member|uint8_t media_type:4;
DECL|next|member|struct bt_avdtp_seid_lsep *next;
DECL|rfa0|member|uint8_t rfa0:1;
DECL|rfa1|member|uint8_t rfa1:3;
DECL|sep|member|struct bt_avdtp_seid_info sep;
DECL|tsep|member|uint8_t tsep:1;
