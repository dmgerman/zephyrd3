DECL|ILI9340_CMD_DATA_PIN_COMMAND|macro|ILI9340_CMD_DATA_PIN_COMMAND
DECL|ILI9340_CMD_DATA_PIN_DATA|macro|ILI9340_CMD_DATA_PIN_DATA
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|command_data_gpio|member|struct device *command_data_gpio;
DECL|cs_ctrl|member|struct spi_cs_control cs_ctrl;
DECL|display|variable|display
DECL|ili9340_api|variable|ili9340_api
DECL|ili9340_data|struct|struct ili9340_data {
DECL|ili9340_data|variable|ili9340_data
DECL|ili9340_display_blanking_off|function|static int ili9340_display_blanking_off(const struct device *dev)
DECL|ili9340_display_blanking_on|function|static int ili9340_display_blanking_on(const struct device *dev)
DECL|ili9340_exit_sleep|function|static void ili9340_exit_sleep(struct ili9340_data *data)
DECL|ili9340_get_capabilities|function|static void ili9340_get_capabilities(const struct device *dev, struct display_capabilities *capabilities)
DECL|ili9340_get_framebuffer|function|static void *ili9340_get_framebuffer(const struct device *dev)
DECL|ili9340_init|function|static int ili9340_init(struct device *dev)
DECL|ili9340_read|function|static int ili9340_read(const struct device *dev, const u16_t x,const u16_t y, const struct display_buffer_descriptor *desc, void *buf)
DECL|ili9340_set_brightness|function|static int ili9340_set_brightness(const struct device *dev, const u8_t brightness)
DECL|ili9340_set_contrast|function|static int ili9340_set_contrast(const struct device *dev, const u8_t contrast)
DECL|ili9340_set_mem_area|function|static void ili9340_set_mem_area(struct ili9340_data *data, const u16_t x, const u16_t y, const u16_t w, const u16_t h)
DECL|ili9340_set_orientation|function|static int ili9340_set_orientation(const struct device *dev, const enum display_orientation orientation)
DECL|ili9340_set_pixel_format|function|static int ili9340_set_pixel_format(const struct device *dev, const enum display_pixel_format pixel_format)
DECL|ili9340_transmit|function|void ili9340_transmit(struct ili9340_data *data, u8_t cmd, void *tx_data, size_t tx_len)
DECL|ili9340_write|function|static int ili9340_write(const struct device *dev, const u16_t x, const u16_t y, const struct display_buffer_descriptor *desc, const void *buf)
DECL|reset_gpio|member|struct device *reset_gpio;
DECL|spi_config|member|struct spi_config spi_config;
DECL|spi_dev|member|struct device *spi_dev;
