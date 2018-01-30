DECL|BLU_OFFSET|macro|BLU_OFFSET
DECL|GRN_OFFSET|macro|GRN_OFFSET
DECL|ONE_FRAME|macro|ONE_FRAME
DECL|RED_OFFSET|macro|RED_OFFSET
DECL|RESET_NFRAMES|macro|RESET_NFRAMES
DECL|SPI_FREQ|macro|SPI_FREQ
DECL|SPI_OPER|macro|SPI_OPER
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WHT_OFFSET|macro|WHT_OFFSET
DECL|WHT_OFFSET|macro|WHT_OFFSET
DECL|ZERO_FRAME|macro|ZERO_FRAME
DECL|config|member|struct spi_config config;
DECL|spi|member|struct device *spi;
DECL|ws2812_data|struct|struct ws2812_data {
DECL|ws2812_reset_strip|function|static int ws2812_reset_strip(struct ws2812_data *data)
DECL|ws2812_serialize_color|function|static inline void ws2812_serialize_color(u8_t buf[8], u8_t color)
DECL|ws2812_serialize_pixel|function|static size_t ws2812_serialize_pixel(u8_t px[32], struct led_rgb *pixel)
DECL|ws2812_strip_api|variable|ws2812_strip_api
DECL|ws2812_strip_data|variable|ws2812_strip_data
DECL|ws2812_strip_init|function|static int ws2812_strip_init(struct device *dev)
DECL|ws2812_strip_update_channels|function|static int ws2812_strip_update_channels(struct device *dev, u8_t *channels,size_t num_channels)
DECL|ws2812_strip_update_rgb|function|static int ws2812_strip_update_rgb(struct device *dev, struct led_rgb *pixels, size_t num_pixels)
