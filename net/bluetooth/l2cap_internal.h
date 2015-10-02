DECL|BT_L2CAP_CID_ATT|macro|BT_L2CAP_CID_ATT
DECL|BT_L2CAP_CID_LE_SIG|macro|BT_L2CAP_CID_LE_SIG
DECL|BT_L2CAP_CID_SMP|macro|BT_L2CAP_CID_SMP
DECL|BT_L2CAP_CMD_REJECT|macro|BT_L2CAP_CMD_REJECT
DECL|BT_L2CAP_CONN_PARAM_ACCEPTED|macro|BT_L2CAP_CONN_PARAM_ACCEPTED
DECL|BT_L2CAP_CONN_PARAM_REJECTED|macro|BT_L2CAP_CONN_PARAM_REJECTED
DECL|BT_L2CAP_CONN_PARAM_REQ|macro|BT_L2CAP_CONN_PARAM_REQ
DECL|BT_L2CAP_CONN_PARAM_RSP|macro|BT_L2CAP_CONN_PARAM_RSP
DECL|BT_L2CAP_ERR_AUTHENTICATION|macro|BT_L2CAP_ERR_AUTHENTICATION
DECL|BT_L2CAP_ERR_AUTHORIZATION|macro|BT_L2CAP_ERR_AUTHORIZATION
DECL|BT_L2CAP_ERR_ENCRYPTION|macro|BT_L2CAP_ERR_ENCRYPTION
DECL|BT_L2CAP_ERR_INVALID_SCID|macro|BT_L2CAP_ERR_INVALID_SCID
DECL|BT_L2CAP_ERR_KEY_SIZE|macro|BT_L2CAP_ERR_KEY_SIZE
DECL|BT_L2CAP_ERR_NO_RESOURCES|macro|BT_L2CAP_ERR_NO_RESOURCES
DECL|BT_L2CAP_ERR_PSM_NOT_SUPP|macro|BT_L2CAP_ERR_PSM_NOT_SUPP
DECL|BT_L2CAP_ERR_SCID_IN_USE|macro|BT_L2CAP_ERR_SCID_IN_USE
DECL|BT_L2CAP_LE_CONN_REQ|macro|BT_L2CAP_LE_CONN_REQ
DECL|BT_L2CAP_LE_CONN_RSP|macro|BT_L2CAP_LE_CONN_RSP
DECL|BT_L2CAP_REJ_INVALID_CID|macro|BT_L2CAP_REJ_INVALID_CID
DECL|BT_L2CAP_REJ_MTU_EXCEEDED|macro|BT_L2CAP_REJ_MTU_EXCEEDED
DECL|BT_L2CAP_REJ_NOT_UNDERSTOOD|macro|BT_L2CAP_REJ_NOT_UNDERSTOOD
DECL|BT_L2CAP_SUCCESS|macro|BT_L2CAP_SUCCESS
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|_next|member|struct bt_l2cap_fixed_chan *_next;
DECL|accept|member|int (*accept)(struct bt_conn *conn, struct bt_l2cap_chan **chan);
DECL|bt_l2cap_cmd_reject|struct|struct bt_l2cap_cmd_reject {
DECL|bt_l2cap_conn_param_req|struct|struct bt_l2cap_conn_param_req {
DECL|bt_l2cap_conn_param_rsp|struct|struct bt_l2cap_conn_param_rsp {
DECL|bt_l2cap_fixed_chan|struct|struct bt_l2cap_fixed_chan {
DECL|bt_l2cap_hdr|struct|struct bt_l2cap_hdr {
DECL|bt_l2cap_le_conn_req|struct|struct bt_l2cap_le_conn_req {
DECL|bt_l2cap_le_conn_rsp|struct|struct bt_l2cap_le_conn_rsp {
DECL|bt_l2cap_sig_hdr|struct|struct bt_l2cap_sig_hdr {
DECL|cid|member|uint16_t cid;
DECL|cid|member|uint16_t cid;
DECL|code|member|uint8_t code;
DECL|credits|member|uint16_t credits;
DECL|credits|member|uint16_t credits;
DECL|data|member|uint8_t data[0];
DECL|dcid|member|uint16_t dcid;
DECL|ident|member|uint8_t ident;
DECL|latency|member|uint16_t latency;
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|max_interval|member|uint16_t max_interval;
DECL|min_interval|member|uint16_t min_interval;
DECL|mps|member|uint16_t mps;
DECL|mps|member|uint16_t mps;
DECL|mtu|member|uint16_t mtu;
DECL|mtu|member|uint16_t mtu;
DECL|psm|member|uint16_t psm;
DECL|reason|member|uint16_t reason;
DECL|result|member|uint16_t result;
DECL|result|member|uint16_t result;
DECL|scid|member|uint16_t scid;
DECL|timeout|member|uint16_t timeout;
