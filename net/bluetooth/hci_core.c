DECL|CMD_STACK_SIZE|macro|CMD_STACK_SIZE
DECL|NUM_BUFS|macro|NUM_BUFS
DECL|RX_STACK_SIZE|macro|RX_STACK_SIZE
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
DECL|bt_hci_cmd_send|function|static int bt_hci_cmd_send(uint16_t opcode, struct bt_buf *buf)
DECL|bt_init|function|int bt_init(void)
DECL|bt_recv|function|void bt_recv(struct bt_buf *buf)
DECL|buffers|variable|buffers
DECL|cmd_fiber_stack|variable|cmd_fiber_stack
DECL|cmd_queue_init|function|static void cmd_queue_init(void)
DECL|cmd_queue|member|struct nano_fifo cmd_queue;
DECL|dev|variable|dev
DECL|drv|member|struct bt_driver *drv;
DECL|free_bufs|variable|free_bufs
DECL|free_queue_init|function|static void free_queue_init(void)
DECL|hci_acl|function|static void hci_acl(struct bt_buf *buf)
DECL|hci_cmd_complete|function|static void hci_cmd_complete(struct bt_buf *buf)
DECL|hci_cmd_done|function|static void hci_cmd_done(uint16_t opcode)
DECL|hci_cmd_fiber|function|static void hci_cmd_fiber(void)
DECL|hci_cmd_status|function|static void hci_cmd_status(struct bt_buf *buf)
DECL|hci_event|function|static void hci_event(struct bt_buf *buf)
DECL|hci_init|function|static int hci_init(void)
DECL|hci_receive_packet|function|static void hci_receive_packet(struct bt_buf *buf)
DECL|hci_reset_complete|function|static void hci_reset_complete(struct bt_buf *buf)
DECL|hci_rx_fiber|function|static void hci_rx_fiber(void)
DECL|ncmd_sem|member|struct nano_sem ncmd_sem;
DECL|ncmd|member|uint8_t ncmd;
DECL|rx_fiber_stack|variable|rx_fiber_stack
DECL|rx_queue_init|function|static void rx_queue_init(void)
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|sent_cmd|member|struct bt_buf *sent_cmd;
