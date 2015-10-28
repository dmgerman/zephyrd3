DECL|BT_ACL_IN|enumerator|BT_ACL_IN, /** Incoming ACL data */
DECL|BT_ACL_OUT|enumerator|BT_ACL_OUT, /** Outgoing ACL data */
DECL|BT_BUF_ACL_IN_MAX|macro|BT_BUF_ACL_IN_MAX
DECL|BT_BUF_ACL_OUT_MAX|macro|BT_BUF_ACL_OUT_MAX
DECL|BT_BUF_MAX_DATA|macro|BT_BUF_MAX_DATA
DECL|BT_CMD|enumerator|BT_CMD, /** HCI command */
DECL|BT_DUMMY|enumerator|BT_DUMMY = BT_CMD, /** Only used for waking up fibers */
DECL|BT_EVT|enumerator|BT_EVT, /** HCI event */
DECL|__BT_BUF_H|macro|__BT_BUF_H
DECL|bt_acl_data|struct|struct bt_acl_data {
DECL|bt_buf_type|enum|enum bt_buf_type {
DECL|bt_hci_data|struct|struct bt_hci_data {
DECL|handle|member|uint16_t handle;
DECL|opcode|member|uint16_t opcode;
DECL|sync|member|void *sync;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
