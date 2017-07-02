DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|NUM_FLAGS|enumerator|NUM_FLAGS,
DECL|PENDING_DHKEY|enumerator|PENDING_DHKEY,
DECL|PENDING_PUB_KEY|enumerator|PENDING_PUB_KEY,
DECL|bt_hci_ecc_init|function|void bt_hci_ecc_init(void)
DECL|bt_hci_ecc_send|function|int bt_hci_ecc_send(struct net_buf *buf)
DECL|clear_ecc_events|function|static void clear_ecc_events(struct net_buf *buf)
DECL|debug_private_key|variable|debug_private_key
DECL|debug_public_key|variable|debug_public_key
DECL|default_CSPRNG|function|int default_CSPRNG(u8_t *dst, unsigned int len)
DECL|dhkey|member|u8_t dhkey[32];
DECL|ecc_thread_data|variable|ecc_thread_data
DECL|ecc_thread|function|static void ecc_thread(void *p1, void *p2, void *p3)
DECL|ecc|variable|ecc
DECL|emulate_le_generate_dhkey|function|static void emulate_le_generate_dhkey(void)
DECL|emulate_le_p256_public_key_cmd|function|static void emulate_le_p256_public_key_cmd(void)
DECL|generate_keys|function|static u8_t generate_keys(void)
DECL|le_gen_dhkey|function|static void le_gen_dhkey(struct net_buf *buf)
DECL|le_p256_pub_key|function|static void le_p256_pub_key(struct net_buf *buf)
DECL|pk|member|u8_t pk[64];
DECL|private_key|member|u8_t private_key[32];
DECL|send_cmd_status|function|static void send_cmd_status(u16_t opcode, u8_t status)
