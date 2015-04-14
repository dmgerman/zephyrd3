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
DECL|bt_init|function|int bt_init(void)
DECL|bt_recv|function|void bt_recv(struct bt_buf *buf)
DECL|buffers|variable|buffers
DECL|dev|variable|dev
DECL|drv|member|struct bt_driver *drv;
DECL|free_bufs|variable|free_bufs
DECL|free_queue_init|function|static void free_queue_init(void)
DECL|hci_receive_packet|function|static void hci_receive_packet(struct bt_buf *buf)
DECL|hci_rx_fiber|function|static void hci_rx_fiber(void)
DECL|rx_fiber_stack|variable|rx_fiber_stack
DECL|rx_queue_init|function|static void rx_queue_init(void)
DECL|rx_queue|member|struct nano_fifo rx_queue;
