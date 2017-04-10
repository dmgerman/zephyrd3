DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|PENDING_DHKEY|enumerator|PENDING_DHKEY,
DECL|PENDING_PUB_KEY|enumerator|PENDING_PUB_KEY,
DECL|bt_hci_ecc_init|function|void bt_hci_ecc_init(void)
DECL|bt_hci_ecc_send|function|int bt_hci_ecc_send(struct net_buf *buf)
DECL|clear_ecc_events|function|static void clear_ecc_events(struct net_buf *buf)
DECL|debug_private_key|variable|debug_private_key
DECL|debug_public_key|variable|debug_public_key
DECL|dhkey|member|uint32_t dhkey[NUM_ECC_DIGITS];
DECL|ecc_thread|function|static void ecc_thread(void *p1, void *p2, void *p3)
DECL|ecc|variable|ecc
DECL|emulate_le_generate_dhkey|function|static void emulate_le_generate_dhkey(void)
DECL|emulate_le_p256_public_key_cmd|function|static void emulate_le_p256_public_key_cmd(void)
DECL|flags|variable|flags
DECL|generate_keys|function|static uint8_t generate_keys(void)
DECL|le_gen_dhkey|function|static void le_gen_dhkey(struct net_buf *buf)
DECL|le_p256_pub_key|function|static void le_p256_pub_key(struct net_buf *buf)
DECL|pk|member|EccPoint pk;
DECL|private_key|member|uint32_t private_key[NUM_ECC_DIGITS];
DECL|random|member|uint32_t random[NUM_ECC_DIGITS * 2];
DECL|send_cmd_status|function|static void send_cmd_status(uint16_t opcode, uint8_t status)
