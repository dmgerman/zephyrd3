DECL|BLUENRG_ACI_LL_MODE|macro|BLUENRG_ACI_LL_MODE
DECL|BLUENRG_ACI_WRITE_CONFIG_CMD_LL|macro|BLUENRG_ACI_WRITE_CONFIG_CMD_LL
DECL|BLUENRG_ACI_WRITE_CONFIG_DATA|macro|BLUENRG_ACI_WRITE_CONFIG_DATA
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
DECL|IRQ_HIGH_MAX_READ|macro|IRQ_HIGH_MAX_READ
DECL|PACKET_TYPE|macro|PACKET_TYPE
DECL|READY_NOW|macro|READY_NOW
DECL|SPI_MAX_MSG_LEN|macro|SPI_MAX_MSG_LEN
DECL|SPI_READ|macro|SPI_READ
DECL|SPI_WRITE|macro|SPI_WRITE
DECL|STATUS_HEADER_READY|macro|STATUS_HEADER_READY
DECL|STATUS_HEADER_TOREAD|macro|STATUS_HEADER_TOREAD
DECL|_bt_spi_init|function|static int _bt_spi_init(struct device *unused)
DECL|attempts|variable|attempts
DECL|bluenrg_aci_cmd_ll_param|struct|struct bluenrg_aci_cmd_ll_param {
DECL|bt_spi_get_cmd|function|static inline u16_t bt_spi_get_cmd(u8_t *txmsg)
DECL|bt_spi_get_evt|function|static inline u16_t bt_spi_get_evt(u8_t *rxmsg)
DECL|bt_spi_handle_vendor_evt|function|static void bt_spi_handle_vendor_evt(u8_t *rxmsg)
DECL|bt_spi_isr|function|static void bt_spi_isr(struct device *unused1, struct gpio_callback *unused2, unsigned int unused3)
DECL|bt_spi_open|function|static int bt_spi_open(void)
DECL|bt_spi_rx_thread|function|static void bt_spi_rx_thread(void)
DECL|bt_spi_send_aci_config_data_controller_mode|function|static int bt_spi_send_aci_config_data_controller_mode(void)
DECL|bt_spi_send|function|static int bt_spi_send(struct net_buf *buf)
DECL|bt_spi_transceive|function|static inline int bt_spi_transceive(void *tx, u32_t tx_len, void *rx, u32_t rx_len)
DECL|cmd|member|u8_t cmd;
DECL|configure_cs|function|static int configure_cs(void)
DECL|configure_cs|macro|configure_cs
DECL|cs_dev|variable|cs_dev
DECL|drv|variable|drv
DECL|exit_irq_high_loop|function|static bool exit_irq_high_loop(void)
DECL|exit_irq_high_loop|macro|exit_irq_high_loop
DECL|gpio_cb|variable|gpio_cb
DECL|init_irq_high_loop|function|static void init_irq_high_loop(void)
DECL|init_irq_high_loop|macro|init_irq_high_loop
DECL|irq_dev|variable|irq_dev
DECL|irq_pin_high|function|static bool irq_pin_high(void)
DECL|irq_pin_high|macro|irq_pin_high
DECL|kick_cs|function|static void kick_cs(void)
DECL|kick_cs|macro|kick_cs
DECL|length|member|u8_t length;
DECL|release_cs|function|static void release_cs(void)
DECL|release_cs|macro|release_cs
DECL|rst_dev|variable|rst_dev
DECL|rx_thread_data|variable|rx_thread_data
DECL|rxmsg|variable|rxmsg
DECL|spi_conf|variable|spi_conf
DECL|spi_dev|variable|spi_dev
DECL|spi_dump_message|function|static inline void spi_dump_message(const u8_t *pre, u8_t *buf, u8_t size)
DECL|spi_dump_message|function|void spi_dump_message(const u8_t *pre, u8_t *buf, u8_t size) {}
DECL|spi_rx_buf|variable|spi_rx_buf
DECL|spi_rx|variable|spi_rx
DECL|spi_tx_buf|variable|spi_tx_buf
DECL|spi_tx|variable|spi_tx
DECL|txmsg|variable|txmsg
DECL|value|member|u8_t value;
