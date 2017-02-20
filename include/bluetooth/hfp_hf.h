DECL|__BT_HFP_H|macro|__BT_HFP_H
DECL|battery|member|void (*battery)(struct bt_conn *conn, uint32_t value);
DECL|bt_hfp_hf_cb|struct|struct bt_hfp_hf_cb {
DECL|call_held|member|void (*call_held)(struct bt_conn *conn, uint32_t value);
DECL|call_setup|member|void (*call_setup)(struct bt_conn *conn, uint32_t value);
DECL|call|member|void (*call)(struct bt_conn *conn, uint32_t value);
DECL|connected|member|void (*connected)(struct bt_conn *conn);
DECL|disconnected|member|void (*disconnected)(struct bt_conn *conn);
DECL|ring_indication|member|void (*ring_indication)(struct bt_conn *conn);
DECL|roam|member|void (*roam)(struct bt_conn *conn, uint32_t value);
DECL|service|member|void (*service)(struct bt_conn *conn, uint32_t value);
DECL|signal|member|void (*signal)(struct bt_conn *conn, uint32_t value);
