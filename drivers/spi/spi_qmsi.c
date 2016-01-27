DECL|cfg|member|qm_spi_config_t cfg;
DECL|config_to_bmode|function|static inline qm_spi_bmode_t config_to_bmode(uint8_t mode)
DECL|counter|member|int counter;
DECL|cs_pin|member|uint32_t cs_pin;
DECL|cs_port|member|char *cs_port;
DECL|dev|member|struct device *dev;
DECL|frame_size_to_dfs|function|static inline uint8_t frame_size_to_dfs(qm_spi_frame_size_t frame_size)
DECL|gpio_cs_init|function|static struct device *gpio_cs_init(struct spi_qmsi_config *config)
DECL|gpio_cs|member|struct device *gpio_cs;
DECL|loopback|member|bool loopback;
DECL|pending_transfer_complete|function|static void pending_transfer_complete(uint32_t id, qm_rc_t rc)
DECL|pending_transfers|variable|pending_transfers
DECL|pending_transfer|struct|struct pending_transfer {
DECL|rc|member|qm_rc_t rc;
DECL|spi_control_cs|function|static void spi_control_cs(struct device *dev, bool active)
DECL|spi_qmsi_api|variable|spi_qmsi_api
DECL|spi_qmsi_configure|function|static int spi_qmsi_configure(struct device *dev,struct spi_config *config)
DECL|spi_qmsi_config|struct|struct spi_qmsi_config {
DECL|spi_qmsi_err_callback|function|static void spi_qmsi_err_callback(uint32_t id, qm_rc_t err)
DECL|spi_qmsi_init|function|static int spi_qmsi_init(struct device *dev)
DECL|spi_qmsi_mst_0_config|variable|spi_qmsi_mst_0_config
DECL|spi_qmsi_mst_0_runtime|variable|spi_qmsi_mst_0_runtime
DECL|spi_qmsi_mst_1_config|variable|spi_qmsi_mst_1_config
DECL|spi_qmsi_mst_1_runtime|variable|spi_qmsi_mst_1_runtime
DECL|spi_qmsi_resume|function|static int spi_qmsi_resume(struct device *dev)
DECL|spi_qmsi_runtime|struct|struct spi_qmsi_runtime {
DECL|spi_qmsi_rx_callback|function|static void spi_qmsi_rx_callback(uint32_t id, uint32_t len)
DECL|spi_qmsi_slave_select|function|static int spi_qmsi_slave_select(struct device *dev, uint32_t slave)
DECL|spi_qmsi_suspend|function|static int spi_qmsi_suspend(struct device *dev)
DECL|spi_qmsi_transceive|function|static int spi_qmsi_transceive(struct device *dev, uint8_t *tx_buf, uint32_t tx_buf_len, uint8_t *rx_buf, uint32_t rx_buf_len)
DECL|spi_qmsi_tx_callback|function|static void spi_qmsi_tx_callback(uint32_t id, uint32_t len)
DECL|spi|member|qm_spi_t spi;
DECL|sync|member|device_sync_call_t sync;
DECL|xfer|member|qm_spi_async_transfer_t xfer;
