DECL|SPI_NRFX_SPI_DEVICE|macro|SPI_NRFX_SPI_DEVICE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|busy|member|bool busy;
DECL|chunk_len|member|size_t chunk_len;
DECL|configure|function|static int configure(struct device *dev, const struct spi_config *spi_cfg)
DECL|ctx|member|struct spi_context ctx;
DECL|event_handler|function|static void event_handler(const nrfx_spi_evt_t *p_event, void *p_context)
DECL|get_dev_config|function|static inline const struct spi_nrfx_config *get_dev_config(struct device *dev)
DECL|get_dev_data|function|static inline struct spi_nrfx_data *get_dev_data(struct device *dev)
DECL|get_nrf_spi_bit_order|function|static inline nrf_spi_bit_order_t get_nrf_spi_bit_order(u16_t operation)
DECL|get_nrf_spi_frequency|function|static inline nrf_spi_frequency_t get_nrf_spi_frequency(u32_t frequency)
DECL|get_nrf_spi_mode|function|static inline nrf_spi_mode_t get_nrf_spi_mode(u16_t operation)
DECL|init_spi|function|static int init_spi(struct device *dev, const nrfx_spi_config_t *config)
DECL|spi_nrfx_config|struct|struct spi_nrfx_config {
DECL|spi_nrfx_data|struct|struct spi_nrfx_data {
DECL|spi_nrfx_driver_api|variable|spi_nrfx_driver_api
DECL|spi_nrfx_release|function|static int spi_nrfx_release(struct device *dev, const struct spi_config *spi_cfg)
DECL|spi_nrfx_transceive_async|function|static int spi_nrfx_transceive_async(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_nrfx_transceive|function|static int spi_nrfx_transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|spi|member|nrfx_spi_t spi;
DECL|transceive|function|static int transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|transfer_next_chunk|function|static void transfer_next_chunk(struct device *dev)
