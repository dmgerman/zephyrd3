DECL|NRFX_SAADC_DEFAULT_CHANNEL_CONFIG_DIFFERENTIAL|macro|NRFX_SAADC_DEFAULT_CHANNEL_CONFIG_DIFFERENTIAL
DECL|NRFX_SAADC_DEFAULT_CHANNEL_CONFIG_SE|macro|NRFX_SAADC_DEFAULT_CHANNEL_CONFIG_SE
DECL|NRFX_SAADC_DEFAULT_CONFIG|macro|NRFX_SAADC_DEFAULT_CONFIG
DECL|NRFX_SAADC_EVT_CALIBRATEDONE|enumerator|NRFX_SAADC_EVT_CALIBRATEDONE ///< Event generated when the calibration is complete.
DECL|NRFX_SAADC_EVT_DONE|enumerator|NRFX_SAADC_EVT_DONE, ///< Event generated when the buffer is filled with samples.
DECL|NRFX_SAADC_EVT_LIMIT|enumerator|NRFX_SAADC_EVT_LIMIT, ///< Event generated after one of the limits is reached.
DECL|NRFX_SAADC_H__|macro|NRFX_SAADC_H__
DECL|NRFX_SAADC_LIMITH_DISABLED|macro|NRFX_SAADC_LIMITH_DISABLED
DECL|NRFX_SAADC_LIMITL_DISABLED|macro|NRFX_SAADC_LIMITL_DISABLED
DECL|channel|member|uint8_t channel; ///< Channel on which the limit was detected.
DECL|data|member|} data;
DECL|done|member|nrfx_saadc_done_evt_t done; ///< Data for @ref NRFX_SAADC_EVT_DONE event.
DECL|interrupt_priority|member|uint8_t interrupt_priority; ///< Interrupt priority.
DECL|limit_type|member|nrf_saadc_limit_t limit_type; ///< Type of limit detected.
DECL|limit|member|nrfx_saadc_limit_evt_t limit; ///< Data for @ref NRFX_SAADC_EVT_LIMIT event.
DECL|low_power_mode|member|bool low_power_mode; ///< Indicates if low power mode is active.
DECL|nrfx_saadc_config_t|typedef|} nrfx_saadc_config_t;
DECL|nrfx_saadc_done_evt_t|typedef|} nrfx_saadc_done_evt_t;
DECL|nrfx_saadc_event_handler_t|typedef|typedef void (* nrfx_saadc_event_handler_t)(nrfx_saadc_evt_t const * p_event);
DECL|nrfx_saadc_evt_type_t|typedef|} nrfx_saadc_evt_type_t;
DECL|nrfx_saadc_evt_t|typedef|} nrfx_saadc_evt_t;
DECL|nrfx_saadc_limit_evt_t|typedef|} nrfx_saadc_limit_evt_t;
DECL|oversample|member|nrf_saadc_oversample_t oversample; ///< Oversampling configuration.
DECL|p_buffer|member|nrf_saadc_value_t * p_buffer; ///< Pointer to buffer with converted samples.
DECL|resolution|member|nrf_saadc_resolution_t resolution; ///< Resolution configuration.
DECL|size|member|uint16_t size; ///< Number of samples in the buffer.
DECL|type|member|nrfx_saadc_evt_type_t type; ///< Event type.
