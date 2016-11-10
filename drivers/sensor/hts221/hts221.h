DECL|HTS221_AUTOINCREMENT_ADDR|macro|HTS221_AUTOINCREMENT_ADDR
DECL|HTS221_BDU_BIT|macro|HTS221_BDU_BIT
DECL|HTS221_CHIP_ID|macro|HTS221_CHIP_ID
DECL|HTS221_DRDY_EN|macro|HTS221_DRDY_EN
DECL|HTS221_I2C_ADDR|macro|HTS221_I2C_ADDR
DECL|HTS221_ODR_SHIFT|macro|HTS221_ODR_SHIFT
DECL|HTS221_PD_BIT|macro|HTS221_PD_BIT
DECL|HTS221_REG_CONVERSION_START|macro|HTS221_REG_CONVERSION_START
DECL|HTS221_REG_CTRL1|macro|HTS221_REG_CTRL1
DECL|HTS221_REG_CTRL3|macro|HTS221_REG_CTRL3
DECL|HTS221_REG_DATA_START|macro|HTS221_REG_DATA_START
DECL|HTS221_REG_WHO_AM_I|macro|HTS221_REG_WHO_AM_I
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__SENSOR_HTS221_H__|macro|__SENSOR_HTS221_H__
DECL|data_ready_handler|member|sensor_trigger_handler_t data_ready_handler;
DECL|data_ready_trigger|member|struct sensor_trigger data_ready_trigger;
DECL|dev|member|struct device *dev;
DECL|fiber_stack|member|char __stack fiber_stack[CONFIG_HTS221_FIBER_STACK_SIZE];
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct k_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|h0_rh_x2|member|uint8_t h0_rh_x2;
DECL|h0_t0_out|member|int16_t h0_t0_out;
DECL|h1_rh_x2|member|uint8_t h1_rh_x2;
DECL|h1_t0_out|member|int16_t h1_t0_out;
DECL|hts221_data|struct|struct hts221_data {
DECL|hts221_odr_strings|variable|hts221_odr_strings
DECL|i2c|member|struct device *i2c;
DECL|rh_sample|member|int16_t rh_sample;
DECL|t0_degc_x8|member|uint16_t t0_degc_x8;
DECL|t0_out|member|int16_t t0_out;
DECL|t1_degc_x8|member|uint16_t t1_degc_x8;
DECL|t1_out|member|int16_t t1_out;
DECL|t_sample|member|int16_t t_sample;
DECL|work|member|struct k_work work;
