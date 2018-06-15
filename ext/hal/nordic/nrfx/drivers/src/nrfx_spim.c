DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|SPIM0_LENGTH_VALIDATE|macro|SPIM0_LENGTH_VALIDATE
DECL|SPIM0_LENGTH_VALIDATE|macro|SPIM0_LENGTH_VALIDATE
DECL|SPIM1_LENGTH_VALIDATE|macro|SPIM1_LENGTH_VALIDATE
DECL|SPIM1_LENGTH_VALIDATE|macro|SPIM1_LENGTH_VALIDATE
DECL|SPIM2_LENGTH_VALIDATE|macro|SPIM2_LENGTH_VALIDATE
DECL|SPIM2_LENGTH_VALIDATE|macro|SPIM2_LENGTH_VALIDATE
DECL|SPIM3_LENGTH_VALIDATE|macro|SPIM3_LENGTH_VALIDATE
DECL|SPIM3_LENGTH_VALIDATE|macro|SPIM3_LENGTH_VALIDATE
DECL|SPIMX_LENGTH_VALIDATE|macro|SPIMX_LENGTH_VALIDATE
DECL|SPIM_LENGTH_VALIDATE|macro|SPIM_LENGTH_VALIDATE
DECL|USE_WORKAROUND_FOR_ANOMALY_195|macro|USE_WORKAROUND_FOR_ANOMALY_195
DECL|anomaly_198_disable|function|static void anomaly_198_disable(void)
DECL|anomaly_198_enable|function|static void anomaly_198_enable(uint8_t const * p_buffer, size_t buf_len)
DECL|evt|member|nrfx_spim_evt_t evt; // Keep the struct that is ready for event handler. Less memcpy.
DECL|finish_transfer|function|static void finish_transfer(spim_control_block_t * p_cb)
DECL|handler|member|nrfx_spim_evt_handler_t handler;
DECL|irq_handler|function|static void irq_handler(NRF_SPIM_Type * p_spim, spim_control_block_t * p_cb)
DECL|m_anomaly_198_preserved_value|variable|m_anomaly_198_preserved_value
DECL|m_cb|variable|m_cb
DECL|miso_pin|member|uint8_t miso_pin;
DECL|nrfx_spim_0_irq_handler|function|void nrfx_spim_0_irq_handler(void)
DECL|nrfx_spim_1_irq_handler|function|void nrfx_spim_1_irq_handler(void)
DECL|nrfx_spim_2_irq_handler|function|void nrfx_spim_2_irq_handler(void)
DECL|nrfx_spim_3_irq_handler|function|void nrfx_spim_3_irq_handler(void)
DECL|nrfx_spim_abort|function|void nrfx_spim_abort(nrfx_spim_t const * p_instance)
DECL|nrfx_spim_end_event_get|function|uint32_t nrfx_spim_end_event_get(nrfx_spim_t const * p_instance)
DECL|nrfx_spim_init|function|nrfx_err_t nrfx_spim_init(nrfx_spim_t const * const p_instance, nrfx_spim_config_t const * p_config, nrfx_spim_evt_handler_t handler, void * p_context)
DECL|nrfx_spim_start_task_get|function|uint32_t nrfx_spim_start_task_get(nrfx_spim_t const * p_instance)
DECL|nrfx_spim_uninit|function|void nrfx_spim_uninit(nrfx_spim_t const * const p_instance)
DECL|nrfx_spim_xfer_dcx|function|nrfx_err_t nrfx_spim_xfer_dcx(nrfx_spim_t const * const p_instance, nrfx_spim_xfer_desc_t const * p_xfer_desc, uint32_t flags, uint8_t cmd_length)
DECL|nrfx_spim_xfer|function|nrfx_err_t nrfx_spim_xfer(nrfx_spim_t const * const p_instance, nrfx_spim_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|orc|member|uint8_t orc;
DECL|p_context|member|void * p_context;
DECL|rx_length|member|size_t rx_length;
DECL|spim_control_block_t|typedef|} spim_control_block_t;
DECL|spim_int_enable|function|__STATIC_INLINE void spim_int_enable(NRF_SPIM_Type * p_spim, bool enable)
DECL|spim_list_enable_handle|function|__STATIC_INLINE void spim_list_enable_handle(NRF_SPIM_Type * p_spim, uint32_t flags)
DECL|spim_xfer|function|static nrfx_err_t spim_xfer(NRF_SPIM_Type * p_spim, spim_control_block_t * p_cb, nrfx_spim_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|ss_active_high|member|bool ss_active_high;
DECL|ss_pin|member|uint8_t ss_pin;
DECL|state|member|nrfx_drv_state_t state;
DECL|transfer_in_progress|member|volatile bool transfer_in_progress;
DECL|tx_length|member|size_t tx_length;
DECL|use_hw_ss|member|bool use_hw_ss;
