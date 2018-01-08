DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|FLAG_IDX_TO_EVENT|macro|FLAG_IDX_TO_EVENT
DECL|HIGH_LIMIT_TO_FLAG|macro|HIGH_LIMIT_TO_FLAG
DECL|HW_TIMEOUT|macro|HW_TIMEOUT
DECL|LIMIT_EVENT_TO_CHANNEL|macro|LIMIT_EVENT_TO_CHANNEL
DECL|LIMIT_EVENT_TO_LIMIT_TYPE|macro|LIMIT_EVENT_TO_LIMIT_TYPE
DECL|LOW_LIMIT_TO_FLAG|macro|LOW_LIMIT_TO_FLAG
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|NRF_SAADC_STATE_BUSY|enumerator|NRF_SAADC_STATE_BUSY = 1,
DECL|NRF_SAADC_STATE_CALIBRATION|enumerator|NRF_SAADC_STATE_CALIBRATION = 2
DECL|NRF_SAADC_STATE_IDLE|enumerator|NRF_SAADC_STATE_IDLE = 0,
DECL|active_channels|member|uint8_t active_channels; ///< Number of enabled SAADC channels.
DECL|adc_state|member|volatile nrf_saadc_state_t adc_state; ///< State of the SAADC.
DECL|buffer_size_left|member|uint16_t buffer_size_left; ///< When low power mode is active indicates how many samples left to convert on current buffer.
DECL|buffer_size|member|volatile uint16_t buffer_size; ///< Size of the sample buffer.
DECL|conversions_end|member|bool conversions_end; ///< When low power mode is active indicates end of conversions on current buffer.
DECL|event_handler|member|nrfx_saadc_event_handler_t event_handler; ///< Event handler function pointer.
DECL|limits_enabled_flags|member|uint32_t limits_enabled_flags; ///< Enabled limits flags.
DECL|low_power_mode|member|bool low_power_mode; ///< Indicates if low power mode is active.
DECL|m_cb|variable|m_cb
DECL|nrf_saadc_psel_buffer|typedef|} nrf_saadc_psel_buffer;
DECL|nrf_saadc_state_t|typedef|} nrf_saadc_state_t;
DECL|nrfx_saadc_abort|function|void nrfx_saadc_abort(void)
DECL|nrfx_saadc_buffer_convert|function|nrfx_err_t nrfx_saadc_buffer_convert(nrf_saadc_value_t * p_buffer, uint16_t size)
DECL|nrfx_saadc_calibrate_offset|function|nrfx_err_t nrfx_saadc_calibrate_offset()
DECL|nrfx_saadc_cb_t|typedef|} nrfx_saadc_cb_t;
DECL|nrfx_saadc_channel_init|function|nrfx_err_t nrfx_saadc_channel_init(uint8_t channel, nrf_saadc_channel_config_t const * const p_config)
DECL|nrfx_saadc_channel_uninit|function|nrfx_err_t nrfx_saadc_channel_uninit(uint8_t channel)
DECL|nrfx_saadc_init|function|nrfx_err_t nrfx_saadc_init(nrfx_saadc_config_t const * p_config, nrfx_saadc_event_handler_t event_handler)
DECL|nrfx_saadc_irq_handler|function|void nrfx_saadc_irq_handler(void)
DECL|nrfx_saadc_is_busy|function|bool nrfx_saadc_is_busy(void)
DECL|nrfx_saadc_limits_set|function|void nrfx_saadc_limits_set(uint8_t channel, int16_t limit_low, int16_t limit_high)
DECL|nrfx_saadc_sample_convert|function|nrfx_err_t nrfx_saadc_sample_convert(uint8_t channel, nrf_saadc_value_t * p_value)
DECL|nrfx_saadc_sample_task_get|function|uint32_t nrfx_saadc_sample_task_get(void)
DECL|nrfx_saadc_sample|function|nrfx_err_t nrfx_saadc_sample()
DECL|nrfx_saadc_uninit|function|void nrfx_saadc_uninit(void)
DECL|p_buffer|member|volatile nrf_saadc_value_t * p_buffer; ///< Sample buffer.
DECL|p_secondary_buffer|member|volatile nrf_saadc_value_t * p_secondary_buffer; ///< Secondary sample buffer.
DECL|pseln|member|nrf_saadc_input_t pseln;
DECL|pselp|member|nrf_saadc_input_t pselp;
DECL|psel|member|nrf_saadc_psel_buffer psel[NRF_SAADC_CHANNEL_COUNT]; ///< Pin configurations of SAADC channels.
DECL|secondary_buffer_size|member|uint16_t secondary_buffer_size; ///< Size of the secondary buffer.
DECL|state|member|nrfx_drv_state_t state; ///< Driver initialization state.
