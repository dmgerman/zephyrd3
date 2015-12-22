DECL|ACTIVE|enumerator|ACTIVE,
DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|CONFIG_BLUETOOTH_MAX_SIG_LEN|macro|CONFIG_BLUETOOTH_MAX_SIG_LEN
DECL|CONFIG_BLUETOOTH_SIGNAL_COUNT|macro|CONFIG_BLUETOOTH_SIGNAL_COUNT
DECL|H5_HDR_ACK|macro|H5_HDR_ACK
DECL|H5_HDR_CRC|macro|H5_HDR_CRC
DECL|H5_HDR_LEN|macro|H5_HDR_LEN
DECL|H5_HDR_PKT_TYPE|macro|H5_HDR_PKT_TYPE
DECL|H5_HDR_RELIABLE|macro|H5_HDR_RELIABLE
DECL|H5_HDR_SEQ|macro|H5_HDR_SEQ
DECL|H5_RX_ACK_TIMEOUT|macro|H5_RX_ACK_TIMEOUT
DECL|H5_RX_ESC|macro|H5_RX_ESC
DECL|H5_SET_ACK|macro|H5_SET_ACK
DECL|H5_SET_LEN|macro|H5_SET_LEN
DECL|H5_SET_RELIABLE|macro|H5_SET_RELIABLE
DECL|H5_SET_SEQ|macro|H5_SET_SEQ
DECL|H5_SET_TYPE|macro|H5_SET_TYPE
DECL|H5_TX_ACK_PEND|macro|H5_TX_ACK_PEND
DECL|H5_TX_ACK_TIMEOUT|macro|H5_TX_ACK_TIMEOUT
DECL|HCI_3WIRE_ACK_PKT|macro|HCI_3WIRE_ACK_PKT
DECL|HCI_3WIRE_LINK_PKT|macro|HCI_3WIRE_LINK_PKT
DECL|HCI_ACLDATA_PKT|macro|HCI_ACLDATA_PKT
DECL|HCI_COMMAND_PKT|macro|HCI_COMMAND_PKT
DECL|HCI_EVENT_PKT|macro|HCI_EVENT_PKT
DECL|HCI_SCODATA_PKT|macro|HCI_SCODATA_PKT
DECL|HCI_VENDOR_PKT|macro|HCI_VENDOR_PKT
DECL|INIT|enumerator|INIT,
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|SIG_BUF_SIZE|macro|SIG_BUF_SIZE
DECL|SLIP_DELIMITER|macro|SLIP_DELIMITER
DECL|SLIP_ESC_DELIM|macro|SLIP_ESC_DELIM
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|UNINIT|enumerator|UNINIT,
DECL|_bt_uart_init|function|static int _bt_uart_init(struct device *unused)
DECL|ack_fiber|function|static void ack_fiber(int arg1, int arg2)
DECL|ack_to|member|void *ack_to;
DECL|active_state|member|struct nano_sem active_state;
DECL|bt_uart_isr|function|void bt_uart_isr(void *unused)
DECL|conf_req|variable|conf_req
DECL|conf_rsp|variable|conf_rsp
DECL|drv|variable|drv
DECL|flags|member|atomic_t flags;
DECL|h5_dev|variable|h5_dev
DECL|h5_get_type|function|static uint8_t h5_get_type(struct net_buf *buf)
DECL|h5_init|function|static void h5_init(void)
DECL|h5_open|function|static int h5_open(void)
DECL|h5_print_header|function|static void h5_print_header(const uint8_t *hdr, const char *str)
DECL|h5_process_complete_packet|function|static void h5_process_complete_packet(struct net_buf *buf, uint8_t type, uint8_t *hdr)
DECL|h5_queue|function|static int h5_queue(enum bt_buf_type buf_type, struct net_buf *buf)
DECL|h5_send|function|static void h5_send(const uint8_t *payload, uint8_t type, int len)
DECL|h5_set_txwin|function|static void h5_set_txwin(uint8_t *conf)
DECL|h5_sig|variable|h5_sig
DECL|h5_slip_byte|function|static uint8_t h5_slip_byte(uint8_t byte)
DECL|h5_unslip_byte|function|static int h5_unslip_byte(uint8_t *byte)
DECL|h5|struct|static struct h5 {
DECL|h5|variable|h5
DECL|hexdump|function|static void hexdump(const char *str, const uint8_t *packet, size_t length)
DECL|hexdump|macro|hexdump
DECL|link_state|member|} link_state;
DECL|process_unack|function|static void process_unack(void)
DECL|reliable_packet|function|static bool reliable_packet(uint8_t type)
DECL|retx_fiber|function|static void retx_fiber(int arg1, int arg2)
DECL|retx_to|member|void *retx_to;
DECL|rx_ack|member|uint8_t rx_ack;
DECL|rx_buf|member|struct net_buf *rx_buf;
DECL|rx_fiber|function|static void rx_fiber(void)
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|sleep_req|variable|sleep_req
DECL|sync_req|variable|sync_req
DECL|sync_rsp|variable|sync_rsp
DECL|tx_ack|member|uint8_t tx_ack;
DECL|tx_fiber|function|static void tx_fiber(void)
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|tx_seq|member|uint8_t tx_seq;
DECL|tx_win|member|uint8_t tx_win;
DECL|unack_queue_len|variable|unack_queue_len
DECL|unack_queue|member|struct nano_fifo unack_queue;
DECL|wakeup_req|variable|wakeup_req
DECL|woken_req|variable|woken_req
