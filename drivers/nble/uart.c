DECL|NBLE_BUF_SIZE|macro|NBLE_BUF_SIZE
DECL|NBLE_IPC_COUNT|macro|NBLE_IPC_COUNT
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|STATUS_RX_DATA|enumerator|STATUS_RX_DATA
DECL|STATUS_RX_HDR|enumerator|STATUS_RX_HDR,
DECL|STATUS_RX_IDLE|enumerator|STATUS_RX_IDLE = 0,
DECL|STATUS_TX_BUSY|enumerator|STATUS_TX_BUSY,
DECL|STATUS_TX_DONE|enumerator|STATUS_TX_DONE,
DECL|STATUS_TX_IDLE|enumerator|STATUS_TX_IDLE = 0,
DECL|_bt_nble_init|function|static int _bt_nble_init(struct device *unused)
DECL|bt_uart_isr|function|void bt_uart_isr(void *unused)
DECL|channels|member|struct ipc_uart_channels channels[IPC_UART_MAX_CHANNEL];
DECL|device|member|struct device *device;
DECL|info|variable|info
DECL|ipc_uart_channel_open|function|void *ipc_uart_channel_open(int channel_id, int (*cb)(int, int, int, void *))
DECL|ipc_uart_close_channel|function|void ipc_uart_close_channel(int channel_id)
DECL|ipc_uart_info|struct|struct ipc_uart_info {
DECL|ipc_uart_ns16550_init|function|static int ipc_uart_ns16550_init(struct device *dev)
DECL|ipc_uart_ns16550_set_tx_cb|function|void ipc_uart_ns16550_set_tx_cb(struct device *dev, void (*cb)(bool, void*),void *param)
DECL|ipc_uart|struct|struct ipc_uart {
DECL|ipc|variable|ipc
DECL|irq_mask|member|uint32_t irq_mask; /* IRQ mask */
DECL|irq_vector|member|uint32_t irq_vector; /* IRQ number */
DECL|nble_dev|variable|nble_dev
DECL|nble_discard|function|static size_t nble_discard(struct device *uart, size_t len)
DECL|nble_open|function|int nble_open(void)
DECL|nble_read|function|static int nble_read(struct device *uart, uint8_t *buf, size_t len, size_t min)
DECL|poll_out|function|static void poll_out(const void *buf, size_t length)
DECL|rpc_alloc_cb|function|uint8_t *rpc_alloc_cb(uint16_t length)
DECL|rpc_transmit_cb|function|void rpc_transmit_cb(uint8_t *p_buf, uint16_t length)
DECL|rx_hdr|member|struct ipc_uart_header rx_hdr;
DECL|rx_ptr|member|uint8_t *rx_ptr;
DECL|rx_size|member|uint16_t rx_size;
DECL|rx_state|member|uint8_t rx_state;
DECL|rx|variable|rx
DECL|send_counter|member|uint16_t send_counter;
DECL|tx_cb_param|member|void *tx_cb_param; /* tx_cb function parameter */
DECL|tx_cb|member|void (*tx_cb)(bool wake_state, void*);
DECL|tx_data|member|uint8_t *tx_data;
DECL|tx_hdr|member|struct ipc_uart_header tx_hdr;
DECL|tx_state|member|uint8_t tx_state;
DECL|tx_wakelock_acquired|member|uint8_t tx_wakelock_acquired;
DECL|tx|variable|tx
DECL|uart_enabled|member|uint8_t uart_enabled;
DECL|uart_frame_recv|function|static void uart_frame_recv(uint16_t len, uint8_t *p_data)
DECL|uart_num|member|int uart_num; /* UART device to use */
