DECL|BT_L2CAP_CID_ATT|macro|BT_L2CAP_CID_ATT
DECL|BT_L2CAP_CID_LE_SIG|macro|BT_L2CAP_CID_LE_SIG
DECL|BT_L2CAP_CID_SMP|macro|BT_L2CAP_CID_SMP
DECL|BT_L2CAP_CMD_REJECT|macro|BT_L2CAP_CMD_REJECT
DECL|BT_L2CAP_CONN_PARAM_REQ|macro|BT_L2CAP_CONN_PARAM_REQ
DECL|BT_L2CAP_CONN_PARAM_RSP|macro|BT_L2CAP_CONN_PARAM_RSP
DECL|BT_L2CAP_REJ_INVALID_CID|macro|BT_L2CAP_REJ_INVALID_CID
DECL|BT_L2CAP_REJ_MTU_EXCEEDED|macro|BT_L2CAP_REJ_MTU_EXCEEDED
DECL|BT_L2CAP_REJ_NOT_UNDERSTOOD|macro|BT_L2CAP_REJ_NOT_UNDERSTOOD
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|_next|member|struct bt_l2cap_chan *_next;
DECL|bt_l2cap_chan|struct|struct bt_l2cap_chan {
DECL|bt_l2cap_cmd_reject|struct|struct bt_l2cap_cmd_reject {
DECL|bt_l2cap_conn_param_req|struct|struct bt_l2cap_conn_param_req {
DECL|bt_l2cap_conn_param_rsp|struct|struct bt_l2cap_conn_param_rsp {
DECL|bt_l2cap_hdr|struct|struct bt_l2cap_hdr {
DECL|bt_l2cap_sig_hdr|struct|struct bt_l2cap_sig_hdr {
DECL|cid|member|uint16_t cid;
DECL|cid|member|uint16_t cid;
DECL|code|member|uint8_t code;
DECL|data|member|uint8_t data[0];
DECL|ident|member|uint8_t ident;
DECL|latency|member|uint16_t latency;
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|max_interval|member|uint16_t max_interval;
DECL|min_interval|member|uint16_t min_interval;
DECL|reason|member|uint16_t reason;
DECL|recv|member|void (*recv)(struct bt_conn *conn,
DECL|result|member|uint16_t result;
DECL|timeout|member|uint16_t timeout;
