DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|bt_hci_ecc_init|function|void bt_hci_ecc_init(void)
DECL|bt_hci_ecc_send|function|int bt_hci_ecc_send(struct net_buf *buf)
DECL|clear_ecc_events|function|static void clear_ecc_events(struct net_buf *buf)
DECL|debug_private_key|variable|debug_private_key
DECL|debug_public_key|variable|debug_public_key
DECL|ecc_thread|function|static void ecc_thread(void *p1, void *p2, void *p3)
DECL|emulate_le_generate_dhkey|function|static void emulate_le_generate_dhkey(struct net_buf *buf)
DECL|emulate_le_p256_public_key_cmd|function|static void emulate_le_p256_public_key_cmd(struct net_buf *buf)
DECL|generate_keys|function|static uint8_t generate_keys(EccPoint *pkey, uint32_t private_key[8])
DECL|private_key|variable|private_key
DECL|send_cmd_status|function|static void send_cmd_status(uint16_t opcode, uint8_t status)
