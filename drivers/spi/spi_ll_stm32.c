DECL|CONFIG_CFG|macro|CONFIG_CFG
DECL|CONFIG_DATA|macro|CONFIG_DATA
DECL|SPI_STM32_ERR_MSK|macro|SPI_STM32_ERR_MSK
DECL|SPI_STM32_ERR_MSK|macro|SPI_STM32_ERR_MSK
DECL|SPI_STM32_TX_NOP|macro|SPI_STM32_TX_NOP
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|api_funcs|variable|api_funcs
DECL|spi_stm32_cfg_1|variable|spi_stm32_cfg_1
DECL|spi_stm32_cfg_2|variable|spi_stm32_cfg_2
DECL|spi_stm32_cfg_3|variable|spi_stm32_cfg_3
DECL|spi_stm32_complete|function|static void spi_stm32_complete(struct spi_stm32_data *data, SPI_TypeDef *spi, int status)
DECL|spi_stm32_configure|function|static int spi_stm32_configure(struct spi_config *config)
DECL|spi_stm32_dev_data_1|variable|spi_stm32_dev_data_1
DECL|spi_stm32_dev_data_2|variable|spi_stm32_dev_data_2
DECL|spi_stm32_dev_data_3|variable|spi_stm32_dev_data_3
DECL|spi_stm32_get_err|function|static int spi_stm32_get_err(SPI_TypeDef *spi)
DECL|spi_stm32_init|function|static int spi_stm32_init(struct device *dev)
DECL|spi_stm32_irq_config_func_1|function|static void spi_stm32_irq_config_func_1(struct device *dev)
DECL|spi_stm32_irq_config_func_2|function|static void spi_stm32_irq_config_func_2(struct device *dev)
DECL|spi_stm32_irq_config_func_3|function|static void spi_stm32_irq_config_func_3(struct device *dev)
DECL|spi_stm32_isr|function|static void spi_stm32_isr(void *arg)
DECL|spi_stm32_next_tx|function|static inline u8_t spi_stm32_next_tx(struct spi_stm32_data *data)
DECL|spi_stm32_release|function|static int spi_stm32_release(struct spi_config *config)
DECL|spi_stm32_shift_frames|function|static int spi_stm32_shift_frames(SPI_TypeDef *spi, struct spi_stm32_data *data)
DECL|spi_stm32_shift_m|function|static void spi_stm32_shift_m(SPI_TypeDef *spi, struct spi_stm32_data *data)
DECL|spi_stm32_shift_s|function|static void spi_stm32_shift_s(SPI_TypeDef *spi, struct spi_stm32_data *data)
DECL|spi_stm32_transceive_async|function|static int spi_stm32_transceive_async(struct spi_config *config, const struct spi_buf *tx_bufs, size_t tx_count, struct spi_buf *rx_bufs, size_t rx_count,
DECL|spi_stm32_transceive|function|static int spi_stm32_transceive(struct spi_config *config,const struct spi_buf *tx_bufs, u32_t tx_count, struct spi_buf *rx_bufs, u32_t rx_count)
DECL|spi_stm32_transfer_ongoing|function|static bool spi_stm32_transfer_ongoing(struct spi_stm32_data *data)
DECL|transceive|function|static int transceive(struct spi_config *config, const struct spi_buf *tx_bufs, u32_t tx_count, struct spi_buf *rx_bufs, u32_t rx_count, bool asynchronous, struct k_poll_signal *signal)
