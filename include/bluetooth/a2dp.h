DECL|BT_A2DP_ATRAC|enumerator|BT_A2DP_ATRAC = 0x04,
DECL|BT_A2DP_AUDIO|enumerator|BT_A2DP_AUDIO = 0x00,
DECL|BT_A2DP_MPEG1|enumerator|BT_A2DP_MPEG1 = 0x01,
DECL|BT_A2DP_MPEG2|enumerator|BT_A2DP_MPEG2 = 0x02,
DECL|BT_A2DP_MULTIMEDIA|enumerator|BT_A2DP_MULTIMEDIA = 0x02
DECL|BT_A2DP_SBC|enumerator|BT_A2DP_SBC = 0x00,
DECL|BT_A2DP_SINK|enumerator|BT_A2DP_SINK = 1
DECL|BT_A2DP_SOURCE|enumerator|BT_A2DP_SOURCE = 0,
DECL|BT_A2DP_VENDOR|enumerator|BT_A2DP_VENDOR = 0xff
DECL|BT_A2DP_VIDEO|enumerator|BT_A2DP_VIDEO = 0x01,
DECL|MEDIA_TYPE|enum|enum MEDIA_TYPE {
DECL|ROLE_TYPE|enum|enum ROLE_TYPE {
DECL|ZEPHYR_INCLUDE_BLUETOOTH_A2DP_H_|macro|ZEPHYR_INCLUDE_BLUETOOTH_A2DP_H_
DECL|bt_a2dp_codec_id|enum|enum bt_a2dp_codec_id {
DECL|bt_a2dp_endpoint|struct|struct bt_a2dp_endpoint {
DECL|bt_a2dp_preset|struct|struct bt_a2dp_preset {
DECL|bt_a2dp_stream|struct|struct bt_a2dp_stream {
DECL|caps|member|struct bt_a2dp_preset *caps;
DECL|codec_id|member|u8_t codec_id;
DECL|info|member|struct bt_avdtp_seid_lsep info;
DECL|len|member|u8_t len;
DECL|preset|member|struct bt_a2dp_preset *preset;
DECL|preset|member|u8_t preset[0];
