DECL|BT_CONN_AUTO_CONNECT|enumerator|BT_CONN_AUTO_CONNECT,
DECL|BT_CONN_BR_LEGACY_SECURE|enumerator|BT_CONN_BR_LEGACY_SECURE, /* 16 digits legacy PIN tracker */
DECL|BT_CONN_BR_NOBOND|enumerator|BT_CONN_BR_NOBOND, /* SSP no bond pairing tracker */
DECL|BT_CONN_BR_PAIRING_INITIATOR|enumerator|BT_CONN_BR_PAIRING_INITIATOR, /* local host starts authentication */
DECL|BT_CONN_BR_PAIRING|enumerator|BT_CONN_BR_PAIRING, /* BR connection in pairing context */
DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_CONNECT_SCAN|enumerator|BT_CONN_CONNECT_SCAN,
DECL|BT_CONN_CONNECT|enumerator|BT_CONN_CONNECT,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_DISCONNECT|enumerator|BT_CONN_DISCONNECT,
DECL|BT_CONN_NUM_FLAGS|enumerator|BT_CONN_NUM_FLAGS,
DECL|BT_CONN_USER|enumerator|BT_CONN_USER, /* user I/O when pairing */
DECL|LMP_MAX_PAGES|macro|LMP_MAX_PAGES
DECL|__packed|enum|typedef enum __packed {
DECL|br|member|struct bt_conn_br br;
DECL|bt_conn_br|struct|struct bt_conn_br {
DECL|bt_conn_get_pkts|function|static inline struct nano_sem *bt_conn_get_pkts(struct bt_conn *conn)
DECL|bt_conn_le|struct|struct bt_conn_le {
DECL|bt_conn_state_t|typedef|} bt_conn_state_t;
DECL|bt_conn|struct|struct bt_conn {
DECL|channels|member|void *channels;
DECL|dst|member|bt_addr_le_t dst;
DECL|dst|member|bt_addr_t dst;
DECL|encrypt|member|uint8_t encrypt;
DECL|err|member|uint8_t err;
DECL|features|member|uint8_t features[1][8];
DECL|features|member|uint8_t features[LMP_MAX_PAGES][8];
DECL|handle|member|uint16_t handle;
DECL|init_addr|member|bt_addr_le_t init_addr;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval|member|uint16_t interval;
DECL|keys|member|struct bt_keys *keys;
DECL|latency|member|uint16_t latency;
DECL|le|member|struct bt_conn_le le;
DECL|link_key|member|struct bt_keys_link_key *link_key;
DECL|pairing_method|member|uint8_t pairing_method;
DECL|pending_pkts|member|uint8_t pending_pkts;
DECL|ref|member|atomic_t ref;
DECL|remote_auth|member|uint8_t remote_auth;
DECL|remote_io_capa|member|uint8_t remote_io_capa;
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|resp_addr|member|bt_addr_le_t resp_addr;
DECL|role|member|uint8_t role;
DECL|rx_len|member|uint16_t rx_len;
DECL|rx|member|struct net_buf *rx;
DECL|sec_level|member|bt_security_t sec_level;
DECL|state|member|bt_conn_state_t state;
DECL|timeout|member|nano_thread_id_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|type|member|uint8_t type;
DECL|update_work|member|struct nano_delayed_work update_work;
