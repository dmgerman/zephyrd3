DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|TEMP_NRF5_TEMP_SCALE|macro|TEMP_NRF5_TEMP_SCALE
DECL|clk_m16_dev|member|struct device *clk_m16_dev;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|sample|member|int32_t sample;
DECL|temp_nrf5_channel_get|function|static int temp_nrf5_channel_get(struct device *dev,enum sensor_channel chan, struct sensor_value *val)
DECL|temp_nrf5_data|struct|struct temp_nrf5_data {
DECL|temp_nrf5_driver_api|variable|temp_nrf5_driver_api
DECL|temp_nrf5_driver|variable|temp_nrf5_driver
DECL|temp_nrf5_init|function|static int temp_nrf5_init(struct device *dev)
DECL|temp_nrf5_isr|function|static void temp_nrf5_isr(void *arg)
DECL|temp_nrf5_sample_fetch|function|static int temp_nrf5_sample_fetch(struct device *dev, enum sensor_channel chan)
