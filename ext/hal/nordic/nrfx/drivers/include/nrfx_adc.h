DECL|NRFX_ADC_DEFAULT_CHANNEL|macro|NRFX_ADC_DEFAULT_CHANNEL
DECL|NRFX_ADC_DEFAULT_CONFIG|macro|NRFX_ADC_DEFAULT_CONFIG
DECL|NRFX_ADC_EVT_DONE|enumerator|NRFX_ADC_EVT_DONE, ///< Event generated when the buffer is filled with samples.
DECL|NRFX_ADC_EVT_SAMPLE|enumerator|NRFX_ADC_EVT_SAMPLE, ///< Event generated when the requested channel is sampled.
DECL|NRFX_ADC_H__|macro|NRFX_ADC_H__
DECL|config|member|nrf_adc_config_t config; ///< ADC configuration for the current channel.
DECL|data|member|} data;
DECL|done|member|nrfx_adc_done_evt_t done; ///< Data for DONE event.
DECL|interrupt_priority|member|uint8_t interrupt_priority; ///< Priority of ADC interrupt.
DECL|nrfx_adc_channel_s|struct|struct nrfx_adc_channel_s
DECL|nrfx_adc_channel_t|typedef|typedef struct nrfx_adc_channel_s nrfx_adc_channel_t;
DECL|nrfx_adc_config_t|typedef|} nrfx_adc_config_t;
DECL|nrfx_adc_done_evt_t|typedef|} nrfx_adc_done_evt_t;
DECL|nrfx_adc_event_handler_t|typedef|typedef void (*nrfx_adc_event_handler_t)(nrfx_adc_evt_t const * p_event);
DECL|nrfx_adc_evt_type_t|typedef|} nrfx_adc_evt_type_t;
DECL|nrfx_adc_evt_t|typedef|} nrfx_adc_evt_t;
DECL|nrfx_adc_sample_evt_t|typedef|} nrfx_adc_sample_evt_t;
DECL|nrfx_adc_start_task_get|function|__STATIC_INLINE uint32_t nrfx_adc_start_task_get(void)
DECL|p_buffer|member|nrf_adc_value_t * p_buffer; ///< Pointer to the buffer with converted samples.
DECL|p_next|member|nrfx_adc_channel_t * p_next; ///< Pointer to the next enabled channel (for internal use).
DECL|sample|member|nrf_adc_value_t sample; ///< Converted sample.
DECL|sample|member|nrfx_adc_sample_evt_t sample; ///< Data for SAMPLE event.
DECL|size|member|uint16_t size; ///< Number of samples in the buffer.
DECL|type|member|nrfx_adc_evt_type_t type; ///< Event type.
