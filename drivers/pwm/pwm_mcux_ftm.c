DECL|MAX_CHANNELS|macro|MAX_CHANNELS
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base|member|FTM_Type *base;
DECL|channel_count|member|u8_t channel_count;
DECL|channel|member|ftm_chnl_pwm_signal_param_t channel[MAX_CHANNELS];
DECL|clock_source|member|clock_name_t clock_source;
DECL|ftm_clock_source|member|ftm_clock_source_t ftm_clock_source;
DECL|mcux_ftm_config_0|variable|mcux_ftm_config_0
DECL|mcux_ftm_config_1|variable|mcux_ftm_config_1
DECL|mcux_ftm_config_2|variable|mcux_ftm_config_2
DECL|mcux_ftm_config_3|variable|mcux_ftm_config_3
DECL|mcux_ftm_config|struct|struct mcux_ftm_config {
DECL|mcux_ftm_data_0|variable|mcux_ftm_data_0
DECL|mcux_ftm_data_1|variable|mcux_ftm_data_1
DECL|mcux_ftm_data_2|variable|mcux_ftm_data_2
DECL|mcux_ftm_data_3|variable|mcux_ftm_data_3
DECL|mcux_ftm_data|struct|struct mcux_ftm_data {
DECL|mcux_ftm_driver_api|variable|mcux_ftm_driver_api
DECL|mcux_ftm_get_cycles_per_sec|function|static int mcux_ftm_get_cycles_per_sec(struct device *dev, u32_t pwm, u64_t *cycles)
DECL|mcux_ftm_init|function|static int mcux_ftm_init(struct device *dev)
DECL|mcux_ftm_pin_set|function|static int mcux_ftm_pin_set(struct device *dev, u32_t pwm, u32_t period_cycles, u32_t pulse_cycles)
DECL|mode|member|ftm_pwm_mode_t mode;
DECL|period_cycles|member|u32_t period_cycles;
DECL|prescale|member|ftm_clock_prescale_t prescale;
