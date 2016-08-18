DECL|BT_RFCOMM_BUF_SIZE|macro|BT_RFCOMM_BUF_SIZE
DECL|BT_RFCOMM_SIG_MIN_MTU|macro|BT_RFCOMM_SIG_MIN_MTU
DECL|BT_RFCOMM_STATE_IDLE|enumerator|BT_RFCOMM_STATE_IDLE,
DECL|BT_RFCOMM_STATE_INIT|enumerator|BT_RFCOMM_STATE_INIT,
DECL|__packed|variable|__packed
DECL|address|member|uint8_t address;
DECL|br_chan|member|struct bt_l2cap_br_chan br_chan;
DECL|bt_rfcomm_hdr|struct|struct bt_rfcomm_hdr {
DECL|bt_rfcomm_session|struct|struct bt_rfcomm_session {
DECL|control|member|uint8_t control;
DECL|dlcs|member|struct bt_rfcomm_dlc *dlcs;
DECL|length|member|uint8_t length;
DECL|state|member|uint8_t state;
