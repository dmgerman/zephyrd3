DECL|NRF_TWI_ALL_INTS_MASK|enumerator|NRF_TWI_ALL_INTS_MASK = TWI_INTENSET_STOPPED_Msk |
DECL|NRF_TWI_ALL_SHORTS_MASK|enumerator|NRF_TWI_ALL_SHORTS_MASK = TWI_SHORTS_BB_SUSPEND_Msk |
DECL|NRF_TWI_ERROR_ADDRESS_NACK|enumerator|NRF_TWI_ERROR_ADDRESS_NACK = TWI_ERRORSRC_ANACK_Msk, ///< NACK received after sending the address.
DECL|NRF_TWI_ERROR_DATA_NACK|enumerator|NRF_TWI_ERROR_DATA_NACK = TWI_ERRORSRC_DNACK_Msk, ///< NACK received after sending a data byte.
DECL|NRF_TWI_ERROR_OVERRUN|enumerator|NRF_TWI_ERROR_OVERRUN = TWI_ERRORSRC_OVERRUN_Msk ///< Overrun error.
DECL|NRF_TWI_EVENT_BB|enumerator|NRF_TWI_EVENT_BB = offsetof(NRF_TWI_Type, EVENTS_BB), ///< TWI byte boundary, generated before each byte that is sent or received.
DECL|NRF_TWI_EVENT_ERROR|enumerator|NRF_TWI_EVENT_ERROR = offsetof(NRF_TWI_Type, EVENTS_ERROR), ///< TWI error.
DECL|NRF_TWI_EVENT_RXDREADY|enumerator|NRF_TWI_EVENT_RXDREADY = offsetof(NRF_TWI_Type, EVENTS_RXDREADY), ///< TWI RXD byte received.
DECL|NRF_TWI_EVENT_STOPPED|enumerator|NRF_TWI_EVENT_STOPPED = offsetof(NRF_TWI_Type, EVENTS_STOPPED), ///< TWI stopped.
DECL|NRF_TWI_EVENT_SUSPENDED|enumerator|NRF_TWI_EVENT_SUSPENDED = offsetof(NRF_TWI_Type, EVENTS_SUSPENDED) ///< TWI entered the suspended state.
DECL|NRF_TWI_EVENT_TXDSENT|enumerator|NRF_TWI_EVENT_TXDSENT = offsetof(NRF_TWI_Type, EVENTS_TXDSENT), ///< TWI TXD byte sent.
DECL|NRF_TWI_FREQ_100K|enumerator|NRF_TWI_FREQ_100K = TWI_FREQUENCY_FREQUENCY_K100, ///< 100 kbps.
DECL|NRF_TWI_FREQ_250K|enumerator|NRF_TWI_FREQ_250K = TWI_FREQUENCY_FREQUENCY_K250, ///< 250 kbps.
DECL|NRF_TWI_FREQ_400K|enumerator|NRF_TWI_FREQ_400K = TWI_FREQUENCY_FREQUENCY_K400 ///< 400 kbps.
DECL|NRF_TWI_H__|macro|NRF_TWI_H__
DECL|NRF_TWI_INT_BB_MASK|enumerator|NRF_TWI_INT_BB_MASK = TWI_INTENSET_BB_Msk, ///< Interrupt on BB event.
DECL|NRF_TWI_INT_ERROR_MASK|enumerator|NRF_TWI_INT_ERROR_MASK = TWI_INTENSET_ERROR_Msk, ///< Interrupt on ERROR event.
DECL|NRF_TWI_INT_RXDREADY_MASK|enumerator|NRF_TWI_INT_RXDREADY_MASK = TWI_INTENSET_RXDREADY_Msk, ///< Interrupt on RXDREADY event.
DECL|NRF_TWI_INT_STOPPED_MASK|enumerator|NRF_TWI_INT_STOPPED_MASK = TWI_INTENSET_STOPPED_Msk, ///< Interrupt on STOPPED event.
DECL|NRF_TWI_INT_SUSPENDED_MASK|enumerator|NRF_TWI_INT_SUSPENDED_MASK = TWI_INTENSET_SUSPENDED_Msk, ///< Interrupt on SUSPENDED event.
DECL|NRF_TWI_INT_TXDSENT_MASK|enumerator|NRF_TWI_INT_TXDSENT_MASK = TWI_INTENSET_TXDSENT_Msk, ///< Interrupt on TXDSENT event.
DECL|NRF_TWI_SHORT_BB_STOP_MASK|enumerator|NRF_TWI_SHORT_BB_STOP_MASK = TWI_SHORTS_BB_STOP_Msk, ///< Shortcut between BB event and STOP task.
DECL|NRF_TWI_SHORT_BB_SUSPEND_MASK|enumerator|NRF_TWI_SHORT_BB_SUSPEND_MASK = TWI_SHORTS_BB_SUSPEND_Msk, ///< Shortcut between BB event and SUSPEND task.
DECL|NRF_TWI_TASK_RESUME|enumerator|NRF_TWI_TASK_RESUME = offsetof(NRF_TWI_Type, TASKS_RESUME) ///< Resume TWI transaction.
DECL|NRF_TWI_TASK_STARTRX|enumerator|NRF_TWI_TASK_STARTRX = offsetof(NRF_TWI_Type, TASKS_STARTRX), ///< Start TWI receive sequence.
DECL|NRF_TWI_TASK_STARTTX|enumerator|NRF_TWI_TASK_STARTTX = offsetof(NRF_TWI_Type, TASKS_STARTTX), ///< Start TWI transmit sequence.
DECL|NRF_TWI_TASK_STOP|enumerator|NRF_TWI_TASK_STOP = offsetof(NRF_TWI_Type, TASKS_STOP), ///< Stop TWI transaction.
DECL|NRF_TWI_TASK_SUSPEND|enumerator|NRF_TWI_TASK_SUSPEND = offsetof(NRF_TWI_Type, TASKS_SUSPEND), ///< Suspend TWI transaction.
DECL|nrf_twi_address_set|function|__STATIC_INLINE void nrf_twi_address_set(NRF_TWI_Type * p_reg, uint8_t address)
DECL|nrf_twi_disable|function|__STATIC_INLINE void nrf_twi_disable(NRF_TWI_Type * p_reg)
DECL|nrf_twi_enable|function|__STATIC_INLINE void nrf_twi_enable(NRF_TWI_Type * p_reg)
DECL|nrf_twi_error_t|typedef|} nrf_twi_error_t;
DECL|nrf_twi_errorsrc_get_and_clear|function|__STATIC_INLINE uint32_t nrf_twi_errorsrc_get_and_clear(NRF_TWI_Type * p_reg)
DECL|nrf_twi_event_address_get|function|__STATIC_INLINE uint32_t * nrf_twi_event_address_get(NRF_TWI_Type * p_reg, nrf_twi_event_t event)
DECL|nrf_twi_event_check|function|__STATIC_INLINE bool nrf_twi_event_check(NRF_TWI_Type * p_reg, nrf_twi_event_t event)
DECL|nrf_twi_event_clear|function|__STATIC_INLINE void nrf_twi_event_clear(NRF_TWI_Type * p_reg, nrf_twi_event_t event)
DECL|nrf_twi_event_t|typedef|} nrf_twi_event_t;
DECL|nrf_twi_frequency_set|function|__STATIC_INLINE void nrf_twi_frequency_set(NRF_TWI_Type * p_reg, nrf_twi_frequency_t frequency)
DECL|nrf_twi_frequency_t|typedef|} nrf_twi_frequency_t;
DECL|nrf_twi_int_disable|function|__STATIC_INLINE void nrf_twi_int_disable(NRF_TWI_Type * p_reg, uint32_t int_mask)
DECL|nrf_twi_int_enable_check|function|__STATIC_INLINE bool nrf_twi_int_enable_check(NRF_TWI_Type * p_reg, nrf_twi_int_mask_t int_mask)
DECL|nrf_twi_int_enable|function|__STATIC_INLINE void nrf_twi_int_enable(NRF_TWI_Type * p_reg, uint32_t int_mask)
DECL|nrf_twi_int_mask_t|typedef|} nrf_twi_int_mask_t;
DECL|nrf_twi_pins_set|function|__STATIC_INLINE void nrf_twi_pins_set(NRF_TWI_Type * p_reg, uint32_t scl_pin, uint32_t sda_pin)
DECL|nrf_twi_rxd_get|function|__STATIC_INLINE uint8_t nrf_twi_rxd_get(NRF_TWI_Type * p_reg)
DECL|nrf_twi_short_mask_t|typedef|} nrf_twi_short_mask_t;
DECL|nrf_twi_shorts_disable|function|__STATIC_INLINE void nrf_twi_shorts_disable(NRF_TWI_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_twi_shorts_enable|function|__STATIC_INLINE void nrf_twi_shorts_enable(NRF_TWI_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_twi_shorts_set|function|__STATIC_INLINE void nrf_twi_shorts_set(NRF_TWI_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_twi_task_address_get|function|__STATIC_INLINE uint32_t * nrf_twi_task_address_get(NRF_TWI_Type * p_reg, nrf_twi_task_t task)
DECL|nrf_twi_task_trigger|function|__STATIC_INLINE void nrf_twi_task_trigger(NRF_TWI_Type * p_reg, nrf_twi_task_t task)
DECL|nrf_twi_task_t|typedef|} nrf_twi_task_t;
DECL|nrf_twi_txd_set|function|__STATIC_INLINE void nrf_twi_txd_set(NRF_TWI_Type * p_reg, uint8_t data)
