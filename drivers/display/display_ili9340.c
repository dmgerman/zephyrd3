DECL|ILI9340_CMD_DATA_PIN_COMMAND|macro|ILI9340_CMD_DATA_PIN_COMMAND
DECL|ILI9340_CMD_DATA_PIN_DATA|macro|ILI9340_CMD_DATA_PIN_DATA
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|command_data_gpio|member|struct device *command_data_gpio;
DECL|cs_ctrl|member|struct spi_cs_control cs_ctrl;
DECL|display|variable|display
DECL|ili9340_data|struct|struct ili9340_data {
DECL|ili9340_data|variable|ili9340_data
DECL|ili9340_display_off|function|void ili9340_display_off(struct device *dev)
DECL|ili9340_display_on|function|void ili9340_display_on(struct device *dev)
DECL|ili9340_exit_sleep|function|void ili9340_exit_sleep(struct ili9340_data *data)
DECL|ili9340_init|function|int ili9340_init(struct device *dev)
DECL|ili9340_set_mem_area|function|void ili9340_set_mem_area(struct ili9340_data *data, const u16_t x, const u16_t y, const u16_t w, const u16_t h)
DECL|ili9340_transmit|function|void ili9340_transmit(struct ili9340_data *data, u8_t cmd, void *tx_data, size_t tx_len)
DECL|ili9340_write_bitmap|function|void ili9340_write_bitmap(const struct device *dev, const u16_t x, const u16_t y, const u16_t w, const u16_t h, const u8_t *rgb_data)
DECL|ili9340_write_pixel|function|void ili9340_write_pixel(const struct device *dev, const u16_t x, const u16_t y, const u8_t r, const u8_t g, const u8_t b)
DECL|reset_gpio|member|struct device *reset_gpio;
DECL|spi_config|member|struct spi_config spi_config;
DECL|spi_dev|member|struct device *spi_dev;
