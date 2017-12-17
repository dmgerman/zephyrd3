DECL|SPI_SAM0_DEFINE_CONFIG|macro|SPI_SAM0_DEFINE_CONFIG
DECL|SPI_SAM0_DEVICE_INIT|macro|SPI_SAM0_DEVICE_INIT
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ctrla|member|u32_t ctrla;
DECL|ctx|member|struct spi_context ctx;
DECL|gclk_clkctrl_id|member|u16_t gclk_clkctrl_id;
DECL|pin_miso|member|struct soc_gpio_pin pin_miso;
DECL|pin_mosi|member|struct soc_gpio_pin pin_mosi;
DECL|pin_sck|member|struct soc_gpio_pin pin_sck;
DECL|pm_apbcmask|member|u32_t pm_apbcmask;
DECL|regs|member|SercomSpi *regs;
DECL|spi_sam0_configure|function|static int spi_sam0_configure(struct spi_config *config)
DECL|spi_sam0_config|struct|struct spi_sam0_config {
DECL|spi_sam0_data|struct|struct spi_sam0_data {
DECL|spi_sam0_driver_api|variable|spi_sam0_driver_api
DECL|spi_sam0_fast_rx|function|static void spi_sam0_fast_rx(SercomSpi *regs, struct spi_buf *rx_buf)
DECL|spi_sam0_fast_transceive|function|static void spi_sam0_fast_transceive(struct spi_config *config, const struct spi_buf *tx_bufs, size_t tx_count, struct spi_buf *rx_bufs, size_t rx_count)
DECL|spi_sam0_fast_txrx|function|static void spi_sam0_fast_txrx(SercomSpi *regs, const struct spi_buf *tx_buf, struct spi_buf *rx_buf)
DECL|spi_sam0_fast_tx|function|static void spi_sam0_fast_tx(SercomSpi *regs, const struct spi_buf *tx_buf)
DECL|spi_sam0_finish|function|static void spi_sam0_finish(SercomSpi *regs)
DECL|spi_sam0_init|function|static int spi_sam0_init(struct device *dev)
DECL|spi_sam0_is_regular|function|static bool spi_sam0_is_regular(const struct spi_buf *tx_bufs,size_t tx_count, struct spi_buf *rx_bufs, size_t rx_count)
DECL|spi_sam0_release|function|static int spi_sam0_release(struct spi_config *config)
DECL|spi_sam0_shift_master|function|static void spi_sam0_shift_master(SercomSpi *regs, struct spi_sam0_data *data)
DECL|spi_sam0_transceive|function|static int spi_sam0_transceive(struct spi_config *config, const struct spi_buf *tx_bufs, size_t tx_count, struct spi_buf *rx_bufs, size_t rx_count)
DECL|spi_sam0_transfer_ongoing|function|static bool spi_sam0_transfer_ongoing(struct spi_sam0_data *data)
DECL|wait_synchronization|function|static void wait_synchronization(SercomSpi *regs)
