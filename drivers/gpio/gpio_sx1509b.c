DECL|SX1509B_REG_CLOCK_FOSC_EXT|enumerator|SX1509B_REG_CLOCK_FOSC_EXT = 1 << 5,
DECL|SX1509B_REG_CLOCK_FOSC_INT_2MHZ|enumerator|SX1509B_REG_CLOCK_FOSC_INT_2MHZ = 2 << 5,
DECL|SX1509B_REG_CLOCK_FOSC_OFF|enumerator|SX1509B_REG_CLOCK_FOSC_OFF = 0 << 5,
DECL|SX1509B_REG_CLOCK|enumerator|SX1509B_REG_CLOCK = 0x1e,
DECL|SX1509B_REG_DATA|enumerator|SX1509B_REG_DATA = 0x10,
DECL|SX1509B_REG_DIR|enumerator|SX1509B_REG_DIR = 0x0e,
DECL|SX1509B_REG_INPUT_DISABLE|enumerator|SX1509B_REG_INPUT_DISABLE = 0x00,
DECL|SX1509B_REG_LED_DRIVER_ENABLE|enumerator|SX1509B_REG_LED_DRIVER_ENABLE = 0x20,
DECL|SX1509B_REG_OPEN_DRAIN|enumerator|SX1509B_REG_OPEN_DRAIN = 0x0a,
DECL|SX1509B_REG_PULL_DOWN|enumerator|SX1509B_REG_PULL_DOWN = 0x08,
DECL|SX1509B_REG_PULL_UP|enumerator|SX1509B_REG_PULL_UP = 0x06,
DECL|SX1509B_REG_RESET_MAGIC0|enumerator|SX1509B_REG_RESET_MAGIC0 = 0x12,
DECL|SX1509B_REG_RESET_MAGIC1|enumerator|SX1509B_REG_RESET_MAGIC1 = 0x34,
DECL|SX1509B_REG_RESET|enumerator|SX1509B_REG_RESET = 0x7d,
DECL|data|member|u16_t data;
DECL|dir|member|u16_t dir;
DECL|gpio_sx1509b_cfg|variable|gpio_sx1509b_cfg
DECL|gpio_sx1509b_config|function|static int gpio_sx1509b_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_sx1509b_config|struct|struct gpio_sx1509b_config {
DECL|gpio_sx1509b_drv_api_funcs|variable|gpio_sx1509b_drv_api_funcs
DECL|gpio_sx1509b_drv_data|struct|struct gpio_sx1509b_drv_data {
DECL|gpio_sx1509b_drvdata|variable|gpio_sx1509b_drvdata
DECL|gpio_sx1509b_init|function|static int gpio_sx1509b_init(struct device *dev)
DECL|gpio_sx1509b_pin_state|struct|struct gpio_sx1509b_pin_state {
DECL|gpio_sx1509b_read|function|static int gpio_sx1509b_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_sx1509b_write|function|static int gpio_sx1509b_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|i2c_master_dev_name|member|const char *i2c_master_dev_name;
DECL|i2c_master|member|struct device *i2c_master;
DECL|i2c_reg_write_word_be|function|static inline int i2c_reg_write_word_be(struct device *dev, u16_t dev_addr,u8_t reg_addr, u16_t value)
DECL|i2c_slave_addr|member|u16_t i2c_slave_addr;
DECL|input_disable|member|u16_t input_disable;
DECL|lock|member|struct k_sem lock;
DECL|open_drain|member|u16_t open_drain;
DECL|pin_state|member|struct gpio_sx1509b_pin_state pin_state;
DECL|polarity|member|u16_t polarity;
DECL|pull_down|member|u16_t pull_down;
DECL|pull_up|member|u16_t pull_up;
