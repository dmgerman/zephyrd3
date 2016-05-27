DECL|BT_SMP_IO_DISPLAY_ONLY|macro|BT_SMP_IO_DISPLAY_ONLY
DECL|BT_SMP_IO_DISPLAY_YESNO|macro|BT_SMP_IO_DISPLAY_YESNO
DECL|BT_SMP_IO_KEYBOARD_DISPLAY|macro|BT_SMP_IO_KEYBOARD_DISPLAY
DECL|BT_SMP_IO_KEYBOARD_ONLY|macro|BT_SMP_IO_KEYBOARD_ONLY
DECL|BT_SMP_IO_NO_INPUT_OUTPUT|macro|BT_SMP_IO_NO_INPUT_OUTPUT
DECL|BT_SMP_MAX_ENC_KEY_SIZE|macro|BT_SMP_MAX_ENC_KEY_SIZE
DECL|BT_SMP_OOB_NOT_PRESENT|macro|BT_SMP_OOB_NOT_PRESENT
DECL|BT_SMP_OOB_PRESENT|macro|BT_SMP_OOB_PRESENT
DECL|JUST_WORKS|enumerator|JUST_WORKS, /* JustWorks pairing */
DECL|PASSKEY_CONFIRM|enumerator|PASSKEY_CONFIRM, /* Passkey confirm */
DECL|PASSKEY_DISPLAY|enumerator|PASSKEY_DISPLAY, /* Passkey Entry display */
DECL|PASSKEY_INPUT|enumerator|PASSKEY_INPUT, /* Passkey Entry input */
DECL|PASSKEY_ROLE|enumerator|PASSKEY_ROLE, /* Passkey Entry depends on role */
DECL|SMP_FLAG_BOND|enumerator|SMP_FLAG_BOND, /* if bonding */
DECL|SMP_FLAG_CFM_DELAYED|enumerator|SMP_FLAG_CFM_DELAYED, /* if confirm should be send when TK is valid */
DECL|SMP_FLAG_DHKEY_PENDING|enumerator|SMP_FLAG_DHKEY_PENDING, /* if waiting for local DHKey */
DECL|SMP_FLAG_DHKEY_SEND|enumerator|SMP_FLAG_DHKEY_SEND, /* if should generate and send DHKey Check */
DECL|SMP_FLAG_ENC_PENDING|enumerator|SMP_FLAG_ENC_PENDING, /* if waiting for an encryption change event */
DECL|SMP_FLAG_KEYS_DISTR|enumerator|SMP_FLAG_KEYS_DISTR, /* if keys distribution phase is in progress */
DECL|SMP_FLAG_PAIRING|enumerator|SMP_FLAG_PAIRING, /* if pairing is in progress */
DECL|SMP_FLAG_PKEY_SEND|enumerator|SMP_FLAG_PKEY_SEND, /* if should send Public Key when available */
DECL|SMP_FLAG_SC_DEBUG_KEY|enumerator|SMP_FLAG_SC_DEBUG_KEY, /* if Secure Connection are using debug key */
DECL|SMP_FLAG_SC|enumerator|SMP_FLAG_SC, /* if LE Secure Connections is used */
DECL|SMP_FLAG_SEC_REQ|enumerator|SMP_FLAG_SEC_REQ, /* if Security Request was sent/received */
DECL|SMP_FLAG_TIMEOUT|enumerator|SMP_FLAG_TIMEOUT, /* if SMP timeout occurred */
DECL|SMP_FLAG_USER|enumerator|SMP_FLAG_USER, /* if waiting for user input */
DECL|bt_smp_auth_cancel|function|int bt_smp_auth_cancel(struct bt_conn *conn)
DECL|bt_smp_auth_passkey_entry|function|int bt_smp_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_smp_connected|function|void bt_smp_connected(struct bt_conn *conn)
DECL|bt_smp_disconnected|function|void bt_smp_disconnected(struct bt_conn *conn)
DECL|bt_smp_init|function|int bt_smp_init(void)
DECL|bt_smp_pool|variable|bt_smp_pool
DECL|bt_smp|struct|struct bt_smp {
DECL|conn|member|struct bt_conn *conn;
DECL|flags|member|atomic_t flags;
DECL|gen_method_legacy|variable|gen_method_legacy
DECL|get_io_capa|function|static uint8_t get_io_capa(void)
DECL|legacy_get_pair_method|function|static uint8_t legacy_get_pair_method(struct bt_smp *smp, uint8_t remote_io)
DECL|legacy_pairing_req|function|static uint8_t legacy_pairing_req(struct bt_smp *smp, uint8_t remote_io)
DECL|legacy_passkey_entry|function|static void legacy_passkey_entry(struct bt_smp *smp, unsigned int passkey)
DECL|method|member|uint8_t method;
DECL|nble_security_reply|function|static void nble_security_reply(struct bt_conn *conn,struct nble_sm_passkey *par)
DECL|on_nble_sm_common_rsp|function|void on_nble_sm_common_rsp(const struct nble_sm_common_rsp *rsp)
DECL|on_nble_sm_config_rsp|function|void on_nble_sm_config_rsp(struct nble_sm_config_rsp *rsp)
DECL|on_nble_sm_pairing_request_evt|function|void on_nble_sm_pairing_request_evt(const struct nble_sm_pairing_request_evt *evt)
DECL|on_nble_sm_passkey_disp_evt|function|void on_nble_sm_passkey_disp_evt(const struct nble_sm_passkey_disp_evt *ev)
DECL|on_nble_sm_passkey_req_evt|function|void on_nble_sm_passkey_req_evt(const struct nble_sm_passkey_req_evt *ev)
DECL|on_nble_sm_status_evt|function|void on_nble_sm_status_evt(const struct nble_sm_status_evt *ev)
DECL|pairing_method|enum|enum pairing_method {
DECL|send_dm_config|function|void send_dm_config(void)
DECL|sm_error|function|static int sm_error(struct bt_conn *conn, uint8_t reason)
DECL|smp_chan_get|function|static struct bt_smp *smp_chan_get(struct bt_conn *conn)
DECL|smp_reset|function|static void smp_reset(struct bt_smp *smp)
