DECL|BT_SMP_AUTH_BONDING|macro|BT_SMP_AUTH_BONDING
DECL|BT_SMP_AUTH_MITM|macro|BT_SMP_AUTH_MITM
DECL|BT_SMP_AUTH_NONE|macro|BT_SMP_AUTH_NONE
DECL|BT_SMP_AUTH_SC|macro|BT_SMP_AUTH_SC
DECL|bt_auth|variable|bt_auth
DECL|bt_conn_auth_cancel|function|int bt_conn_auth_cancel(struct bt_conn *conn)
DECL|bt_conn_auth_cb_register|function|int bt_conn_auth_cb_register(const struct bt_conn_auth_cb *cb)
DECL|bt_conn_auth_passkey_confirm|function|int bt_conn_auth_passkey_confirm(struct bt_conn *conn)
DECL|bt_conn_auth_passkey_entry|function|int bt_conn_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_conn_cb_register|function|void bt_conn_cb_register(struct bt_conn_cb *cb)
DECL|bt_conn_create_le|function|struct bt_conn *bt_conn_create_le(const bt_addr_le_t *peer, const struct bt_le_conn_param *param)
DECL|bt_conn_create_slave_le|function|struct bt_conn *bt_conn_create_slave_le(const bt_addr_le_t *peer,const struct bt_le_adv_param *param)
DECL|bt_conn_disconnect|function|int bt_conn_disconnect(struct bt_conn *conn, uint8_t reason)
DECL|bt_conn_enc_key_size|function|uint8_t bt_conn_enc_key_size(struct bt_conn *conn)
DECL|bt_conn_get_dst|function|const bt_addr_le_t *bt_conn_get_dst(const struct bt_conn *conn)
DECL|bt_conn_get_info|function|int bt_conn_get_info(const struct bt_conn *conn, struct bt_conn_info *info)
DECL|bt_conn_le_param_update|function|int bt_conn_le_param_update(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_lookup_addr_le|function|struct bt_conn *bt_conn_lookup_addr_le(const bt_addr_le_t *peer)
DECL|bt_conn_lookup_handle|function|struct bt_conn *bt_conn_lookup_handle(uint16_t handle)
DECL|bt_conn_ref|function|struct bt_conn *bt_conn_ref(struct bt_conn *conn)
DECL|bt_conn_security|function|int bt_conn_security(struct bt_conn *conn, bt_security_t sec)
DECL|bt_conn_unref|function|void bt_conn_unref(struct bt_conn *conn)
DECL|bt_le_conn_params_valid|function|static inline bool bt_le_conn_params_valid(uint16_t min, uint16_t max, uint16_t latency, uint16_t timeout)
DECL|bt_le_set_auto_conn|function|int bt_le_set_auto_conn(bt_addr_le_t *addr,const struct bt_le_conn_param *param)
DECL|callback_list|variable|callback_list
DECL|conn_new|function|static struct bt_conn *conn_new(void)
DECL|conns|variable|conns
DECL|notify_connected|function|static void notify_connected(struct bt_conn *conn)
DECL|notify_disconnected|function|static void notify_disconnected(struct bt_conn *conn)
DECL|on_nble_gap_cancel_connect_rsp|function|void on_nble_gap_cancel_connect_rsp(const struct nble_response *rsp)
DECL|on_nble_gap_conn_update_evt|function|void on_nble_gap_conn_update_evt(const struct nble_gap_conn_update_evt *ev)
DECL|on_nble_gap_connect_evt|function|void on_nble_gap_connect_evt(const struct nble_gap_connect_evt *ev)
DECL|on_nble_gap_connect_rsp|function|void on_nble_gap_connect_rsp(const struct nble_response *rsp)
DECL|on_nble_gap_disconnect_evt|function|void on_nble_gap_disconnect_evt(const struct nble_gap_disconnect_evt *ev)
DECL|on_nble_gap_disconnect_rsp|function|void on_nble_gap_disconnect_rsp(const struct nble_response *rsp)
