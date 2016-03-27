DECL|QM_UART_CFG_BAUD_DLF_MASK|macro|QM_UART_CFG_BAUD_DLF_MASK
DECL|QM_UART_CFG_BAUD_DLF_OFFS|macro|QM_UART_CFG_BAUD_DLF_OFFS
DECL|QM_UART_CFG_BAUD_DLF_UNPACK|macro|QM_UART_CFG_BAUD_DLF_UNPACK
DECL|QM_UART_CFG_BAUD_DLH_MASK|macro|QM_UART_CFG_BAUD_DLH_MASK
DECL|QM_UART_CFG_BAUD_DLH_OFFS|macro|QM_UART_CFG_BAUD_DLH_OFFS
DECL|QM_UART_CFG_BAUD_DLH_UNPACK|macro|QM_UART_CFG_BAUD_DLH_UNPACK
DECL|QM_UART_CFG_BAUD_DLL_MASK|macro|QM_UART_CFG_BAUD_DLL_MASK
DECL|QM_UART_CFG_BAUD_DLL_OFFS|macro|QM_UART_CFG_BAUD_DLL_OFFS
DECL|QM_UART_CFG_BAUD_DLL_UNPACK|macro|QM_UART_CFG_BAUD_DLL_UNPACK
DECL|QM_UART_CFG_BAUD_DL_PACK|macro|QM_UART_CFG_BAUD_DL_PACK
DECL|QM_UART_EINVAL|enumerator|QM_UART_EINVAL = BIT(31), /* Invalid input parameter */
DECL|QM_UART_FCR_FIFOE|macro|QM_UART_FCR_FIFOE
DECL|QM_UART_FCR_RFIFOR|macro|QM_UART_FCR_RFIFOR
DECL|QM_UART_FCR_XFIFOR|macro|QM_UART_FCR_XFIFOR
DECL|QM_UART_FIFO_DEPTH|macro|QM_UART_FIFO_DEPTH
DECL|QM_UART_FIFO_HALF_DEPTH|macro|QM_UART_FIFO_HALF_DEPTH
DECL|QM_UART_IDLE|enumerator|QM_UART_IDLE = 0,
DECL|QM_UART_IER_ERBFI|macro|QM_UART_IER_ERBFI
DECL|QM_UART_IER_ETBEI|macro|QM_UART_IER_ETBEI
DECL|QM_UART_IER_PTIME|macro|QM_UART_IER_PTIME
DECL|QM_UART_IIR_IID_MASK|macro|QM_UART_IIR_IID_MASK
DECL|QM_UART_IIR_THR_EMPTY|macro|QM_UART_IIR_THR_EMPTY
DECL|QM_UART_LCR_DLAB|macro|QM_UART_LCR_DLAB
DECL|QM_UART_LC_5E1_5|enumerator|QM_UART_LC_5E1_5 = 0x1c, /**< 5 data bits, even parity, 1.5 stop bits */
DECL|QM_UART_LC_5E1|enumerator|QM_UART_LC_5E1 = 0x18, /**< 5 data bits, even parity, 1 stop bit */
DECL|QM_UART_LC_5N1_5|enumerator|QM_UART_LC_5N1_5 = 0x04, /**< 5 data bits, no parity, 1.5 stop bits */
DECL|QM_UART_LC_5N1|enumerator|QM_UART_LC_5N1 = 0x00, /**< 5 data bits, no parity, 1 stop bit */
DECL|QM_UART_LC_5O1_5|enumerator|QM_UART_LC_5O1_5 = 0x0c, /**< 5 data bits, odd parity, 1.5 stop bits */
DECL|QM_UART_LC_5O1|enumerator|QM_UART_LC_5O1 = 0x08, /**< 5 data bits, odd parity, 1 stop bit */
DECL|QM_UART_LC_6E1|enumerator|QM_UART_LC_6E1 = 0x19, /**< 6 data bits, even parity, 1 stop bit */
DECL|QM_UART_LC_6E2|enumerator|QM_UART_LC_6E2 = 0x1d, /**< 6 data bits, even parity, 2 stop bits */
DECL|QM_UART_LC_6N1|enumerator|QM_UART_LC_6N1 = 0x01, /**< 6 data bits, no parity, 1 stop bit */
DECL|QM_UART_LC_6N2|enumerator|QM_UART_LC_6N2 = 0x05, /**< 6 data bits, no parity, 2 stop bits */
DECL|QM_UART_LC_6O1|enumerator|QM_UART_LC_6O1 = 0x09, /**< 6 data bits, odd parity, 1 stop bit */
DECL|QM_UART_LC_6O2|enumerator|QM_UART_LC_6O2 = 0x0d, /**< 6 data bits, odd parity, 2 stop bits */
DECL|QM_UART_LC_7E1|enumerator|QM_UART_LC_7E1 = 0x1a, /**< 7 data bits, even parity, 1 stop bit */
DECL|QM_UART_LC_7E2|enumerator|QM_UART_LC_7E2 = 0x1e, /**< 7 data bits, even parity, 2 stop bits */
DECL|QM_UART_LC_7N1|enumerator|QM_UART_LC_7N1 = 0x02, /**< 7 data bits, no parity, 1 stop bit */
DECL|QM_UART_LC_7N2|enumerator|QM_UART_LC_7N2 = 0x06, /**< 7 data bits, no parity, 2 stop bits */
DECL|QM_UART_LC_7O1|enumerator|QM_UART_LC_7O1 = 0x0a, /**< 7 data bits, odd parity, 1 stop bit */
DECL|QM_UART_LC_7O2|enumerator|QM_UART_LC_7O2 = 0x0e, /**< 7 data bits, odd parity, 2 stop bits */
DECL|QM_UART_LC_8E1|enumerator|QM_UART_LC_8E1 = 0x1b, /**< 8 data bits, even parity, 1 stop bit */
DECL|QM_UART_LC_8E2|enumerator|QM_UART_LC_8E2 = 0x1f, /**< 8 data bits, even parity, 2 stop bits */
DECL|QM_UART_LC_8N1|enumerator|QM_UART_LC_8N1 = 0x03, /**< 8 data bits, no parity, 1 stop bit */
DECL|QM_UART_LC_8N2|enumerator|QM_UART_LC_8N2 = 0x07, /**< 8 data bits, no parity, 2 stop bits */
DECL|QM_UART_LC_8O1|enumerator|QM_UART_LC_8O1 = 0x0b, /**< 8 data bits, odd parity, 1 stop bit */
DECL|QM_UART_LC_8O2|enumerator|QM_UART_LC_8O2 = 0x0f /**< 8 data bits, odd parity, 2 stop bits */
DECL|QM_UART_LSR_BI|macro|QM_UART_LSR_BI
DECL|QM_UART_LSR_DR|macro|QM_UART_LSR_DR
DECL|QM_UART_LSR_ERROR_BITS|macro|QM_UART_LSR_ERROR_BITS
DECL|QM_UART_LSR_FE|macro|QM_UART_LSR_FE
DECL|QM_UART_LSR_OE|macro|QM_UART_LSR_OE
DECL|QM_UART_LSR_PE|macro|QM_UART_LSR_PE
DECL|QM_UART_LSR_RFE|macro|QM_UART_LSR_RFE
DECL|QM_UART_LSR_TEMT|macro|QM_UART_LSR_TEMT
DECL|QM_UART_LSR_THRE|macro|QM_UART_LSR_THRE
DECL|QM_UART_MCR_AFCE|macro|QM_UART_MCR_AFCE
DECL|QM_UART_MCR_RTS|macro|QM_UART_MCR_RTS
DECL|QM_UART_OK|enumerator|QM_UART_OK = 0,
DECL|QM_UART_RX_BI|enumerator|QM_UART_RX_BI = BIT(4), /* Break interrupt */
DECL|QM_UART_RX_BUSY|enumerator|QM_UART_RX_BUSY = BIT(6),
DECL|QM_UART_RX_FE|enumerator|QM_UART_RX_FE = BIT(3), /* Framing error */
DECL|QM_UART_RX_NEMPTY|enumerator|QM_UART_RX_NEMPTY = BIT(8), /* RX FIFO not empty */
DECL|QM_UART_RX_OE|enumerator|QM_UART_RX_OE = BIT(1), /* Receiver overrun */
DECL|QM_UART_RX_PE|enumerator|QM_UART_RX_PE = BIT(2), /* Parity error */
DECL|QM_UART_TX_BUSY|enumerator|QM_UART_TX_BUSY = BIT(5),
DECL|QM_UART_TX_NFULL|enumerator|QM_UART_TX_NFULL = BIT(7), /* TX FIFO not full */
DECL|__QM_UART_H__|macro|__QM_UART_H__
DECL|baud_divisor|member|uint32_t baud_divisor;
DECL|data_len|member|uint32_t data_len;
DECL|data|member|uint8_t *data;
DECL|err_callback|member|void (*err_callback)(uint32_t id, qm_uart_status_t status);
DECL|fin_callback|member|void (*fin_callback)(uint32_t id, uint32_t len);
DECL|hw_fc|member|bool hw_fc;
DECL|id|member|uint32_t id;
DECL|int_en|member|bool int_en;
DECL|line_control|member|qm_uart_lc_t line_control;
DECL|qm_uart_config_t|typedef|} qm_uart_config_t;
DECL|qm_uart_lc_t|typedef|} qm_uart_lc_t;
DECL|qm_uart_status_t|typedef|} qm_uart_status_t;
DECL|qm_uart_transfer_t|typedef|} qm_uart_transfer_t;
