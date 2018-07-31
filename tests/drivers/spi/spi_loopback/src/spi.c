DECL|BUF_SIZE|macro|BUF_SIZE
DECL|CS_CTRL_GPIO_DRV_NAME|macro|CS_CTRL_GPIO_DRV_NAME
DECL|CS_CTRL_GPIO_DRV_NAME|macro|CS_CTRL_GPIO_DRV_NAME
DECL|FAST_FREQ|macro|FAST_FREQ
DECL|SLOW_FREQ|macro|SLOW_FREQ
DECL|SPI_CS|macro|SPI_CS
DECL|SPI_CS|macro|SPI_CS
DECL|SPI_DRV_NAME|macro|SPI_DRV_NAME
DECL|SPI_SLAVE|macro|SPI_SLAVE
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|async_evt|variable|async_evt
DECL|async_sig|variable|async_sig
DECL|buffer_print_rx|variable|buffer_print_rx
DECL|buffer_print_tx|variable|buffer_print_tx
DECL|buffer_rx|variable|buffer_rx
DECL|buffer_tx|variable|buffer_tx
DECL|cs_ctrl_gpio_config|function|static int cs_ctrl_gpio_config(void)
DECL|result|variable|result
DECL|spi_async_call_cb|function|static void spi_async_call_cb(struct k_poll_event *async_evt, struct k_sem *caller_sem, void *unused)
DECL|spi_async_call|function|static int spi_async_call(struct device *dev, struct spi_config *spi_conf)
DECL|spi_cfg_fast|variable|spi_cfg_fast
DECL|spi_cfg_slow|variable|spi_cfg_slow
DECL|spi_complete_loop|function|static int spi_complete_loop(struct device *dev, struct spi_config *spi_conf)
DECL|spi_cs|variable|spi_cs
DECL|spi_resource_lock_test|function|static int spi_resource_lock_test(struct device *lock_dev, struct spi_config *spi_conf_lock, struct device *try_dev, struct spi_config *spi_conf_try)
DECL|spi_rx_every_4|function|static int spi_rx_every_4(struct device *dev, struct spi_config *spi_conf)
DECL|spi_rx_half_end|function|static int spi_rx_half_end(struct device *dev, struct spi_config *spi_conf)
DECL|spi_rx_half_start|function|static int spi_rx_half_start(struct device *dev, struct spi_config *spi_conf)
DECL|test_main|function|void test_main(void)
DECL|testing_spi|function|void testing_spi(void)
DECL|to_display_format|function|static void to_display_format(const u8_t *src, size_t size, char *dst)
