DECL|BT_HFP_HF_ATA|enumerator|BT_HFP_HF_ATA,
DECL|BT_HFP_HF_AT_CHUP|enumerator|BT_HFP_HF_AT_CHUP,
DECL|HFP_HF_CMD_CME_ERROR|macro|HFP_HF_CMD_CME_ERROR
DECL|HFP_HF_CMD_ERROR|macro|HFP_HF_CMD_ERROR
DECL|HFP_HF_CMD_OK|macro|HFP_HF_CMD_OK
DECL|HFP_HF_CMD_UNKNOWN_ERROR|macro|HFP_HF_CMD_UNKNOWN_ERROR
DECL|ZEPHYR_INCLUDE_BLUETOOTH_HFP_HF_H_|macro|ZEPHYR_INCLUDE_BLUETOOTH_HFP_HF_H_
DECL|battery|member|void (*battery)(struct bt_conn *conn, u32_t value);
DECL|bt_hfp_hf_at_cmd|enum|enum bt_hfp_hf_at_cmd {
DECL|bt_hfp_hf_cb|struct|struct bt_hfp_hf_cb {
DECL|bt_hfp_hf_cmd_complete|struct|struct bt_hfp_hf_cmd_complete {
DECL|call_held|member|void (*call_held)(struct bt_conn *conn, u32_t value);
DECL|call_setup|member|void (*call_setup)(struct bt_conn *conn, u32_t value);
DECL|call|member|void (*call)(struct bt_conn *conn, u32_t value);
DECL|cmd_complete_cb|member|void (*cmd_complete_cb)(struct bt_conn *conn,
DECL|cme|member|u8_t cme;
DECL|connected|member|void (*connected)(struct bt_conn *conn);
DECL|disconnected|member|void (*disconnected)(struct bt_conn *conn);
DECL|ring_indication|member|void (*ring_indication)(struct bt_conn *conn);
DECL|roam|member|void (*roam)(struct bt_conn *conn, u32_t value);
DECL|service|member|void (*service)(struct bt_conn *conn, u32_t value);
DECL|signal|member|void (*signal)(struct bt_conn *conn, u32_t value);
DECL|type|member|u8_t type;
