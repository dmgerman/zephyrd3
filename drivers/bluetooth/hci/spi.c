DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|CMD_OCF|macro|CMD_OCF
DECL|CMD_OGF|macro|CMD_OGF
DECL|EVT_BLUE_INITIALIZED|macro|EVT_BLUE_INITIALIZED
DECL|EVT_HEADER_EVENT|macro|EVT_HEADER_EVENT
DECL|EVT_HEADER_SIZE|macro|EVT_HEADER_SIZE
DECL|EVT_HEADER_TYPE|macro|EVT_HEADER_TYPE
DECL|EVT_VENDOR_CODE_LSB|macro|EVT_VENDOR_CODE_LSB
DECL|EVT_VENDOR_CODE_MSB|macro|EVT_VENDOR_CODE_MSB
DECL|GPIO_CS_PIN|macro|GPIO_CS_PIN
DECL|GPIO_IRQ_PIN|macro|GPIO_IRQ_PIN
DECL|GPIO_RESET_PIN|macro|GPIO_RESET_PIN
DECL|HCI_ACL|macro|HCI_ACL
DECL|HCI_CMD|macro|HCI_CMD
DECL|HCI_EVT|macro|HCI_EVT
DECL|HCI_SCO|macro|HCI_SCO
DECL|PACKET_TYPE|macro|PACKET_TYPE
DECL|READY_NOW|macro|READY_NOW
DECL|SPI_MAX_MSG_LEN|macro|SPI_MAX_MSG_LEN
DECL|SPI_READ|macro|SPI_READ
DECL|SPI_WRITE|macro|SPI_WRITE
DECL|STATUS_HEADER_READY|macro|STATUS_HEADER_READY
DECL|STATUS_HEADER_TOREAD|macro|STATUS_HEADER_TOREAD
DECL|_bt_spi_init|function|static int _bt_spi_init(struct device *unused)
DECL|bt_spi_dev_configure|function|static inline int bt_spi_dev_configure(void)
DECL|bt_spi_get_cmd|function|static inline u16_t bt_spi_get_cmd(u8_t *txmsg)
DECL|bt_spi_get_evt|function|static inline u16_t bt_spi_get_evt(u8_t *rxmsg)
DECL|bt_spi_handle_vendor_evt|function|static void bt_spi_handle_vendor_evt(u8_t *rxmsg)
DECL|bt_spi_isr|function|static void bt_spi_isr(struct device *unused1, struct gpio_callback *unused2,unsigned int unused3)
DECL|bt_spi_open|function|static int bt_spi_open(void)
DECL|bt_spi_rx_thread|function|static void bt_spi_rx_thread(void)
DECL|bt_spi_send|function|static int bt_spi_send(struct net_buf *buf)
DECL|bt_spi_transceive|function|static inline int bt_spi_transceive(const void *tx, u32_t tx_len, void *rx, u32_t rx_len)
DECL|cs_dev|variable|cs_dev
DECL|drv|variable|drv
DECL|gpio_cb|variable|gpio_cb
DECL|irq_dev|variable|irq_dev
DECL|rst_dev|variable|rst_dev
DECL|rx_thread_data|variable|rx_thread_data
DECL|rxmsg|variable|rxmsg
DECL|spi_conf|variable|spi_conf
DECL|spi_dev|variable|spi_dev
DECL|spi_dump_message|function|static inline void spi_dump_message(const u8_t *pre, u8_t *buf, u8_t size)
DECL|spi_dump_message|function|void spi_dump_message(const u8_t *pre, u8_t *buf, u8_t size) {}
DECL|txmsg|variable|txmsg
