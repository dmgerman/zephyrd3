DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|SPI_K64_NUM_PRESCALERS|macro|SPI_K64_NUM_PRESCALERS
DECL|SPI_K64_NUM_SCALERS|macro|SPI_K64_NUM_SCALERS
DECL|SPI_K64_PROTOCOL_FREQ|macro|SPI_K64_PROTOCOL_FREQ
DECL|SPI_K64_PROTOCOL_PERIOD_NS|macro|SPI_K64_PROTOCOL_PERIOD_NS
DECL|baud_rate_prescaler|variable|baud_rate_prescaler
DECL|baud_rate_scaler|variable|baud_rate_scaler
DECL|delay_prescaler|variable|delay_prescaler
DECL|delay_scaler|variable|delay_scaler
DECL|k64_spi_api|variable|k64_spi_api
DECL|spi_config_0_irq|function|void spi_config_0_irq(void)
DECL|spi_config_1_irq|function|void spi_config_1_irq(void)
DECL|spi_config_2_irq|function|void spi_config_2_irq(void)
DECL|spi_k64_complete|function|static void spi_k64_complete(struct device *dev, uint32_t error)
DECL|spi_k64_config_0|variable|spi_k64_config_0
DECL|spi_k64_config_1|variable|spi_k64_config_1
DECL|spi_k64_config_2|variable|spi_k64_config_2
DECL|spi_k64_configure|function|static int spi_k64_configure(struct device *dev, struct spi_config *config)
DECL|spi_k64_data_port_0|variable|spi_k64_data_port_0
DECL|spi_k64_data_port_1|variable|spi_k64_data_port_1
DECL|spi_k64_data_port_2|variable|spi_k64_data_port_2
DECL|spi_k64_halt|function|static inline void spi_k64_halt(struct device *dev)
DECL|spi_k64_init|function|int spi_k64_init(struct device *dev)
DECL|spi_k64_isr|function|void spi_k64_isr(void *arg)
DECL|spi_k64_pull_data|function|static void spi_k64_pull_data(struct device *dev)
DECL|spi_k64_push_data|function|static void spi_k64_push_data(struct device *dev)
DECL|spi_k64_resume|function|static int spi_k64_resume(struct device *dev)
DECL|spi_k64_set_baud_rate|function|static uint32_t spi_k64_set_baud_rate(uint32_t baud_rate, uint32_t *ctar_ptr)
DECL|spi_k64_set_delay|function|static uint32_t spi_k64_set_delay(enum spi_k64_delay_id delay_id,uint32_t delay_ns, uint32_t *ctar_ptr)
DECL|spi_k64_slave_select|function|static int spi_k64_slave_select(struct device *dev, uint32_t slave)
DECL|spi_k64_start|function|static inline void spi_k64_start(struct device *dev)
DECL|spi_k64_suspend|function|static int spi_k64_suspend(struct device *dev)
DECL|spi_k64_transceive|function|static int spi_k64_transceive(struct device *dev,const void *tx_buf, uint32_t tx_buf_len, void *rx_buf, uint32_t rx_buf_len)
