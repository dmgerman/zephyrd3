DECL|ZEPHYR_INCLUDE_CONSOLE_H_|macro|ZEPHYR_INCLUDE_CONSOLE_H_
DECL|rx_get|member|u16_t rx_get, rx_put;
DECL|rx_put|member|u16_t rx_get, rx_put;
DECL|rx_ringbuf_sz|member|u32_t rx_ringbuf_sz;
DECL|rx_ringbuf|member|u8_t *rx_ringbuf;
DECL|rx_sem|member|struct k_sem rx_sem;
DECL|tty_serial|struct|struct tty_serial {
DECL|tx_get|member|u16_t tx_get, tx_put;
DECL|tx_put|member|u16_t tx_get, tx_put;
DECL|tx_ringbuf_sz|member|u32_t tx_ringbuf_sz;
DECL|tx_ringbuf|member|u8_t *tx_ringbuf;
DECL|uart_dev|member|struct device *uart_dev;
