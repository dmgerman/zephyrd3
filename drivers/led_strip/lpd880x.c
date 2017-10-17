DECL|LPD880X_SPI_OPERATION|macro|LPD880X_SPI_OPERATION
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|config|member|struct spi_config config;
DECL|lpd880x_data|struct|struct lpd880x_data {
DECL|lpd880x_strip_api|variable|lpd880x_strip_api
DECL|lpd880x_strip_data|variable|lpd880x_strip_data
DECL|lpd880x_strip_init|function|static int lpd880x_strip_init(struct device *dev)
DECL|lpd880x_strip_update_channels|function|static int lpd880x_strip_update_channels(struct device *dev, u8_t *channels, size_t num_channels)
DECL|lpd880x_strip_update_rgb|function|static int lpd880x_strip_update_rgb(struct device *dev, struct led_rgb *pixels, size_t num_pixels)
DECL|lpd880x_update|function|static int lpd880x_update(struct device *dev, void *data, size_t size)
