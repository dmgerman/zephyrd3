DECL|BT_ACL_IN|enumerator|BT_ACL_IN, /** Incoming ACL data */
DECL|BT_ACL_OUT|enumerator|BT_ACL_OUT, /** Outgoing ACL data */
DECL|BT_BUF_MAX_DATA|macro|BT_BUF_MAX_DATA
DECL|BT_CMD|enumerator|BT_CMD, /** HCI command */
DECL|BT_DUMMY|enumerator|BT_DUMMY = BT_CMD, /** Only used for waking up fibers */
DECL|BT_EVT|enumerator|BT_EVT, /** HCI event */
DECL|__BT_BUF_H|macro|__BT_BUF_H
DECL|__unused|member|int __unused;
DECL|acl|member|struct bt_buf_acl_data acl;
DECL|bt_buf_acl_data|struct|struct bt_buf_acl_data {
DECL|bt_buf_hci_data|struct|struct bt_buf_hci_data {
DECL|bt_buf_tail|macro|bt_buf_tail
DECL|bt_buf_type|enum|enum bt_buf_type {
DECL|bt_buf|struct|struct bt_buf {
DECL|buf|member|uint8_t buf[BT_BUF_MAX_DATA];
DECL|data|member|uint8_t *data;
DECL|handle|member|uint16_t handle;
DECL|hci|member|struct bt_buf_hci_data hci;
DECL|len|member|uint8_t len;
DECL|opcode|member|uint16_t opcode;
DECL|ref|member|uint8_t ref:5, /** Reference count */
DECL|sync|member|void *sync;
DECL|type|member|type:3; /** Type of data contained in the buffer */
