DECL|NRFX_PDM_DEFAULT_CONFIG|macro|NRFX_PDM_DEFAULT_CONFIG
DECL|NRFX_PDM_ERROR_OVERFLOW|enumerator|NRFX_PDM_ERROR_OVERFLOW = 1
DECL|NRFX_PDM_H__|macro|NRFX_PDM_H__
DECL|NRFX_PDM_MAX_BUFFER_SIZE|macro|NRFX_PDM_MAX_BUFFER_SIZE
DECL|NRFX_PDM_NO_ERROR|enumerator|NRFX_PDM_NO_ERROR = 0,
DECL|buffer_released|member|int16_t * buffer_released; ///< Pointer to the released buffer. Can be NULL.
DECL|buffer_requested|member|bool buffer_requested; ///< Buffer request flag.
DECL|clock_freq|member|nrf_pdm_freq_t clock_freq; ///< Clock frequency.
DECL|edge|member|nrf_pdm_edge_t edge; ///< Sampling mode.
DECL|error|member|nrfx_pdm_error_t error; ///< Error type.
DECL|gain_l|member|nrf_pdm_gain_t gain_l; ///< Left channel gain.
DECL|gain_r|member|nrf_pdm_gain_t gain_r; ///< Right channel gain.
DECL|interrupt_priority|member|uint8_t interrupt_priority; ///< Interrupt priority.
DECL|mode|member|nrf_pdm_mode_t mode; ///< Interface operation mode.
DECL|nrfx_pdm_config_t|typedef|} nrfx_pdm_config_t;
DECL|nrfx_pdm_enable_check|function|__STATIC_INLINE bool nrfx_pdm_enable_check(void)
DECL|nrfx_pdm_error_t|typedef|} nrfx_pdm_error_t;
DECL|nrfx_pdm_event_handler_t|typedef|typedef void (*nrfx_pdm_event_handler_t)(nrfx_pdm_evt_t const * const p_evt);
DECL|nrfx_pdm_evt_t|typedef|} nrfx_pdm_evt_t;
DECL|nrfx_pdm_task_address_get|function|__STATIC_INLINE uint32_t nrfx_pdm_task_address_get(nrf_pdm_task_t task)
DECL|pin_clk|member|uint8_t pin_clk; ///< CLK pin.
DECL|pin_din|member|uint8_t pin_din; ///< DIN pin.
