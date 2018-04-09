DECL|SPI_NRFX_SPIS_DEVICE|macro|SPI_NRFX_SPIS_DEVICE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|configure|function|static int configure(struct device *dev, const struct spi_config *spi_cfg)
DECL|ctx|member|struct spi_context ctx;
DECL|event_handler|function|static void event_handler(const nrfx_spis_evt_t *p_event, void *p_context)
DECL|get_dev_config|function|static inline const struct spi_nrfx_config *get_dev_config(struct device *dev)
DECL|get_dev_data|function|static inline struct spi_nrfx_data *get_dev_data(struct device *dev)
DECL|get_nrf_spis_bit_order|function|static inline nrf_spis_bit_order_t get_nrf_spis_bit_order(u16_t operation)
DECL|get_nrf_spis_mode|function|static inline nrf_spis_mode_t get_nrf_spis_mode(u16_t operation)
DECL|init_spis|function|static int init_spis(struct device *dev, const nrfx_spis_config_t *config)
DECL|max_buf_len|member|size_t max_buf_len;
DECL|prepare_for_transfer|function|static void prepare_for_transfer(struct device *dev)
DECL|spi_nrfx_config|struct|struct spi_nrfx_config {
DECL|spi_nrfx_data|struct|struct spi_nrfx_data {
DECL|spi_nrfx_driver_api|variable|spi_nrfx_driver_api
DECL|spi_nrfx_release|function|static int spi_nrfx_release(struct device *dev, const struct spi_config *spi_cfg)
DECL|spi_nrfx_transceive_async|function|static int spi_nrfx_transceive_async(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_nrfx_transceive|function|static int spi_nrfx_transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|spis|member|nrfx_spis_t spis;
DECL|transceive|function|static int transceive(struct device *dev, const struct spi_config *spi_cfg, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
