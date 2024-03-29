DECL|AMG88XX_AVE_MAMOD_MASK|macro|AMG88XX_AVE_MAMOD_MASK
DECL|AMG88XX_AVE|macro|AMG88XX_AVE
DECL|AMG88XX_FPSC_10FPS|macro|AMG88XX_FPSC_10FPS
DECL|AMG88XX_FPSC_1FPS|macro|AMG88XX_FPSC_1FPS
DECL|AMG88XX_FPSC|macro|AMG88XX_FPSC
DECL|AMG88XX_I2C_ADDRESS|macro|AMG88XX_I2C_ADDRESS
DECL|AMG88XX_INT0|macro|AMG88XX_INT0
DECL|AMG88XX_INT1|macro|AMG88XX_INT1
DECL|AMG88XX_INT2|macro|AMG88XX_INT2
DECL|AMG88XX_INT3|macro|AMG88XX_INT3
DECL|AMG88XX_INT4|macro|AMG88XX_INT4
DECL|AMG88XX_INT5|macro|AMG88XX_INT5
DECL|AMG88XX_INT6|macro|AMG88XX_INT6
DECL|AMG88XX_INT7|macro|AMG88XX_INT7
DECL|AMG88XX_INTC_ABS_MODE|macro|AMG88XX_INTC_ABS_MODE
DECL|AMG88XX_INTC_DIFF_MODE|macro|AMG88XX_INTC_DIFF_MODE
DECL|AMG88XX_INTC_DISABLED|macro|AMG88XX_INTC_DISABLED
DECL|AMG88XX_INTC|macro|AMG88XX_INTC
DECL|AMG88XX_INTHH|macro|AMG88XX_INTHH
DECL|AMG88XX_INTHL|macro|AMG88XX_INTHL
DECL|AMG88XX_INTLH|macro|AMG88XX_INTLH
DECL|AMG88XX_INTLL|macro|AMG88XX_INTLL
DECL|AMG88XX_INTSH|macro|AMG88XX_INTSH
DECL|AMG88XX_INTSL|macro|AMG88XX_INTSL
DECL|AMG88XX_OUTPUT_BASE|macro|AMG88XX_OUTPUT_BASE
DECL|AMG88XX_PCLT_NORMAL_MODE|macro|AMG88XX_PCLT_NORMAL_MODE
DECL|AMG88XX_PCLT_SLEEEP_MODE|macro|AMG88XX_PCLT_SLEEEP_MODE
DECL|AMG88XX_PCLT_STAND_BY_10S_MODE|macro|AMG88XX_PCLT_STAND_BY_10S_MODE
DECL|AMG88XX_PCLT_STAND_BY_60S_MODE|macro|AMG88XX_PCLT_STAND_BY_60S_MODE
DECL|AMG88XX_PCLT|macro|AMG88XX_PCLT
DECL|AMG88XX_RST_FLAG_RST|macro|AMG88XX_RST_FLAG_RST
DECL|AMG88XX_RST_INITIAL_RST|macro|AMG88XX_RST_INITIAL_RST
DECL|AMG88XX_RST|macro|AMG88XX_RST
DECL|AMG88XX_SCLR_INTCLR_MASK|macro|AMG88XX_SCLR_INTCLR_MASK
DECL|AMG88XX_SCLR_OVS_CLR_MASK|macro|AMG88XX_SCLR_OVS_CLR_MASK
DECL|AMG88XX_SCLR|macro|AMG88XX_SCLR
DECL|AMG88XX_STAT_INTF_MASK|macro|AMG88XX_STAT_INTF_MASK
DECL|AMG88XX_STAT_OVF_IRS_MASK|macro|AMG88XX_STAT_OVF_IRS_MASK
DECL|AMG88XX_STAT|macro|AMG88XX_STAT
DECL|AMG88XX_TREG_LSB_SCALING|macro|AMG88XX_TREG_LSB_SCALING
DECL|AMG88XX_TTHH|macro|AMG88XX_TTHH
DECL|AMG88XX_TTHL|macro|AMG88XX_TTHL
DECL|AMG88XX_WAIT_INITIAL_RESET_US|macro|AMG88XX_WAIT_INITIAL_RESET_US
DECL|AMG88XX_WAIT_MODE_CHANGE_US|macro|AMG88XX_WAIT_MODE_CHANGE_US
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ZEPHYR_DRIVERS_SENSOR_AMG88XX_AMG88XX_H_|macro|ZEPHYR_DRIVERS_SENSOR_AMG88XX_AMG88XX_H_
DECL|amg88xx_data|struct|struct amg88xx_data {
DECL|amg88xx_reg_read|function|static inline int amg88xx_reg_read(struct amg88xx_data *drv_data, u8_t reg, u8_t *val)
DECL|amg88xx_reg_update|function|static inline int amg88xx_reg_update(struct amg88xx_data *drv_data, u8_t reg, u8_t mask, u8_t val)
DECL|amg88xx_reg_write|function|static inline int amg88xx_reg_write(struct amg88xx_data *drv_data, u8_t reg, u8_t val)
DECL|dev|member|struct device *dev;
DECL|drdy_handler|member|sensor_trigger_handler_t drdy_handler;
DECL|drdy_trigger|member|struct sensor_trigger drdy_trigger;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct k_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|i2c|member|struct device *i2c;
DECL|sample|member|s16_t sample[64];
DECL|th_handler|member|sensor_trigger_handler_t th_handler;
DECL|th_trigger|member|struct sensor_trigger th_trigger;
DECL|thread|member|struct k_thread thread;
DECL|work|member|struct k_work work;
