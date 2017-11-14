DECL|ALTERA_AVALON_UART_FREQ|macro|ALTERA_AVALON_UART_FREQ
DECL|ALTERA_AVALON_UART_FREQ|macro|ALTERA_AVALON_UART_FREQ
DECL|ALTERA_AVALON_UART_INIT|macro|ALTERA_AVALON_UART_INIT
DECL|ALTERA_AVALON_UART_INIT|macro|ALTERA_AVALON_UART_INIT
DECL|ALTERA_AVALON_UART_INSTANCE|macro|ALTERA_AVALON_UART_INSTANCE
DECL|ALTERA_AVALON_UART_INSTANCE|macro|ALTERA_AVALON_UART_INSTANCE
DECL|ALTERA_AVALON_UART_STATE_INIT|macro|ALTERA_AVALON_UART_STATE_INIT
DECL|ALTERA_AVALON_UART_STATE_INIT|macro|ALTERA_AVALON_UART_STATE_INIT
DECL|ALTERA_AVALON_UART_STATE_INSTANCE|macro|ALTERA_AVALON_UART_STATE_INSTANCE
DECL|ALTERA_AVALON_UART_STATE_INSTANCE|macro|ALTERA_AVALON_UART_STATE_INSTANCE
DECL|ALTERA_AVALON_UART_TERMIOS|macro|ALTERA_AVALON_UART_TERMIOS
DECL|ALTERA_AVALON_UART_TERMIOS|macro|ALTERA_AVALON_UART_TERMIOS
DECL|ALT_AVALON_UART_BUF_LEN|macro|ALT_AVALON_UART_BUF_LEN
DECL|ALT_AVALON_UART_BUF_MSK|macro|ALT_AVALON_UART_BUF_MSK
DECL|ALT_AVALON_UART_FB|macro|ALT_AVALON_UART_FB
DECL|ALT_AVALON_UART_FC|macro|ALT_AVALON_UART_FC
DECL|ALT_UART_READ_RDY|macro|ALT_UART_READ_RDY
DECL|ALT_UART_WRITE_RDY|macro|ALT_UART_WRITE_RDY
DECL|CS9|macro|CS9
DECL|__ALT_AVALON_UART_H__|macro|__ALT_AVALON_UART_H__
DECL|altera_avalon_uart_state_s|struct|typedef struct altera_avalon_uart_state_s
DECL|altera_avalon_uart_state_s|struct|typedef struct altera_avalon_uart_state_s
DECL|altera_avalon_uart_state|typedef|} altera_avalon_uart_state;
DECL|altera_avalon_uart_state|typedef|} altera_avalon_uart_state;
DECL|base|member|unsigned int base;
DECL|base|member|void* base; /* The base address of the device */
DECL|ctrl|member|alt_u32 ctrl; /* Shadow value of the control register */
DECL|flags|member|alt_u32 flags; /* Configuation flags */
DECL|freq|member|alt_u32 freq; /* Current baud rate */
DECL|rx_end|member|volatile alt_u32 rx_end; /* End of the pending receive data */
DECL|rx_start|member|volatile alt_u32 rx_start; /* Start of the pending receive data */
DECL|termios|member|struct termios termios; /* Current device configuration */
DECL|tx_buf|member|volatile alt_u8 tx_buf[ALT_AVALON_UART_BUF_LEN]; /* The transmit buffer */
DECL|tx_end|member|volatile alt_u32 tx_end; /* End of the pending transmit data */
DECL|tx_start|member|volatile alt_u32 tx_start; /* Start of the pending transmit data */
