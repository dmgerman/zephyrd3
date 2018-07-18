DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|CONN_TIMEOUT|macro|CONN_TIMEOUT
DECL|FRAG_SIZE|macro|FRAG_SIZE
DECL|FRAG_SIZE|macro|FRAG_SIZE
DECL|JUST_WORKS|enumerator|JUST_WORKS, /* JustWorks pairing */
DECL|LEGACY|enumerator|LEGACY, /* Legacy (pre-SSP) pairing */
DECL|PASSKEY_CONFIRM|enumerator|PASSKEY_CONFIRM, /* Passkey confirm */
DECL|PASSKEY_DISPLAY|enumerator|PASSKEY_DISPLAY, /* Passkey Entry display */
DECL|PASSKEY_INPUT|enumerator|PASSKEY_INPUT, /* Passkey Entry input */
DECL|add_pending_tx|function|static sys_snode_t *add_pending_tx(struct bt_conn *conn, bt_conn_tx_cb_t cb)
DECL|bt_auth|variable|bt_auth
DECL|bt_conn_add_br|function|struct bt_conn *bt_conn_add_br(const bt_addr_t *peer)
DECL|bt_conn_add_le|function|struct bt_conn *bt_conn_add_le(const bt_addr_le_t *peer)
DECL|bt_conn_add_sco|function|struct bt_conn *bt_conn_add_sco(const bt_addr_t *peer, int link_type)
DECL|bt_conn_addr_le_cmp|function|int bt_conn_addr_le_cmp(const struct bt_conn *conn, const bt_addr_le_t *peer)
DECL|bt_conn_auth_cancel|function|int bt_conn_auth_cancel(struct bt_conn *conn)
DECL|bt_conn_auth_cb_register|function|int bt_conn_auth_cb_register(const struct bt_conn_auth_cb *cb)
DECL|bt_conn_auth_pairing_confirm|function|int bt_conn_auth_pairing_confirm(struct bt_conn *conn)
DECL|bt_conn_auth_passkey_confirm|function|int bt_conn_auth_passkey_confirm(struct bt_conn *conn)
DECL|bt_conn_auth_passkey_entry|function|int bt_conn_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_conn_auth_pincode_entry|function|int bt_conn_auth_pincode_entry(struct bt_conn *conn, const char *pin)
DECL|bt_conn_cb_register|function|void bt_conn_cb_register(struct bt_conn_cb *cb)
DECL|bt_conn_create_br|function|struct bt_conn *bt_conn_create_br(const bt_addr_t *peer, const struct bt_br_conn_param *param)
DECL|bt_conn_create_le|function|struct bt_conn *bt_conn_create_le(const bt_addr_le_t *peer, const struct bt_le_conn_param *param)
DECL|bt_conn_create_pdu|function|struct net_buf *bt_conn_create_pdu(struct net_buf_pool *pool, size_t reserve)
DECL|bt_conn_create_sco|function|struct bt_conn *bt_conn_create_sco(const bt_addr_t *peer)
DECL|bt_conn_create_slave_le|function|struct bt_conn *bt_conn_create_slave_le(const bt_addr_le_t *peer,const struct bt_le_adv_param *param)
DECL|bt_conn_disconnect_all|function|void bt_conn_disconnect_all(u8_t id)
DECL|bt_conn_disconnect|function|int bt_conn_disconnect(struct bt_conn *conn, u8_t reason)
DECL|bt_conn_enc_key_size|function|u8_t bt_conn_enc_key_size(struct bt_conn *conn)
DECL|bt_conn_get_dst|function|const bt_addr_le_t *bt_conn_get_dst(const struct bt_conn *conn)
DECL|bt_conn_get_id|function|u8_t bt_conn_get_id(struct bt_conn *conn)
DECL|bt_conn_get_info|function|int bt_conn_get_info(const struct bt_conn *conn, struct bt_conn_info *info)
DECL|bt_conn_get_io_capa|function|u8_t bt_conn_get_io_capa(void)
DECL|bt_conn_get_pkts|function|struct k_sem *bt_conn_get_pkts(struct bt_conn *conn)
DECL|bt_conn_identity_resolved|function|void bt_conn_identity_resolved(struct bt_conn *conn)
DECL|bt_conn_init|function|int bt_conn_init(void)
DECL|bt_conn_le_conn_update|function|int bt_conn_le_conn_update(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_le_param_update|function|int bt_conn_le_param_update(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_le_start_encryption|function|int bt_conn_le_start_encryption(struct bt_conn *conn, u8_t rand[8],u8_t ediv[2], const u8_t *ltk, size_t len)
DECL|bt_conn_lookup_addr_br|function|struct bt_conn *bt_conn_lookup_addr_br(const bt_addr_t *peer)
DECL|bt_conn_lookup_addr_le|function|struct bt_conn *bt_conn_lookup_addr_le(u8_t id, const bt_addr_le_t *peer)
DECL|bt_conn_lookup_addr_sco|function|struct bt_conn *bt_conn_lookup_addr_sco(const bt_addr_t *peer)
DECL|bt_conn_lookup_handle|function|struct bt_conn *bt_conn_lookup_handle(u16_t handle)
DECL|bt_conn_lookup_id|function|struct bt_conn *bt_conn_lookup_id(u8_t id)
DECL|bt_conn_lookup_state_le|function|struct bt_conn *bt_conn_lookup_state_le(const bt_addr_le_t *peer,const bt_conn_state_t state)
DECL|bt_conn_notify_tx|function|void bt_conn_notify_tx(struct bt_conn *conn)
DECL|bt_conn_pin_code_req|function|void bt_conn_pin_code_req(struct bt_conn *conn)
DECL|bt_conn_prepare_events|function|int bt_conn_prepare_events(struct k_poll_event events[])
DECL|bt_conn_process_tx|function|void bt_conn_process_tx(struct bt_conn *conn)
DECL|bt_conn_recv|function|void bt_conn_recv(struct bt_conn *conn, struct net_buf *buf, u8_t flags)
DECL|bt_conn_ref|function|struct bt_conn *bt_conn_ref(struct bt_conn *conn)
DECL|bt_conn_reset_rx_state|function|static void bt_conn_reset_rx_state(struct bt_conn *conn)
DECL|bt_conn_security_changed|function|void bt_conn_security_changed(struct bt_conn *conn)
DECL|bt_conn_security|function|int bt_conn_security(struct bt_conn *conn, bt_security_t sec)
DECL|bt_conn_send_cb|function|int bt_conn_send_cb(struct bt_conn *conn, struct net_buf *buf, bt_conn_tx_cb_t cb)
DECL|bt_conn_set_param_le|function|static void bt_conn_set_param_le(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_set_state|function|void bt_conn_set_state(struct bt_conn *conn, bt_conn_state_t state)
DECL|bt_conn_ssp_auth|function|void bt_conn_ssp_auth(struct bt_conn *conn, u32_t passkey)
DECL|bt_conn_ssp_get_auth|function|u8_t bt_conn_ssp_get_auth(const struct bt_conn *conn)
DECL|bt_conn_unref|function|void bt_conn_unref(struct bt_conn *conn)
DECL|bt_hci_connect_br_cancel|function|static int bt_hci_connect_br_cancel(struct bt_conn *conn)
DECL|bt_hci_disconnect|function|static int bt_hci_disconnect(struct bt_conn *conn, u8_t reason)
DECL|bt_le_set_auto_conn|function|int bt_le_set_auto_conn(bt_addr_le_t *addr,const struct bt_le_conn_param *param)
DECL|bt_sco_cleanup|function|void bt_sco_cleanup(struct bt_conn *sco_conn)
DECL|callback_list|variable|callback_list
DECL|cb|member|bt_conn_tx_cb_t cb;
DECL|conn_auth|function|static int conn_auth(struct bt_conn *conn)
DECL|conn_change|variable|conn_change
DECL|conn_cleanup|function|static void conn_cleanup(struct bt_conn *conn)
DECL|conn_mtu|function|static inline u16_t conn_mtu(struct bt_conn *conn)
DECL|conn_new|function|static struct bt_conn *conn_new(void)
DECL|conn_tx_cb|struct|struct conn_tx_cb {
DECL|conn_tx|macro|conn_tx
DECL|conn_tx|variable|conn_tx
DECL|conns|variable|conns
DECL|create_frag|function|static struct net_buf *create_frag(struct bt_conn *conn, struct net_buf *buf)
DECL|free_tx|variable|free_tx
DECL|le_conn_update|function|static void le_conn_update(struct k_work *work)
DECL|le_param_req|function|bool le_param_req(struct bt_conn *conn, struct bt_le_conn_param *param)
DECL|notify_connected|function|static void notify_connected(struct bt_conn *conn)
DECL|notify_disconnected|function|static void notify_disconnected(struct bt_conn *conn)
DECL|notify_le_param_updated|function|void notify_le_param_updated(struct bt_conn *conn)
DECL|notify_tx|function|static void notify_tx(void)
DECL|pairing_method|enum|enum pairing_method {
DECL|pin_code_neg_reply|function|static int pin_code_neg_reply(const bt_addr_t *bdaddr)
DECL|pin_code_reply|function|static int pin_code_reply(struct bt_conn *conn, const char *pin, u8_t len)
DECL|process_unack_tx|function|static void process_unack_tx(struct bt_conn *conn)
DECL|remove_pending_tx|function|static void remove_pending_tx(struct bt_conn *conn, sys_snode_t *node)
DECL|sco_conn_new|function|static struct bt_conn *sco_conn_new(void)
DECL|sco_conns|variable|sco_conns
DECL|send_buf|function|static bool send_buf(struct bt_conn *conn, struct net_buf *buf)
DECL|send_frag|function|static bool send_frag(struct bt_conn *conn, struct net_buf *buf, u8_t flags, bool always_consume)
DECL|ssp_confirm_neg_reply|function|static int ssp_confirm_neg_reply(struct bt_conn *conn)
DECL|ssp_confirm_reply|function|static int ssp_confirm_reply(struct bt_conn *conn)
DECL|ssp_method|variable|ssp_method
DECL|ssp_pair_method|function|static u8_t ssp_pair_method(const struct bt_conn *conn)
DECL|ssp_passkey_neg_reply|function|static int ssp_passkey_neg_reply(struct bt_conn *conn)
DECL|ssp_passkey_reply|function|static int ssp_passkey_reply(struct bt_conn *conn, unsigned int passkey)
DECL|start_security|function|static int start_security(struct bt_conn *conn)
DECL|state2str|function|static inline const char *state2str(bt_conn_state_t state)
DECL|tx_free|function|static void tx_free(struct bt_conn_tx *tx)
