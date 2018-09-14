DECL|SX9500_CONV_DONE_IRQ|macro|SX9500_CONV_DONE_IRQ
DECL|SX9500_NEAR_FAR_IRQ|macro|SX9500_NEAR_FAR_IRQ
DECL|SX9500_REG_IRQ_MSK|macro|SX9500_REG_IRQ_MSK
DECL|SX9500_REG_IRQ_SRC|macro|SX9500_REG_IRQ_SRC
DECL|SX9500_REG_PROX_CTRL0|macro|SX9500_REG_PROX_CTRL0
DECL|SX9500_REG_PROX_CTRL1|macro|SX9500_REG_PROX_CTRL1
DECL|SX9500_REG_STAT|macro|SX9500_REG_STAT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ZEPHYR_DRIVERS_SENSOR_SX9500_SX9500_H_|macro|ZEPHYR_DRIVERS_SENSOR_SX9500_SX9500_H_
DECL|dev|member|struct device *dev;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|handler_drdy|member|sensor_trigger_handler_t handler_drdy;
DECL|handler_near_far|member|sensor_trigger_handler_t handler_near_far;
DECL|i2c_master|member|struct device *i2c_master;
DECL|i2c_slave_addr|member|u16_t i2c_slave_addr;
DECL|prox_stat|member|u8_t prox_stat;
DECL|sem|member|struct k_sem sem;
DECL|sx9500_data|struct|struct sx9500_data {
DECL|sx9500_setup_interrupt|function|static inline int sx9500_setup_interrupt(struct device *dev)
DECL|trigger_drdy|member|struct sensor_trigger trigger_drdy;
DECL|trigger_near_far|member|struct sensor_trigger trigger_near_far;
DECL|work|member|struct k_work work;
