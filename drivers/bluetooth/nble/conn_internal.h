DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_CONNECT|enumerator|BT_CONN_CONNECT,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_DISCONNECT|enumerator|BT_CONN_DISCONNECT,
DECL|bt_conn|struct|struct bt_conn {
DECL|dst|member|bt_addr_le_t dst;
DECL|gatt_notif_sem|member|struct k_sem gatt_notif_sem;
DECL|gatt_private|member|void *gatt_private;
DECL|handle|member|uint16_t handle;
DECL|interval|member|uint16_t interval;
DECL|latency|member|uint16_t latency;
DECL|ref|member|atomic_t ref;
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|role|member|uint8_t role;
DECL|sec_level|member|bt_security_t sec_level;
DECL|state|member|} state;
DECL|timeout|member|uint16_t timeout;
DECL|update_work|member|struct nano_delayed_work update_work;
