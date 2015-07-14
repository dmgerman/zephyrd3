DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|M|variable|M
DECL|RECV_KEYS|macro|RECV_KEYS
DECL|SEND_KEYS|macro|SEND_KEYS
DECL|add_pad|function|static void add_pad(const uint8_t *in, unsigned char *out, int len)
DECL|aes_test|function|static int aes_test(const char *prefix, const uint8_t *key, const uint8_t *m, uint16_t len, const uint8_t *mac)
DECL|allowed_cmds|member|atomic_t allowed_cmds;
DECL|array_shift|function|static void array_shift(const uint8_t *in, uint8_t *out)
DECL|a|member|uint64_t a;
DECL|bt_smp_aes_cmac|function|static int bt_smp_aes_cmac(const uint8_t *key, const uint8_t *in, size_t len, uint8_t *out)
DECL|bt_smp_connected|function|static void bt_smp_connected(struct bt_conn *conn)
DECL|bt_smp_create_pdu|function|struct bt_buf *bt_smp_create_pdu(struct bt_conn *conn, uint8_t op, size_t len)
DECL|bt_smp_disconnected|function|static void bt_smp_disconnected(struct bt_conn *conn)
DECL|bt_smp_distribute_keys|function|static void bt_smp_distribute_keys(struct bt_conn *conn)
DECL|bt_smp_encrypt_change|function|static void bt_smp_encrypt_change(struct bt_conn *conn)
DECL|bt_smp_init|function|int bt_smp_init(void)
DECL|bt_smp_irk_matches|function|bool bt_smp_irk_matches(const uint8_t irk[16], const bt_addr_t *addr)
DECL|bt_smp_pool|variable|bt_smp_pool
DECL|bt_smp_recv|function|static void bt_smp_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|bt_smp_send_pairing_req|function|int bt_smp_send_pairing_req(struct bt_conn *conn)
DECL|bt_smp_send_security_req|function|int bt_smp_send_security_req(struct bt_conn *conn)
DECL|bt_smp|struct|struct bt_smp {
DECL|b|member|uint64_t b;
DECL|cmac_subkey|function|static int cmac_subkey(const uint8_t *key, uint8_t *k1, uint8_t *k2)
DECL|conn|member|struct bt_conn *conn;
DECL|expect_len|member|uint8_t expect_len;
DECL|func|member|uint8_t (*func)(struct bt_conn *conn, struct bt_buf *buf);
DECL|handlers|variable|handlers
DECL|h|function|static const char *h(const void *buf, size_t len)
DECL|key|variable|key
DECL|le_encrypt|function|static int le_encrypt(const uint8_t key[16], const uint8_t plaintext[16], uint8_t enc_data[16])
DECL|le_rand|function|static int le_rand(void *buf, size_t len)
DECL|local_dist|member|uint8_t local_dist;
DECL|pcnf|member|uint8_t pcnf[16];
DECL|pending_encrypt|member|bool pending_encrypt;
DECL|preq|member|uint8_t preq[7];
DECL|prnd|member|uint8_t prnd[16];
DECL|prsp|member|uint8_t prsp[7];
DECL|remote_dist|member|uint8_t remote_dist;
DECL|rrnd|member|uint8_t rrnd[16];
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_conn *conn, uint8_t reason)
DECL|smp_aes_cmac_test|function|static int smp_aes_cmac_test(void)
DECL|smp_ah|function|static int smp_ah(const uint8_t irk[16], const uint8_t r[3], uint8_t out[3])
DECL|smp_c1|function|static int smp_c1(const uint8_t k[16], const uint8_t r[16], const uint8_t preq[7], const uint8_t pres[7], const bt_addr_le_t *ia, const bt_addr_le_t *ra, uint8_t enc_data[16])
DECL|smp_encrypt_info|function|static uint8_t smp_encrypt_info(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_ident_addr_info|function|static uint8_t smp_ident_addr_info(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_ident_info|function|static uint8_t smp_ident_info(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_init|function|static int smp_init(struct bt_smp *smp)
DECL|smp_master_ident|function|static uint8_t smp_master_ident(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_confirm|function|static uint8_t smp_pairing_confirm(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_failed|function|static uint8_t smp_pairing_failed(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_random|function|static uint8_t smp_pairing_random(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_req|function|static uint8_t smp_pairing_req(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_rsp|function|static uint8_t smp_pairing_rsp(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_s1|function|static int smp_s1(const uint8_t k[16], const uint8_t r1[16], const uint8_t r2[16], uint8_t out[16])
DECL|smp_security_request|function|static uint8_t smp_security_request(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_self_test|function|static inline int smp_self_test(void)
DECL|smp_self_test|function|static int smp_self_test(void)
DECL|smp_send_pairing_confirm|function|static uint8_t smp_send_pairing_confirm(struct bt_conn *conn)
DECL|smp_send_pairing_random|function|static uint8_t smp_send_pairing_random(struct bt_conn *conn)
DECL|swap_buf|function|static void swap_buf(const uint8_t *src, uint8_t *dst, uint16_t len)
DECL|swap_in_place|function|static void swap_in_place(uint8_t *buf, uint16_t len)
DECL|tk|member|uint8_t tk[16];
DECL|uint128_t|typedef|} uint128_t;
DECL|xor_128|function|static void xor_128(const uint128_t *p, const uint128_t *q, uint128_t *r)
