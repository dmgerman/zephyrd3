DECL|BT_ATT_DEFAULT_LE_MTU|macro|BT_ATT_DEFAULT_LE_MTU
DECL|BT_ATT_ERR_ATTRIBUTE_NOT_FOUND|macro|BT_ATT_ERR_ATTRIBUTE_NOT_FOUND
DECL|BT_ATT_ERR_ATTRIBUTE_NOT_LONG|macro|BT_ATT_ERR_ATTRIBUTE_NOT_LONG
DECL|BT_ATT_ERR_AUTHENTICATION|macro|BT_ATT_ERR_AUTHENTICATION
DECL|BT_ATT_ERR_AUTHORIZATION|macro|BT_ATT_ERR_AUTHORIZATION
DECL|BT_ATT_ERR_ENCRYPTION_KEY_SIZE|macro|BT_ATT_ERR_ENCRYPTION_KEY_SIZE
DECL|BT_ATT_ERR_INSUFFICIENT_ENCRYPTION|macro|BT_ATT_ERR_INSUFFICIENT_ENCRYPTION
DECL|BT_ATT_ERR_INSUFFICIENT_RESOURCES|macro|BT_ATT_ERR_INSUFFICIENT_RESOURCES
DECL|BT_ATT_ERR_INVALID_ATTRIBUTE_LEN|macro|BT_ATT_ERR_INVALID_ATTRIBUTE_LEN
DECL|BT_ATT_ERR_INVALID_HANDLE|macro|BT_ATT_ERR_INVALID_HANDLE
DECL|BT_ATT_ERR_INVALID_OFFSET|macro|BT_ATT_ERR_INVALID_OFFSET
DECL|BT_ATT_ERR_INVALID_PDU|macro|BT_ATT_ERR_INVALID_PDU
DECL|BT_ATT_ERR_NOT_SUPPORTED|macro|BT_ATT_ERR_NOT_SUPPORTED
DECL|BT_ATT_ERR_PREPARE_QUEUE_FULL|macro|BT_ATT_ERR_PREPARE_QUEUE_FULL
DECL|BT_ATT_ERR_READ_NOT_PERMITTED|macro|BT_ATT_ERR_READ_NOT_PERMITTED
DECL|BT_ATT_ERR_UNLIKELY|macro|BT_ATT_ERR_UNLIKELY
DECL|BT_ATT_ERR_UNSUPPORTED_GROUP_TYPE|macro|BT_ATT_ERR_UNSUPPORTED_GROUP_TYPE
DECL|BT_ATT_ERR_WRITE_NOT_PERMITTED|macro|BT_ATT_ERR_WRITE_NOT_PERMITTED
DECL|BT_ATT_INFO_1|macro|BT_ATT_INFO_1
DECL|BT_ATT_INFO_2|macro|BT_ATT_INFO_2
DECL|BT_ATT_MAX_LE_MTU|macro|BT_ATT_MAX_LE_MTU
DECL|BT_ATT_OP_ERROR_RSP|macro|BT_ATT_OP_ERROR_RSP
DECL|BT_ATT_OP_FIND_INFO_REQ|macro|BT_ATT_OP_FIND_INFO_REQ
DECL|BT_ATT_OP_FIND_INFO_RSP|macro|BT_ATT_OP_FIND_INFO_RSP
DECL|BT_ATT_OP_FIND_TYPE_REQ|macro|BT_ATT_OP_FIND_TYPE_REQ
DECL|BT_ATT_OP_FIND_TYPE_RSP|macro|BT_ATT_OP_FIND_TYPE_RSP
DECL|BT_ATT_OP_MTU_REQ|macro|BT_ATT_OP_MTU_REQ
DECL|BT_ATT_OP_MTU_RSP|macro|BT_ATT_OP_MTU_RSP
DECL|BT_ATT_OP_READ_TYPE_REQ|macro|BT_ATT_OP_READ_TYPE_REQ
DECL|BT_ATT_OP_READ_TYPE_RSP|macro|BT_ATT_OP_READ_TYPE_RSP
DECL|BT_UUID_128|macro|BT_UUID_128
DECL|BT_UUID_16|macro|BT_UUID_16
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|bt_att_data|struct|struct bt_att_data {
DECL|bt_att_error_rsp|struct|struct bt_att_error_rsp {
DECL|bt_att_exchange_mtu_req|struct|struct bt_att_exchange_mtu_req {
DECL|bt_att_exchange_mtu_rsp|struct|struct bt_att_exchange_mtu_rsp {
DECL|bt_att_find_info_req|struct|struct bt_att_find_info_req {
DECL|bt_att_find_info_rsp|struct|struct bt_att_find_info_rsp {
DECL|bt_att_find_type_req|struct|struct bt_att_find_type_req {
DECL|bt_att_find_type_rsp|struct|struct bt_att_find_type_rsp {
DECL|bt_att_handle_group|struct|struct bt_att_handle_group {
DECL|bt_att_hdr|struct|struct bt_att_hdr {
DECL|bt_att_info_1|struct|struct bt_att_info_1 {
DECL|bt_att_info_2|struct|struct bt_att_info_2 {
DECL|bt_att_read_type_req|struct|struct bt_att_read_type_req {
DECL|bt_att_read_type_rsp|struct|struct bt_att_read_type_rsp {
DECL|bt_uuid|struct|struct bt_uuid {
DECL|code|member|uint8_t code;
DECL|data|member|struct bt_att_data data[0];
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|error|member|uint8_t error;
DECL|format|member|uint8_t format;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|info|member|uint8_t info[0];
DECL|len|member|uint8_t len;
DECL|list|member|struct bt_att_handle_group list[0];
DECL|mtu|member|uint16_t mtu;
DECL|mtu|member|uint16_t mtu;
DECL|request|member|uint8_t request;
DECL|start_handle|member|uint16_t start_handle;
DECL|start_handle|member|uint16_t start_handle;
DECL|start_handle|member|uint16_t start_handle;
DECL|start_handle|member|uint16_t start_handle;
DECL|type|member|uint16_t type;
DECL|type|member|uint8_t type;
DECL|u128|member|uint8_t u128[16];
DECL|u16|member|uint16_t u16;
DECL|uuid|member|uint16_t uuid;
DECL|uuid|member|uint8_t uuid[0];
DECL|uuid|member|uint8_t uuid[16];
DECL|value|member|uint8_t value[0];
DECL|value|member|uint8_t value[0];
