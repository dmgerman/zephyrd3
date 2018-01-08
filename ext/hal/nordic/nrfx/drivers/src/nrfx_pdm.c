DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|NRFX_PDM_STATE_IDLE|enumerator|NRFX_PDM_STATE_IDLE,
DECL|NRFX_PDM_STATE_RUNNING|enumerator|NRFX_PDM_STATE_RUNNING,
DECL|NRFX_PDM_STATE_STARTING|enumerator|NRFX_PDM_STATE_STARTING,
DECL|NRFX_PDM_STATE_STOPPING|enumerator|NRFX_PDM_STATE_STOPPING
DECL|active_buffer|member|uint8_t active_buffer; ///< Number of currently active buffer.
DECL|buff_address|member|int16_t * buff_address[2]; ///< Sample buffers.
DECL|buff_length|member|uint16_t buff_length[2]; ///< Length of the sample buffers.
DECL|drv_state|member|nrfx_drv_state_t drv_state; ///< Driver state.
DECL|error|member|uint8_t error; ///< Driver error flag.
DECL|event_handler|member|nrfx_pdm_event_handler_t event_handler; ///< Event handler function pointer.
DECL|irq_buff_request|member|volatile uint8_t irq_buff_request; ///< Request the next buffer in the ISR.
DECL|m_cb|variable|m_cb
DECL|nrfx_pdm_buffer_set|function|nrfx_err_t nrfx_pdm_buffer_set(int16_t * buffer, uint16_t buffer_length)
DECL|nrfx_pdm_cb_t|typedef|} nrfx_pdm_cb_t;
DECL|nrfx_pdm_init|function|nrfx_err_t nrfx_pdm_init(nrfx_pdm_config_t const * p_config, nrfx_pdm_event_handler_t event_handler)
DECL|nrfx_pdm_irq_handler|function|void nrfx_pdm_irq_handler(void)
DECL|nrfx_pdm_start|function|nrfx_err_t nrfx_pdm_start(void)
DECL|nrfx_pdm_state_t|typedef|} nrfx_pdm_state_t;
DECL|nrfx_pdm_stop|function|nrfx_err_t nrfx_pdm_stop(void)
DECL|nrfx_pdm_uninit|function|void nrfx_pdm_uninit(void)
DECL|op_state|member|volatile nrfx_pdm_state_t op_state; ///< PDM peripheral operation state.
DECL|pdm_buf_request|function|static void pdm_buf_request()
DECL|pdm_start|function|static void pdm_start()
