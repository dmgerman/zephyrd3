DECL|NRFX_QDEC_DEFAULT_CONFIG|macro|NRFX_QDEC_DEFAULT_CONFIG
DECL|NRFX_QDEC_H__|macro|NRFX_QDEC_H__
DECL|accdbl|member|uint16_t accdbl; /**< Accumulated double transitions. */
DECL|acc|member|int16_t acc; /**< Accumulated transitions. */
DECL|data|member|} data;
DECL|dbfen|member|bool dbfen; /**< State of debouncing filter. */
DECL|interrupt_priority|member|uint8_t interrupt_priority; /**< QDEC interrupt priority. */
DECL|ledpol|member|nrf_qdec_ledpol_t ledpol; /**< Active LED polarity. */
DECL|ledpre|member|uint32_t ledpre; /**< Time (in microseconds) how long LED is switched on before sampling. */
DECL|nrfx_qdec_config_t|typedef|} nrfx_qdec_config_t;
DECL|nrfx_qdec_event_address_get|function|__STATIC_INLINE uint32_t nrfx_qdec_event_address_get(nrf_qdec_event_t event)
DECL|nrfx_qdec_event_handler_t|typedef|typedef void (*nrfx_qdec_event_handler_t)(nrfx_qdec_event_t event);
DECL|nrfx_qdec_event_t|typedef|} nrfx_qdec_event_t;
DECL|nrfx_qdec_report_data_evt_t|typedef|} nrfx_qdec_report_data_evt_t;
DECL|nrfx_qdec_sample_data_evt_t|typedef|} nrfx_qdec_sample_data_evt_t;
DECL|nrfx_qdec_task_address_get|function|__STATIC_INLINE uint32_t nrfx_qdec_task_address_get(nrf_qdec_task_t task)
DECL|psela|member|uint32_t psela; /**< Pin number for A input. */
DECL|pselb|member|uint32_t pselb; /**< Pin number for B input. */
DECL|pselled|member|uint32_t pselled; /**< Pin number for LED output. */
DECL|reportper|member|nrf_qdec_reportper_t reportper; /**< Report period in samples. */
DECL|report|member|nrfx_qdec_report_data_evt_t report; /**< Report event data. */
DECL|sample_inten|member|bool sample_inten; /**< Enabling sample ready interrupt. */
DECL|sampleper|member|nrf_qdec_sampleper_t sampleper; /**< Sampling period in microseconds. */
DECL|sample|member|nrfx_qdec_sample_data_evt_t sample; /**< Sample event data. */
DECL|type|member|nrf_qdec_event_t type;
DECL|value|member|int8_t value; /**< Sample value. */
