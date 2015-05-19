DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|a|member|uint64_t a;
DECL|bt_smp_create_pdu|function|struct bt_buf *bt_smp_create_pdu(struct bt_conn *conn, uint8_t op, size_t len)
DECL|bt_smp_recv|function|void bt_smp_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|b|member|uint64_t b;
DECL|h|function|static const char *h(const void *buf, size_t len)
DECL|le_encrypt|function|static int le_encrypt(const uint8_t key[16], const uint8_t plaintext[16], uint8_t enc_data[16])
DECL|le_rand|function|static int le_rand(uint8_t rand[16])
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_conn *conn, uint8_t reason)
DECL|smp_c1|function|static int smp_c1(const uint8_t k[16], const uint8_t r[16], const uint8_t preq[7], const uint8_t pres[7], uint8_t iat, const uint8_t ia[6], uint8_t rat, const uint8_t ra[6], uint8_t enc_data[16])
DECL|smp_init|function|static int smp_init(struct bt_conn_smp *smp)
DECL|smp_pairing_confirm|function|static int smp_pairing_confirm(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_random|function|static int smp_pairing_random(struct bt_conn *conn, struct bt_buf *buf)
DECL|smp_pairing_req|function|static int smp_pairing_req(struct bt_conn *conn, struct bt_buf *buf)
DECL|uint128_t|typedef|} uint128_t;
DECL|xor_128|function|static void xor_128(const uint128_t *p, const uint128_t *q, uint128_t *r)
