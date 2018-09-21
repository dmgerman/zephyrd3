DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|NRFX_NFCT_ACTIVATE_DELAY|macro|NRFX_NFCT_ACTIVATE_DELAY
DECL|NRFX_NFCT_BITS_TO_BYTES|macro|NRFX_NFCT_BITS_TO_BYTES
DECL|NRFX_NFCT_BYTES_TO_BITS|macro|NRFX_NFCT_BYTES_TO_BITS
DECL|NRFX_NFCT_CB_HANDLE|macro|NRFX_NFCT_CB_HANDLE
DECL|NRFX_NFCT_ERROR_STATUS_ALL_MASK|macro|NRFX_NFCT_ERROR_STATUS_ALL_MASK
DECL|NRFX_NFCT_ERROR_STATUS_ALL_MASK|macro|NRFX_NFCT_ERROR_STATUS_ALL_MASK
DECL|NRFX_NFCT_EVT_ACTIVE|macro|NRFX_NFCT_EVT_ACTIVE
DECL|NRFX_NFCT_FIELDLOST_THR|macro|NRFX_NFCT_FIELDLOST_THR
DECL|NRFX_NFCT_FIELD_TIMER_PERIOD|macro|NRFX_NFCT_FIELD_TIMER_PERIOD
DECL|NRFX_NFCT_FRAMEDELAYMAX_52840S|macro|NRFX_NFCT_FRAMEDELAYMAX_52840S
DECL|NRFX_NFCT_FRAME_STATUS_RX_ALL_MASK|macro|NRFX_NFCT_FRAME_STATUS_RX_ALL_MASK
DECL|NRFX_NFCT_FWT_MAX_DIFF|macro|NRFX_NFCT_FWT_MAX_DIFF
DECL|NRFX_NFCT_RX_INT_MASK|macro|NRFX_NFCT_RX_INT_MASK
DECL|NRFX_NFCT_TIMER_INSTANCE|macro|NRFX_NFCT_TIMER_INSTANCE
DECL|NRFX_NFCT_TIMER_PERIOD|macro|NRFX_NFCT_TIMER_PERIOD
DECL|NRFX_NFCT_TIMER_PERIOD|macro|NRFX_NFCT_TIMER_PERIOD
DECL|NRFX_NFCT_TX_INT_MASK|macro|NRFX_NFCT_TX_INT_MASK
DECL|NRFX_NFC_FIELD_STATE_NONE|enumerator|NRFX_NFC_FIELD_STATE_NONE, /**< Initial value that indicates no NFCT field events. */
DECL|NRFX_NFC_FIELD_STATE_OFF|enumerator|NRFX_NFC_FIELD_STATE_OFF, /**< The NFCT FIELDLOST event has been set. */
DECL|NRFX_NFC_FIELD_STATE_ON|enumerator|NRFX_NFC_FIELD_STATE_ON, /**< The NFCT FIELDDETECTED event has been set. */
DECL|NRFX_NFC_FIELD_STATE_UNKNOWN|enumerator|NRFX_NFC_FIELD_STATE_UNKNOWN /**< Both NFCT field events have been set - ambiguous state. */
DECL|USE_TIMER_WORKAROUND|macro|USE_TIMER_WORKAROUND
DECL|config|member|nrfx_nfct_config_t config;
DECL|eng_a|member|bool eng_a; /**< Engineering sample A of the NRF52840 chip. */
DECL|eng_bc|member|bool eng_bc; /**< Engineering sample B, C of the NRF52840 chip, or its final version. */
DECL|field_on|member|volatile bool field_on;
DECL|field_state_cnt|member|uint32_t field_state_cnt; /**< Counter of the FIELDLOST events. */
DECL|fieldevents_filter_active|member|bool fieldevents_filter_active; /**< Flag that indicates that the field events are ignored. */
DECL|is_delayed|member|bool is_delayed; /**< Required time delay has passed - one of the NFC activation conditions. */
DECL|is_hfclk_on|member|bool is_hfclk_on; /**< HFCLK has started - one of the NFC activation conditions. */
DECL|m_nfct_cb|variable|m_nfct_cb
DECL|m_nrf52840|variable|m_nrf52840
DECL|m_timer_workaround|variable|m_timer_workaround
DECL|nrf_nfct_nfcid1_size_to_sensres_size|function|static inline nrf_nfct_sensres_nfcid1_size_t nrf_nfct_nfcid1_size_to_sensres_size(uint8_t nfcid1_size)
DECL|nrfx_nfct_activate_check|function|static void nrfx_nfct_activate_check(void)
DECL|nrfx_nfct_autocolres_disable|function|void nrfx_nfct_autocolres_disable(void)
DECL|nrfx_nfct_autocolres_enable|function|void nrfx_nfct_autocolres_enable(void)
DECL|nrfx_nfct_control_block_t|typedef|} nrfx_nfct_control_block_t;
DECL|nrfx_nfct_disable|function|void nrfx_nfct_disable(void)
DECL|nrfx_nfct_enable|function|void nrfx_nfct_enable(void)
DECL|nrfx_nfct_field_check|function|bool nrfx_nfct_field_check(void)
DECL|nrfx_nfct_field_event_handler|function|static void nrfx_nfct_field_event_handler(volatile nrfx_nfct_field_state_t field_state)
DECL|nrfx_nfct_field_poll|function|static void nrfx_nfct_field_poll(void)
DECL|nrfx_nfct_field_state_t|typedef|} nrfx_nfct_field_state_t;
DECL|nrfx_nfct_field_timer_config|function|static inline nrfx_err_t nrfx_nfct_field_timer_config(void)
DECL|nrfx_nfct_field_timer_handler|function|static void nrfx_nfct_field_timer_handler(nrf_timer_event_t event_type, void * p_context)
DECL|nrfx_nfct_hw_init_setup|function|static void nrfx_nfct_hw_init_setup(void)
DECL|nrfx_nfct_init_substate_force|function|void nrfx_nfct_init_substate_force(nrfx_nfct_active_state_t sub_state)
DECL|nrfx_nfct_init|function|nrfx_err_t nrfx_nfct_init(nrfx_nfct_config_t const * p_config)
DECL|nrfx_nfct_irq_handler|function|void nrfx_nfct_irq_handler(void)
DECL|nrfx_nfct_nfcid1_default_bytes_get|function|nrfx_err_t nrfx_nfct_nfcid1_default_bytes_get(uint8_t * const p_nfcid1_buff, uint32_t nfcid1_buff_len)
DECL|nrfx_nfct_nrf52840_ver_t|typedef|} nrfx_nfct_nrf52840_ver_t;
DECL|nrfx_nfct_parameter_set|function|nrfx_err_t nrfx_nfct_parameter_set(nrfx_nfct_param_t const * p_param)
DECL|nrfx_nfct_reset|function|static inline void nrfx_nfct_reset(void)
DECL|nrfx_nfct_rxtx_int_enable|function|static inline void nrfx_nfct_rxtx_int_enable(uint32_t rxtx_int_mask)
DECL|nrfx_nfct_rx|function|void nrfx_nfct_rx(nrfx_nfct_data_desc_t const * p_tx_data)
DECL|nrfx_nfct_state_force|function|void nrfx_nfct_state_force(nrfx_nfct_state_t state)
DECL|nrfx_nfct_timer_workaround_t|typedef|} nrfx_nfct_timer_workaround_t;
DECL|nrfx_nfct_tx|function|nrfx_err_t nrfx_nfct_tx(nrfx_nfct_data_desc_t const * p_tx_data, nrf_nfct_frame_delay_mode_t delay_mode)
DECL|nrfx_nfct_type_52840_check|function|static inline bool nrfx_nfct_type_52840_check(void)
DECL|nrfx_nfct_type_52840_final_check|function|static inline bool nrfx_nfct_type_52840_final_check(void)
DECL|nrfx_nfct_type_52840_sample_check|function|static inline bool nrfx_nfct_type_52840_sample_check(void)
DECL|nrfx_nfct_uninit|function|void nrfx_nfct_uninit(void)
DECL|state|member|nrfx_drv_state_t state;
DECL|timer|member|const nrfx_timer_t timer; /**< Timer instance that supports the correct NFC field detection. */
