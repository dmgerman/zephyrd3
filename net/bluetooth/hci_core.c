DECL|ACL_IN_MAX|macro|ACL_IN_MAX
DECL|ACL_OUT_MAX|macro|ACL_OUT_MAX
DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|STACK_DIRECTION_DOWN|enumerator|STACK_DIRECTION_DOWN,
DECL|STACK_DIRECTION_UP|enumerator|STACK_DIRECTION_UP,
DECL|analyze_stacks|function|static void analyze_stacks(struct bt_conn *conn, struct bt_conn **ref)
DECL|analyze_stacks|macro|analyze_stacks
DECL|analyze_stack|function|static void analyze_stack(const char *name, const char *stack, unsigned size, int stack_growth)
DECL|bt_addr_le_str|function|const char *bt_addr_le_str(const bt_addr_le_t *addr)
DECL|bt_addr_str|function|const char *bt_addr_str(const bt_addr_t *addr)
DECL|bt_driver_register|function|int bt_driver_register(struct bt_driver *drv)
DECL|bt_driver_unregister|function|void bt_driver_unregister(struct bt_driver *drv)
DECL|bt_hci_cmd_create|function|struct bt_buf *bt_hci_cmd_create(uint16_t opcode, uint8_t param_len)
DECL|bt_hci_cmd_send_sync|function|int bt_hci_cmd_send_sync(uint16_t opcode, struct bt_buf *buf, struct bt_buf **rsp)
DECL|bt_hci_cmd_send|function|int bt_hci_cmd_send(uint16_t opcode, struct bt_buf *buf)
DECL|bt_hci_reset|function|int bt_hci_reset(void)
DECL|bt_init|function|int bt_init(void)
DECL|bt_recv|function|void bt_recv(struct bt_buf *buf)
DECL|bt_start_advertising|function|int bt_start_advertising(uint8_t type, const struct bt_eir *ad, const struct bt_eir *sd)
DECL|bt_start_scanning|function|int bt_start_scanning(uint8_t scan_type, uint8_t scan_filter)
DECL|bt_stop_scanning|function|int bt_stop_scanning()
DECL|cmd_queue_init|function|static void cmd_queue_init(void)
DECL|cmd_rx_fiber_id|variable|cmd_rx_fiber_id
DECL|cmd_rx_fiber|function|static void cmd_rx_fiber(void)
DECL|dev|variable|dev
DECL|hci_acl|function|static void hci_acl(struct bt_buf *buf)
DECL|hci_cmd_complete|function|static void hci_cmd_complete(struct bt_buf *buf)
DECL|hci_cmd_done|function|static void hci_cmd_done(uint16_t opcode, uint8_t status, struct bt_buf *buf)
DECL|hci_cmd_status|function|static void hci_cmd_status(struct bt_buf *buf)
DECL|hci_cmd_tx_fiber|function|static void hci_cmd_tx_fiber(void)
DECL|hci_disconn_complete|function|static void hci_disconn_complete(struct bt_buf *buf)
DECL|hci_encrypt_change|function|static void hci_encrypt_change(struct bt_buf *buf)
DECL|hci_event|function|static void hci_event(struct bt_buf *buf)
DECL|hci_init|function|static int hci_init(void)
DECL|hci_le_meta_event|function|static void hci_le_meta_event(struct bt_buf *buf)
DECL|hci_num_completed_packets|function|static void hci_num_completed_packets(struct bt_buf *buf)
DECL|hci_reset_complete|function|static void hci_reset_complete(struct bt_buf *buf)
DECL|hci_rx_fiber|function|static void hci_rx_fiber(void)
DECL|le_adv_report|function|static void le_adv_report(struct bt_buf *buf)
DECL|le_conn_complete|function|static void le_conn_complete(struct bt_buf *buf)
DECL|le_ltk_request|function|static void le_ltk_request(struct bt_buf *buf)
DECL|le_read_buffer_size_complete|function|static void le_read_buffer_size_complete(struct bt_buf *buf)
DECL|read_bdaddr_complete|function|static void read_bdaddr_complete(struct bt_buf *buf)
DECL|read_buffer_size_complete|function|static void read_buffer_size_complete(struct bt_buf *buf)
DECL|read_le_features_complete|function|static void read_le_features_complete(struct bt_buf *buf)
DECL|read_local_features_complete|function|static void read_local_features_complete(struct bt_buf *buf)
DECL|read_local_ver_complete|function|static void read_local_ver_complete(struct bt_buf *buf)
DECL|rx_queue_init|function|static void rx_queue_init(void)
