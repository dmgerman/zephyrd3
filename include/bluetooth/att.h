DECL|BT_ATT_ERR_ATTRIBUTE_NOT_FOUND|macro|BT_ATT_ERR_ATTRIBUTE_NOT_FOUND
DECL|BT_ATT_ERR_ATTRIBUTE_NOT_LONG|macro|BT_ATT_ERR_ATTRIBUTE_NOT_LONG
DECL|BT_ATT_ERR_AUTHENTICATION|macro|BT_ATT_ERR_AUTHENTICATION
DECL|BT_ATT_ERR_AUTHORIZATION|macro|BT_ATT_ERR_AUTHORIZATION
DECL|BT_ATT_ERR_CCC_IMPROPER_CONF|macro|BT_ATT_ERR_CCC_IMPROPER_CONF
DECL|BT_ATT_ERR_ENCRYPTION_KEY_SIZE|macro|BT_ATT_ERR_ENCRYPTION_KEY_SIZE
DECL|BT_ATT_ERR_INSUFFICIENT_ENCRYPTION|macro|BT_ATT_ERR_INSUFFICIENT_ENCRYPTION
DECL|BT_ATT_ERR_INSUFFICIENT_RESOURCES|macro|BT_ATT_ERR_INSUFFICIENT_RESOURCES
DECL|BT_ATT_ERR_INVALID_ATTRIBUTE_LEN|macro|BT_ATT_ERR_INVALID_ATTRIBUTE_LEN
DECL|BT_ATT_ERR_INVALID_HANDLE|macro|BT_ATT_ERR_INVALID_HANDLE
DECL|BT_ATT_ERR_INVALID_OFFSET|macro|BT_ATT_ERR_INVALID_OFFSET
DECL|BT_ATT_ERR_INVALID_PDU|macro|BT_ATT_ERR_INVALID_PDU
DECL|BT_ATT_ERR_NOT_SUPPORTED|macro|BT_ATT_ERR_NOT_SUPPORTED
DECL|BT_ATT_ERR_OUT_OF_RANGE|macro|BT_ATT_ERR_OUT_OF_RANGE
DECL|BT_ATT_ERR_PREPARE_QUEUE_FULL|macro|BT_ATT_ERR_PREPARE_QUEUE_FULL
DECL|BT_ATT_ERR_PROCEDURE_IN_PROGRESS|macro|BT_ATT_ERR_PROCEDURE_IN_PROGRESS
DECL|BT_ATT_ERR_READ_NOT_PERMITTED|macro|BT_ATT_ERR_READ_NOT_PERMITTED
DECL|BT_ATT_ERR_UNLIKELY|macro|BT_ATT_ERR_UNLIKELY
DECL|BT_ATT_ERR_UNSUPPORTED_GROUP_TYPE|macro|BT_ATT_ERR_UNSUPPORTED_GROUP_TYPE
DECL|BT_ATT_ERR_WRITE_NOT_PERMITTED|macro|BT_ATT_ERR_WRITE_NOT_PERMITTED
DECL|__BT_ATT_H|macro|__BT_ATT_H
DECL|bt_att_destroy_t|typedef|typedef void (*bt_att_destroy_t)(void *user_data);
DECL|bt_att_func_t|typedef|typedef void (*bt_att_func_t)(struct bt_conn *conn, uint8_t err,
DECL|bt_att_req|struct|struct bt_att_req {
DECL|buf|member|struct net_buf *buf;
DECL|destroy|member|bt_att_destroy_t destroy;
DECL|func|member|bt_att_func_t func;
DECL|node|member|sys_snode_t node;
DECL|retrying|member|bool retrying;
