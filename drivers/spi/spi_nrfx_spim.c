DECL|SPI_NRFX_SPIM_DEVICE|macro|SPI_NRFX_SPIM_DEVICE
DECL|SPI_NRFX_SPIM_EXTENDED_CONFIG|macro|SPI_NRFX_SPIM_EXTENDED_CONFIG
DECL|SPI_NRFX_SPIM_EXTENDED_CONFIG|macro|SPI_NRFX_SPIM_EXTENDED_CONFIG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|buffer|member|u8_t buffer[CONFIG_SPI_NRFX_RAM_BUFFER_SIZE];
DECL|busy|member|bool busy;
DECL|chunk_len|member|size_t chunk_len;
DECL|configure|function|static int configure(struct device *dev, const struct spi_config *spi_cfg)
DECL|ctx|member|struct spi_context ctx;
DECL|event_handler|function|static void event_handler(const nrfx_spim_evt_t *p_event, void *p_context)
DECL|get_dev_config|function|static inline const struct spi_nrfx_config *get_dev_config(struct device *dev)
DECL|get_dev_data|function|static inline struct spi_nrfx_data *get_dev_data(struct device *dev)
DECL|get_nrf_spim_bit_order|function|static inline nrf_spim_bit_order_t get_nrf_spim_bit_order(u16_t operation)
DECL|get_nrf_spim_frequency|function|static inline nrf_spim_frequency_t get_nrf_spim_frequency(u32_t frequency)
DECL|get_nrf_spim_mode|function|static inline nrf_spim_mode_t get_nrf_spim_mode(u16_t operation)
DECL|init_spim|function|static int init_spim(struct device *dev, const nrfx_spim_config_t *config)
DECL|max_chunk_len|member|size_t max_chunk_len;
DECL|spi_nrfx_config|struct|struct spi_nrfx_config {
DECL|spi_nrfx_data|struct|struct spi_nrfx_data {
DECL|spi_nrfx_driver_api|variable|spi_nrfx_driver_api
DECL|spi_nrfx_release|function|static int spi_nrfx_release(struct device *dev, const struct spi_config *spi_cfg)
DECL|spi_nrfx_transceive_async|function|static int spi_nrfx_transceive_async(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_nrfx_transceive|function|static int spi_nrfx_transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|spim|member|nrfx_spim_t spim;
DECL|transceive|function|static int transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|transfer_next_chunk|function|static void transfer_next_chunk(struct device *dev)
