DECL|BT_MONITOR_ACL_RX_DROPS|macro|BT_MONITOR_ACL_RX_DROPS
DECL|BT_MONITOR_ACL_RX_PKT|macro|BT_MONITOR_ACL_RX_PKT
DECL|BT_MONITOR_ACL_TX_DROPS|macro|BT_MONITOR_ACL_TX_DROPS
DECL|BT_MONITOR_ACL_TX_PKT|macro|BT_MONITOR_ACL_TX_PKT
DECL|BT_MONITOR_BASE_HDR_LEN|macro|BT_MONITOR_BASE_HDR_LEN
DECL|BT_MONITOR_CLOSE_INDEX|macro|BT_MONITOR_CLOSE_INDEX
DECL|BT_MONITOR_COMMAND_DROPS|macro|BT_MONITOR_COMMAND_DROPS
DECL|BT_MONITOR_COMMAND_PKT|macro|BT_MONITOR_COMMAND_PKT
DECL|BT_MONITOR_DEL_INDEX|macro|BT_MONITOR_DEL_INDEX
DECL|BT_MONITOR_EVENT_DROPS|macro|BT_MONITOR_EVENT_DROPS
DECL|BT_MONITOR_EVENT_PKT|macro|BT_MONITOR_EVENT_PKT
DECL|BT_MONITOR_EXT_HDR_MAX|macro|BT_MONITOR_EXT_HDR_MAX
DECL|BT_MONITOR_EXT_HDR_MAX|macro|BT_MONITOR_EXT_HDR_MAX
DECL|BT_MONITOR_INDEX_INFO|macro|BT_MONITOR_INDEX_INFO
DECL|BT_MONITOR_NEW_INDEX|macro|BT_MONITOR_NEW_INDEX
DECL|BT_MONITOR_NOP|macro|BT_MONITOR_NOP
DECL|BT_MONITOR_OPEN_INDEX|macro|BT_MONITOR_OPEN_INDEX
DECL|BT_MONITOR_OTHER_DROPS|macro|BT_MONITOR_OTHER_DROPS
DECL|BT_MONITOR_SCO_RX_DROPS|macro|BT_MONITOR_SCO_RX_DROPS
DECL|BT_MONITOR_SCO_RX_PKT|macro|BT_MONITOR_SCO_RX_PKT
DECL|BT_MONITOR_SCO_TX_DROPS|macro|BT_MONITOR_SCO_TX_DROPS
DECL|BT_MONITOR_SCO_TX_PKT|macro|BT_MONITOR_SCO_TX_PKT
DECL|BT_MONITOR_SYSTEM_NOTE|macro|BT_MONITOR_SYSTEM_NOTE
DECL|BT_MONITOR_TS32|macro|BT_MONITOR_TS32
DECL|BT_MONITOR_TYPE_AMP|macro|BT_MONITOR_TYPE_AMP
DECL|BT_MONITOR_TYPE_PRIMARY|macro|BT_MONITOR_TYPE_PRIMARY
DECL|BT_MONITOR_USER_LOGGING|macro|BT_MONITOR_USER_LOGGING
DECL|BT_MONITOR_VENDOR_DIAG|macro|BT_MONITOR_VENDOR_DIAG
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|bdaddr|member|u8_t bdaddr[6];
DECL|bt_monitor_hdr|struct|struct bt_monitor_hdr {
DECL|bt_monitor_new_index|macro|bt_monitor_new_index
DECL|bt_monitor_new_index|struct|struct bt_monitor_new_index {
DECL|bt_monitor_opcode|function|static inline u8_t bt_monitor_opcode(struct net_buf *buf)
DECL|bt_monitor_send|macro|bt_monitor_send
DECL|bt_monitor_ts32|struct|struct bt_monitor_ts32 {
DECL|bt_monitor_user_logging|struct|struct bt_monitor_user_logging {
DECL|bus|member|u8_t bus;
DECL|data_len|member|u16_t data_len;
DECL|ext|member|u8_t ext[BT_MONITOR_EXT_HDR_MAX];
DECL|flags|member|u8_t flags;
DECL|hdr_len|member|u8_t hdr_len;
DECL|ident_len|member|u8_t ident_len;
DECL|name|member|char name[8];
DECL|opcode|member|u16_t opcode;
DECL|priority|member|u8_t priority;
DECL|ts32|member|u32_t ts32;
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
