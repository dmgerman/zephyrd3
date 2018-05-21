DECL|ADC_CONTEXT_USES_KERNEL_TIMER|macro|ADC_CONTEXT_USES_KERNEL_TIMER
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|active_channels|member|u8_t active_channels;
DECL|adc_0|variable|adc_0
DECL|adc_context_start_sampling|function|static void adc_context_start_sampling(struct adc_context *ctx)
DECL|adc_context_update_buffer_pointer|function|static void adc_context_update_buffer_pointer(struct adc_context *ctx, bool repeat)
DECL|adc_nrfx_channel_setup|function|static int adc_nrfx_channel_setup(struct device *dev, const struct adc_channel_cfg *channel_cfg)
DECL|adc_nrfx_driver_api|variable|adc_nrfx_driver_api
DECL|adc_nrfx_read_async|function|static int adc_nrfx_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|adc_nrfx_read|function|static int adc_nrfx_read(struct device *dev, const struct adc_sequence *sequence)
DECL|buffer|member|nrf_adc_value_t *buffer;
DECL|check_buffer_size|function|static int check_buffer_size(const struct adc_sequence *sequence, u8_t active_channels)
DECL|ctx|member|struct adc_context ctx;
DECL|driver_data|struct|struct driver_data {
DECL|event_handler|function|static void event_handler(const nrfx_adc_evt_t *p_event)
DECL|init_adc|function|static int init_adc(struct device *dev)
DECL|m_channels|variable|m_channels
DECL|m_data|variable|m_data
DECL|start_read|function|static int start_read(struct device *dev, const struct adc_sequence *sequence)
