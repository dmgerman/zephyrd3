DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base|member|SPI_Type *base;
DECL|callback_status|member|status_t callback_status;
DECL|clock_source|member|clock_name_t clock_source;
DECL|ctx|member|struct spi_context ctx;
DECL|default_cfg|member|struct spi_config default_cfg;
DECL|handle|member|dspi_master_handle_t handle;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|slave|member|u32_t slave;
DECL|spi_mcux_config_0|variable|spi_mcux_config_0
DECL|spi_mcux_config_1|variable|spi_mcux_config_1
DECL|spi_mcux_config_2|variable|spi_mcux_config_2
DECL|spi_mcux_config_func_0|function|static void spi_mcux_config_func_0(struct device *dev)
DECL|spi_mcux_config_func_1|function|static void spi_mcux_config_func_1(struct device *dev)
DECL|spi_mcux_config_func_2|function|static void spi_mcux_config_func_2(struct device *dev)
DECL|spi_mcux_configure|function|static int spi_mcux_configure(struct device *dev, const struct spi_config *spi_cfg)
DECL|spi_mcux_configure|function|static int spi_mcux_configure(struct device *dev, struct spi_config *spi_config)
DECL|spi_mcux_config|struct|struct spi_mcux_config {
DECL|spi_mcux_data_0|variable|spi_mcux_data_0
DECL|spi_mcux_data_1|variable|spi_mcux_data_1
DECL|spi_mcux_data_2|variable|spi_mcux_data_2
DECL|spi_mcux_data|struct|struct spi_mcux_data {
DECL|spi_mcux_driver_api|variable|spi_mcux_driver_api
DECL|spi_mcux_driver_api|variable|spi_mcux_driver_api
DECL|spi_mcux_init|function|static int spi_mcux_init(struct device *dev)
DECL|spi_mcux_init|function|static int spi_mcux_init(struct device *dev)
DECL|spi_mcux_isr|function|static void spi_mcux_isr(void *arg)
DECL|spi_mcux_isr|function|static void spi_mcux_isr(void *arg)
DECL|spi_mcux_master_transfer_callback|function|static void spi_mcux_master_transfer_callback(SPI_Type *base,dspi_master_handle_t *handle, status_t status, void *userData)
DECL|spi_mcux_master_transfer_callback|function|static void spi_mcux_master_transfer_callback(SPI_Type *base,dspi_master_handle_t *handle, status_t status, void *userData)
DECL|spi_mcux_release|function|static int spi_mcux_release(struct device *dev, const struct spi_config *spi_cfg)
DECL|spi_mcux_slave_select|function|static int spi_mcux_slave_select(struct device *dev, u32_t slave)
DECL|spi_mcux_transceive_async|function|static int spi_mcux_transceive_async(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_mcux_transceive|function|static int spi_mcux_transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|spi_mcux_transceive|function|static int spi_mcux_transceive(struct device *dev,const void *tx_buf, u32_t tx_buf_len, void *rx_buf, u32_t rx_buf_len)
DECL|spi_mcux_transfer_next_packet|function|static void spi_mcux_transfer_next_packet(struct device *dev)
DECL|sync|member|struct k_sem sync;
DECL|transceive|function|static int transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, bool asynchronous,
DECL|transfer_len|member|size_t transfer_len;
