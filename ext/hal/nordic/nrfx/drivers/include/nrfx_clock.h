DECL|NRFX_CLOCK_EVT_CAL_DONE|enumerator|NRFX_CLOCK_EVT_CAL_DONE ///< Calibration has been done.
DECL|NRFX_CLOCK_EVT_CTTO|enumerator|NRFX_CLOCK_EVT_CTTO, ///< Calibration timeout.
DECL|NRFX_CLOCK_EVT_HFCLK_STARTED|enumerator|NRFX_CLOCK_EVT_HFCLK_STARTED, ///< HFCLK has been started.
DECL|NRFX_CLOCK_EVT_LFCLK_STARTED|enumerator|NRFX_CLOCK_EVT_LFCLK_STARTED, ///< LFCLK has been started.
DECL|NRFX_CLOCK_H__|macro|NRFX_CLOCK_H__
DECL|nrfx_clock_event_handler_t|typedef|typedef void (*nrfx_clock_event_handler_t)(nrfx_clock_evt_type_t event);
DECL|nrfx_clock_evt_type_t|typedef|} nrfx_clock_evt_type_t;
DECL|nrfx_clock_hfclk_is_running|function|__STATIC_INLINE bool nrfx_clock_hfclk_is_running(void)
DECL|nrfx_clock_lfclk_is_running|function|__STATIC_INLINE bool nrfx_clock_lfclk_is_running(void)
DECL|nrfx_clock_ppi_event_addr|function|__STATIC_INLINE uint32_t nrfx_clock_ppi_event_addr(nrf_clock_event_t event)
DECL|nrfx_clock_ppi_task_addr|function|__STATIC_INLINE uint32_t nrfx_clock_ppi_task_addr(nrf_clock_task_t task)
