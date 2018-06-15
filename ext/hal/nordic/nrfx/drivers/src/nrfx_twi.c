DECL|EVT_TO_STR_TWI|macro|EVT_TO_STR_TWI
DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|HW_TIMEOUT|macro|HW_TIMEOUT
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|TRANSFER_TO_STR|macro|TRANSFER_TO_STR
DECL|TWI_PIN_INIT|macro|TWI_PIN_INIT
DECL|busy|member|volatile bool busy;
DECL|bytes_transferred|member|size_t bytes_transferred;
DECL|curr_length|member|size_t curr_length;
DECL|curr_no_stop|member|bool curr_no_stop;
DECL|error|member|bool error;
DECL|flags|member|uint32_t flags;
DECL|handler|member|nrfx_twi_evt_handler_t handler;
DECL|hold_bus_uninit|member|bool hold_bus_uninit;
DECL|int_mask|member|volatile uint32_t int_mask;
DECL|m_cb|variable|m_cb
DECL|nrfx_twi_0_irq_handler|function|void nrfx_twi_0_irq_handler(void)
DECL|nrfx_twi_1_irq_handler|function|void nrfx_twi_1_irq_handler(void)
DECL|nrfx_twi_data_count_get|function|size_t nrfx_twi_data_count_get(nrfx_twi_t const * const p_instance)
DECL|nrfx_twi_disable|function|void nrfx_twi_disable(nrfx_twi_t const * p_instance)
DECL|nrfx_twi_enable|function|void nrfx_twi_enable(nrfx_twi_t const * p_instance)
DECL|nrfx_twi_init|function|nrfx_err_t nrfx_twi_init(nrfx_twi_t const * p_instance, nrfx_twi_config_t const * p_config, nrfx_twi_evt_handler_t event_handler, void * p_context)
DECL|nrfx_twi_is_busy|function|bool nrfx_twi_is_busy(nrfx_twi_t const * p_instance)
DECL|nrfx_twi_rx|function|nrfx_err_t nrfx_twi_rx(nrfx_twi_t const * p_instance, uint8_t address, uint8_t * p_data, size_t length)
DECL|nrfx_twi_stopped_event_get|function|uint32_t nrfx_twi_stopped_event_get(nrfx_twi_t const * p_instance)
DECL|nrfx_twi_tx|function|nrfx_err_t nrfx_twi_tx(nrfx_twi_t const * p_instance, uint8_t address, uint8_t const * p_data, size_t length, bool no_stop)
DECL|nrfx_twi_uninit|function|void nrfx_twi_uninit(nrfx_twi_t const * p_instance)
DECL|nrfx_twi_xfer|function|nrfx_err_t nrfx_twi_xfer(nrfx_twi_t const * p_instance, nrfx_twi_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|p_context|member|void * p_context;
DECL|p_curr_buf|member|uint8_t * p_curr_buf;
DECL|repeated|member|bool repeated;
DECL|state|member|nrfx_drv_state_t state;
DECL|twi_control_block_t|typedef|} twi_control_block_t;
DECL|twi_irq_handler|function|static void twi_irq_handler(NRF_TWI_Type * p_twi, twi_control_block_t * p_cb)
DECL|twi_process_error|function|static nrfx_err_t twi_process_error(uint32_t errorsrc)
DECL|twi_receive_byte|function|static void twi_receive_byte(NRF_TWI_Type * p_twi, uint8_t * p_data, size_t length, size_t * p_bytes_transferred)
DECL|twi_rx_start_transfer|function|static nrfx_err_t twi_rx_start_transfer(twi_control_block_t * p_cb, NRF_TWI_Type * p_twi, uint8_t const * p_data, size_t length)
DECL|twi_send_byte|function|static bool twi_send_byte(NRF_TWI_Type * p_twi, uint8_t const * p_data, size_t length, size_t * p_bytes_transferred, bool no_stop)
DECL|twi_transfer|function|static bool twi_transfer(NRF_TWI_Type * p_twi, bool * p_error, size_t * p_bytes_transferred, uint8_t * p_data, size_t length,
DECL|twi_tx_start_transfer|function|static nrfx_err_t twi_tx_start_transfer(twi_control_block_t * p_cb, NRF_TWI_Type * p_twi, uint8_t const * p_data, size_t length, bool no_stop)
DECL|twi_xfer|function|__STATIC_INLINE nrfx_err_t twi_xfer(twi_control_block_t * p_cb, NRF_TWI_Type * p_twi, nrfx_twi_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|xfer_desc|member|nrfx_twi_xfer_desc_t xfer_desc;
