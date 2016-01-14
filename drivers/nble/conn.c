DECL|bt_conn_auth_cancel|function|int bt_conn_auth_cancel(struct bt_conn *conn)
DECL|bt_conn_auth_cb_register|function|int bt_conn_auth_cb_register(const struct bt_conn_auth_cb *cb)
DECL|bt_conn_auth_passkey_confirm|function|int bt_conn_auth_passkey_confirm(struct bt_conn *conn, bool match)
DECL|bt_conn_auth_passkey_entry|function|int bt_conn_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_conn_cb_register|function|void bt_conn_cb_register(struct bt_conn_cb *cb)
DECL|bt_conn_create_le|function|struct bt_conn *bt_conn_create_le(const bt_addr_le_t *peer, const struct bt_le_conn_param *param)
DECL|bt_conn_disconnect|function|int bt_conn_disconnect(struct bt_conn *conn, uint8_t reason)
DECL|bt_conn_enc_key_size|function|uint8_t bt_conn_enc_key_size(struct bt_conn *conn)
DECL|bt_conn_get_dst|function|const bt_addr_le_t *bt_conn_get_dst(const struct bt_conn *conn)
DECL|bt_conn_get_info|function|int bt_conn_get_info(const struct bt_conn *conn, struct bt_conn_info *info)
DECL|bt_conn_lookup_addr_le|function|struct bt_conn *bt_conn_lookup_addr_le(const bt_addr_le_t *peer)
DECL|bt_conn_ref|function|struct bt_conn *bt_conn_ref(struct bt_conn *conn)
DECL|bt_conn_security|function|int bt_conn_security(struct bt_conn *conn, bt_security_t sec)
DECL|bt_conn_unref|function|void bt_conn_unref(struct bt_conn *conn)
DECL|bt_le_set_auto_conn|function|int bt_le_set_auto_conn(bt_addr_le_t *addr,const struct bt_le_conn_param *param)
