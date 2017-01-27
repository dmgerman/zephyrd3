DECL|NRF_PDM_EDGE_LEFTFALLING|enumerator|NRF_PDM_EDGE_LEFTFALLING = PDM_MODE_EDGE_LeftFalling, ///< Left (or mono) is sampled on falling edge of PDM_CLK.
DECL|NRF_PDM_EDGE_LEFTRISING|enumerator|NRF_PDM_EDGE_LEFTRISING = PDM_MODE_EDGE_LeftRising ///< Left (or mono) is sampled on rising edge of PDM_CLK.
DECL|NRF_PDM_EVENT_END|enumerator|NRF_PDM_EVENT_END = offsetof(NRF_PDM_Type, EVENTS_END) ///< The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM.
DECL|NRF_PDM_EVENT_STARTED|enumerator|NRF_PDM_EVENT_STARTED = offsetof(NRF_PDM_Type, EVENTS_STARTED), ///< PDM transfer has started.
DECL|NRF_PDM_EVENT_STOPPED|enumerator|NRF_PDM_EVENT_STOPPED = offsetof(NRF_PDM_Type, EVENTS_STOPPED), ///< PDM transfer has finished.
DECL|NRF_PDM_FREQ_1000K|enumerator|NRF_PDM_FREQ_1000K = PDM_PDMCLKCTRL_FREQ_1000K, ///< PDM_CLK = 1.000 MHz.
DECL|NRF_PDM_FREQ_1032K|enumerator|NRF_PDM_FREQ_1032K = PDM_PDMCLKCTRL_FREQ_Default, ///< PDM_CLK = 1.032 MHz.
DECL|NRF_PDM_FREQ_1067K|enumerator|NRF_PDM_FREQ_1067K = PDM_PDMCLKCTRL_FREQ_1067K ///< PDM_CLK = 1.067 MHz.
DECL|NRF_PDM_GAIN_DEFAULT|macro|NRF_PDM_GAIN_DEFAULT
DECL|NRF_PDM_GAIN_MAXIMUM|macro|NRF_PDM_GAIN_MAXIMUM
DECL|NRF_PDM_GAIN_MINIMUM|macro|NRF_PDM_GAIN_MINIMUM
DECL|NRF_PDM_H_|macro|NRF_PDM_H_
DECL|NRF_PDM_INT_END|enumerator|NRF_PDM_INT_END = PDM_INTENSET_END_Msk ///< Interrupt on EVENTS_END event.
DECL|NRF_PDM_INT_STARTED|enumerator|NRF_PDM_INT_STARTED = PDM_INTENSET_STARTED_Msk, ///< Interrupt on EVENTS_STARTED event.
DECL|NRF_PDM_INT_STOPPED|enumerator|NRF_PDM_INT_STOPPED = PDM_INTENSET_STOPPED_Msk, ///< Interrupt on EVENTS_STOPPED event.
DECL|NRF_PDM_MODE_MONO|enumerator|NRF_PDM_MODE_MONO = PDM_MODE_OPERATION_Mono ///< Sample and store two successive Left samples (16 bit each) per RAM word.
DECL|NRF_PDM_MODE_STEREO|enumerator|NRF_PDM_MODE_STEREO = PDM_MODE_OPERATION_Stereo, ///< Sample and store one pair (Left + Right) of 16-bit samples per RAM word.
DECL|NRF_PDM_TASK_START|enumerator|NRF_PDM_TASK_START = offsetof(NRF_PDM_Type, TASKS_START), ///< Starts continuous PDM transfer.
DECL|NRF_PDM_TASK_STOP|enumerator|NRF_PDM_TASK_STOP = offsetof(NRF_PDM_Type, TASKS_STOP) ///< Stops PDM transfer.
DECL|nrf_pdm_buffer_get|function|__STATIC_INLINE uint32_t * nrf_pdm_buffer_get()
DECL|nrf_pdm_buffer_set|function|__STATIC_INLINE void nrf_pdm_buffer_set(uint32_t * p_buffer, uint32_t num)
DECL|nrf_pdm_clock_get|function|__STATIC_INLINE nrf_pdm_freq_t nrf_pdm_clock_get(void)
DECL|nrf_pdm_clock_set|function|__STATIC_INLINE void nrf_pdm_clock_set(nrf_pdm_freq_t pdm_freq)
DECL|nrf_pdm_disable|function|__STATIC_INLINE void nrf_pdm_disable(void)
DECL|nrf_pdm_edge_t|typedef|} nrf_pdm_edge_t;
DECL|nrf_pdm_enable_check|function|__STATIC_INLINE bool nrf_pdm_enable_check(void)
DECL|nrf_pdm_enable|function|__STATIC_INLINE void nrf_pdm_enable(void)
DECL|nrf_pdm_event_address_get|function|__STATIC_INLINE volatile uint32_t * nrf_pdm_event_address_get(nrf_pdm_event_t pdm_event)
DECL|nrf_pdm_event_check|function|__STATIC_INLINE bool nrf_pdm_event_check(nrf_pdm_event_t pdm_event)
DECL|nrf_pdm_event_clear|function|__STATIC_INLINE void nrf_pdm_event_clear(nrf_pdm_event_t pdm_event)
DECL|nrf_pdm_event_t|typedef|} nrf_pdm_event_t;
DECL|nrf_pdm_freq_t|typedef|} nrf_pdm_freq_t;
DECL|nrf_pdm_gain_get|function|__STATIC_INLINE void nrf_pdm_gain_get(nrf_pdm_gain_t * p_gain_l, nrf_pdm_gain_t * p_gain_r)
DECL|nrf_pdm_gain_set|function|__STATIC_INLINE void nrf_pdm_gain_set(nrf_pdm_gain_t gain_l, nrf_pdm_gain_t gain_r)
DECL|nrf_pdm_gain_t|typedef|typedef uint8_t nrf_pdm_gain_t;
DECL|nrf_pdm_int_disable|function|__STATIC_INLINE void nrf_pdm_int_disable(uint32_t pdm_int_mask)
DECL|nrf_pdm_int_enable_check|function|__STATIC_INLINE bool nrf_pdm_int_enable_check(uint32_t pdm_int_mask)
DECL|nrf_pdm_int_enable|function|__STATIC_INLINE void nrf_pdm_int_enable(uint32_t pdm_int_mask)
DECL|nrf_pdm_int_mask_t|typedef|} nrf_pdm_int_mask_t;
DECL|nrf_pdm_mode_get|function|__STATIC_INLINE void nrf_pdm_mode_get(nrf_pdm_mode_t * p_pdm_mode, nrf_pdm_edge_t * p_pdm_edge)
DECL|nrf_pdm_mode_set|function|__STATIC_INLINE void nrf_pdm_mode_set(nrf_pdm_mode_t pdm_mode, nrf_pdm_edge_t pdm_edge)
DECL|nrf_pdm_mode_t|typedef|} nrf_pdm_mode_t;
DECL|nrf_pdm_psel_connect|function|__STATIC_INLINE void nrf_pdm_psel_connect(uint32_t psel_clk, uint32_t psel_din)
DECL|nrf_pdm_psel_disconnect|function|__STATIC_INLINE void nrf_pdm_psel_disconnect()
DECL|nrf_pdm_task_address_get|function|__STATIC_INLINE uint32_t nrf_pdm_task_address_get(nrf_pdm_task_t pdm_task)
DECL|nrf_pdm_task_trigger|function|__STATIC_INLINE void nrf_pdm_task_trigger(nrf_pdm_task_t pdm_task)
DECL|nrf_pdm_task_t|typedef|} nrf_pdm_task_t;
