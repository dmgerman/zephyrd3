DECL|SHT3XD_CLEAR_STATUS_WAIT_USEC|macro|SHT3XD_CLEAR_STATUS_WAIT_USEC
DECL|SHT3XD_CMD_ART|macro|SHT3XD_CMD_ART
DECL|SHT3XD_CMD_CLEAR_STATUS|macro|SHT3XD_CMD_CLEAR_STATUS
DECL|SHT3XD_CMD_FETCH|macro|SHT3XD_CMD_FETCH
DECL|SHT3XD_CMD_READ_STATUS|macro|SHT3XD_CMD_READ_STATUS
DECL|SHT3XD_CMD_WRITE_TH_HIGH_CLEAR|macro|SHT3XD_CMD_WRITE_TH_HIGH_CLEAR
DECL|SHT3XD_CMD_WRITE_TH_HIGH_SET|macro|SHT3XD_CMD_WRITE_TH_HIGH_SET
DECL|SHT3XD_CMD_WRITE_TH_LOW_CLEAR|macro|SHT3XD_CMD_WRITE_TH_LOW_CLEAR
DECL|SHT3XD_CMD_WRITE_TH_LOW_SET|macro|SHT3XD_CMD_WRITE_TH_LOW_SET
DECL|SHT3XD_I2C_ADDRESS|macro|SHT3XD_I2C_ADDRESS
DECL|SHT3XD_MPS_IDX|macro|SHT3XD_MPS_IDX
DECL|SHT3XD_MPS_IDX|macro|SHT3XD_MPS_IDX
DECL|SHT3XD_MPS_IDX|macro|SHT3XD_MPS_IDX
DECL|SHT3XD_MPS_IDX|macro|SHT3XD_MPS_IDX
DECL|SHT3XD_MPS_IDX|macro|SHT3XD_MPS_IDX
DECL|SHT3XD_REPEATABILITY_IDX|macro|SHT3XD_REPEATABILITY_IDX
DECL|SHT3XD_REPEATABILITY_IDX|macro|SHT3XD_REPEATABILITY_IDX
DECL|SHT3XD_REPEATABILITY_IDX|macro|SHT3XD_REPEATABILITY_IDX
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ZEPHYR_DRIVERS_SENSOR_SHT3XD_SHT3XD_H_|macro|ZEPHYR_DRIVERS_SENSOR_SHT3XD_SHT3XD_H_
DECL|dev|member|struct device *dev;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct k_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|handler|member|sensor_trigger_handler_t handler;
DECL|i2c|member|struct device *i2c;
DECL|rh_high|member|u16_t rh_high;
DECL|rh_low|member|u16_t rh_low;
DECL|rh_sample|member|u16_t rh_sample;
DECL|sht3xd_data|struct|struct sht3xd_data {
DECL|sht3xd_measure_cmd|variable|sht3xd_measure_cmd
DECL|sht3xd_measure_wait|variable|sht3xd_measure_wait
DECL|t_high|member|u16_t t_high;
DECL|t_low|member|u16_t t_low;
DECL|t_sample|member|u16_t t_sample;
DECL|thread|member|struct k_thread thread;
DECL|trigger|member|struct sensor_trigger trigger;
DECL|work|member|struct k_work work;
