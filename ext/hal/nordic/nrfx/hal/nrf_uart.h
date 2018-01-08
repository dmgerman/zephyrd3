DECL|NRF_UART_BAUDRATE_1000000|enumerator|NRF_UART_BAUDRATE_1000000 = UART_BAUDRATE_BAUDRATE_Baud1M, /**< 1000000 baud. */
DECL|NRF_UART_BAUDRATE_115200|enumerator|NRF_UART_BAUDRATE_115200 = UART_BAUDRATE_BAUDRATE_Baud115200, /**< 115200 baud. */
DECL|NRF_UART_BAUDRATE_1200|enumerator|NRF_UART_BAUDRATE_1200 = UART_BAUDRATE_BAUDRATE_Baud1200, /**< 1200 baud. */
DECL|NRF_UART_BAUDRATE_14400|enumerator|NRF_UART_BAUDRATE_14400 = UART_BAUDRATE_BAUDRATE_Baud14400, /**< 14400 baud. */
DECL|NRF_UART_BAUDRATE_19200|enumerator|NRF_UART_BAUDRATE_19200 = UART_BAUDRATE_BAUDRATE_Baud19200, /**< 19200 baud. */
DECL|NRF_UART_BAUDRATE_230400|enumerator|NRF_UART_BAUDRATE_230400 = UART_BAUDRATE_BAUDRATE_Baud230400, /**< 230400 baud. */
DECL|NRF_UART_BAUDRATE_2400|enumerator|NRF_UART_BAUDRATE_2400 = UART_BAUDRATE_BAUDRATE_Baud2400, /**< 2400 baud. */
DECL|NRF_UART_BAUDRATE_250000|enumerator|NRF_UART_BAUDRATE_250000 = UART_BAUDRATE_BAUDRATE_Baud250000, /**< 250000 baud. */
DECL|NRF_UART_BAUDRATE_28800|enumerator|NRF_UART_BAUDRATE_28800 = UART_BAUDRATE_BAUDRATE_Baud28800, /**< 28800 baud. */
DECL|NRF_UART_BAUDRATE_31250|enumerator|NRF_UART_BAUDRATE_31250 = UART_BAUDRATE_BAUDRATE_Baud31250, /**< 31250 baud. */
DECL|NRF_UART_BAUDRATE_38400|enumerator|NRF_UART_BAUDRATE_38400 = UART_BAUDRATE_BAUDRATE_Baud38400, /**< 38400 baud. */
DECL|NRF_UART_BAUDRATE_460800|enumerator|NRF_UART_BAUDRATE_460800 = UART_BAUDRATE_BAUDRATE_Baud460800, /**< 460800 baud. */
DECL|NRF_UART_BAUDRATE_4800|enumerator|NRF_UART_BAUDRATE_4800 = UART_BAUDRATE_BAUDRATE_Baud4800, /**< 4800 baud. */
DECL|NRF_UART_BAUDRATE_56000|enumerator|NRF_UART_BAUDRATE_56000 = UART_BAUDRATE_BAUDRATE_Baud56000, /**< 56000 baud. */
DECL|NRF_UART_BAUDRATE_57600|enumerator|NRF_UART_BAUDRATE_57600 = UART_BAUDRATE_BAUDRATE_Baud57600, /**< 57600 baud. */
DECL|NRF_UART_BAUDRATE_76800|enumerator|NRF_UART_BAUDRATE_76800 = UART_BAUDRATE_BAUDRATE_Baud76800, /**< 76800 baud. */
DECL|NRF_UART_BAUDRATE_921600|enumerator|NRF_UART_BAUDRATE_921600 = UART_BAUDRATE_BAUDRATE_Baud921600, /**< 921600 baud. */
DECL|NRF_UART_BAUDRATE_9600|enumerator|NRF_UART_BAUDRATE_9600 = UART_BAUDRATE_BAUDRATE_Baud9600, /**< 9600 baud. */
DECL|NRF_UART_ERROR_BREAK_MASK|enumerator|NRF_UART_ERROR_BREAK_MASK = UART_ERRORSRC_BREAK_Msk, /**< Break error. */
DECL|NRF_UART_ERROR_FRAMING_MASK|enumerator|NRF_UART_ERROR_FRAMING_MASK = UART_ERRORSRC_FRAMING_Msk, /**< Framing error. */
DECL|NRF_UART_ERROR_OVERRUN_MASK|enumerator|NRF_UART_ERROR_OVERRUN_MASK = UART_ERRORSRC_OVERRUN_Msk, /**< Overrun error. */
DECL|NRF_UART_ERROR_PARITY_MASK|enumerator|NRF_UART_ERROR_PARITY_MASK = UART_ERRORSRC_PARITY_Msk, /**< Parity error. */
DECL|NRF_UART_EVENT_CTS|enumerator|NRF_UART_EVENT_CTS = offsetof(NRF_UART_Type, EVENTS_CTS), /**< Event from CTS line activation. */
DECL|NRF_UART_EVENT_ERROR|enumerator|NRF_UART_EVENT_ERROR = offsetof(NRF_UART_Type, EVENTS_ERROR), /**< Event from error detection. */
DECL|NRF_UART_EVENT_NCTS|enumerator|NRF_UART_EVENT_NCTS = offsetof(NRF_UART_Type, EVENTS_NCTS), /**< Event from CTS line deactivation. */
DECL|NRF_UART_EVENT_RXDRDY|enumerator|NRF_UART_EVENT_RXDRDY = offsetof(NRF_UART_Type, EVENTS_RXDRDY),/**< Event from data ready in RXD. */
DECL|NRF_UART_EVENT_RXTO|enumerator|NRF_UART_EVENT_RXTO = offsetof(NRF_UART_Type, EVENTS_RXTO) /**< Event from receiver timeout. */
DECL|NRF_UART_EVENT_TXDRDY|enumerator|NRF_UART_EVENT_TXDRDY = offsetof(NRF_UART_Type, EVENTS_TXDRDY),/**< Event from data sent from TXD. */
DECL|NRF_UART_HWFC_DISABLED|enumerator|NRF_UART_HWFC_DISABLED = UART_CONFIG_HWFC_Disabled, /**< HW flow control disabled. */
DECL|NRF_UART_HWFC_ENABLED|enumerator|NRF_UART_HWFC_ENABLED = UART_CONFIG_HWFC_Enabled, /**< HW flow control enabled. */
DECL|NRF_UART_H__|macro|NRF_UART_H__
DECL|NRF_UART_INT_MASK_CTS|enumerator|NRF_UART_INT_MASK_CTS = UART_INTENCLR_CTS_Msk, /**< CTS line activation interrupt. */
DECL|NRF_UART_INT_MASK_ERROR|enumerator|NRF_UART_INT_MASK_ERROR = UART_INTENCLR_ERROR_Msk, /**< Error detection interrupt. */
DECL|NRF_UART_INT_MASK_NCTS|enumerator|NRF_UART_INT_MASK_NCTS = UART_INTENCLR_NCTS_Msk, /**< CTS line deactivation interrupt. */
DECL|NRF_UART_INT_MASK_RXDRDY|enumerator|NRF_UART_INT_MASK_RXDRDY = UART_INTENCLR_RXDRDY_Msk, /**< Data ready in RXD interrupt. */
DECL|NRF_UART_INT_MASK_RXTO|enumerator|NRF_UART_INT_MASK_RXTO = UART_INTENCLR_RXTO_Msk /**< Receiver timeout interrupt. */
DECL|NRF_UART_INT_MASK_TXDRDY|enumerator|NRF_UART_INT_MASK_TXDRDY = UART_INTENCLR_TXDRDY_Msk, /**< Data sent from TXD interrupt. */
DECL|NRF_UART_PARITY_EXCLUDED|enumerator|NRF_UART_PARITY_EXCLUDED = UART_CONFIG_PARITY_Excluded << UART_CONFIG_PARITY_Pos, /**< Parity excluded. */
DECL|NRF_UART_PARITY_INCLUDED|enumerator|NRF_UART_PARITY_INCLUDED = UART_CONFIG_PARITY_Included << UART_CONFIG_PARITY_Pos, /**< Parity included. */
DECL|NRF_UART_PSEL_DISCONNECTED|macro|NRF_UART_PSEL_DISCONNECTED
DECL|NRF_UART_TASK_STARTRX|enumerator|NRF_UART_TASK_STARTRX = offsetof(NRF_UART_Type, TASKS_STARTRX), /**< Task for starting reception. */
DECL|NRF_UART_TASK_STARTTX|enumerator|NRF_UART_TASK_STARTTX = offsetof(NRF_UART_Type, TASKS_STARTTX), /**< Task for starting transmission. */
DECL|NRF_UART_TASK_STOPRX|enumerator|NRF_UART_TASK_STOPRX = offsetof(NRF_UART_Type, TASKS_STOPRX), /**< Task for stopping reception. */
DECL|NRF_UART_TASK_STOPTX|enumerator|NRF_UART_TASK_STOPTX = offsetof(NRF_UART_Type, TASKS_STOPTX), /**< Task for stopping transmission. */
DECL|NRF_UART_TASK_SUSPEND|enumerator|NRF_UART_TASK_SUSPEND = offsetof(NRF_UART_Type, TASKS_SUSPEND), /**< Task for suspending UART. */
DECL|nrf_uart_baudrate_set|function|__STATIC_INLINE void nrf_uart_baudrate_set(NRF_UART_Type * p_reg, nrf_uart_baudrate_t baudrate)
DECL|nrf_uart_baudrate_t|typedef|} nrf_uart_baudrate_t;
DECL|nrf_uart_configure|function|__STATIC_INLINE void nrf_uart_configure(NRF_UART_Type * p_reg, nrf_uart_parity_t parity, nrf_uart_hwfc_t hwfc)
DECL|nrf_uart_cts_pin_get|function|__STATIC_INLINE uint32_t nrf_uart_cts_pin_get(NRF_UART_Type * p_reg)
DECL|nrf_uart_disable|function|__STATIC_INLINE void nrf_uart_disable(NRF_UART_Type * p_reg)
DECL|nrf_uart_enable|function|__STATIC_INLINE void nrf_uart_enable(NRF_UART_Type * p_reg)
DECL|nrf_uart_error_mask_t|typedef|} nrf_uart_error_mask_t;
DECL|nrf_uart_errorsrc_get_and_clear|function|__STATIC_INLINE uint32_t nrf_uart_errorsrc_get_and_clear(NRF_UART_Type * p_reg)
DECL|nrf_uart_event_address_get|function|__STATIC_INLINE uint32_t nrf_uart_event_address_get(NRF_UART_Type * p_reg, nrf_uart_event_t event)
DECL|nrf_uart_event_check|function|__STATIC_INLINE bool nrf_uart_event_check(NRF_UART_Type * p_reg, nrf_uart_event_t event)
DECL|nrf_uart_event_clear|function|__STATIC_INLINE void nrf_uart_event_clear(NRF_UART_Type * p_reg, nrf_uart_event_t event)
DECL|nrf_uart_event_t|typedef|} nrf_uart_event_t;
DECL|nrf_uart_hwfc_pins_disconnect|function|__STATIC_INLINE void nrf_uart_hwfc_pins_disconnect(NRF_UART_Type * p_reg)
DECL|nrf_uart_hwfc_pins_set|function|__STATIC_INLINE void nrf_uart_hwfc_pins_set(NRF_UART_Type * p_reg, uint32_t pselrts, uint32_t pselcts)
DECL|nrf_uart_hwfc_t|typedef|} nrf_uart_hwfc_t;
DECL|nrf_uart_int_disable|function|__STATIC_INLINE void nrf_uart_int_disable(NRF_UART_Type * p_reg, uint32_t int_mask)
DECL|nrf_uart_int_enable_check|function|__STATIC_INLINE bool nrf_uart_int_enable_check(NRF_UART_Type * p_reg, uint32_t int_mask)
DECL|nrf_uart_int_enable|function|__STATIC_INLINE void nrf_uart_int_enable(NRF_UART_Type * p_reg, uint32_t int_mask)
DECL|nrf_uart_int_mask_t|typedef|} nrf_uart_int_mask_t;
DECL|nrf_uart_parity_t|typedef|} nrf_uart_parity_t;
DECL|nrf_uart_rts_pin_get|function|__STATIC_INLINE uint32_t nrf_uart_rts_pin_get(NRF_UART_Type * p_reg)
DECL|nrf_uart_rx_pin_get|function|__STATIC_INLINE uint32_t nrf_uart_rx_pin_get(NRF_UART_Type * p_reg)
DECL|nrf_uart_rxd_get|function|__STATIC_INLINE uint8_t nrf_uart_rxd_get(NRF_UART_Type * p_reg)
DECL|nrf_uart_task_address_get|function|__STATIC_INLINE uint32_t nrf_uart_task_address_get(NRF_UART_Type * p_reg, nrf_uart_task_t task)
DECL|nrf_uart_task_trigger|function|__STATIC_INLINE void nrf_uart_task_trigger(NRF_UART_Type * p_reg, nrf_uart_task_t task)
DECL|nrf_uart_task_t|typedef|} nrf_uart_task_t;
DECL|nrf_uart_tx_pin_get|function|__STATIC_INLINE uint32_t nrf_uart_tx_pin_get(NRF_UART_Type * p_reg)
DECL|nrf_uart_txd_set|function|__STATIC_INLINE void nrf_uart_txd_set(NRF_UART_Type * p_reg, uint8_t txd)
DECL|nrf_uart_txrx_pins_disconnect|function|__STATIC_INLINE void nrf_uart_txrx_pins_disconnect(NRF_UART_Type * p_reg)
DECL|nrf_uart_txrx_pins_set|function|__STATIC_INLINE void nrf_uart_txrx_pins_set(NRF_UART_Type * p_reg, uint32_t pseltxd, uint32_t pselrxd)
