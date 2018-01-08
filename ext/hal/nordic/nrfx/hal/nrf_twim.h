DECL|NRF_TWIM_ALL_INTS_MASK|enumerator|NRF_TWIM_ALL_INTS_MASK = TWIM_INTENSET_STOPPED_Msk |
DECL|NRF_TWIM_ALL_SHORTS_MASK|enumerator|NRF_TWIM_ALL_SHORTS_MASK = TWIM_SHORTS_LASTTX_STARTRX_Msk |
DECL|NRF_TWIM_ERROR_ADDRESS_NACK|enumerator|NRF_TWIM_ERROR_ADDRESS_NACK = TWIM_ERRORSRC_ANACK_Msk, ///< NACK received after sending the address.
DECL|NRF_TWIM_ERROR_DATA_NACK|enumerator|NRF_TWIM_ERROR_DATA_NACK = TWIM_ERRORSRC_DNACK_Msk ///< NACK received after sending a data byte.
DECL|NRF_TWIM_EVENT_ERROR|enumerator|NRF_TWIM_EVENT_ERROR = offsetof(NRF_TWIM_Type, EVENTS_ERROR), ///< TWI error.
DECL|NRF_TWIM_EVENT_LASTRX|enumerator|NRF_TWIM_EVENT_LASTRX = offsetof(NRF_TWIM_Type, EVENTS_LASTRX), ///< Byte boundary, starting to receive the last byte.
DECL|NRF_TWIM_EVENT_LASTTX|enumerator|NRF_TWIM_EVENT_LASTTX = offsetof(NRF_TWIM_Type, EVENTS_LASTTX) ///< Byte boundary, starting to transmit the last byte.
DECL|NRF_TWIM_EVENT_RXSTARTED|enumerator|NRF_TWIM_EVENT_RXSTARTED = offsetof(NRF_TWIM_Type, EVENTS_RXSTARTED), ///< Receive sequence started.
DECL|NRF_TWIM_EVENT_STOPPED|enumerator|NRF_TWIM_EVENT_STOPPED = offsetof(NRF_TWIM_Type, EVENTS_STOPPED), ///< TWI stopped.
DECL|NRF_TWIM_EVENT_SUSPENDED|enumerator|NRF_TWIM_EVENT_SUSPENDED = 0x148, ///< TWI suspended.
DECL|NRF_TWIM_EVENT_TXSTARTED|enumerator|NRF_TWIM_EVENT_TXSTARTED = offsetof(NRF_TWIM_Type, EVENTS_TXSTARTED), ///< Transmit sequence started.
DECL|NRF_TWIM_FREQ_100K|enumerator|NRF_TWIM_FREQ_100K = TWIM_FREQUENCY_FREQUENCY_K100, ///< 100 kbps.
DECL|NRF_TWIM_FREQ_250K|enumerator|NRF_TWIM_FREQ_250K = TWIM_FREQUENCY_FREQUENCY_K250, ///< 250 kbps.
DECL|NRF_TWIM_FREQ_400K|enumerator|NRF_TWIM_FREQ_400K = TWIM_FREQUENCY_FREQUENCY_K400 ///< 400 kbps.
DECL|NRF_TWIM_H__|macro|NRF_TWIM_H__
DECL|NRF_TWIM_INT_ERROR_MASK|enumerator|NRF_TWIM_INT_ERROR_MASK = TWIM_INTENSET_ERROR_Msk, ///< Interrupt on ERROR event.
DECL|NRF_TWIM_INT_LASTRX_MASK|enumerator|NRF_TWIM_INT_LASTRX_MASK = TWIM_INTENSET_LASTRX_Msk, ///< Interrupt on LASTRX event.
DECL|NRF_TWIM_INT_LASTTX_MASK|enumerator|NRF_TWIM_INT_LASTTX_MASK = TWIM_INTENSET_LASTTX_Msk, ///< Interrupt on LASTTX event.
DECL|NRF_TWIM_INT_RXSTARTED_MASK|enumerator|NRF_TWIM_INT_RXSTARTED_MASK = TWIM_INTENSET_RXSTARTED_Msk, ///< Interrupt on RXSTARTED event.
DECL|NRF_TWIM_INT_STOPPED_MASK|enumerator|NRF_TWIM_INT_STOPPED_MASK = TWIM_INTENSET_STOPPED_Msk, ///< Interrupt on STOPPED event.
DECL|NRF_TWIM_INT_SUSPENDED_MASK|enumerator|NRF_TWIM_INT_SUSPENDED_MASK = TWIM_INTENSET_SUSPENDED_Msk, ///< Interrupt on SUSPENDED event.
DECL|NRF_TWIM_INT_TXSTARTED_MASK|enumerator|NRF_TWIM_INT_TXSTARTED_MASK = TWIM_INTENSET_TXSTARTED_Msk, ///< Interrupt on TXSTARTED event.
DECL|NRF_TWIM_SHORT_LASTRX_STARTTX_MASK|enumerator|NRF_TWIM_SHORT_LASTRX_STARTTX_MASK = TWIM_SHORTS_LASTRX_STARTTX_Msk, ///< Shortcut between LASTRX event and STARTTX task.
DECL|NRF_TWIM_SHORT_LASTRX_STOP_MASK|enumerator|NRF_TWIM_SHORT_LASTRX_STOP_MASK = TWIM_SHORTS_LASTRX_STOP_Msk, ///< Shortcut between LASTRX event and STOP task.
DECL|NRF_TWIM_SHORT_LASTTX_STARTRX_MASK|enumerator|NRF_TWIM_SHORT_LASTTX_STARTRX_MASK = TWIM_SHORTS_LASTTX_STARTRX_Msk, ///< Shortcut between LASTTX event and STARTRX task.
DECL|NRF_TWIM_SHORT_LASTTX_STOP_MASK|enumerator|NRF_TWIM_SHORT_LASTTX_STOP_MASK = TWIM_SHORTS_LASTTX_STOP_Msk, ///< Shortcut between LASTTX event and STOP task.
DECL|NRF_TWIM_SHORT_LASTTX_SUSPEND_MASK|enumerator|NRF_TWIM_SHORT_LASTTX_SUSPEND_MASK = TWIM_SHORTS_LASTTX_SUSPEND_Msk, ///< Shortcut between LASTTX event and SUSPEND task.
DECL|NRF_TWIM_TASK_RESUME|enumerator|NRF_TWIM_TASK_RESUME = offsetof(NRF_TWIM_Type, TASKS_RESUME) ///< Resume TWI transaction.
DECL|NRF_TWIM_TASK_STARTRX|enumerator|NRF_TWIM_TASK_STARTRX = offsetof(NRF_TWIM_Type, TASKS_STARTRX), ///< Start TWI receive sequence.
DECL|NRF_TWIM_TASK_STARTTX|enumerator|NRF_TWIM_TASK_STARTTX = offsetof(NRF_TWIM_Type, TASKS_STARTTX), ///< Start TWI transmit sequence.
DECL|NRF_TWIM_TASK_STOP|enumerator|NRF_TWIM_TASK_STOP = offsetof(NRF_TWIM_Type, TASKS_STOP), ///< Stop TWI transaction.
DECL|NRF_TWIM_TASK_SUSPEND|enumerator|NRF_TWIM_TASK_SUSPEND = offsetof(NRF_TWIM_Type, TASKS_SUSPEND), ///< Suspend TWI transaction.
DECL|nrf_twim_address_set|function|__STATIC_INLINE void nrf_twim_address_set(NRF_TWIM_Type * p_reg, uint8_t address)
DECL|nrf_twim_disable|function|__STATIC_INLINE void nrf_twim_disable(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_enable|function|__STATIC_INLINE void nrf_twim_enable(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_error_t|typedef|} nrf_twim_error_t;
DECL|nrf_twim_errorsrc_get_and_clear|function|__STATIC_INLINE uint32_t nrf_twim_errorsrc_get_and_clear(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_event_address_get|function|__STATIC_INLINE uint32_t * nrf_twim_event_address_get(NRF_TWIM_Type * p_reg, nrf_twim_event_t event)
DECL|nrf_twim_event_check|function|__STATIC_INLINE bool nrf_twim_event_check(NRF_TWIM_Type * p_reg, nrf_twim_event_t event)
DECL|nrf_twim_event_clear|function|__STATIC_INLINE void nrf_twim_event_clear(NRF_TWIM_Type * p_reg, nrf_twim_event_t event)
DECL|nrf_twim_event_t|typedef|} nrf_twim_event_t;
DECL|nrf_twim_frequency_set|function|__STATIC_INLINE void nrf_twim_frequency_set(NRF_TWIM_Type * p_reg, nrf_twim_frequency_t frequency)
DECL|nrf_twim_frequency_t|typedef|} nrf_twim_frequency_t;
DECL|nrf_twim_int_disable|function|__STATIC_INLINE void nrf_twim_int_disable(NRF_TWIM_Type * p_reg, uint32_t int_mask)
DECL|nrf_twim_int_enable_check|function|__STATIC_INLINE bool nrf_twim_int_enable_check(NRF_TWIM_Type * p_reg, nrf_twim_int_mask_t int_mask)
DECL|nrf_twim_int_enable|function|__STATIC_INLINE void nrf_twim_int_enable(NRF_TWIM_Type * p_reg, uint32_t int_mask)
DECL|nrf_twim_int_mask_t|typedef|} nrf_twim_int_mask_t;
DECL|nrf_twim_pins_set|function|__STATIC_INLINE void nrf_twim_pins_set(NRF_TWIM_Type * p_reg, uint32_t scl_pin, uint32_t sda_pin)
DECL|nrf_twim_rx_buffer_set|function|__STATIC_INLINE void nrf_twim_rx_buffer_set(NRF_TWIM_Type * p_reg, uint8_t * p_buffer, size_t length)
DECL|nrf_twim_rx_list_disable|function|__STATIC_INLINE void nrf_twim_rx_list_disable(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_rx_list_enable|function|__STATIC_INLINE void nrf_twim_rx_list_enable(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_rxd_amount_get|function|__STATIC_INLINE size_t nrf_twim_rxd_amount_get(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_short_mask_t|typedef|} nrf_twim_short_mask_t;
DECL|nrf_twim_shorts_disable|function|__STATIC_INLINE void nrf_twim_shorts_disable(NRF_TWIM_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_twim_shorts_enable|function|__STATIC_INLINE void nrf_twim_shorts_enable(NRF_TWIM_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_twim_shorts_set|function|__STATIC_INLINE void nrf_twim_shorts_set(NRF_TWIM_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_twim_task_address_get|function|__STATIC_INLINE uint32_t * nrf_twim_task_address_get(NRF_TWIM_Type * p_reg, nrf_twim_task_t task)
DECL|nrf_twim_task_trigger|function|__STATIC_INLINE void nrf_twim_task_trigger(NRF_TWIM_Type * p_reg, nrf_twim_task_t task)
DECL|nrf_twim_task_t|typedef|} nrf_twim_task_t;
DECL|nrf_twim_tx_buffer_set|function|__STATIC_INLINE void nrf_twim_tx_buffer_set(NRF_TWIM_Type * p_reg, uint8_t const * p_buffer, size_t length)
DECL|nrf_twim_tx_list_disable|function|__STATIC_INLINE void nrf_twim_tx_list_disable(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_tx_list_enable|function|__STATIC_INLINE void nrf_twim_tx_list_enable(NRF_TWIM_Type * p_reg)
DECL|nrf_twim_txd_amount_get|function|__STATIC_INLINE size_t nrf_twim_txd_amount_get(NRF_TWIM_Type * p_reg)
