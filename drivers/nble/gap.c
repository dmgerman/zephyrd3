DECL|bt_auth_cancel|function|int bt_auth_cancel(struct bt_conn *conn)
DECL|bt_auth_cb_register|function|int bt_auth_cb_register(const struct bt_auth_cb *cb)
DECL|bt_auth_passkey_confirm|function|int bt_auth_passkey_confirm(struct bt_conn *conn, bool match)
DECL|bt_auth_passkey_entry|function|int bt_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|bt_le_set_auto_conn|function|int bt_le_set_auto_conn(bt_addr_le_t *addr,const struct bt_le_conn_param *param)
