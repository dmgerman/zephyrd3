DECL|apa102_api|variable|apa102_api
DECL|apa102_data_0|variable|apa102_data_0
DECL|apa102_data|struct|struct apa102_data {
DECL|apa102_init|function|static int apa102_init(struct device *dev)
DECL|apa102_update_channels|function|static int apa102_update_channels(struct device *dev, u8_t *channels, size_t num_channels)
DECL|apa102_update_rgb|function|static int apa102_update_rgb(struct device *dev, struct led_rgb *pixels, size_t count)
DECL|apa102_update|function|static int apa102_update(struct device *dev, void *buf, size_t size)
DECL|cfg|member|struct spi_config cfg;
