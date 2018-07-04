DECL|BT_CONN_AUTO_CONNECT|enumerator|BT_CONN_AUTO_CONNECT,
DECL|BT_CONN_AUTO_DATA_LEN|enumerator|BT_CONN_AUTO_DATA_LEN, /* Auto data len change in progress */
DECL|BT_CONN_AUTO_PHY_UPDATE|enumerator|BT_CONN_AUTO_PHY_UPDATE, /* Auto-update PHY */
DECL|BT_CONN_BR_LEGACY_SECURE|enumerator|BT_CONN_BR_LEGACY_SECURE, /* 16 digits legacy PIN tracker */
DECL|BT_CONN_BR_NOBOND|enumerator|BT_CONN_BR_NOBOND, /* SSP no bond pairing tracker */
DECL|BT_CONN_BR_PAIRING_INITIATOR|enumerator|BT_CONN_BR_PAIRING_INITIATOR, /* local host starts authentication */
DECL|BT_CONN_BR_PAIRING|enumerator|BT_CONN_BR_PAIRING, /* BR connection in pairing context */
DECL|BT_CONN_CLEANUP|enumerator|BT_CONN_CLEANUP, /* Disconnected, pending cleanup */
DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_CONNECT_SCAN|enumerator|BT_CONN_CONNECT_SCAN,
DECL|BT_CONN_CONNECT|enumerator|BT_CONN_CONNECT,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_DISCONNECT|enumerator|BT_CONN_DISCONNECT,
DECL|BT_CONN_ID_INVALID|macro|BT_CONN_ID_INVALID
DECL|BT_CONN_NUM_FLAGS|enumerator|BT_CONN_NUM_FLAGS,
DECL|BT_CONN_USER|enumerator|BT_CONN_USER, /* user I/O when pairing */
DECL|LMP_MAX_PAGES|macro|LMP_MAX_PAGES
DECL|__packed|enum|typedef enum __packed {
DECL|acl|member|struct bt_conn *acl;
DECL|br|member|struct bt_conn_br br;
DECL|bt_conn_br|struct|struct bt_conn_br {
DECL|bt_conn_le|struct|struct bt_conn_le {
DECL|bt_conn_sco|struct|struct bt_conn_sco {
DECL|bt_conn_send|function|static inline int bt_conn_send(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_conn_state_t|typedef|} bt_conn_state_t;
DECL|bt_conn_tx_cb_t|typedef|typedef void (*bt_conn_tx_cb_t)(struct bt_conn *conn);
DECL|bt_conn_tx|struct|struct bt_conn_tx {
DECL|bt_conn|struct|struct bt_conn {
DECL|cb|member|bt_conn_tx_cb_t cb;
DECL|channels|member|sys_slist_t channels;
DECL|dst|member|bt_addr_le_t dst;
DECL|dst|member|bt_addr_t dst;
DECL|encrypt|member|u8_t encrypt;
DECL|err|member|u8_t err;
DECL|features|member|u8_t features[8];
DECL|features|member|u8_t features[LMP_MAX_PAGES][8];
DECL|handle|member|u16_t handle;
DECL|id|member|u8_t id;
DECL|init_addr|member|bt_addr_le_t init_addr;
DECL|interval_max|member|u16_t interval_max;
DECL|interval_min|member|u16_t interval_min;
DECL|interval|member|u16_t interval;
DECL|keys|member|struct bt_keys *keys;
DECL|latency|member|u16_t latency;
DECL|le|member|struct bt_conn_le le;
DECL|link_key|member|struct bt_keys_link_key *link_key;
DECL|node|member|sys_snode_t node;
DECL|pairing_method|member|u8_t pairing_method;
DECL|pkt_type|member|u16_t pkt_type;
DECL|ref|member|atomic_t ref;
DECL|remote_auth|member|u8_t remote_auth;
DECL|remote_io_capa|member|u8_t remote_io_capa;
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|resp_addr|member|bt_addr_le_t resp_addr;
DECL|role|member|u8_t role;
DECL|rx_len|member|u16_t rx_len;
DECL|rx|member|struct net_buf *rx;
DECL|sco|member|struct bt_conn_sco sco;
DECL|sec_level|member|bt_security_t sec_level;
DECL|state|member|bt_conn_state_t state;
DECL|timeout|member|u16_t timeout;
DECL|tx_notify|member|struct k_fifo tx_notify;
DECL|tx_pending|member|sys_slist_t tx_pending;
DECL|tx_queue|member|struct k_fifo tx_queue;
DECL|type|member|u8_t type;
DECL|update_work|member|struct k_delayed_work update_work;
