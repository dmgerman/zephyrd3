DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|completed|function|static void completed(struct device *dev, u32_t error)
DECL|intel_spi_api|variable|intel_spi_api
DECL|pull_data|function|static void pull_data(struct device *dev)
DECL|push_data|function|static void push_data(struct device *dev)
DECL|spi_config_0_irq|function|void spi_config_0_irq(void)
DECL|spi_config_1_irq|function|void spi_config_1_irq(void)
DECL|spi_intel_config_0|variable|spi_intel_config_0
DECL|spi_intel_config_1|variable|spi_intel_config_1
DECL|spi_intel_configure|function|static int spi_intel_configure(struct device *dev, const struct spi_config *config)
DECL|spi_intel_data_port_0|variable|spi_intel_data_port_0
DECL|spi_intel_data_port_1|variable|spi_intel_data_port_1
DECL|spi_intel_device_ctrl|function|static int spi_intel_device_ctrl(struct device *dev, u32_t ctrl_command, void *context)
DECL|spi_intel_get_power_state|function|static u32_t spi_intel_get_power_state(struct device *dev)
DECL|spi_intel_init|function|int spi_intel_init(struct device *dev)
DECL|spi_intel_isr|function|void spi_intel_isr(struct device *dev)
DECL|spi_intel_release|function|static int spi_intel_release(struct device *dev, const struct spi_config *config)
DECL|spi_intel_resume_from_suspend|function|static int spi_intel_resume_from_suspend(struct device *dev)
DECL|spi_intel_set_power_state|function|static void spi_intel_set_power_state(struct device *dev, u32_t power_state)
DECL|spi_intel_set_power_state|macro|spi_intel_set_power_state
DECL|spi_intel_set_power_state|macro|spi_intel_set_power_state
DECL|spi_intel_setup|function|static inline int spi_intel_setup(struct device *dev)
DECL|spi_intel_setup|macro|spi_intel_setup
DECL|spi_intel_suspend|function|static int spi_intel_suspend(struct device *dev)
DECL|spi_intel_transceive_async|function|static int spi_intel_transceive_async(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_intel_transceive|function|static int spi_intel_transceive(struct device *dev,const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|transceive|function|static int transceive(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, bool asynchronous,
