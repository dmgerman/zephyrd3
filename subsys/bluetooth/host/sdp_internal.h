DECL|BT_SDP_ERROR_RSP|macro|BT_SDP_ERROR_RSP
DECL|BT_SDP_INVALID_CSTATE|macro|BT_SDP_INVALID_CSTATE
DECL|BT_SDP_INVALID_PDU_SIZE|macro|BT_SDP_INVALID_PDU_SIZE
DECL|BT_SDP_INVALID_RECORD_HANDLE|macro|BT_SDP_INVALID_RECORD_HANDLE
DECL|BT_SDP_INVALID_SYNTAX|macro|BT_SDP_INVALID_SYNTAX
DECL|BT_SDP_INVALID_VERSION|macro|BT_SDP_INVALID_VERSION
DECL|BT_SDP_MAX_ATTR_LEN|macro|BT_SDP_MAX_ATTR_LEN
DECL|BT_SDP_MAX_PDU_CSTATE_LEN|macro|BT_SDP_MAX_PDU_CSTATE_LEN
DECL|BT_SDP_MAX_SERVICES|macro|BT_SDP_MAX_SERVICES
DECL|BT_SDP_SVC_ATTR_REQ|macro|BT_SDP_SVC_ATTR_REQ
DECL|BT_SDP_SVC_ATTR_RSP|macro|BT_SDP_SVC_ATTR_RSP
DECL|BT_SDP_SVC_REGISTER_REQ|macro|BT_SDP_SVC_REGISTER_REQ
DECL|BT_SDP_SVC_REGISTER_RSP|macro|BT_SDP_SVC_REGISTER_RSP
DECL|BT_SDP_SVC_REMOVE_REQ|macro|BT_SDP_SVC_REMOVE_REQ
DECL|BT_SDP_SVC_REMOVE_RSP|macro|BT_SDP_SVC_REMOVE_RSP
DECL|BT_SDP_SVC_SEARCH_ATTR_REQ|macro|BT_SDP_SVC_SEARCH_ATTR_REQ
DECL|BT_SDP_SVC_SEARCH_ATTR_RSP|macro|BT_SDP_SVC_SEARCH_ATTR_RSP
DECL|BT_SDP_SVC_SEARCH_REQ|macro|BT_SDP_SVC_SEARCH_REQ
DECL|BT_SDP_SVC_SEARCH_RSP|macro|BT_SDP_SVC_SEARCH_RSP
DECL|BT_SDP_SVC_UPDATE_REQ|macro|BT_SDP_SVC_UPDATE_REQ
DECL|BT_SDP_SVC_UPDATE_RSP|macro|BT_SDP_SVC_UPDATE_RSP
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|att_list_len|member|u16_t att_list_len;
DECL|bt_sdp_att_rsp|struct|struct bt_sdp_att_rsp {
DECL|bt_sdp_data_elem_seq|struct|struct bt_sdp_data_elem_seq {
DECL|bt_sdp_hdr|struct|struct bt_sdp_hdr {
DECL|bt_sdp_pdu_cstate|struct|struct bt_sdp_pdu_cstate {
DECL|bt_sdp_svc_rsp|struct|struct bt_sdp_svc_rsp {
DECL|current_recs|member|u16_t current_recs;
DECL|data|member|u8_t data[BT_SDP_MAX_PDU_CSTATE_LEN];
DECL|length|member|u8_t length;
DECL|op_code|member|u8_t op_code;
DECL|param_len|member|u16_t param_len;
DECL|size|member|u16_t size; /* We only support 2 byte sizes for now */
DECL|tid|member|u16_t tid;
DECL|total_recs|member|u16_t total_recs;
DECL|type|member|u8_t type; /* Type: Will be data element sequence */
