DECL|ADC_CONTEXT_USES_KERNEL_TIMER|macro|ADC_CONTEXT_USES_KERNEL_TIMER
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_nrf_saadc_burst_set|function|static void _nrf_saadc_burst_set(uint8_t channel, nrf_saadc_burst_t burst)
DECL|adc_0|variable|adc_0
DECL|adc_context_start_sampling|function|static void adc_context_start_sampling(struct adc_context *ctx)
DECL|adc_context_update_buffer_pointer|function|static void adc_context_update_buffer_pointer(struct adc_context *ctx, bool repeat)
DECL|adc_nrfx_channel_setup|function|static int adc_nrfx_channel_setup(struct device *dev, const struct adc_channel_cfg *channel_cfg)
DECL|adc_nrfx_driver_api|variable|adc_nrfx_driver_api
DECL|adc_nrfx_read_async|function|static int adc_nrfx_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|adc_nrfx_read|function|static int adc_nrfx_read(struct device *dev, const struct adc_sequence *sequence)
DECL|check_buffer_size|function|static int check_buffer_size(const struct adc_sequence *sequence, u8_t active_channels)
DECL|ctx|member|struct adc_context ctx;
DECL|driver_data|struct|struct driver_data {
DECL|init_saadc|function|static int init_saadc(struct device *dev)
DECL|m_data|variable|m_data
DECL|positive_inputs|member|u8_t positive_inputs[NRF_SAADC_CHANNEL_COUNT];
DECL|saadc_irq_handler|function|static void saadc_irq_handler(void *param)
DECL|set_oversampling|function|static int set_oversampling(const struct adc_sequence *sequence, u8_t active_channels)
DECL|set_resolution|function|static int set_resolution(const struct adc_sequence *sequence)
DECL|start_read|function|static int start_read(struct device *dev, const struct adc_sequence *sequence)
