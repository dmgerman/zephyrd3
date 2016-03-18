DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|CONN_TIMEOUT|macro|CONN_TIMEOUT
DECL|JUST_WORKS|enumerator|JUST_WORKS, /* JustWorks pairing */
DECL|LEGACY|enumerator|LEGACY, /* Legacy (pre-SSP) pairing */
DECL|PASSKEY_CONFIRM|enumerator|PASSKEY_CONFIRM, /* Passkey confirm */
DECL|PASSKEY_DISPLAY|enumerator|PASSKEY_DISPLAY, /* Passkey Entry display */
DECL|PASSKEY_INPUT|enumerator|PASSKEY_INPUT, /* Passkey Entry input */
DECL|background_scan_init|function|static void background_scan_init(void)
DECL|bt_auth|variable|bt_auth
DECL|bt_conn_add_br|function|struct bt_conn *bt_conn_add_br(const bt_addr_t *peer)
DECL|bt_conn_add_le|function|struct bt_conn *bt_conn_add_le(const bt_addr_le_t *peer)
DECL|bt_conn_auth_cancel|function|int bt_conn_auth_cancel(struct bt_conn *conn)
DECL|bt_conn_auth_cb_register|function|int bt_conn_auth_cb_register(const struct bt_conn_auth_cb *cb)
DECL|bt_conn_auth_pairing_confirm|function|int bt_conn_auth_pairing_confirm(struct bt_conn *conn)
DECL|bt_conn_auth_passkey_confirm|function|int bt_conn_auth_passkey_confirm(struct bt_conn *conn)
DECL|bt_conn_auth_passkey_entry|function|int bt_conn_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_conn_auth_pincode_entry|function|int bt_conn_auth_pincode_entry(struct bt_conn *conn, const char *pin)
DECL|bt_conn_cb_register|function|void bt_conn_cb_register(struct bt_conn_cb *cb)
DECL|bt_conn_create_br|function|struct bt_conn *bt_conn_create_br(const bt_addr_t *peer, const struct bt_br_conn_param *param)
DECL|bt_conn_create_le|function|struct bt_conn *bt_conn_create_le(const bt_addr_le_t *peer, const struct bt_le_conn_param *param)
DECL|bt_conn_create_pdu|function|struct net_buf *bt_conn_create_pdu(struct nano_fifo *fifo, size_t reserve)
DECL|bt_conn_create_slave_le|function|struct bt_conn *bt_conn_create_slave_le(const bt_addr_le_t *peer,const struct bt_le_adv_param *param)
DECL|bt_conn_disconnect|function|int bt_conn_disconnect(struct bt_conn *conn, uint8_t reason)
DECL|bt_conn_enc_key_size|function|uint8_t bt_conn_enc_key_size(struct bt_conn *conn)
DECL|bt_conn_get_dst|function|const bt_addr_le_t *bt_conn_get_dst(const struct bt_conn *conn)
DECL|bt_conn_get_info|function|int bt_conn_get_info(const struct bt_conn *conn, struct bt_conn_info *info)
DECL|bt_conn_get_io_capa|function|uint8_t bt_conn_get_io_capa(void)
DECL|bt_conn_identity_resolved|function|void bt_conn_identity_resolved(struct bt_conn *conn)
DECL|bt_conn_init|function|int bt_conn_init(void)
DECL|bt_conn_le_conn_update|function|int bt_conn_le_conn_update(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_le_param_update|function|int bt_conn_le_param_update(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_le_start_encryption|function|int bt_conn_le_start_encryption(struct bt_conn *conn, uint64_t rand,uint16_t ediv, const uint8_t *ltk, size_t len)
DECL|bt_conn_lookup_addr_br|function|struct bt_conn *bt_conn_lookup_addr_br(const bt_addr_t *peer)
DECL|bt_conn_lookup_addr_le|function|struct bt_conn *bt_conn_lookup_addr_le(const bt_addr_le_t *peer)
DECL|bt_conn_lookup_handle|function|struct bt_conn *bt_conn_lookup_handle(uint16_t handle)
DECL|bt_conn_lookup_state_le|function|struct bt_conn *bt_conn_lookup_state_le(const bt_addr_le_t *peer,const bt_conn_state_t state)
DECL|bt_conn_pin_code_req|function|void bt_conn_pin_code_req(struct bt_conn *conn)
DECL|bt_conn_recv|function|void bt_conn_recv(struct bt_conn *conn, struct net_buf *buf, uint8_t flags)
DECL|bt_conn_ref|function|struct bt_conn *bt_conn_ref(struct bt_conn *conn)
DECL|bt_conn_reset_rx_state|function|static void bt_conn_reset_rx_state(struct bt_conn *conn)
DECL|bt_conn_security_changed|function|void bt_conn_security_changed(struct bt_conn *conn)
DECL|bt_conn_security|function|int bt_conn_security(struct bt_conn *conn, bt_security_t sec)
DECL|bt_conn_send|function|int bt_conn_send(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_conn_set_state|function|void bt_conn_set_state(struct bt_conn *conn, bt_conn_state_t state)
DECL|bt_conn_ssp_auth|function|void bt_conn_ssp_auth(struct bt_conn *conn, uint32_t passkey)
DECL|bt_conn_ssp_get_auth|function|uint8_t bt_conn_ssp_get_auth(const struct bt_conn *conn)
DECL|bt_conn_unref|function|void bt_conn_unref(struct bt_conn *conn)
DECL|bt_hci_connect_br_cancel|function|static int bt_hci_connect_br_cancel(struct bt_conn *conn)
DECL|bt_hci_connect_le_cancel|function|static int bt_hci_connect_le_cancel(struct bt_conn *conn)
DECL|bt_hci_disconnect|function|static int bt_hci_disconnect(struct bt_conn *conn, uint8_t reason)
DECL|bt_le_set_auto_conn|function|int bt_le_set_auto_conn(bt_addr_le_t *addr,const struct bt_le_conn_param *param)
DECL|callback_list|variable|callback_list
DECL|conn_auth|function|static int conn_auth(struct bt_conn *conn)
DECL|conn_mtu|function|static inline uint16_t conn_mtu(struct bt_conn *conn)
DECL|conn_new|function|static struct bt_conn *conn_new(void)
DECL|conn_tx_fiber|function|static void conn_tx_fiber(int arg1, int arg2)
DECL|conns|variable|conns
DECL|create_frag|function|static struct net_buf *create_frag(struct bt_conn *conn, struct net_buf *buf)
DECL|dummy|variable|dummy
DECL|frag_buf|variable|frag_buf
DECL|notify_connected|function|static void notify_connected(struct bt_conn *conn)
DECL|notify_disconnected|function|static void notify_disconnected(struct bt_conn *conn)
DECL|notify_le_param_updated|function|void notify_le_param_updated(struct bt_conn *conn)
DECL|pairing_method|enum|enum pairing_method {
DECL|pin_code_neg_reply|function|static int pin_code_neg_reply(const bt_addr_t *bdaddr)
DECL|pin_code_reply|function|static int pin_code_reply(struct bt_conn *conn, const char *pin, uint8_t len)
DECL|send_buf|function|static bool send_buf(struct bt_conn *conn, struct net_buf *buf)
DECL|send_frag|function|static bool send_frag(struct bt_conn *conn, struct net_buf *buf, uint8_t flags, bool always_consume)
DECL|ssp_confirm_neg_reply|function|static int ssp_confirm_neg_reply(struct bt_conn *conn)
DECL|ssp_confirm_reply|function|static int ssp_confirm_reply(struct bt_conn *conn)
DECL|ssp_method|variable|ssp_method
DECL|ssp_pair_method|function|static uint8_t ssp_pair_method(const struct bt_conn *conn)
DECL|ssp_passkey_neg_reply|function|static int ssp_passkey_neg_reply(struct bt_conn *conn)
DECL|ssp_passkey_reply|function|static int ssp_passkey_reply(struct bt_conn *conn, unsigned int passkey)
DECL|start_security|function|static int start_security(struct bt_conn *conn)
DECL|state2str|function|static const char *state2str(bt_conn_state_t state)
DECL|timeout_fiber|function|static void timeout_fiber(int arg1, int arg2)
