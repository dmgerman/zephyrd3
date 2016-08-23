DECL|APA102C_BRIGHTNESS_MASK|macro|APA102C_BRIGHTNESS_MASK
DECL|APA102C_BRIGHTNESS|macro|APA102C_BRIGHTNESS
DECL|APA102C_END_FRAME|macro|APA102C_END_FRAME
DECL|APA102C_START_FRAME|macro|APA102C_START_FRAME
DECL|APDS9960_ADDR|macro|APDS9960_ADDR
DECL|GPIO_CLK_PIN|macro|GPIO_CLK_PIN
DECL|GPIO_DATA_PIN|macro|GPIO_DATA_PIN
DECL|GPIO_DRV_NAME|macro|GPIO_DRV_NAME
DECL|GPIO_NAME|macro|GPIO_NAME
DECL|I2C_DRV_NAME|macro|I2C_DRV_NAME
DECL|PRINT|macro|PRINT
DECL|PRINT|macro|PRINT
DECL|SLEEP_MSEC|macro|SLEEP_MSEC
DECL|apa102c_led_program|function|void apa102c_led_program(struct device *gpio_dev, uint32_t rgb)
DECL|apa102c_rgb_send|function|void apa102c_rgb_send(struct device *gpio_dev, uint32_t rgb)
DECL|apds9960_als_valid_wait|function|void apds9960_als_valid_wait(struct device *i2c_dev)
DECL|apds9960_reg_read|function|void apds9960_reg_read(struct device *i2c_dev, uint8_t reg_addr, uint8_t *data, uint8_t data_len)
DECL|apds9960_reg_write|function|void apds9960_reg_write(struct device *i2c_dev,uint8_t reg_addr, uint8_t reg_val)
DECL|apds9960_setup|function|void apds9960_setup(struct device *i2c_dev, int gain)
DECL|bdatah|member|uint8_t bdatah;
DECL|bdatal|member|uint8_t bdatal;
DECL|cdatah|member|uint8_t cdatah;
DECL|cdatal|member|uint8_t cdatal;
DECL|ch|member|} ch;
DECL|gdatah|member|uint8_t gdatah;
DECL|gdatal|member|uint8_t gdatal;
DECL|main|function|void main(void)
DECL|raw|member|uint8_t raw[8];
DECL|rdatah|member|uint8_t rdatah;
DECL|rdatal|member|uint8_t rdatal;
DECL|rgbc_t|union|union rgbc_t {
