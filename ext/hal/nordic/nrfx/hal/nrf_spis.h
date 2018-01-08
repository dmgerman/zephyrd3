DECL|NRF_SPIS_BIT_ORDER_LSB_FIRST|enumerator|NRF_SPIS_BIT_ORDER_LSB_FIRST = SPIS_CONFIG_ORDER_LsbFirst ///< Least significant bit shifted out first.
DECL|NRF_SPIS_BIT_ORDER_MSB_FIRST|enumerator|NRF_SPIS_BIT_ORDER_MSB_FIRST = SPIS_CONFIG_ORDER_MsbFirst, ///< Most significant bit shifted out first.
DECL|NRF_SPIS_EVENT_ACQUIRED|enumerator|NRF_SPIS_EVENT_ACQUIRED = offsetof(NRF_SPIS_Type, EVENTS_ACQUIRED) ///< Semaphore acquired.
DECL|NRF_SPIS_EVENT_END|enumerator|NRF_SPIS_EVENT_END = offsetof(NRF_SPIS_Type, EVENTS_END), ///< Granted transaction completed.
DECL|NRF_SPIS_H__|macro|NRF_SPIS_H__
DECL|NRF_SPIS_INT_ACQUIRED_MASK|enumerator|NRF_SPIS_INT_ACQUIRED_MASK = SPIS_INTENSET_ACQUIRED_Msk ///< Interrupt on ACQUIRED event.
DECL|NRF_SPIS_INT_END_MASK|enumerator|NRF_SPIS_INT_END_MASK = SPIS_INTENSET_END_Msk, ///< Interrupt on END event.
DECL|NRF_SPIS_MODE_0|enumerator|NRF_SPIS_MODE_0, ///< SCK active high, sample on leading edge of clock.
DECL|NRF_SPIS_MODE_1|enumerator|NRF_SPIS_MODE_1, ///< SCK active high, sample on trailing edge of clock.
DECL|NRF_SPIS_MODE_2|enumerator|NRF_SPIS_MODE_2, ///< SCK active low, sample on leading edge of clock.
DECL|NRF_SPIS_MODE_3|enumerator|NRF_SPIS_MODE_3 ///< SCK active low, sample on trailing edge of clock.
DECL|NRF_SPIS_PIN_NOT_CONNECTED|macro|NRF_SPIS_PIN_NOT_CONNECTED
DECL|NRF_SPIS_SEMSTAT_CPUPENDING|enumerator|NRF_SPIS_SEMSTAT_CPUPENDING = 3 ///< Semaphore is assigned to the SPI, but a handover to the CPU is pending.
DECL|NRF_SPIS_SEMSTAT_CPU|enumerator|NRF_SPIS_SEMSTAT_CPU = 1, ///< Semaphore is assigned to the CPU.
DECL|NRF_SPIS_SEMSTAT_FREE|enumerator|NRF_SPIS_SEMSTAT_FREE = 0, ///< Semaphore is free.
DECL|NRF_SPIS_SEMSTAT_SPIS|enumerator|NRF_SPIS_SEMSTAT_SPIS = 2, ///< Semaphore is assigned to the SPI slave.
DECL|NRF_SPIS_SHORT_END_ACQUIRE|enumerator|NRF_SPIS_SHORT_END_ACQUIRE = SPIS_SHORTS_END_ACQUIRE_Msk ///< Shortcut between END event and ACQUIRE task.
DECL|NRF_SPIS_STATUS_OVERFLOW|enumerator|NRF_SPIS_STATUS_OVERFLOW = SPIS_STATUS_OVERFLOW_Msk ///< RX buffer overflow detected and prevented.
DECL|NRF_SPIS_STATUS_OVERREAD|enumerator|NRF_SPIS_STATUS_OVERREAD = SPIS_STATUS_OVERREAD_Msk, ///< TX buffer over-read detected and prevented.
DECL|NRF_SPIS_TASK_ACQUIRE|enumerator|NRF_SPIS_TASK_ACQUIRE = offsetof(NRF_SPIS_Type, TASKS_ACQUIRE), ///< Acquire SPI semaphore.
DECL|NRF_SPIS_TASK_RELEASE|enumerator|NRF_SPIS_TASK_RELEASE = offsetof(NRF_SPIS_Type, TASKS_RELEASE), ///< Release SPI semaphore, enabling the SPI slave to acquire it.
DECL|nrf_spis_bit_order_t|typedef|} nrf_spis_bit_order_t;
DECL|nrf_spis_configure|function|__STATIC_INLINE void nrf_spis_configure(NRF_SPIS_Type * p_reg, nrf_spis_mode_t spi_mode, nrf_spis_bit_order_t spi_bit_order)
DECL|nrf_spis_def_set|function|__STATIC_INLINE void nrf_spis_def_set(NRF_SPIS_Type * p_reg, uint8_t def)
DECL|nrf_spis_disable|function|__STATIC_INLINE void nrf_spis_disable(NRF_SPIS_Type * p_reg)
DECL|nrf_spis_enable|function|__STATIC_INLINE void nrf_spis_enable(NRF_SPIS_Type * p_reg)
DECL|nrf_spis_event_address_get|function|__STATIC_INLINE uint32_t nrf_spis_event_address_get(NRF_SPIS_Type const * p_reg, nrf_spis_event_t spis_event)
DECL|nrf_spis_event_check|function|__STATIC_INLINE bool nrf_spis_event_check(NRF_SPIS_Type const * p_reg, nrf_spis_event_t spis_event)
DECL|nrf_spis_event_clear|function|__STATIC_INLINE void nrf_spis_event_clear(NRF_SPIS_Type * p_reg, nrf_spis_event_t spis_event)
DECL|nrf_spis_event_t|typedef|} nrf_spis_event_t;
DECL|nrf_spis_int_disable|function|__STATIC_INLINE void nrf_spis_int_disable(NRF_SPIS_Type * p_reg, uint32_t spis_int_mask)
DECL|nrf_spis_int_enable_check|function|__STATIC_INLINE bool nrf_spis_int_enable_check(NRF_SPIS_Type const * p_reg, nrf_spis_int_mask_t spis_int)
DECL|nrf_spis_int_enable|function|__STATIC_INLINE void nrf_spis_int_enable(NRF_SPIS_Type * p_reg, uint32_t spis_int_mask)
DECL|nrf_spis_int_mask_t|typedef|} nrf_spis_int_mask_t;
DECL|nrf_spis_mode_t|typedef|} nrf_spis_mode_t;
DECL|nrf_spis_orc_set|function|__STATIC_INLINE void nrf_spis_orc_set(NRF_SPIS_Type * p_reg, uint8_t orc)
DECL|nrf_spis_pins_set|function|__STATIC_INLINE void nrf_spis_pins_set(NRF_SPIS_Type * p_reg, uint32_t sck_pin, uint32_t mosi_pin, uint32_t miso_pin, uint32_t csn_pin)
DECL|nrf_spis_rx_amount_get|function|__STATIC_INLINE size_t nrf_spis_rx_amount_get(NRF_SPIS_Type const * p_reg)
DECL|nrf_spis_rx_buffer_set|function|__STATIC_INLINE void nrf_spis_rx_buffer_set(NRF_SPIS_Type * p_reg, uint8_t * p_buffer, size_t length)
DECL|nrf_spis_semaphore_status_get|function|__STATIC_INLINE nrf_spis_semstat_t nrf_spis_semaphore_status_get(NRF_SPIS_Type * p_reg)
DECL|nrf_spis_semstat_t|typedef|} nrf_spis_semstat_t;
DECL|nrf_spis_short_mask_t|typedef|} nrf_spis_short_mask_t;
DECL|nrf_spis_shorts_disable|function|__STATIC_INLINE void nrf_spis_shorts_disable(NRF_SPIS_Type * p_reg, uint32_t spis_shorts_mask)
DECL|nrf_spis_shorts_enable|function|__STATIC_INLINE void nrf_spis_shorts_enable(NRF_SPIS_Type * p_reg, uint32_t spis_shorts_mask)
DECL|nrf_spis_status_get|function|__STATIC_INLINE nrf_spis_status_mask_t nrf_spis_status_get(NRF_SPIS_Type * p_reg)
DECL|nrf_spis_status_mask_t|typedef|} nrf_spis_status_mask_t;
DECL|nrf_spis_task_address_get|function|__STATIC_INLINE uint32_t nrf_spis_task_address_get(NRF_SPIS_Type const * p_reg, nrf_spis_task_t spis_task)
DECL|nrf_spis_task_trigger|function|__STATIC_INLINE void nrf_spis_task_trigger(NRF_SPIS_Type * p_reg, nrf_spis_task_t spis_task)
DECL|nrf_spis_task_t|typedef|} nrf_spis_task_t;
DECL|nrf_spis_tx_amount_get|function|__STATIC_INLINE size_t nrf_spis_tx_amount_get(NRF_SPIS_Type const * p_reg)
DECL|nrf_spis_tx_buffer_set|function|__STATIC_INLINE void nrf_spis_tx_buffer_set(NRF_SPIS_Type * p_reg, uint8_t const * p_buffer, size_t length)
