DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|CONN_TIMEOUT|macro|CONN_TIMEOUT
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|avail_acl_out|variable|avail_acl_out
DECL|bt_conn_add|function|struct bt_conn *bt_conn_add(const bt_addr_le_t *peer)
DECL|bt_conn_cb_register|function|void bt_conn_cb_register(struct bt_conn_cb *cb)
DECL|bt_conn_create_le|function|struct bt_conn *bt_conn_create_le(const bt_addr_le_t *peer)
DECL|bt_conn_create_pdu|function|struct net_buf *bt_conn_create_pdu(struct bt_conn *conn, size_t reserve)
DECL|bt_conn_disconnect|function|int bt_conn_disconnect(struct bt_conn *conn, uint8_t reason)
DECL|bt_conn_enc_key_size|function|uint8_t bt_conn_enc_key_size(struct bt_conn *conn)
DECL|bt_conn_get_dst|function|const bt_addr_le_t *bt_conn_get_dst(const struct bt_conn *conn)
DECL|bt_conn_identity_resolved|function|void bt_conn_identity_resolved(struct bt_conn *conn)
DECL|bt_conn_init|function|int bt_conn_init(void)
DECL|bt_conn_le_conn_update|function|int bt_conn_le_conn_update(struct bt_conn *conn, uint16_t min, uint16_t max, uint16_t latency, uint16_t timeout)
DECL|bt_conn_le_start_encryption|function|int bt_conn_le_start_encryption(struct bt_conn *conn, uint64_t rand,uint16_t ediv, const uint8_t *ltk, size_t len)
DECL|bt_conn_lookup_addr_le|function|struct bt_conn *bt_conn_lookup_addr_le(const bt_addr_le_t *peer)
DECL|bt_conn_lookup_handle|function|struct bt_conn *bt_conn_lookup_handle(uint16_t handle)
DECL|bt_conn_lookup_state|function|struct bt_conn *bt_conn_lookup_state(const bt_addr_le_t *peer, const bt_conn_state_t state)
DECL|bt_conn_recv|function|void bt_conn_recv(struct bt_conn *conn, struct net_buf *buf, uint8_t flags)
DECL|bt_conn_ref|function|struct bt_conn *bt_conn_ref(struct bt_conn *conn)
DECL|bt_conn_reset_rx_state|function|static void bt_conn_reset_rx_state(struct bt_conn *conn)
DECL|bt_conn_security_changed|function|void bt_conn_security_changed(struct bt_conn *conn)
DECL|bt_conn_security|function|int bt_conn_security(struct bt_conn *conn, bt_security_t sec)
DECL|bt_conn_send|function|void bt_conn_send(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_conn_set_auto_conn|function|void bt_conn_set_auto_conn(struct bt_conn *conn, bool auto_conn)
DECL|bt_conn_set_state|function|void bt_conn_set_state(struct bt_conn *conn, bt_conn_state_t state)
DECL|bt_conn_unref|function|void bt_conn_unref(struct bt_conn *conn)
DECL|bt_hci_connect_le_cancel|function|static int bt_hci_connect_le_cancel(struct bt_conn *conn)
DECL|bt_hci_disconnect|function|static int bt_hci_disconnect(struct bt_conn *conn, uint8_t reason)
DECL|callback_list|variable|callback_list
DECL|conn_tx_fiber|function|static void conn_tx_fiber(int arg1, int arg2)
DECL|conns|variable|conns
DECL|notify_connected|function|static void notify_connected(struct bt_conn *conn)
DECL|notify_disconnected|function|static void notify_disconnected(struct bt_conn *conn)
DECL|start_security|function|static int start_security(struct bt_conn *conn)
DECL|state2str|function|static const char *state2str(bt_conn_state_t state)
DECL|timeout_fiber|function|static void timeout_fiber(int arg1, int arg2)
