DECL|NRF_UARTE_BAUDRATE_1000000|enumerator|NRF_UARTE_BAUDRATE_1000000 = UARTE_BAUDRATE_BAUDRATE_Baud1M ///< 1000000 baud.
DECL|NRF_UARTE_BAUDRATE_115200|enumerator|NRF_UARTE_BAUDRATE_115200 = UARTE_BAUDRATE_BAUDRATE_Baud115200, ///< 115200 baud.
DECL|NRF_UARTE_BAUDRATE_1200|enumerator|NRF_UARTE_BAUDRATE_1200 = UARTE_BAUDRATE_BAUDRATE_Baud1200, ///< 1200 baud.
DECL|NRF_UARTE_BAUDRATE_14400|enumerator|NRF_UARTE_BAUDRATE_14400 = UARTE_BAUDRATE_BAUDRATE_Baud14400, ///< 14400 baud.
DECL|NRF_UARTE_BAUDRATE_19200|enumerator|NRF_UARTE_BAUDRATE_19200 = UARTE_BAUDRATE_BAUDRATE_Baud19200, ///< 19200 baud.
DECL|NRF_UARTE_BAUDRATE_230400|enumerator|NRF_UARTE_BAUDRATE_230400 = UARTE_BAUDRATE_BAUDRATE_Baud230400, ///< 230400 baud.
DECL|NRF_UARTE_BAUDRATE_2400|enumerator|NRF_UARTE_BAUDRATE_2400 = UARTE_BAUDRATE_BAUDRATE_Baud2400, ///< 2400 baud.
DECL|NRF_UARTE_BAUDRATE_250000|enumerator|NRF_UARTE_BAUDRATE_250000 = UARTE_BAUDRATE_BAUDRATE_Baud250000, ///< 250000 baud.
DECL|NRF_UARTE_BAUDRATE_28800|enumerator|NRF_UARTE_BAUDRATE_28800 = UARTE_BAUDRATE_BAUDRATE_Baud28800, ///< 28800 baud.
DECL|NRF_UARTE_BAUDRATE_31250|enumerator|NRF_UARTE_BAUDRATE_31250 = UARTE_BAUDRATE_BAUDRATE_Baud31250, ///< 31250 baud.
DECL|NRF_UARTE_BAUDRATE_38400|enumerator|NRF_UARTE_BAUDRATE_38400 = UARTE_BAUDRATE_BAUDRATE_Baud38400, ///< 38400 baud.
DECL|NRF_UARTE_BAUDRATE_460800|enumerator|NRF_UARTE_BAUDRATE_460800 = UARTE_BAUDRATE_BAUDRATE_Baud460800, ///< 460800 baud.
DECL|NRF_UARTE_BAUDRATE_4800|enumerator|NRF_UARTE_BAUDRATE_4800 = UARTE_BAUDRATE_BAUDRATE_Baud4800, ///< 4800 baud.
DECL|NRF_UARTE_BAUDRATE_56000|enumerator|NRF_UARTE_BAUDRATE_56000 = UARTE_BAUDRATE_BAUDRATE_Baud56000, ///< 56000 baud.
DECL|NRF_UARTE_BAUDRATE_57600|enumerator|NRF_UARTE_BAUDRATE_57600 = UARTE_BAUDRATE_BAUDRATE_Baud57600, ///< 57600 baud.
DECL|NRF_UARTE_BAUDRATE_76800|enumerator|NRF_UARTE_BAUDRATE_76800 = UARTE_BAUDRATE_BAUDRATE_Baud76800, ///< 76800 baud.
DECL|NRF_UARTE_BAUDRATE_921600|enumerator|NRF_UARTE_BAUDRATE_921600 = UARTE_BAUDRATE_BAUDRATE_Baud921600, ///< 921600 baud.
DECL|NRF_UARTE_BAUDRATE_9600|enumerator|NRF_UARTE_BAUDRATE_9600 = UARTE_BAUDRATE_BAUDRATE_Baud9600, ///< 9600 baud.
DECL|NRF_UARTE_ERROR_BREAK_MASK|enumerator|NRF_UARTE_ERROR_BREAK_MASK = UARTE_ERRORSRC_BREAK_Msk ///< Break error.
DECL|NRF_UARTE_ERROR_FRAMING_MASK|enumerator|NRF_UARTE_ERROR_FRAMING_MASK = UARTE_ERRORSRC_FRAMING_Msk, ///< Framing error.
DECL|NRF_UARTE_ERROR_OVERRUN_MASK|enumerator|NRF_UARTE_ERROR_OVERRUN_MASK = UARTE_ERRORSRC_OVERRUN_Msk, ///< Overrun error.
DECL|NRF_UARTE_ERROR_PARITY_MASK|enumerator|NRF_UARTE_ERROR_PARITY_MASK = UARTE_ERRORSRC_PARITY_Msk, ///< Parity error.
DECL|NRF_UARTE_EVENT_CTS|enumerator|NRF_UARTE_EVENT_CTS = offsetof(NRF_UARTE_Type, EVENTS_CTS), ///< CTS is activated.
DECL|NRF_UARTE_EVENT_ENDRX|enumerator|NRF_UARTE_EVENT_ENDRX = offsetof(NRF_UARTE_Type, EVENTS_ENDRX), ///< Receive buffer is filled up.
DECL|NRF_UARTE_EVENT_ENDTX|enumerator|NRF_UARTE_EVENT_ENDTX = offsetof(NRF_UARTE_Type, EVENTS_ENDTX), ///< Last TX byte transmitted.
DECL|NRF_UARTE_EVENT_ERROR|enumerator|NRF_UARTE_EVENT_ERROR = offsetof(NRF_UARTE_Type, EVENTS_ERROR), ///< Error detected.
DECL|NRF_UARTE_EVENT_NCTS|enumerator|NRF_UARTE_EVENT_NCTS = offsetof(NRF_UARTE_Type, EVENTS_NCTS), ///< CTS is deactivated.
DECL|NRF_UARTE_EVENT_RXDRDY|enumerator|NRF_UARTE_EVENT_RXDRDY = offsetof(NRF_UARTE_Type, EVENTS_RXDRDY), ///< Data received in RXD (but potentially not yet transferred to Data RAM).
DECL|NRF_UARTE_EVENT_RXSTARTED|enumerator|NRF_UARTE_EVENT_RXSTARTED = offsetof(NRF_UARTE_Type, EVENTS_RXSTARTED), ///< Receiver has started.
DECL|NRF_UARTE_EVENT_RXTO|enumerator|NRF_UARTE_EVENT_RXTO = offsetof(NRF_UARTE_Type, EVENTS_RXTO), ///< Receiver timeout.
DECL|NRF_UARTE_EVENT_TXDRDY|enumerator|NRF_UARTE_EVENT_TXDRDY = offsetof(NRF_UARTE_Type, EVENTS_TXDRDY), ///< Data sent from TXD.
DECL|NRF_UARTE_EVENT_TXSTARTED|enumerator|NRF_UARTE_EVENT_TXSTARTED = offsetof(NRF_UARTE_Type, EVENTS_TXSTARTED), ///< Transmitter has started.
DECL|NRF_UARTE_EVENT_TXSTOPPED|enumerator|NRF_UARTE_EVENT_TXSTOPPED = offsetof(NRF_UARTE_Type, EVENTS_TXSTOPPED) ///< Transmitted stopped.
DECL|NRF_UARTE_HWFC_DISABLED|enumerator|NRF_UARTE_HWFC_DISABLED = UARTE_CONFIG_HWFC_Disabled << UARTE_CONFIG_HWFC_Pos, ///< HW flow control disabled.
DECL|NRF_UARTE_HWFC_ENABLED|enumerator|NRF_UARTE_HWFC_ENABLED = UARTE_CONFIG_HWFC_Enabled << UARTE_CONFIG_HWFC_Pos ///< HW flow control enabled.
DECL|NRF_UARTE_H__|macro|NRF_UARTE_H__
DECL|NRF_UARTE_INT_CTS_MASK|enumerator|NRF_UARTE_INT_CTS_MASK = UARTE_INTENSET_CTS_Msk, ///< Interrupt on CTS event.
DECL|NRF_UARTE_INT_ENDRX_MASK|enumerator|NRF_UARTE_INT_ENDRX_MASK = UARTE_INTENSET_ENDRX_Msk, ///< Interrupt on ENDRX event.
DECL|NRF_UARTE_INT_ENDTX_MASK|enumerator|NRF_UARTE_INT_ENDTX_MASK = UARTE_INTENSET_ENDTX_Msk, ///< Interrupt on ENDTX event.
DECL|NRF_UARTE_INT_ERROR_MASK|enumerator|NRF_UARTE_INT_ERROR_MASK = UARTE_INTENSET_ERROR_Msk, ///< Interrupt on ERROR event.
DECL|NRF_UARTE_INT_NCTS_MASK|enumerator|NRF_UARTE_INT_NCTS_MASK = UARTE_INTENSET_NCTS_Msk, ///< Interrupt on NCTS event.
DECL|NRF_UARTE_INT_RXDRDY_MASK|enumerator|NRF_UARTE_INT_RXDRDY_MASK = UARTE_INTENSET_RXDRDY_Msk, ///< Interrupt on RXDRDY event.
DECL|NRF_UARTE_INT_RXSTARTED_MASK|enumerator|NRF_UARTE_INT_RXSTARTED_MASK = UARTE_INTENSET_RXSTARTED_Msk, ///< Interrupt on RXSTARTED event.
DECL|NRF_UARTE_INT_RXTO_MASK|enumerator|NRF_UARTE_INT_RXTO_MASK = UARTE_INTENSET_RXTO_Msk, ///< Interrupt on RXTO event.
DECL|NRF_UARTE_INT_TXDRDY_MASK|enumerator|NRF_UARTE_INT_TXDRDY_MASK = UARTE_INTENSET_TXDRDY_Msk, ///< Interrupt on TXDRDY event.
DECL|NRF_UARTE_INT_TXSTARTED_MASK|enumerator|NRF_UARTE_INT_TXSTARTED_MASK = UARTE_INTENSET_TXSTARTED_Msk, ///< Interrupt on TXSTARTED event.
DECL|NRF_UARTE_INT_TXSTOPPED_MASK|enumerator|NRF_UARTE_INT_TXSTOPPED_MASK = UARTE_INTENSET_TXSTOPPED_Msk ///< Interrupt on TXSTOPPED event.
DECL|NRF_UARTE_PARITY_EXCLUDED|enumerator|NRF_UARTE_PARITY_EXCLUDED = UARTE_CONFIG_PARITY_Excluded << UARTE_CONFIG_PARITY_Pos, ///< Parity excluded.
DECL|NRF_UARTE_PARITY_INCLUDED|enumerator|NRF_UARTE_PARITY_INCLUDED = UARTE_CONFIG_PARITY_Included << UARTE_CONFIG_PARITY_Pos ///< Parity included.
DECL|NRF_UARTE_PSEL_DISCONNECTED|macro|NRF_UARTE_PSEL_DISCONNECTED
DECL|NRF_UARTE_SHORT_ENDRX_STARTRX|enumerator|NRF_UARTE_SHORT_ENDRX_STARTRX = UARTE_SHORTS_ENDRX_STARTRX_Msk, ///< Shortcut between ENDRX event and STARTRX task.
DECL|NRF_UARTE_SHORT_ENDRX_STOPRX|enumerator|NRF_UARTE_SHORT_ENDRX_STOPRX = UARTE_SHORTS_ENDRX_STOPRX_Msk ///< Shortcut between ENDRX event and STOPRX task.
DECL|NRF_UARTE_TASK_FLUSHRX|enumerator|NRF_UARTE_TASK_FLUSHRX = offsetof(NRF_UARTE_Type, TASKS_FLUSHRX) ///< Flush RX FIFO in RX buffer.
DECL|NRF_UARTE_TASK_STARTRX|enumerator|NRF_UARTE_TASK_STARTRX = offsetof(NRF_UARTE_Type, TASKS_STARTRX), ///< Start UART receiver.
DECL|NRF_UARTE_TASK_STARTTX|enumerator|NRF_UARTE_TASK_STARTTX = offsetof(NRF_UARTE_Type, TASKS_STARTTX), ///< Start UART transmitter.
DECL|NRF_UARTE_TASK_STOPRX|enumerator|NRF_UARTE_TASK_STOPRX = offsetof(NRF_UARTE_Type, TASKS_STOPRX), ///< Stop UART receiver.
DECL|NRF_UARTE_TASK_STOPTX|enumerator|NRF_UARTE_TASK_STOPTX = offsetof(NRF_UARTE_Type, TASKS_STOPTX), ///< Stop UART transmitter.
DECL|nrf_uarte_baudrate_set|function|__STATIC_INLINE void nrf_uarte_baudrate_set(NRF_UARTE_Type * p_reg, nrf_uarte_baudrate_t baudrate)
DECL|nrf_uarte_baudrate_t|typedef|} nrf_uarte_baudrate_t;
DECL|nrf_uarte_configure|function|__STATIC_INLINE void nrf_uarte_configure(NRF_UARTE_Type * p_reg, nrf_uarte_parity_t parity, nrf_uarte_hwfc_t hwfc)
DECL|nrf_uarte_cts_pin_get|function|__STATIC_INLINE uint32_t nrf_uarte_cts_pin_get(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_disable|function|__STATIC_INLINE void nrf_uarte_disable(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_enable|function|__STATIC_INLINE void nrf_uarte_enable(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_error_mask_t|typedef|} nrf_uarte_error_mask_t;
DECL|nrf_uarte_errorsrc_get_and_clear|function|__STATIC_INLINE uint32_t nrf_uarte_errorsrc_get_and_clear(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_event_address_get|function|__STATIC_INLINE uint32_t nrf_uarte_event_address_get(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event)
DECL|nrf_uarte_event_check|function|__STATIC_INLINE bool nrf_uarte_event_check(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event)
DECL|nrf_uarte_event_clear|function|__STATIC_INLINE void nrf_uarte_event_clear(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event)
DECL|nrf_uarte_event_t|typedef|} nrf_uarte_event_t;
DECL|nrf_uarte_hwfc_pins_disconnect|function|__STATIC_INLINE void nrf_uarte_hwfc_pins_disconnect(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_hwfc_pins_set|function|__STATIC_INLINE void nrf_uarte_hwfc_pins_set(NRF_UARTE_Type * p_reg, uint32_t pselrts, uint32_t pselcts)
DECL|nrf_uarte_hwfc_t|typedef|} nrf_uarte_hwfc_t;
DECL|nrf_uarte_int_disable|function|__STATIC_INLINE void nrf_uarte_int_disable(NRF_UARTE_Type * p_reg, uint32_t int_mask)
DECL|nrf_uarte_int_enable_check|function|__STATIC_INLINE bool nrf_uarte_int_enable_check(NRF_UARTE_Type * p_reg, nrf_uarte_int_mask_t int_mask)
DECL|nrf_uarte_int_enable|function|__STATIC_INLINE void nrf_uarte_int_enable(NRF_UARTE_Type * p_reg, uint32_t int_mask)
DECL|nrf_uarte_int_mask_t|typedef|} nrf_uarte_int_mask_t;
DECL|nrf_uarte_parity_t|typedef|} nrf_uarte_parity_t;
DECL|nrf_uarte_rts_pin_get|function|__STATIC_INLINE uint32_t nrf_uarte_rts_pin_get(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_rx_amount_get|function|__STATIC_INLINE uint32_t nrf_uarte_rx_amount_get(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_rx_buffer_set|function|__STATIC_INLINE void nrf_uarte_rx_buffer_set(NRF_UARTE_Type * p_reg, uint8_t * p_buffer, size_t length)
DECL|nrf_uarte_rx_pin_get|function|__STATIC_INLINE uint32_t nrf_uarte_rx_pin_get(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_short_t|typedef|} nrf_uarte_short_t;
DECL|nrf_uarte_shorts_disable|function|__STATIC_INLINE void nrf_uarte_shorts_disable(NRF_UARTE_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_uarte_shorts_enable|function|__STATIC_INLINE void nrf_uarte_shorts_enable(NRF_UARTE_Type * p_reg, uint32_t shorts_mask)
DECL|nrf_uarte_task_address_get|function|__STATIC_INLINE uint32_t nrf_uarte_task_address_get(NRF_UARTE_Type * p_reg, nrf_uarte_task_t task)
DECL|nrf_uarte_task_trigger|function|__STATIC_INLINE void nrf_uarte_task_trigger(NRF_UARTE_Type * p_reg, nrf_uarte_task_t task)
DECL|nrf_uarte_task_t|typedef|} nrf_uarte_task_t;
DECL|nrf_uarte_tx_amount_get|function|__STATIC_INLINE uint32_t nrf_uarte_tx_amount_get(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_tx_buffer_set|function|__STATIC_INLINE void nrf_uarte_tx_buffer_set(NRF_UARTE_Type * p_reg, uint8_t const * p_buffer, size_t length)
DECL|nrf_uarte_tx_pin_get|function|__STATIC_INLINE uint32_t nrf_uarte_tx_pin_get(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_txrx_pins_disconnect|function|__STATIC_INLINE void nrf_uarte_txrx_pins_disconnect(NRF_UARTE_Type * p_reg)
DECL|nrf_uarte_txrx_pins_set|function|__STATIC_INLINE void nrf_uarte_txrx_pins_set(NRF_UARTE_Type * p_reg, uint32_t pseltxd, uint32_t pselrxd)
