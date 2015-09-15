DECL|BT_CONN_AUTO_CONNECT|enumerator|BT_CONN_AUTO_CONNECT,
DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_CONNECT_SCAN|enumerator|BT_CONN_CONNECT_SCAN,
DECL|BT_CONN_CONNECT|enumerator|BT_CONN_CONNECT,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_DISCONNECT|enumerator|BT_CONN_DISCONNECT,
DECL|att|member|void *att;
DECL|bt_conn_l2cap|struct|struct bt_conn_l2cap {
DECL|bt_conn_state_t|typedef|} bt_conn_state_t;
DECL|bt_conn|struct|struct bt_conn {
DECL|dst|member|bt_addr_le_t dst;
DECL|encrypt|member|uint8_t encrypt;
DECL|flags|member|atomic_t flags[1];
DECL|handle|member|uint16_t handle;
DECL|ident|member|uint8_t ident;
DECL|init_addr|member|bt_addr_le_t init_addr;
DECL|keys|member|struct bt_keys *keys;
DECL|l2cap|member|struct bt_conn_l2cap l2cap;
DECL|le_conn_interval|member|uint8_t le_conn_interval;
DECL|le_features|member|uint8_t le_features[8];
DECL|pending_pkts|member|uint8_t pending_pkts;
DECL|ref|member|atomic_t ref;
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|resp_addr|member|bt_addr_le_t resp_addr;
DECL|role|member|uint8_t role;
DECL|rx_len|member|uint16_t rx_len;
DECL|rx|member|struct bt_buf *rx;
DECL|sec_level|member|bt_security_t sec_level;
DECL|smp|member|void *smp;
DECL|state|member|bt_conn_state_t state;
DECL|timeout|member|void *timeout;
DECL|tx_queue|member|struct nano_fifo tx_queue;
