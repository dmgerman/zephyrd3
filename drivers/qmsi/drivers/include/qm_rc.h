DECL|QM_RC_EINVAL|enumerator|QM_RC_EINVAL = 22, /* Invalid argument, matches Berkeley equivalent */
DECL|QM_RC_ERROR|enumerator|QM_RC_ERROR, /* Unknown/unclassified error */
DECL|QM_RC_I2C_ARB_LOST|enumerator|QM_RC_I2C_ARB_LOST = 0x100, /* Arbitration lost */
DECL|QM_RC_I2C_NAK|enumerator|QM_RC_I2C_NAK, /* Missing acknowledge */
DECL|QM_RC_OK|enumerator|QM_RC_OK = 0,
DECL|QM_RC_SPI_RX_OE|enumerator|QM_RC_SPI_RX_OE = 0x120, /* RX Fifo Overflow error */
DECL|QM_RC_UART_RX_BI|enumerator|QM_RC_UART_RX_BI, /* Break interrupt */
DECL|QM_RC_UART_RX_FE|enumerator|QM_RC_UART_RX_FE, /* Framing error */
DECL|QM_RC_UART_RX_OE|enumerator|QM_RC_UART_RX_OE = 0x80, /* Receiver overrun */
DECL|QM_RC_UART_RX_PE|enumerator|QM_RC_UART_RX_PE, /* Parity error */
DECL|__QM_RC_H__|macro|__QM_RC_H__
DECL|qm_rc_t|typedef|} qm_rc_t;
