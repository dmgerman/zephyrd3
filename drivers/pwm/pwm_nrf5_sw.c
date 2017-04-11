DECL|PWM_0_DATA_SIZE|macro|PWM_0_DATA_SIZE
DECL|PWM_0_MAP_SIZE|macro|PWM_0_MAP_SIZE
DECL|chan_map|struct|struct chan_map {
DECL|gpiote_base|member|uint8_t gpiote_base;
DECL|map_size|member|uint8_t map_size;
DECL|map|member|struct chan_map map[];
DECL|period_cycles|member|uint32_t period_cycles;
DECL|ppi_base|member|uint8_t ppi_base;
DECL|pulse_cycles|member|uint32_t pulse_cycles;
DECL|pwm_channel_map|function|static uint8_t pwm_channel_map(struct pwm_data *data, uint8_t map_size, uint32_t pwm)
DECL|pwm_config|struct|struct pwm_config {
DECL|pwm_data|struct|struct pwm_data {
DECL|pwm_nrf5_sw_0_config|variable|pwm_nrf5_sw_0_config
DECL|pwm_nrf5_sw_0_data|variable|pwm_nrf5_sw_0_data
DECL|pwm_nrf5_sw_drv_api_funcs|variable|pwm_nrf5_sw_drv_api_funcs
DECL|pwm_nrf5_sw_get_cycles_per_sec|function|static int pwm_nrf5_sw_get_cycles_per_sec(struct device *dev, uint32_t pwm, uint64_t *cycles)
DECL|pwm_nrf5_sw_init|function|static int pwm_nrf5_sw_init(struct device *dev)
DECL|pwm_nrf5_sw_pin_set|function|static int pwm_nrf5_sw_pin_set(struct device *dev, uint32_t pwm, uint32_t period_cycles, uint32_t pulse_cycles)
DECL|pwm_period_check|function|static uint32_t pwm_period_check(struct pwm_data *data, uint8_t map_size, uint32_t pwm, uint32_t period_cycles, uint32_t pulse_cycles)
DECL|pwm|member|uint32_t pwm;
DECL|timer|member|NRF_TIMER_Type *timer;
