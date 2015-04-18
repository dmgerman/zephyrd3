DECL|CMD_STACK_SIZE|macro|CMD_STACK_SIZE
DECL|NUM_BUFS|macro|NUM_BUFS
DECL|RX_STACK_SIZE|macro|RX_STACK_SIZE
DECL|adv_enable|member|uint8_t adv_enable;
DECL|bdaddr|member|uint8_t bdaddr[6];
DECL|bt_buf_add|function|uint8_t *bt_buf_add(struct bt_buf *buf, size_t len)
DECL|bt_buf_get_reserve|function|struct bt_buf *bt_buf_get_reserve(size_t reserve_head)
DECL|bt_buf_get|function|struct bt_buf *bt_buf_get(void)
DECL|bt_buf_headroom|function|size_t bt_buf_headroom(struct bt_buf *buf)
DECL|bt_buf_pull|function|uint8_t *bt_buf_pull(struct bt_buf *buf, size_t len)
DECL|bt_buf_push|function|uint8_t *bt_buf_push(struct bt_buf *buf, size_t len)
DECL|bt_buf_put|function|void bt_buf_put(struct bt_buf *buf)
DECL|bt_buf_tailroom|function|size_t bt_buf_tailroom(struct bt_buf *buf)
DECL|bt_dev|struct|static struct bt_dev {
DECL|bt_driver_register|function|int bt_driver_register(struct bt_driver *drv)
DECL|bt_driver_unregister|function|void bt_driver_unregister(struct bt_driver *drv)
DECL|bt_hci_cmd_create|function|static struct bt_buf *bt_hci_cmd_create(uint16_t opcode, uint8_t param_len)
DECL|bt_hci_cmd_send_sync|function|static int bt_hci_cmd_send_sync(uint16_t opcode, struct bt_buf *buf)
DECL|bt_hci_cmd_send|function|static int bt_hci_cmd_send(uint16_t opcode, struct bt_buf *buf)
DECL|bt_hci_reset|function|int bt_hci_reset(void)
DECL|bt_init|function|int bt_init(void)
DECL|bt_recv|function|void bt_recv(struct bt_buf *buf)
DECL|bt_start_advertising|function|int bt_start_advertising(uint8_t type, const char *name, uint8_t name_len)
DECL|buffers|variable|buffers
DECL|cmd_fiber_stack|variable|cmd_fiber_stack
DECL|cmd_queue_init|function|static void cmd_queue_init(void)
DECL|cmd_queue|member|struct nano_fifo cmd_queue;
DECL|dev|variable|dev
DECL|drv|member|struct bt_driver *drv;
DECL|features|member|uint8_t features[8];
DECL|free_bufs|variable|free_bufs
DECL|free_queue_init|function|static void free_queue_init(void)
DECL|hci_acl|function|static void hci_acl(struct bt_buf *buf)
DECL|hci_cmd_complete|function|static void hci_cmd_complete(struct bt_buf *buf)
DECL|hci_cmd_done|function|static void hci_cmd_done(uint16_t opcode)
DECL|hci_cmd_fiber|function|static void hci_cmd_fiber(void)
DECL|hci_cmd_status|function|static void hci_cmd_status(struct bt_buf *buf)
DECL|hci_event|function|static void hci_event(struct bt_buf *buf)
DECL|hci_init|function|static int hci_init(void)
DECL|hci_le_read_buffer_size_complete|function|static void hci_le_read_buffer_size_complete(struct bt_buf *buf)
DECL|hci_le_read_features_complete|function|static void hci_le_read_features_complete(struct bt_buf *buf)
DECL|hci_num_completed_packets|function|static void hci_num_completed_packets(struct bt_buf *buf)
DECL|hci_read_bdaddr_complete|function|static void hci_read_bdaddr_complete(struct bt_buf *buf)
DECL|hci_read_buffer_size_complete|function|static void hci_read_buffer_size_complete(struct bt_buf *buf)
DECL|hci_read_features_complete|function|static void hci_read_features_complete(struct bt_buf *buf)
DECL|hci_read_local_ver_complete|function|static void hci_read_local_ver_complete(struct bt_buf *buf)
DECL|hci_reset_complete|function|static void hci_reset_complete(struct bt_buf *buf)
DECL|hci_revision|member|uint16_t hci_revision;
DECL|hci_rx_fiber|function|static void hci_rx_fiber(void)
DECL|hci_version|member|uint8_t hci_version;
DECL|le_features|member|uint8_t le_features[8];
DECL|le_mtu|member|uint16_t le_mtu;
DECL|le_pkts_sem|member|struct nano_sem le_pkts_sem;
DECL|le_pkts|member|uint8_t le_pkts;
DECL|lmp_bredr_capable|macro|lmp_bredr_capable
DECL|lmp_le_capable|macro|lmp_le_capable
DECL|manufacturer|member|uint16_t manufacturer;
DECL|ncmd_sem|member|struct nano_sem ncmd_sem;
DECL|ncmd|member|uint8_t ncmd;
DECL|rx_fiber_stack|variable|rx_fiber_stack
DECL|rx_queue_init|function|static void rx_queue_init(void)
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|sent_cmd|member|struct bt_buf *sent_cmd;
