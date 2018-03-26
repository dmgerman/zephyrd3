DECL|QSPI_DEF_WAIT_ATTEMPTS|macro|QSPI_DEF_WAIT_ATTEMPTS
DECL|QSPI_DEF_WAIT_TIME_US|macro|QSPI_DEF_WAIT_TIME_US
DECL|QSPI_MEM_STATUSREG_WIP_Pos|macro|QSPI_MEM_STATUSREG_WIP_Pos
DECL|QSPI_STD_CMD_RDSR|macro|QSPI_STD_CMD_RDSR
DECL|handler|member|nrfx_qspi_handler_t handler; /**< Handler. */
DECL|interrupt_driven|member|volatile bool interrupt_driven; /**< Information if the current operation is performed and is interrupt-driven. */
DECL|m_cb|variable|m_cb
DECL|nrfx_qspi_chip_erase|function|nrfx_err_t nrfx_qspi_chip_erase(void)
DECL|nrfx_qspi_cinstr_quick_send|function|nrfx_err_t nrfx_qspi_cinstr_quick_send(uint8_t opcode, nrf_qspi_cinstr_len_t length, void const * p_tx_buffer)
DECL|nrfx_qspi_cinstr_xfer|function|nrfx_err_t nrfx_qspi_cinstr_xfer(nrf_qspi_cinstr_conf_t const * p_config, void const * p_tx_buffer, void * p_rx_buffer)
DECL|nrfx_qspi_erase|function|nrfx_err_t nrfx_qspi_erase(nrf_qspi_erase_len_t length, uint32_t start_address)
DECL|nrfx_qspi_init|function|nrfx_err_t nrfx_qspi_init(nrfx_qspi_config_t const * p_config, nrfx_qspi_handler_t handler, void * p_context)
DECL|nrfx_qspi_irq_handler|function|void nrfx_qspi_irq_handler(void)
DECL|nrfx_qspi_mem_busy_check|function|nrfx_err_t nrfx_qspi_mem_busy_check(void)
DECL|nrfx_qspi_read|function|nrfx_err_t nrfx_qspi_read(void * p_rx_buffer, size_t rx_buffer_length, uint32_t src_address)
DECL|nrfx_qspi_uninit|function|void nrfx_qspi_uninit(void)
DECL|nrfx_qspi_write|function|nrfx_err_t nrfx_qspi_write(void const * p_tx_buffer, size_t tx_buffer_length, uint32_t dst_address)
DECL|p_context|member|void * p_context; /**< Driver context used in interrupt. */
DECL|qspi_control_block_t|typedef|} qspi_control_block_t;
DECL|qspi_pins_configure|function|static bool qspi_pins_configure(nrf_qspi_pins_t const * p_config)
DECL|qspi_task_perform|function|static nrfx_err_t qspi_task_perform(nrf_qspi_task_t task)
DECL|state|member|nrfx_drv_state_t state; /**< Driver state. */
