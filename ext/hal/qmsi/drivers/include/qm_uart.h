DECL|QM_UART_IDLE|enumerator|QM_UART_IDLE = 0, /**< IDLE. */
DECL|QM_UART_LC_5E1_5|enumerator|QM_UART_LC_5E1_5 = 0x1c, /**< 5 data bits, even par., 1.5 stop bits. */
DECL|QM_UART_LC_5E1|enumerator|QM_UART_LC_5E1 = 0x18, /**< 5 data bits, even parity, 1 stop bit. */
DECL|QM_UART_LC_5N1_5|enumerator|QM_UART_LC_5N1_5 = 0x04, /**< 5 data bits, no parity, 1.5 stop bits. */
DECL|QM_UART_LC_5N1|enumerator|QM_UART_LC_5N1 = 0x00, /**< 5 data bits, no parity, 1 stop bit. */
DECL|QM_UART_LC_5O1_5|enumerator|QM_UART_LC_5O1_5 = 0x0c, /**< 5 data bits, odd parity, 1.5 stop bits. */
DECL|QM_UART_LC_5O1|enumerator|QM_UART_LC_5O1 = 0x08, /**< 5 data bits, odd parity, 1 stop bit. */
DECL|QM_UART_LC_6E1|enumerator|QM_UART_LC_6E1 = 0x19, /**< 6 data bits, even parity, 1 stop bit. */
DECL|QM_UART_LC_6E2|enumerator|QM_UART_LC_6E2 = 0x1d, /**< 6 data bits, even parity, 2 stop bits. */
DECL|QM_UART_LC_6N1|enumerator|QM_UART_LC_6N1 = 0x01, /**< 6 data bits, no parity, 1 stop bit. */
DECL|QM_UART_LC_6N2|enumerator|QM_UART_LC_6N2 = 0x05, /**< 6 data bits, no parity, 2 stop bits. */
DECL|QM_UART_LC_6O1|enumerator|QM_UART_LC_6O1 = 0x09, /**< 6 data bits, odd parity, 1 stop bit. */
DECL|QM_UART_LC_6O2|enumerator|QM_UART_LC_6O2 = 0x0d, /**< 6 data bits, odd parity, 2 stop bits. */
DECL|QM_UART_LC_7E1|enumerator|QM_UART_LC_7E1 = 0x1a, /**< 7 data bits, even parity, 1 stop bit. */
DECL|QM_UART_LC_7E2|enumerator|QM_UART_LC_7E2 = 0x1e, /**< 7 data bits, even parity, 2 stop bits. */
DECL|QM_UART_LC_7N1|enumerator|QM_UART_LC_7N1 = 0x02, /**< 7 data bits, no parity, 1 stop bit. */
DECL|QM_UART_LC_7N2|enumerator|QM_UART_LC_7N2 = 0x06, /**< 7 data bits, no parity, 2 stop bits. */
DECL|QM_UART_LC_7O1|enumerator|QM_UART_LC_7O1 = 0x0a, /**< 7 data bits, odd parity, 1 stop bit. */
DECL|QM_UART_LC_7O2|enumerator|QM_UART_LC_7O2 = 0x0e, /**< 7 data bits, odd parity, 2 stop bits. */
DECL|QM_UART_LC_8E1|enumerator|QM_UART_LC_8E1 = 0x1b, /**< 8 data bits, even parity, 1 stop bit. */
DECL|QM_UART_LC_8E2|enumerator|QM_UART_LC_8E2 = 0x1f, /**< 8 data bits, even parity, 2 stop bits. */
DECL|QM_UART_LC_8N1|enumerator|QM_UART_LC_8N1 = 0x03, /**< 8 data bits, no parity, 1 stop bit. */
DECL|QM_UART_LC_8N2|enumerator|QM_UART_LC_8N2 = 0x07, /**< 8 data bits, no parity, 2 stop bits. */
DECL|QM_UART_LC_8O1|enumerator|QM_UART_LC_8O1 = 0x0b, /**< 8 data bits, odd parity, 1 stop bit. */
DECL|QM_UART_LC_8O2|enumerator|QM_UART_LC_8O2 = 0x0f /**< 8 data bits, odd parity, 2 stop bits. */
DECL|QM_UART_RX_BI|enumerator|QM_UART_RX_BI = BIT(4), /**< Break interrupt. */
DECL|QM_UART_RX_BUSY|enumerator|QM_UART_RX_BUSY = BIT(6), /**< RX Busy flag. */
DECL|QM_UART_RX_FE|enumerator|QM_UART_RX_FE = BIT(3), /**< Framing error. */
DECL|QM_UART_RX_NEMPTY|enumerator|QM_UART_RX_NEMPTY = BIT(8), /**< RX FIFO not empty. */
DECL|QM_UART_RX_OE|enumerator|QM_UART_RX_OE = BIT(1), /**< Receiver overrun. */
DECL|QM_UART_RX_PE|enumerator|QM_UART_RX_PE = BIT(2), /**< Parity error. */
DECL|QM_UART_RX_WM_HALF|enumerator|QM_UART_RX_WM_HALF, /* FIFO 1/2 full */
DECL|QM_UART_RX_WM_ONEBYTE|enumerator|QM_UART_RX_WM_ONEBYTE = 0, /* 1 character in the FIFO */
DECL|QM_UART_RX_WM_QUARTER|enumerator|QM_UART_RX_WM_QUARTER, /* FIFO 1/4 full */
DECL|QM_UART_RX_WM_TWOLESS|enumerator|QM_UART_RX_WM_TWOLESS, /* FIFO 2 less than full */
DECL|QM_UART_TX_BUSY|enumerator|QM_UART_TX_BUSY = BIT(5), /**< TX Busy flag. */
DECL|QM_UART_TX_NFULL|enumerator|QM_UART_TX_NFULL = BIT(7), /**< TX FIFO not full. */
DECL|QM_UART_TX_WM_EMPTY|enumerator|QM_UART_TX_WM_EMPTY = 0, /* FIFO empty */
DECL|QM_UART_TX_WM_HALF|enumerator|QM_UART_TX_WM_HALF, /* FIFO 1/2 full */
DECL|QM_UART_TX_WM_QUARTER|enumerator|QM_UART_TX_WM_QUARTER, /* FIFO 1/4 full */
DECL|QM_UART_TX_WM_TWOCHAR|enumerator|QM_UART_TX_WM_TWOCHAR, /* 2 characters in the FIFO */
DECL|__QM_UART_H__|macro|__QM_UART_H__
DECL|baud_divisor|member|uint32_t baud_divisor; /**< Baud Divisor. */
DECL|callback_data|member|void *callback_data; /**< Callback identifier. */
DECL|callback|member|void (*callback)(void *data, int error, qm_uart_status_t status,
DECL|data_len|member|uint32_t data_len; /**< Number of bytes to transfer. */
DECL|data|member|uint8_t *data; /**< Pre-allocated write or read buffer. */
DECL|hw_fc|member|bool hw_fc; /**< Hardware Automatic Flow Control. */
DECL|line_control|member|qm_uart_lc_t line_control; /**< Line control (enum). */
DECL|qm_uart_config_t|typedef|} qm_uart_config_t;
DECL|qm_uart_lc_t|typedef|} qm_uart_lc_t;
DECL|qm_uart_rx_water_mark_t|typedef|} qm_uart_rx_water_mark_t;
DECL|qm_uart_status_t|typedef|} qm_uart_status_t;
DECL|qm_uart_transfer_t|typedef|} qm_uart_transfer_t;
DECL|qm_uart_tx_water_mark_t|typedef|} qm_uart_tx_water_mark_t;
DECL|rx_water_mark|member|qm_uart_rx_water_mark_t rx_water_mark; /* UART Rx FIFO Water Mark */
DECL|tx_water_mark|member|qm_uart_tx_water_mark_t tx_water_mark; /* UART Tx FIFO Water Mark */
