DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_CONNECT_SCAN|enumerator|BT_CONN_CONNECT_SCAN,
DECL|BT_CONN_CONNECT|enumerator|BT_CONN_CONNECT,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_DISCONNECT|enumerator|BT_CONN_DISCONNECT,
DECL|att|member|void *att;
DECL|bt_conn_l2cap|struct|struct bt_conn_l2cap {
DECL|bt_conn_state_t|typedef|} bt_conn_state_t;
DECL|bt_conn|struct|struct bt_conn {
DECL|dev|member|struct bt_dev *dev;
DECL|dst|member|bt_addr_le_t dst;
DECL|encrypt|member|uint8_t encrypt;
DECL|handle|member|uint16_t handle;
DECL|ident|member|uint8_t ident;
DECL|keys|member|struct bt_keys *keys;
DECL|l2cap|member|struct bt_conn_l2cap l2cap;
DECL|le_conn_interval|member|uint8_t le_conn_interval;
DECL|ref|member|atomic_t ref;
DECL|role|member|uint8_t role;
DECL|rx_len|member|uint16_t rx_len;
DECL|rx|member|struct bt_buf *rx;
DECL|smp|member|void *smp;
DECL|src|member|bt_addr_le_t src;
DECL|state|member|bt_conn_state_t state;
DECL|tx_queue|member|struct nano_fifo tx_queue;
