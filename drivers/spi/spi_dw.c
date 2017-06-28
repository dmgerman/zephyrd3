DECL|DBG_COUNTER_INC|macro|DBG_COUNTER_INC
DECL|DBG_COUNTER_INC|macro|DBG_COUNTER_INC
DECL|DBG_COUNTER_INIT|macro|DBG_COUNTER_INIT
DECL|DBG_COUNTER_INIT|macro|DBG_COUNTER_INIT
DECL|DBG_COUNTER_RESULT|macro|DBG_COUNTER_RESULT
DECL|DBG_COUNTER_RESULT|macro|DBG_COUNTER_RESULT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|completed|function|static void completed(struct device *dev, u8_t error)
DECL|dw_spi_api|variable|dw_spi_api
DECL|pull_data|function|static void pull_data(struct device *dev)
DECL|push_data|function|static void push_data(struct device *dev)
DECL|spi_config_0_irq|function|void spi_config_0_irq(void)
DECL|spi_config_1_irq|function|void spi_config_1_irq(void)
DECL|spi_config_2_irq|function|void spi_config_2_irq(void)
DECL|spi_config_3_irq|function|void spi_config_3_irq(void)
DECL|spi_dw_compute_ndf|function|static uint32_t spi_dw_compute_ndf(const struct spi_buf *rx_bufs, size_t rx_count, u8_t dfs)
DECL|spi_dw_config_0|variable|spi_dw_config_0
DECL|spi_dw_config_1|variable|spi_dw_config_1
DECL|spi_dw_config_2|variable|spi_dw_config_2
DECL|spi_dw_config_3|variable|spi_dw_config_3
DECL|spi_dw_configure|function|static int spi_dw_configure(const struct spi_dw_config *info, struct spi_dw_data *spi, const struct spi_config *config)
DECL|spi_dw_data_port_0|variable|spi_dw_data_port_0
DECL|spi_dw_data_port_1|variable|spi_dw_data_port_1
DECL|spi_dw_data_port_2|variable|spi_dw_data_port_2
DECL|spi_dw_data_port_3|variable|spi_dw_data_port_3
DECL|spi_dw_init|function|int spi_dw_init(struct device *dev)
DECL|spi_dw_is_slave|function|static inline bool spi_dw_is_slave(struct spi_dw_data *spi)
DECL|spi_dw_isr|function|void spi_dw_isr(struct device *dev)
DECL|spi_dw_release|function|static int spi_dw_release(struct device *dev, const struct spi_config *config)
DECL|spi_dw_transceive_async|function|static int spi_dw_transceive_async(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_dw_transceive|function|static int spi_dw_transceive(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|spi_dw_update_txftlr|function|static void spi_dw_update_txftlr(const struct spi_dw_config *info, struct spi_dw_data *spi)
DECL|transceive|function|static int transceive(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, bool asynchronous,
