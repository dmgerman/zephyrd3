DECL|BT_CONN_AUTO_CONNECT|enumerator|BT_CONN_AUTO_CONNECT,
DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_CONNECT_SCAN|enumerator|BT_CONN_CONNECT_SCAN,
DECL|BT_CONN_CONNECT|enumerator|BT_CONN_CONNECT,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_DISCONNECT|enumerator|BT_CONN_DISCONNECT,
DECL|BT_CONN_TYPE_BREDR|enumerator|BT_CONN_TYPE_BREDR,
DECL|BT_CONN_TYPE_LE|enumerator|BT_CONN_TYPE_LE,
DECL|br|member|struct bt_conn_br br;
DECL|bt_conn_br|struct|struct bt_conn_br {
DECL|bt_conn_le|struct|struct bt_conn_le {
DECL|bt_conn_state_t|typedef|} bt_conn_state_t;
DECL|bt_conn|struct|struct bt_conn {
DECL|channels|member|void *channels;
DECL|conn_interval|member|uint8_t conn_interval;
DECL|dst|member|bt_addr_le_t dst;
DECL|encrypt|member|uint8_t encrypt;
DECL|features|member|uint8_t features[8];
DECL|flags|member|atomic_t flags[1];
DECL|handle|member|uint16_t handle;
DECL|init_addr|member|bt_addr_le_t init_addr;
DECL|keys|member|struct bt_keys *keys;
DECL|le|member|struct bt_conn_le le;
DECL|pending_pkts|member|uint8_t pending_pkts;
DECL|ref|member|atomic_t ref;
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|resp_addr|member|bt_addr_le_t resp_addr;
DECL|role|member|uint8_t role;
DECL|rx_len|member|uint16_t rx_len;
DECL|rx|member|struct net_buf *rx;
DECL|sec_level|member|bt_security_t sec_level;
DECL|state|member|bt_conn_state_t state;
DECL|timeout|member|void *timeout;
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|type|member|uint8_t type;
