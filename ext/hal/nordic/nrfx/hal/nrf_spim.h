DECL|NRF_SPIM_ALL_INTS_MASK|enumerator|NRF_SPIM_ALL_INTS_MASK = SPIM_INTENSET_STOPPED_Msk |
DECL|NRF_SPIM_ALL_SHORTS_MASK|enumerator|NRF_SPIM_ALL_SHORTS_MASK = SPIM_SHORTS_END_START_Msk ///< All SPIM shortcuts.
DECL|NRF_SPIM_BIT_ORDER_LSB_FIRST|enumerator|NRF_SPIM_BIT_ORDER_LSB_FIRST = SPIM_CONFIG_ORDER_LsbFirst ///< Least significant bit shifted out first.
DECL|NRF_SPIM_BIT_ORDER_MSB_FIRST|enumerator|NRF_SPIM_BIT_ORDER_MSB_FIRST = SPIM_CONFIG_ORDER_MsbFirst, ///< Most significant bit shifted out first.
DECL|NRF_SPIM_CSN_POL_HIGH|enumerator|NRF_SPIM_CSN_POL_HIGH = SPIM_CSNPOL_CSNPOL_HIGH ///< Active high (idle state low).
DECL|NRF_SPIM_CSN_POL_LOW|enumerator|NRF_SPIM_CSN_POL_LOW = SPIM_CSNPOL_CSNPOL_LOW, ///< Active low (idle state high).
DECL|NRF_SPIM_DCX_CNT_ALL_CMD|macro|NRF_SPIM_DCX_CNT_ALL_CMD
DECL|NRF_SPIM_EVENT_ENDRX|enumerator|NRF_SPIM_EVENT_ENDRX = offsetof(NRF_SPIM_Type, EVENTS_ENDRX), ///< End of RXD buffer reached.
DECL|NRF_SPIM_EVENT_ENDTX|enumerator|NRF_SPIM_EVENT_ENDTX = offsetof(NRF_SPIM_Type, EVENTS_ENDTX), ///< End of TXD buffer reached.
DECL|NRF_SPIM_EVENT_END|enumerator|NRF_SPIM_EVENT_END = offsetof(NRF_SPIM_Type, EVENTS_END), ///< End of RXD buffer and TXD buffer reached.
DECL|NRF_SPIM_EVENT_STARTED|enumerator|NRF_SPIM_EVENT_STARTED = offsetof(NRF_SPIM_Type, EVENTS_STARTED) ///< Transaction started.
DECL|NRF_SPIM_EVENT_STOPPED|enumerator|NRF_SPIM_EVENT_STOPPED = offsetof(NRF_SPIM_Type, EVENTS_STOPPED), ///< SPI transaction has stopped.
DECL|NRF_SPIM_FREQ_125K|enumerator|NRF_SPIM_FREQ_125K = SPIM_FREQUENCY_FREQUENCY_K125, ///< 125 kbps.
DECL|NRF_SPIM_FREQ_16M|enumerator|NRF_SPIM_FREQ_16M = SPIM_FREQUENCY_FREQUENCY_M16, ///< 16 Mbps.
DECL|NRF_SPIM_FREQ_1M|enumerator|NRF_SPIM_FREQ_1M = SPIM_FREQUENCY_FREQUENCY_M1, ///< 1 Mbps.
DECL|NRF_SPIM_FREQ_250K|enumerator|NRF_SPIM_FREQ_250K = SPIM_FREQUENCY_FREQUENCY_K250, ///< 250 kbps.
DECL|NRF_SPIM_FREQ_2M|enumerator|NRF_SPIM_FREQ_2M = SPIM_FREQUENCY_FREQUENCY_M2, ///< 2 Mbps.
DECL|NRF_SPIM_FREQ_32M|enumerator|NRF_SPIM_FREQ_32M = SPIM_FREQUENCY_FREQUENCY_M32 ///< 32 Mbps.
DECL|NRF_SPIM_FREQ_4M|enumerator|NRF_SPIM_FREQ_4M = SPIM_FREQUENCY_FREQUENCY_M4, ///< 4 Mbps.
DECL|NRF_SPIM_FREQ_500K|enumerator|NRF_SPIM_FREQ_500K = SPIM_FREQUENCY_FREQUENCY_K500, ///< 500 kbps.
DECL|NRF_SPIM_FREQ_8M|enumerator|NRF_SPIM_FREQ_8M = (int)SPIM_FREQUENCY_FREQUENCY_M8, ///< 8 Mbps.
DECL|NRF_SPIM_HW_CSN_PRESENT|macro|NRF_SPIM_HW_CSN_PRESENT
DECL|NRF_SPIM_H__|macro|NRF_SPIM_H__
DECL|NRF_SPIM_INT_ENDRX_MASK|enumerator|NRF_SPIM_INT_ENDRX_MASK = SPIM_INTENSET_ENDRX_Msk, ///< Interrupt on ENDRX event.
DECL|NRF_SPIM_INT_ENDTX_MASK|enumerator|NRF_SPIM_INT_ENDTX_MASK = SPIM_INTENSET_ENDTX_Msk, ///< Interrupt on ENDTX event.
DECL|NRF_SPIM_INT_END_MASK|enumerator|NRF_SPIM_INT_END_MASK = SPIM_INTENSET_END_Msk, ///< Interrupt on END event.
DECL|NRF_SPIM_INT_STARTED_MASK|enumerator|NRF_SPIM_INT_STARTED_MASK = SPIM_INTENSET_STARTED_Msk, ///< Interrupt on STARTED event.
DECL|NRF_SPIM_INT_STOPPED_MASK|enumerator|NRF_SPIM_INT_STOPPED_MASK = SPIM_INTENSET_STOPPED_Msk, ///< Interrupt on STOPPED event.
DECL|NRF_SPIM_MODE_0|enumerator|NRF_SPIM_MODE_0, ///< SCK active high, sample on leading edge of clock.
DECL|NRF_SPIM_MODE_1|enumerator|NRF_SPIM_MODE_1, ///< SCK active high, sample on trailing edge of clock.
DECL|NRF_SPIM_MODE_2|enumerator|NRF_SPIM_MODE_2, ///< SCK active low, sample on leading edge of clock.
DECL|NRF_SPIM_MODE_3|enumerator|NRF_SPIM_MODE_3 ///< SCK active low, sample on trailing edge of clock.
DECL|NRF_SPIM_PIN_NOT_CONNECTED|macro|NRF_SPIM_PIN_NOT_CONNECTED
DECL|NRF_SPIM_SHORT_END_START_MASK|enumerator|NRF_SPIM_SHORT_END_START_MASK = SPIM_SHORTS_END_START_Msk, ///< Shortcut between END event and START task.
DECL|NRF_SPIM_TASK_RESUME|enumerator|NRF_SPIM_TASK_RESUME = offsetof(NRF_SPIM_Type, TASKS_RESUME) ///< Resume SPI transaction.
DECL|NRF_SPIM_TASK_START|enumerator|NRF_SPIM_TASK_START = offsetof(NRF_SPIM_Type, TASKS_START), ///< Start SPI transaction.
DECL|NRF_SPIM_TASK_STOP|enumerator|NRF_SPIM_TASK_STOP = offsetof(NRF_SPIM_Type, TASKS_STOP), ///< Stop SPI transaction.
DECL|NRF_SPIM_TASK_SUSPEND|enumerator|NRF_SPIM_TASK_SUSPEND = offsetof(NRF_SPIM_Type, TASKS_SUSPEND), ///< Suspend SPI transaction.
DECL|nrf_spim_bit_order_t|typedef|} nrf_spim_bit_order_t;
DECL|nrf_spim_configure|function|__STATIC_INLINE void nrf_spim_configure(NRF_SPIM_Type * p_reg, nrf_spim_mode_t spi_mode, nrf_spim_bit_order_t spi_bit_order)
DECL|nrf_spim_csn_configure|function|__STATIC_INLINE void nrf_spim_csn_configure(NRF_SPIM_Type * p_reg, uint32_t pin, nrf_spim_csn_pol_t polarity, uint32_t duration)
DECL|nrf_spim_csn_pol_t|typedef|} nrf_spim_csn_pol_t;
DECL|nrf_spim_dcx_cnt_set|function|__STATIC_INLINE void nrf_spim_dcx_cnt_set(NRF_SPIM_Type * p_reg, uint32_t dcx_cnt)
DECL|nrf_spim_dcx_pin_set|function|__STATIC_INLINE void nrf_spim_dcx_pin_set(NRF_SPIM_Type * p_reg, uint32_t dcx_pin)
DECL|nrf_spim_disable|function|__STATIC_INLINE void nrf_spim_disable(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_enable|function|__STATIC_INLINE void nrf_spim_enable(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_event_address_get|function|__STATIC_INLINE uint32_t nrf_spim_event_address_get(NRF_SPIM_Type * p_reg, nrf_spim_event_t spim_event)
DECL|nrf_spim_event_check|function|__STATIC_INLINE bool nrf_spim_event_check(NRF_SPIM_Type * p_reg, nrf_spim_event_t spim_event)
DECL|nrf_spim_event_clear|function|__STATIC_INLINE void nrf_spim_event_clear(NRF_SPIM_Type * p_reg, nrf_spim_event_t spim_event)
DECL|nrf_spim_event_t|typedef|} nrf_spim_event_t;
DECL|nrf_spim_frequency_set|function|__STATIC_INLINE void nrf_spim_frequency_set(NRF_SPIM_Type * p_reg, nrf_spim_frequency_t frequency)
DECL|nrf_spim_frequency_t|typedef|} nrf_spim_frequency_t;
DECL|nrf_spim_iftiming_set|function|__STATIC_INLINE void nrf_spim_iftiming_set(NRF_SPIM_Type * p_reg, uint32_t rxdelay)
DECL|nrf_spim_int_disable|function|__STATIC_INLINE void nrf_spim_int_disable(NRF_SPIM_Type * p_reg, uint32_t spim_int_mask)
DECL|nrf_spim_int_enable_check|function|__STATIC_INLINE bool nrf_spim_int_enable_check(NRF_SPIM_Type * p_reg, nrf_spim_int_mask_t spim_int)
DECL|nrf_spim_int_enable|function|__STATIC_INLINE void nrf_spim_int_enable(NRF_SPIM_Type * p_reg, uint32_t spim_int_mask)
DECL|nrf_spim_int_mask_t|typedef|} nrf_spim_int_mask_t;
DECL|nrf_spim_mode_t|typedef|} nrf_spim_mode_t;
DECL|nrf_spim_orc_set|function|__STATIC_INLINE void nrf_spim_orc_set(NRF_SPIM_Type * p_reg, uint8_t orc)
DECL|nrf_spim_pins_set|function|__STATIC_INLINE void nrf_spim_pins_set(NRF_SPIM_Type * p_reg, uint32_t sck_pin, uint32_t mosi_pin, uint32_t miso_pin)
DECL|nrf_spim_rx_buffer_set|function|__STATIC_INLINE void nrf_spim_rx_buffer_set(NRF_SPIM_Type * p_reg, uint8_t * p_buffer, size_t length)
DECL|nrf_spim_rx_list_disable|function|__STATIC_INLINE void nrf_spim_rx_list_disable(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_rx_list_enable|function|__STATIC_INLINE void nrf_spim_rx_list_enable(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_short_mask_t|typedef|} nrf_spim_short_mask_t;
DECL|nrf_spim_shorts_disable|function|__STATIC_INLINE void nrf_spim_shorts_disable(NRF_SPIM_Type * p_reg, uint32_t spim_shorts_mask)
DECL|nrf_spim_shorts_enable|function|__STATIC_INLINE void nrf_spim_shorts_enable(NRF_SPIM_Type * p_reg, uint32_t spim_shorts_mask)
DECL|nrf_spim_shorts_get|function|__STATIC_INLINE uint32_t nrf_spim_shorts_get(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_stallstat_rx_clear|function|__STATIC_INLINE void nrf_spim_stallstat_rx_clear(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_stallstat_rx_get|function|__STATIC_INLINE bool nrf_spim_stallstat_rx_get(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_stallstat_tx_clear|function|__STATIC_INLINE void nrf_spim_stallstat_tx_clear(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_stallstat_tx_get|function|__STATIC_INLINE bool nrf_spim_stallstat_tx_get(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_task_address_get|function|__STATIC_INLINE uint32_t nrf_spim_task_address_get(NRF_SPIM_Type * p_reg, nrf_spim_task_t spim_task)
DECL|nrf_spim_task_trigger|function|__STATIC_INLINE void nrf_spim_task_trigger(NRF_SPIM_Type * p_reg, nrf_spim_task_t spim_task)
DECL|nrf_spim_task_t|typedef|} nrf_spim_task_t;
DECL|nrf_spim_tx_buffer_set|function|__STATIC_INLINE void nrf_spim_tx_buffer_set(NRF_SPIM_Type * p_reg, uint8_t const * p_buffer, size_t length)
DECL|nrf_spim_tx_list_disable|function|__STATIC_INLINE void nrf_spim_tx_list_disable(NRF_SPIM_Type * p_reg)
DECL|nrf_spim_tx_list_enable|function|__STATIC_INLINE void nrf_spim_tx_list_enable(NRF_SPIM_Type * p_reg)
