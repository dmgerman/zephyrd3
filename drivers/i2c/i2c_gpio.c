DECL|DEFINE_I2C_GPIO|macro|DEFINE_I2C_GPIO
DECL|api|variable|api
DECL|bitbang|member|struct i2c_bitbang bitbang; /* Bit-bang library data */
DECL|gpio_name|member|char *gpio_name;
DECL|gpio|member|struct device *gpio; /* GPIO used for I2C lines */
DECL|i2c_gpio_configure|function|static int i2c_gpio_configure(struct device *dev, u32_t dev_config)
DECL|i2c_gpio_config|struct|struct i2c_gpio_config {
DECL|i2c_gpio_context|struct|struct i2c_gpio_context {
DECL|i2c_gpio_get_sda|function|static int i2c_gpio_get_sda(void *io_context)
DECL|i2c_gpio_init|function|static int i2c_gpio_init(struct device *dev)
DECL|i2c_gpio_set_scl|function|static void i2c_gpio_set_scl(void *io_context, int state)
DECL|i2c_gpio_set_sda|function|static void i2c_gpio_set_sda(void *io_context, int state)
DECL|i2c_gpio_transfer|function|static int i2c_gpio_transfer(struct device *dev, struct i2c_msg *msgs,u8_t num_msgs, u16_t slave_address)
DECL|io_fns|variable|io_fns
DECL|scl_pin|member|u8_t scl_pin;
DECL|scl_pin|member|u8_t scl_pin; /* Pin on gpio used for SCL line */
DECL|sda_pin|member|u8_t sda_pin;
DECL|sda_pin|member|u8_t sda_pin; /* Pin on gpio used for SDA line */
