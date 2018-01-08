DECL|FORBIDDEN_HANDLER_ADDRESS|macro|FORBIDDEN_HANDLER_ADDRESS
DECL|NO_CHANNELS|macro|NO_CHANNELS
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|PIN_NOT_USED|macro|PIN_NOT_USED
DECL|PIN_USED|macro|PIN_USED
DECL|SENSE_FIELD_MASK|macro|SENSE_FIELD_MASK
DECL|SENSE_FIELD_POS|macro|SENSE_FIELD_POS
DECL|TE_CLR_IDX_TO_TASK_ADDR|macro|TE_CLR_IDX_TO_TASK_ADDR
DECL|TE_IDX_TO_EVENT_ADDR|macro|TE_IDX_TO_EVENT_ADDR
DECL|TE_OUT_IDX_TO_TASK_ADDR|macro|TE_OUT_IDX_TO_TASK_ADDR
DECL|TE_SET_IDX_TO_TASK_ADDR|macro|TE_SET_IDX_TO_TASK_ADDR
DECL|channel_free|function|static void channel_free(uint8_t channel_id)
DECL|channel_handler_get|function|__STATIC_INLINE nrfx_gpiote_evt_handler_t channel_handler_get(uint32_t channel)
DECL|channel_port_alloc|function|static int8_t channel_port_alloc(uint32_t pin, nrfx_gpiote_evt_handler_t handler, bool channel)
DECL|channel_port_get|function|__STATIC_INLINE int8_t channel_port_get(uint32_t pin)
DECL|gpiote_control_block_t|typedef|} gpiote_control_block_t;
DECL|handlers|member|nrfx_gpiote_evt_handler_t handlers[GPIOTE_CH_NUM + NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS];
DECL|m_cb|variable|m_cb
DECL|nrfx_gpiote_clr_task_addr_get|function|uint32_t nrfx_gpiote_clr_task_addr_get(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_clr_task_trigger|function|void nrfx_gpiote_clr_task_trigger(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_in_event_addr_get|function|uint32_t nrfx_gpiote_in_event_addr_get(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_in_event_disable|function|void nrfx_gpiote_in_event_disable(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_in_event_enable|function|void nrfx_gpiote_in_event_enable(nrfx_gpiote_pin_t pin, bool int_enable)
DECL|nrfx_gpiote_in_init|function|nrfx_err_t nrfx_gpiote_in_init(nrfx_gpiote_pin_t pin, nrfx_gpiote_in_config_t const * p_config, nrfx_gpiote_evt_handler_t evt_handler)
DECL|nrfx_gpiote_in_is_set|function|bool nrfx_gpiote_in_is_set(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_in_uninit|function|void nrfx_gpiote_in_uninit(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_init|function|nrfx_err_t nrfx_gpiote_init(void)
DECL|nrfx_gpiote_irq_handler|function|void nrfx_gpiote_irq_handler(void)
DECL|nrfx_gpiote_is_init|function|bool nrfx_gpiote_is_init(void)
DECL|nrfx_gpiote_out_clear|function|void nrfx_gpiote_out_clear(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_init|function|nrfx_err_t nrfx_gpiote_out_init(nrfx_gpiote_pin_t pin, nrfx_gpiote_out_config_t const * p_config)
DECL|nrfx_gpiote_out_set|function|void nrfx_gpiote_out_set(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_task_addr_get|function|uint32_t nrfx_gpiote_out_task_addr_get(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_task_disable|function|void nrfx_gpiote_out_task_disable(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_task_enable|function|void nrfx_gpiote_out_task_enable(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_task_force|function|void nrfx_gpiote_out_task_force(nrfx_gpiote_pin_t pin, uint8_t state)
DECL|nrfx_gpiote_out_task_trigger|function|void nrfx_gpiote_out_task_trigger(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_toggle|function|void nrfx_gpiote_out_toggle(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_out_uninit|function|void nrfx_gpiote_out_uninit(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_set_task_addr_get|function|uint32_t nrfx_gpiote_set_task_addr_get(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_set_task_trigger|function|void nrfx_gpiote_set_task_trigger(nrfx_gpiote_pin_t pin)
DECL|nrfx_gpiote_uninit|function|void nrfx_gpiote_uninit(void)
DECL|pin_assignments|member|int8_t pin_assignments[NUMBER_OF_PINS];
DECL|pin_in_use_as_non_task_out|function|__STATIC_INLINE bool pin_in_use_as_non_task_out(uint32_t pin)
DECL|pin_in_use_by_gpiote|function|__STATIC_INLINE bool pin_in_use_by_gpiote(uint32_t pin)
DECL|pin_in_use_by_port|function|__STATIC_INLINE bool pin_in_use_by_port(uint32_t pin)
DECL|pin_in_use_by_te_set|function|__STATIC_INLINE void pin_in_use_by_te_set(uint32_t pin, uint32_t channel_id, nrfx_gpiote_evt_handler_t handler, bool is_channel)
DECL|pin_in_use_by_te|function|__STATIC_INLINE bool pin_in_use_by_te(uint32_t pin)
DECL|pin_in_use_clear|function|__STATIC_INLINE void pin_in_use_clear(uint32_t pin)
DECL|pin_in_use_set|function|__STATIC_INLINE void pin_in_use_set(uint32_t pin)
DECL|pin_in_use|function|__STATIC_INLINE bool pin_in_use(uint32_t pin)
DECL|port_handlers_pins|member|int8_t port_handlers_pins[NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS];
DECL|state|member|nrfx_drv_state_t state;
