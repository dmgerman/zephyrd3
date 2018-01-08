DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|NRFX_TWIS_SUBSTATE_IDLE|enumerator|NRFX_TWIS_SUBSTATE_IDLE, ///< No ongoing transmission
DECL|NRFX_TWIS_SUBSTATE_READ_PENDING|enumerator|NRFX_TWIS_SUBSTATE_READ_PENDING, ///< Reading is actually pending (data sending)
DECL|NRFX_TWIS_SUBSTATE_READ_WAITING|enumerator|NRFX_TWIS_SUBSTATE_READ_WAITING, ///< Read request received, waiting for data
DECL|NRFX_TWIS_SUBSTATE_WRITE_PENDING|enumerator|NRFX_TWIS_SUBSTATE_WRITE_PENDING, ///< Writing is actually pending (data receiving)
DECL|NRFX_TWIS_SUBSTATE_WRITE_WAITING|enumerator|NRFX_TWIS_SUBSTATE_WRITE_WAITING, ///< Write request received, waiting for data buffer
DECL|call_event_handler|function|static void call_event_handler(twis_control_block_t const * p_cb, nrfx_twis_evt_t const * p_evt)
DECL|error|member|volatile uint32_t error;
DECL|ev_handler|member|nrfx_twis_event_handler_t ev_handler;
DECL|m_cb|variable|m_cb
DECL|m_used_ints_mask|variable|m_used_ints_mask
DECL|nrfx_twis_0_irq_handler|function|void nrfx_twis_0_irq_handler(void)
DECL|nrfx_twis_1_irq_handler|function|void nrfx_twis_1_irq_handler(void)
DECL|nrfx_twis_check_bit|function|static inline bool nrfx_twis_check_bit(uint32_t flags, nrf_twis_event_t ev)
DECL|nrfx_twis_clear_all_events|function|static void nrfx_twis_clear_all_events(NRF_TWIS_Type * const p_reg)
DECL|nrfx_twis_clear_bit|function|static inline uint32_t nrfx_twis_clear_bit(uint32_t flags, nrf_twis_event_t ev)
DECL|nrfx_twis_config_pin|function|static inline void nrfx_twis_config_pin(uint32_t pin, nrf_gpio_pin_pull_t pull)
DECL|nrfx_twis_disable|function|void nrfx_twis_disable(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_enable|function|void nrfx_twis_enable(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_error_get_and_clear_internal|function|static __ASM uint32_t nrfx_twis_error_get_and_clear_internal(uint32_t volatile * perror)
DECL|nrfx_twis_error_get_and_clear_internal|function|static uint32_t nrfx_twis_error_get_and_clear_internal(uint32_t volatile * perror)
DECL|nrfx_twis_error_get_and_clear_internal|function|static uint32_t nrfx_twis_error_get_and_clear_internal(uint32_t volatile * perror)
DECL|nrfx_twis_error_get_and_clear|function|uint32_t nrfx_twis_error_get_and_clear(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_event_bit_get|function|static inline uint32_t nrfx_twis_event_bit_get(NRF_TWIS_Type * p_reg, nrf_twis_event_t ev)
DECL|nrfx_twis_init|function|nrfx_err_t nrfx_twis_init(nrfx_twis_t const * p_instance, nrfx_twis_config_t const * p_config, nrfx_twis_event_handler_t event_handler)
DECL|nrfx_twis_is_busy|function|bool nrfx_twis_is_busy(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_is_pending_rx|function|bool nrfx_twis_is_pending_rx(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_is_pending_tx|function|bool nrfx_twis_is_pending_tx(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_is_waiting_rx_buff|function|bool nrfx_twis_is_waiting_rx_buff(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_is_waiting_tx_buff|function|bool nrfx_twis_is_waiting_tx_buff(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_preprocess_status|function|static inline void nrfx_twis_preprocess_status(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_process_error|function|static inline void nrfx_twis_process_error(twis_control_block_t * p_cb, nrfx_twis_evt_type_t evt, uint32_t error)
DECL|nrfx_twis_rx_prepare|function|nrfx_err_t nrfx_twis_rx_prepare(nrfx_twis_t const * p_instance, void * p_buf, size_t size)
DECL|nrfx_twis_state_machine|function|static void nrfx_twis_state_machine(NRF_TWIS_Type * p_reg, twis_control_block_t * p_cb)
DECL|nrfx_twis_substate_t|typedef|} nrfx_twis_substate_t;
DECL|nrfx_twis_swreset|function|static inline void nrfx_twis_swreset(NRF_TWIS_Type * p_reg)
DECL|nrfx_twis_tx_prepare|function|nrfx_err_t nrfx_twis_tx_prepare(nrfx_twis_t const * p_instance, void const * p_buf, size_t size)
DECL|nrfx_twis_uninit|function|void nrfx_twis_uninit(nrfx_twis_t const * p_instance)
DECL|semaphore|member|volatile bool semaphore;
DECL|state|member|nrfx_drv_state_t state;
DECL|substate|member|volatile nrfx_twis_substate_t substate;
DECL|twis_control_block_t|typedef|} twis_control_block_t;
