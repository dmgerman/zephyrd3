DECL|EVT_TO_STR_TWIM|macro|EVT_TO_STR_TWIM
DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|TRANSFER_TO_STR|macro|TRANSFER_TO_STR
DECL|TWIM0_LENGTH_VALIDATE|macro|TWIM0_LENGTH_VALIDATE
DECL|TWIM0_LENGTH_VALIDATE|macro|TWIM0_LENGTH_VALIDATE
DECL|TWIM1_LENGTH_VALIDATE|macro|TWIM1_LENGTH_VALIDATE
DECL|TWIM1_LENGTH_VALIDATE|macro|TWIM1_LENGTH_VALIDATE
DECL|TWIMX_LENGTH_VALIDATE|macro|TWIMX_LENGTH_VALIDATE
DECL|TWIM_LENGTH_VALIDATE|macro|TWIM_LENGTH_VALIDATE
DECL|TWIM_PIN_INIT|macro|TWIM_PIN_INIT
DECL|bus_frequency|member|nrf_twim_frequency_t bus_frequency;
DECL|busy|member|volatile bool busy;
DECL|bytes_transferred|member|uint8_t bytes_transferred;
DECL|curr_length|member|size_t curr_length;
DECL|curr_no_stop|member|bool curr_no_stop;
DECL|error|member|bool error;
DECL|flags|member|uint32_t flags;
DECL|handler|member|nrfx_twim_evt_handler_t handler;
DECL|hold_bus_uninit|member|bool hold_bus_uninit;
DECL|int_mask|member|volatile uint32_t int_mask;
DECL|m_cb|variable|m_cb
DECL|nrfx_twim_0_irq_handler|function|void nrfx_twim_0_irq_handler(void)
DECL|nrfx_twim_1_irq_handler|function|void nrfx_twim_1_irq_handler(void)
DECL|nrfx_twim_disable|function|void nrfx_twim_disable(nrfx_twim_t const * p_instance)
DECL|nrfx_twim_enable|function|void nrfx_twim_enable(nrfx_twim_t const * p_instance)
DECL|nrfx_twim_init|function|nrfx_err_t nrfx_twim_init(nrfx_twim_t const * p_instance, nrfx_twim_config_t const * p_config, nrfx_twim_evt_handler_t event_handler, void * p_context)
DECL|nrfx_twim_is_busy|function|bool nrfx_twim_is_busy(nrfx_twim_t const * p_instance)
DECL|nrfx_twim_rx|function|nrfx_err_t nrfx_twim_rx(nrfx_twim_t const * p_instance, uint8_t address, uint8_t * p_data, size_t length)
DECL|nrfx_twim_start_task_get|function|uint32_t nrfx_twim_start_task_get(nrfx_twim_t const * p_instance, nrfx_twim_xfer_type_t xfer_type)
DECL|nrfx_twim_stopped_event_get|function|uint32_t nrfx_twim_stopped_event_get(nrfx_twim_t const * p_instance)
DECL|nrfx_twim_tx|function|nrfx_err_t nrfx_twim_tx(nrfx_twim_t const * p_instance, uint8_t address, uint8_t const * p_data, size_t length, bool no_stop)
DECL|nrfx_twim_uninit|function|void nrfx_twim_uninit(nrfx_twim_t const * p_instance)
DECL|nrfx_twim_xfer|function|nrfx_err_t nrfx_twim_xfer(nrfx_twim_t const * p_instance, nrfx_twim_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|p_context|member|void * p_context;
DECL|p_curr_buf|member|uint8_t * p_curr_buf;
DECL|repeated|member|bool repeated;
DECL|state|member|nrfx_drv_state_t state;
DECL|twi_process_error|function|static nrfx_err_t twi_process_error(uint32_t errorsrc)
DECL|twim_control_block_t|typedef|} twim_control_block_t;
DECL|twim_irq_handler|function|static void twim_irq_handler(NRF_TWIM_Type * p_twim, twim_control_block_t * p_cb)
DECL|twim_list_enable_handle|function|__STATIC_INLINE void twim_list_enable_handle(NRF_TWIM_Type * p_twim, uint32_t flags)
DECL|twim_xfer|function|__STATIC_INLINE nrfx_err_t twim_xfer(twim_control_block_t * p_cb, NRF_TWIM_Type * p_twim, nrfx_twim_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|xfer_desc|member|nrfx_twim_xfer_desc_t xfer_desc;
