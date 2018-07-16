DECL|console_getchar|function|u8_t console_getchar(void)
DECL|console_init|function|void console_init(void)
DECL|console_putchar|function|int console_putchar(char c)
DECL|console_rxbuf|variable|console_rxbuf
DECL|console_serial|variable|console_serial
DECL|console_txbuf|variable|console_txbuf
DECL|rx_get|member|u16_t rx_get, rx_put;
DECL|rx_put|member|u16_t rx_get, rx_put;
DECL|rx_ringbuf_sz|member|u32_t rx_ringbuf_sz;
DECL|rx_ringbuf|member|u8_t *rx_ringbuf;
DECL|rx_sem|member|struct k_sem rx_sem;
DECL|tty_getchar|function|u8_t tty_getchar(struct tty_serial *tty)
DECL|tty_init|function|void tty_init(struct tty_serial *tty, struct device *uart_dev, u8_t *rxbuf, u16_t rxbuf_sz, u8_t *txbuf, u16_t txbuf_sz)
DECL|tty_irq_input_hook|function|static int tty_irq_input_hook(struct tty_serial *tty, u8_t c)
DECL|tty_putchar|function|int tty_putchar(struct tty_serial *tty, char c)
DECL|tty_serial|struct|struct tty_serial {
DECL|tty_uart_isr|function|static void tty_uart_isr(void *user_data)
DECL|tx_get|member|u16_t tx_get, tx_put;
DECL|tx_put|member|u16_t tx_get, tx_put;
DECL|tx_ringbuf_sz|member|u32_t tx_ringbuf_sz;
DECL|tx_ringbuf|member|u8_t *tx_ringbuf;
DECL|uart_dev|member|struct device *uart_dev;
