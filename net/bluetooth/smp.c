DECL|BR_RECV_KEYS_SC|macro|BR_RECV_KEYS_SC
DECL|BR_SEND_KEYS_SC|macro|BR_SEND_KEYS_SC
DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_SMP_AUTH_MASK_SC|macro|BT_SMP_AUTH_MASK_SC
DECL|BT_SMP_AUTH_MASK|macro|BT_SMP_AUTH_MASK
DECL|ID_DIST|macro|ID_DIST
DECL|ID_DIST|macro|ID_DIST
DECL|JUST_WORKS|enumerator|JUST_WORKS, /* JustWorks pairing */
DECL|LINK_DIST|macro|LINK_DIST
DECL|LINK_DIST|macro|LINK_DIST
DECL|M|variable|M
DECL|PASSKEY_CONFIRM|enumerator|PASSKEY_CONFIRM, /* Passkey confirm */
DECL|PASSKEY_DISPLAY|enumerator|PASSKEY_DISPLAY, /* Passkey Entry display */
DECL|PASSKEY_INPUT|enumerator|PASSKEY_INPUT, /* Passkey Entry input */
DECL|PASSKEY_ROLE|enumerator|PASSKEY_ROLE, /* Passkey Entry depends on role */
DECL|RECV_KEYS_SC|macro|RECV_KEYS_SC
DECL|RECV_KEYS|macro|RECV_KEYS
DECL|SEND_KEYS_SC|macro|SEND_KEYS_SC
DECL|SEND_KEYS|macro|SEND_KEYS
DECL|SIGN_DIST|macro|SIGN_DIST
DECL|SIGN_DIST|macro|SIGN_DIST
DECL|SMP_FLAG_BOND|enumerator|SMP_FLAG_BOND, /* if bonding */
DECL|SMP_FLAG_CFM_DELAYED|enumerator|SMP_FLAG_CFM_DELAYED, /* if confirm should be send when TK is valid */
DECL|SMP_FLAG_DERIVE_LK|enumerator|SMP_FLAG_DERIVE_LK, /* if Link Key should be derived */
DECL|SMP_FLAG_DHCHECK_WAIT|enumerator|SMP_FLAG_DHCHECK_WAIT, /* if waiting for remote DHCheck (as slave) */
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
DECL|SMP_NUM_FLAGS|enumerator|SMP_NUM_FLAGS,
DECL|SMP_TIMEOUT|macro|SMP_TIMEOUT
DECL|aes_test|function|static int aes_test(const char *prefix, const uint8_t *key, const uint8_t *m, uint16_t len, const uint8_t *mac)
DECL|allowed_cmds|member|atomic_t allowed_cmds;
DECL|br_handlers|variable|br_handlers
DECL|bt_smp_accept|function|static int bt_smp_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_smp_aes_cmac|function|static int bt_smp_aes_cmac(const uint8_t *key, const uint8_t *in, size_t len, uint8_t *out)
DECL|bt_smp_auth_cancel|function|int bt_smp_auth_cancel(struct bt_conn *conn)
DECL|bt_smp_auth_pairing_confirm|function|int bt_smp_auth_pairing_confirm(struct bt_conn *conn)
DECL|bt_smp_auth_pairing_confirm|function|int bt_smp_auth_pairing_confirm(struct bt_conn *conn)
DECL|bt_smp_auth_passkey_confirm|function|int bt_smp_auth_passkey_confirm(struct bt_conn *conn)
DECL|bt_smp_auth_passkey_entry|function|int bt_smp_auth_passkey_entry(struct bt_conn *conn, unsigned int passkey)
DECL|bt_smp_br_accept|function|static int bt_smp_br_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_smp_br_connected|function|static void bt_smp_br_connected(struct bt_l2cap_chan *chan)
DECL|bt_smp_br_disconnected|function|static void bt_smp_br_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_smp_br_recv|function|static void bt_smp_br_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_smp_connected|function|static void bt_smp_connected(struct bt_l2cap_chan *chan)
DECL|bt_smp_create_rpa|function|int bt_smp_create_rpa(const uint8_t irk[16], bt_addr_t *rpa)
DECL|bt_smp_create_rpa|function|int bt_smp_create_rpa(const uint8_t irk[16], bt_addr_t *rpa)
DECL|bt_smp_dhkey_ready|function|static void bt_smp_dhkey_ready(const uint8_t *dhkey)
DECL|bt_smp_disconnected|function|static void bt_smp_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_smp_distribute_keys|function|static void bt_smp_distribute_keys(struct bt_smp *smp)
DECL|bt_smp_encrypt_change|function|static void bt_smp_encrypt_change(struct bt_l2cap_chan *chan)
DECL|bt_smp_get_tk|function|bool bt_smp_get_tk(struct bt_conn *conn, uint8_t *tk)
DECL|bt_smp_init|function|int bt_smp_init(void)
DECL|bt_smp_irk_matches|function|bool bt_smp_irk_matches(const uint8_t irk[16], const bt_addr_t *addr)
DECL|bt_smp_pkey_ready|function|static void bt_smp_pkey_ready(const uint8_t *pkey)
DECL|bt_smp_pool|variable|bt_smp_pool
DECL|bt_smp_recv|function|static void bt_smp_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_smp_send_pairing_req|function|int bt_smp_send_pairing_req(struct bt_conn *conn)
DECL|bt_smp_send_security_req|function|int bt_smp_send_security_req(struct bt_conn *conn)
DECL|bt_smp_sign_verify|function|int bt_smp_sign_verify(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_smp_sign_verify|function|int bt_smp_sign_verify(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_smp_sign|function|int bt_smp_sign(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_smp_sign|function|int bt_smp_sign(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_smp_update_keys|function|void bt_smp_update_keys(struct bt_conn *conn)
DECL|bt_smp|struct|struct bt_smp {
DECL|chan|member|struct bt_l2cap_le_chan chan;
DECL|compute_and_check_and_send_slave_dhcheck|function|static uint8_t compute_and_check_and_send_slave_dhcheck(struct bt_smp *smp)
DECL|compute_and_send_master_dhcheck|function|static uint8_t compute_and_send_master_dhcheck(struct bt_smp *smp)
DECL|dhkey|member|uint8_t dhkey[32];
DECL|display_passkey|function|static uint8_t display_passkey(struct bt_smp *smp)
DECL|expect_len|member|uint8_t expect_len;
DECL|expect_len|member|uint8_t expect_len;
DECL|e|member|uint8_t e[16];
DECL|func|member|uint8_t (*func)(struct bt_smp *smp, struct net_buf *buf);
DECL|func|member|uint8_t (*func)(struct bt_smp *smp, struct net_buf *buf);
DECL|gen_method_legacy|variable|gen_method_legacy
DECL|gen_method_sc|variable|gen_method_sc
DECL|generate_dhkey|function|static uint8_t generate_dhkey(struct bt_smp *smp)
DECL|get_auth|function|static uint8_t get_auth(uint8_t auth)
DECL|get_encryption_key_size|function|static uint8_t get_encryption_key_size(struct bt_smp *smp)
DECL|get_io_capa|function|static uint8_t get_io_capa(void)
DECL|get_pair_method|function|static uint8_t get_pair_method(struct bt_smp *smp, uint8_t remote_io)
DECL|handlers|variable|handlers
DECL|key|variable|key
DECL|le_encrypt|function|static int le_encrypt(const uint8_t key[16], const uint8_t plaintext[16], uint8_t enc_data[16])
DECL|le_sc_supported|function|static bool le_sc_supported(void)
DECL|legacy_distribute_keys|function|static void legacy_distribute_keys(struct bt_smp *smp)
DECL|legacy_get_pair_method|function|static uint8_t legacy_get_pair_method(struct bt_smp *smp, uint8_t remote_io)
DECL|legacy_pairing_confirm|function|static uint8_t legacy_pairing_confirm(struct bt_smp *smp)
DECL|legacy_pairing_random|function|static uint8_t legacy_pairing_random(struct bt_smp *smp)
DECL|legacy_pairing_req|function|static uint8_t legacy_pairing_req(struct bt_smp *smp, uint8_t remote_io)
DECL|legacy_pairing_rsp|function|static uint8_t legacy_pairing_rsp(struct bt_smp *smp, uint8_t remote_io)
DECL|legacy_passkey_entry|function|static void legacy_passkey_entry(struct bt_smp *smp, unsigned int passkey)
DECL|legacy_request_tk|function|static uint8_t legacy_request_tk(struct bt_smp *smp)
DECL|legacy_send_pairing_confirm|function|static uint8_t legacy_send_pairing_confirm(struct bt_smp *smp)
DECL|local_dist|member|uint8_t local_dist;
DECL|mackey|member|uint8_t mackey[16];
DECL|method|member|uint8_t method;
DECL|pairing_method|enum|enum pairing_method {
DECL|passkey_round|member|uint8_t passkey_round;
DECL|passkey|member|uint32_t passkey;
DECL|pcnf|member|uint8_t pcnf[16];
DECL|pkey|member|uint8_t pkey[64];
DECL|preq|member|uint8_t preq[7];
DECL|prnd|member|uint8_t prnd[16];
DECL|prsp|member|uint8_t prsp[7];
DECL|remote_dist|member|uint8_t remote_dist;
DECL|rrnd|member|uint8_t rrnd[16];
DECL|sc_debug_private_key|variable|sc_debug_private_key
DECL|sc_debug_public_key|variable|sc_debug_public_key
DECL|sc_derive_link_key|function|static void sc_derive_link_key(struct bt_smp *smp)
DECL|sc_local_pkey_valid|variable|sc_local_pkey_valid
DECL|sc_public_key|variable|sc_public_key
DECL|sc_send_public_key|function|static uint8_t sc_send_public_key(struct bt_smp *smp)
DECL|sc_smp_check_confirm|function|static uint8_t sc_smp_check_confirm(struct bt_smp *smp)
DECL|sc_smp_send_dhkey_check|function|static uint8_t sc_smp_send_dhkey_check(struct bt_smp *smp, const uint8_t *e)
DECL|sc_supported|variable|sc_supported
DECL|sec_level_reachable|function|static bool sec_level_reachable(struct bt_conn *conn)
DECL|send_pairing_rsp|function|static uint8_t send_pairing_rsp(struct bt_smp *smp)
DECL|sign_test|function|static int sign_test(const char *prefix, const uint8_t *key, const uint8_t *m, uint16_t len, const uint8_t *sig)
DECL|smp_aes_cmac_test|function|static int smp_aes_cmac_test(void)
DECL|smp_ah|function|static int smp_ah(const uint8_t irk[16], const uint8_t r[3], uint8_t out[3])
DECL|smp_br_derive_ltk|function|static void smp_br_derive_ltk(struct bt_smp *smp)
DECL|smp_br_distribute_keys|function|static void smp_br_distribute_keys(struct bt_smp *smp)
DECL|smp_br_error|function|static int smp_br_error(struct bt_smp *smp, uint8_t reason)
DECL|smp_br_ident_addr_info|function|static uint8_t smp_br_ident_addr_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_ident_info|function|static uint8_t smp_br_ident_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_init|function|static void smp_br_init(struct bt_smp *smp)
DECL|smp_br_pairing_failed|function|static uint8_t smp_br_pairing_failed(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_pairing_req|function|static uint8_t smp_br_pairing_req(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_pairing_rsp|function|static uint8_t smp_br_pairing_rsp(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_reset|function|static void smp_br_reset(struct bt_smp *smp)
DECL|smp_br_send|function|static void smp_br_send(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_signing_info|function|static uint8_t smp_br_signing_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_br_timeout|function|static void smp_br_timeout(struct nano_work *work)
DECL|smp_buf|variable|smp_buf
DECL|smp_c1|function|static int smp_c1(const uint8_t k[16], const uint8_t r[16], const uint8_t preq[7], const uint8_t pres[7], const bt_addr_le_t *ia, const bt_addr_le_t *ra, uint8_t enc_data[16])
DECL|smp_chan_get|function|static struct bt_smp *smp_chan_get(struct bt_conn *conn)
DECL|smp_create_pdu|function|static struct net_buf *smp_create_pdu(struct bt_conn *conn, uint8_t op, size_t len)
DECL|smp_dhkey_check|function|static uint8_t smp_dhkey_check(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_encrypt_info|function|static uint8_t smp_encrypt_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_encrypt_info|function|static uint8_t smp_encrypt_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_error|function|static int smp_error(struct bt_smp *smp, uint8_t reason)
DECL|smp_f4_test|function|static int smp_f4_test(void)
DECL|smp_f4|function|static int smp_f4(const uint8_t *u, const uint8_t *v, const uint8_t *x, uint8_t z, uint8_t res[16])
DECL|smp_f5_test|function|static int smp_f5_test(void)
DECL|smp_f5|function|static int smp_f5(const uint8_t *w, const uint8_t *n1, const uint8_t *n2, const bt_addr_le_t *a1, const bt_addr_le_t *a2, uint8_t *mackey, uint8_t *ltk)
DECL|smp_f6_test|function|static int smp_f6_test(void)
DECL|smp_f6|function|static int smp_f6(const uint8_t *w, const uint8_t *n1, const uint8_t *n2, const uint8_t *r, const uint8_t *iocap, const bt_addr_le_t *a1, const bt_addr_le_t *a2, uint8_t *check)
DECL|smp_g2_test|function|static int smp_g2_test(void)
DECL|smp_g2|function|static int smp_g2(const uint8_t u[32], const uint8_t v[32], const uint8_t x[16], const uint8_t y[16], uint32_t *passkey)
DECL|smp_h6_test|function|static int smp_h6_test(void)
DECL|smp_h6|function|static int smp_h6(const uint8_t w[16], const uint8_t key_id[4], uint8_t res[16])
DECL|smp_ident_addr_info|function|static uint8_t smp_ident_addr_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_ident_info|function|static uint8_t smp_ident_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_init|function|static int smp_init(struct bt_smp *smp)
DECL|smp_master_ident|function|static uint8_t smp_master_ident(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_master_ident|function|static uint8_t smp_master_ident(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_complete|function|static void smp_pairing_complete(struct bt_smp *smp, uint8_t status)
DECL|smp_pairing_confirm|function|static uint8_t smp_pairing_confirm(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_failed|function|static uint8_t smp_pairing_failed(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_random|function|static uint8_t smp_pairing_random(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_req|function|static uint8_t smp_pairing_req(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_req|function|static uint8_t smp_pairing_req(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_rsp|function|static uint8_t smp_pairing_rsp(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_pairing_rsp|function|static uint8_t smp_pairing_rsp(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_public_key_slave|function|static uint8_t smp_public_key_slave(struct bt_smp *smp)
DECL|smp_public_key|function|static uint8_t smp_public_key(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_reset|function|static void smp_reset(struct bt_smp *smp)
DECL|smp_s1|function|static int smp_s1(const uint8_t k[16], const uint8_t r1[16], const uint8_t r2[16], uint8_t out[16])
DECL|smp_security_request|function|static uint8_t smp_security_request(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_security_request|function|static uint8_t smp_security_request(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_self_test|function|static inline int smp_self_test(void)
DECL|smp_self_test|function|static int smp_self_test(void)
DECL|smp_send_pairing_confirm|function|static uint8_t smp_send_pairing_confirm(struct bt_smp *smp)
DECL|smp_send_pairing_random|function|static uint8_t smp_send_pairing_random(struct bt_smp *smp)
DECL|smp_send|function|static void smp_send(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_sign_buf|function|static int smp_sign_buf(const uint8_t *key, uint8_t *msg, uint16_t len)
DECL|smp_sign_test|function|static int smp_sign_test(void)
DECL|smp_signing_info|function|static uint8_t smp_signing_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_signing_info|function|static uint8_t smp_signing_info(struct bt_smp *smp, struct net_buf *buf)
DECL|smp_timeout|function|static void smp_timeout(struct nano_work *work)
DECL|swap_buf|function|static void swap_buf(uint8_t *dst, const uint8_t *src, uint16_t len)
DECL|swap_in_place|function|static void swap_in_place(uint8_t *buf, uint16_t len)
DECL|tk|member|uint8_t tk[16];
DECL|work|member|struct nano_delayed_work work;
DECL|xor_128|function|static void xor_128(const uint8_t p[16], const uint8_t q[16], uint8_t r[16])
