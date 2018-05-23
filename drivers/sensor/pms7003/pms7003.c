DECL|CFG_PMS7003_SERIAL_TIMEOUT|macro|CFG_PMS7003_SERIAL_TIMEOUT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|pm_10|member|u16_t pm_10;
DECL|pm_1_0|member|u16_t pm_1_0;
DECL|pm_2_5|member|u16_t pm_2_5;
DECL|pms7003_api|variable|pms7003_api
DECL|pms7003_channel_get|function|static int pms7003_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|pms7003_data|struct|struct pms7003_data {
DECL|pms7003_data|variable|pms7003_data
DECL|pms7003_init|function|static int pms7003_init(struct device *dev)
DECL|pms7003_sample_fetch|function|static int pms7003_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|uart_dev|member|struct device *uart_dev;
DECL|uart_read_bytes|function|static int uart_read_bytes(struct device *dev, u8_t *data, int len, int timeout)
DECL|uart_wait_for|function|static int uart_wait_for(struct device *dev, u8_t *data, int len, int timeout)
