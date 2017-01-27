DECL|NRF_TWIS_CONFIG_ADDRESS01_MASK|enumerator|NRF_TWIS_CONFIG_ADDRESS01_MASK = TWIS_CONFIG_ADDRESS0_Msk | TWIS_CONFIG_ADDRESS1_Msk /**< Enable both address matching */
DECL|NRF_TWIS_CONFIG_ADDRESS0_MASK|enumerator|NRF_TWIS_CONFIG_ADDRESS0_MASK = TWIS_CONFIG_ADDRESS0_Msk, /**< Enable or disable address matching on ADDRESS[0] */
DECL|NRF_TWIS_CONFIG_ADDRESS1_MASK|enumerator|NRF_TWIS_CONFIG_ADDRESS1_MASK = TWIS_CONFIG_ADDRESS1_Msk, /**< Enable or disable address matching on ADDRESS[1] */
DECL|NRF_TWIS_ERROR_DATA_NACK|enumerator|NRF_TWIS_ERROR_DATA_NACK = TWIS_ERRORSRC_DNACK_Msk, /**< NACK sent after receiving a data byte */
DECL|NRF_TWIS_ERROR_OVERFLOW|enumerator|NRF_TWIS_ERROR_OVERFLOW = TWIS_ERRORSRC_OVERFLOW_Msk, /**< RX buffer overflow detected, and prevented */
DECL|NRF_TWIS_ERROR_OVERREAD|enumerator|NRF_TWIS_ERROR_OVERREAD = TWIS_ERRORSRC_OVERREAD_Msk /**< TX buffer over-read detected, and prevented */
DECL|NRF_TWIS_EVENT_ERROR|enumerator|NRF_TWIS_EVENT_ERROR = offsetof(NRF_TWIS_Type, EVENTS_ERROR), /**< TWIS error */
DECL|NRF_TWIS_EVENT_READ|enumerator|NRF_TWIS_EVENT_READ = offsetof(NRF_TWIS_Type, EVENTS_READ) /**< Read command received */
DECL|NRF_TWIS_EVENT_RXSTARTED|enumerator|NRF_TWIS_EVENT_RXSTARTED = offsetof(NRF_TWIS_Type, EVENTS_RXSTARTED), /**< Receive sequence started */
DECL|NRF_TWIS_EVENT_STOPPED|enumerator|NRF_TWIS_EVENT_STOPPED = offsetof(NRF_TWIS_Type, EVENTS_STOPPED), /**< TWIS stopped */
DECL|NRF_TWIS_EVENT_TXSTARTED|enumerator|NRF_TWIS_EVENT_TXSTARTED = offsetof(NRF_TWIS_Type, EVENTS_TXSTARTED), /**< Transmit sequence started */
DECL|NRF_TWIS_EVENT_WRITE|enumerator|NRF_TWIS_EVENT_WRITE = offsetof(NRF_TWIS_Type, EVENTS_WRITE), /**< Write command received */
DECL|NRF_TWIS_H__|macro|NRF_TWIS_H__
DECL|NRF_TWIS_INT_ERROR_MASK|enumerator|NRF_TWIS_INT_ERROR_MASK = TWIS_INTEN_ERROR_Msk, /**< Interrupt on ERROR event */
DECL|NRF_TWIS_INT_READ_MASK|enumerator|NRF_TWIS_INT_READ_MASK = TWIS_INTEN_READ_Msk, /**< Interrupt on READ event */
DECL|NRF_TWIS_INT_RXSTARTED_MASK|enumerator|NRF_TWIS_INT_RXSTARTED_MASK = TWIS_INTEN_RXSTARTED_Msk, /**< Interrupt on RXSTARTED event */
DECL|NRF_TWIS_INT_STOPPED_MASK|enumerator|NRF_TWIS_INT_STOPPED_MASK = TWIS_INTEN_STOPPED_Msk, /**< Interrupt on STOPPED event */
DECL|NRF_TWIS_INT_TXSTARTED_MASK|enumerator|NRF_TWIS_INT_TXSTARTED_MASK = TWIS_INTEN_TXSTARTED_Msk, /**< Interrupt on TXSTARTED event */
DECL|NRF_TWIS_INT_WRITE_MASK|enumerator|NRF_TWIS_INT_WRITE_MASK = TWIS_INTEN_WRITE_Msk, /**< Interrupt on WRITE event */
DECL|NRF_TWIS_SHORT_READ_SUSPEND_MASK|enumerator|NRF_TWIS_SHORT_READ_SUSPEND_MASK = TWIS_SHORTS_READ_SUSPEND_Msk, /**< Shortcut between READ event and SUSPEND task */
DECL|NRF_TWIS_SHORT_WRITE_SUSPEND_MASK|enumerator|NRF_TWIS_SHORT_WRITE_SUSPEND_MASK = TWIS_SHORTS_WRITE_SUSPEND_Msk, /**< Shortcut between WRITE event and SUSPEND task */
DECL|NRF_TWIS_TASK_PREPARERX|enumerator|NRF_TWIS_TASK_PREPARERX = offsetof(NRF_TWIS_Type, TASKS_PREPARERX), /**< Prepare the TWIS slave to respond to a write command */
DECL|NRF_TWIS_TASK_PREPARETX|enumerator|NRF_TWIS_TASK_PREPARETX = offsetof(NRF_TWIS_Type, TASKS_PREPARETX) /**< Prepare the TWIS slave to respond to a read command */
DECL|NRF_TWIS_TASK_RESUME|enumerator|NRF_TWIS_TASK_RESUME = offsetof(NRF_TWIS_Type, TASKS_RESUME), /**< Resume TWIS transaction */
DECL|NRF_TWIS_TASK_STOP|enumerator|NRF_TWIS_TASK_STOP = offsetof(NRF_TWIS_Type, TASKS_STOP), /**< Stop TWIS transaction */
DECL|NRF_TWIS_TASK_SUSPEND|enumerator|NRF_TWIS_TASK_SUSPEND = offsetof(NRF_TWIS_Type, TASKS_SUSPEND), /**< Suspend TWIS transaction */
DECL|nrf_twis_address_get|function|nrf_twis_address_t nrf_twis_address_get( NRF_TWIS_Type const * const p_reg, uint_fast8_t n)
DECL|nrf_twis_address_set|function|void nrf_twis_address_set( NRF_TWIS_Type * const p_reg, uint_fast8_t n, nrf_twis_address_t addr)
DECL|nrf_twis_address_t|typedef|typedef uint8_t nrf_twis_address_t;
DECL|nrf_twis_amount_t|typedef|typedef uint8_t nrf_twis_amount_t;
DECL|nrf_twis_config_addr_mask_t|typedef|} nrf_twis_config_addr_mask_t;
DECL|nrf_twis_config_address_get|function|nrf_twis_config_addr_mask_t nrf_twis_config_address_get(NRF_TWIS_Type const * const p_reg)
DECL|nrf_twis_config_address_set|function|void nrf_twis_config_address_set( NRF_TWIS_Type * const p_reg, nrf_twis_config_addr_mask_t addr_mask)
DECL|nrf_twis_disable|function|void nrf_twis_disable(NRF_TWIS_Type * const p_reg)
DECL|nrf_twis_enable|function|void nrf_twis_enable(NRF_TWIS_Type * const p_reg)
DECL|nrf_twis_error_source_get_and_clear|function|uint32_t nrf_twis_error_source_get_and_clear(NRF_TWIS_Type * const p_reg)
DECL|nrf_twis_error_t|typedef|} nrf_twis_error_t;
DECL|nrf_twis_event_address_get|function|uint32_t nrf_twis_event_address_get( NRF_TWIS_Type const * const p_reg, nrf_twis_event_t event)
DECL|nrf_twis_event_check|function|bool nrf_twis_event_check( NRF_TWIS_Type const * const p_reg, nrf_twis_event_t event)
DECL|nrf_twis_event_clear|function|void nrf_twis_event_clear( NRF_TWIS_Type * const p_reg, nrf_twis_event_t event)
DECL|nrf_twis_event_get_and_clear|function|bool nrf_twis_event_get_and_clear( NRF_TWIS_Type * const p_reg, nrf_twis_event_t event)
DECL|nrf_twis_event_t|typedef|} nrf_twis_event_t;
DECL|nrf_twis_getRegPtr_c|function|__STATIC_INLINE volatile const uint32_t* nrf_twis_getRegPtr_c(NRF_TWIS_Type const * const p_reg, uint32_t offset)
DECL|nrf_twis_getRegPtr|function|__STATIC_INLINE volatile uint32_t* nrf_twis_getRegPtr(NRF_TWIS_Type * const p_reg, uint32_t offset)
DECL|nrf_twis_int_disable|function|void nrf_twis_int_disable(NRF_TWIS_Type * const p_reg, uint32_t int_mask)
DECL|nrf_twis_int_enable_check|function|bool nrf_twis_int_enable_check(NRF_TWIS_Type const * const p_reg, uint32_t int_mask)
DECL|nrf_twis_int_enable|function|void nrf_twis_int_enable(NRF_TWIS_Type * const p_reg, uint32_t int_mask)
DECL|nrf_twis_int_mask_t|typedef|} nrf_twis_int_mask_t;
DECL|nrf_twis_match_get|function|uint_fast8_t nrf_twis_match_get(NRF_TWIS_Type const * p_reg)
DECL|nrf_twis_orc_get|function|uint8_t nrf_twis_orc_get(NRF_TWIS_Type const * const p_reg)
DECL|nrf_twis_orc_set|function|void nrf_twis_orc_set( NRF_TWIS_Type * const p_reg, uint8_t orc)
DECL|nrf_twis_pins_set|function|void nrf_twis_pins_set(NRF_TWIS_Type * const p_reg, uint32_t scl, uint32_t sda)
DECL|nrf_twis_rx_amount_get|function|nrf_twis_amount_t nrf_twis_rx_amount_get(NRF_TWIS_Type const * const p_reg)
DECL|nrf_twis_rx_buffer_set|function|void nrf_twis_rx_buffer_set( NRF_TWIS_Type * const p_reg, uint8_t * p_buf, nrf_twis_amount_t length)
DECL|nrf_twis_rx_prepare|function|__STATIC_INLINE void nrf_twis_rx_prepare( NRF_TWIS_Type * const p_reg, uint8_t * p_buf, nrf_twis_amount_t length)
DECL|nrf_twis_short_mask_t|typedef|} nrf_twis_short_mask_t;
DECL|nrf_twis_shorts_disable|function|void nrf_twis_shorts_disable(NRF_TWIS_Type * const p_reg, uint32_t short_mask)
DECL|nrf_twis_shorts_enable|function|void nrf_twis_shorts_enable(NRF_TWIS_Type * const p_reg, uint32_t short_mask)
DECL|nrf_twis_shorts_get|function|uint32_t nrf_twis_shorts_get(NRF_TWIS_Type * const p_reg)
DECL|nrf_twis_task_address_get|function|uint32_t nrf_twis_task_address_get( NRF_TWIS_Type const * const p_reg, nrf_twis_task_t task)
DECL|nrf_twis_task_trigger|function|void nrf_twis_task_trigger(NRF_TWIS_Type * const p_reg, nrf_twis_task_t task)
DECL|nrf_twis_task_t|typedef|} nrf_twis_task_t;
DECL|nrf_twis_tx_amount_get|function|nrf_twis_amount_t nrf_twis_tx_amount_get(NRF_TWIS_Type const * const p_reg)
DECL|nrf_twis_tx_buffer_set|function|void nrf_twis_tx_buffer_set( NRF_TWIS_Type * const p_reg, uint8_t const * p_buf, nrf_twis_amount_t length)
DECL|nrf_twis_tx_prepare|function|__STATIC_INLINE void nrf_twis_tx_prepare( NRF_TWIS_Type * const p_reg, uint8_t const * p_buf, nrf_twis_amount_t length)
