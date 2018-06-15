DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|adc_cb_t|typedef|} adc_cb_t;
DECL|adc_sample_process|function|static bool adc_sample_process()
DECL|event_handler|member|nrfx_adc_event_handler_t event_handler;
DECL|idx|member|uint16_t idx;
DECL|m_cb|variable|m_cb
DECL|nrfx_adc_all_channels_disable|function|void nrfx_adc_all_channels_disable(void)
DECL|nrfx_adc_buffer_convert|function|nrfx_err_t nrfx_adc_buffer_convert(nrf_adc_value_t * buffer, uint16_t size)
DECL|nrfx_adc_channel_disable|function|void nrfx_adc_channel_disable(nrfx_adc_channel_t * const p_channel)
DECL|nrfx_adc_channel_enable|function|void nrfx_adc_channel_enable(nrfx_adc_channel_t * const p_channel)
DECL|nrfx_adc_init|function|nrfx_err_t nrfx_adc_init(nrfx_adc_config_t const * p_config, nrfx_adc_event_handler_t event_handler)
DECL|nrfx_adc_irq_handler|function|void nrfx_adc_irq_handler(void)
DECL|nrfx_adc_is_busy|function|bool nrfx_adc_is_busy(void)
DECL|nrfx_adc_sample_convert|function|nrfx_err_t nrfx_adc_sample_convert(nrfx_adc_channel_t const * const p_channel, nrf_adc_value_t * p_value)
DECL|nrfx_adc_sample|function|void nrfx_adc_sample(void)
DECL|nrfx_adc_uninit|function|void nrfx_adc_uninit(void)
DECL|p_buffer|member|nrf_adc_value_t * p_buffer;
DECL|p_current_conv|member|nrfx_adc_channel_t * p_current_conv;
DECL|p_head|member|nrfx_adc_channel_t * p_head;
DECL|size|member|uint16_t size;
DECL|state|member|nrfx_drv_state_t state;
