DECL|LINE_CTRL_BAUD_RATE|macro|LINE_CTRL_BAUD_RATE
DECL|LINE_CTRL_DCD|macro|LINE_CTRL_DCD
DECL|LINE_CTRL_DSR|macro|LINE_CTRL_DSR
DECL|LINE_CTRL_DTR|macro|LINE_CTRL_DTR
DECL|LINE_CTRL_RTS|macro|LINE_CTRL_RTS
DECL|UART_ERROR_BREAK|macro|UART_ERROR_BREAK
DECL|UART_ERROR_FRAMING|macro|UART_ERROR_FRAMING
DECL|UART_ERROR_OVERRUN|macro|UART_ERROR_OVERRUN
DECL|UART_ERROR_PARITY|macro|UART_ERROR_PARITY
DECL|UART_OPTION_AFCE|macro|UART_OPTION_AFCE
DECL|ZEPHYR_INCLUDE_UART_H_|macro|ZEPHYR_INCLUDE_UART_H_
DECL|_impl_uart_drv_cmd|function|static inline int _impl_uart_drv_cmd(struct device *dev, u32_t cmd, u32_t p)
DECL|_impl_uart_err_check|function|static inline int _impl_uart_err_check(struct device *dev)
DECL|_impl_uart_irq_err_disable|function|static inline void _impl_uart_irq_err_disable(struct device *dev)
DECL|_impl_uart_irq_err_enable|function|static inline void _impl_uart_irq_err_enable(struct device *dev)
DECL|_impl_uart_irq_is_pending|function|static inline int _impl_uart_irq_is_pending(struct device *dev)
DECL|_impl_uart_irq_rx_disable|function|static inline void _impl_uart_irq_rx_disable(struct device *dev)
DECL|_impl_uart_irq_rx_enable|function|static inline void _impl_uart_irq_rx_enable(struct device *dev)
DECL|_impl_uart_irq_tx_disable|function|static inline void _impl_uart_irq_tx_disable(struct device *dev)
DECL|_impl_uart_irq_tx_enable|function|static inline void _impl_uart_irq_tx_enable(struct device *dev)
DECL|_impl_uart_irq_update|function|static inline int _impl_uart_irq_update(struct device *dev)
DECL|_impl_uart_line_ctrl_get|function|static inline int _impl_uart_line_ctrl_get(struct device *dev, u32_t ctrl, u32_t *val)
DECL|_impl_uart_line_ctrl_set|function|static inline int _impl_uart_line_ctrl_set(struct device *dev, u32_t ctrl, u32_t val)
DECL|_impl_uart_poll_in|function|static inline int _impl_uart_poll_in(struct device *dev, unsigned char *p_char)
DECL|_impl_uart_poll_out|function|static inline unsigned char _impl_uart_poll_out(struct device *dev,unsigned char out_char)
DECL|base|member|u8_t *base;
DECL|drv_cmd|member|int (*drv_cmd)(struct device *dev, u32_t cmd, u32_t p);
DECL|err_check|member|int (*err_check)(struct device *dev);
DECL|fifo_fill|member|int (*fifo_fill)(struct device *dev, const u8_t *tx_data, int len);
DECL|fifo_read|member|int (*fifo_read)(struct device *dev, u8_t *rx_data, const int size);
DECL|irq_callback_set|member|void (*irq_callback_set)(struct device *dev,
DECL|irq_config_func|member|uart_irq_config_func_t irq_config_func;
DECL|irq_err_disable|member|void (*irq_err_disable)(struct device *dev);
DECL|irq_err_enable|member|void (*irq_err_enable)(struct device *dev);
DECL|irq_is_pending|member|int (*irq_is_pending)(struct device *dev);
DECL|irq_rx_disable|member|void (*irq_rx_disable)(struct device *dev);
DECL|irq_rx_enable|member|void (*irq_rx_enable)(struct device *dev);
DECL|irq_rx_ready|member|int (*irq_rx_ready)(struct device *dev);
DECL|irq_tx_complete|member|int (*irq_tx_complete)(struct device *dev);
DECL|irq_tx_disable|member|void (*irq_tx_disable)(struct device *dev);
DECL|irq_tx_enable|member|void (*irq_tx_enable)(struct device *dev);
DECL|irq_tx_ready|member|int (*irq_tx_ready)(struct device *dev);
DECL|irq_update|member|int (*irq_update)(struct device *dev);
DECL|line_ctrl_get|member|int (*line_ctrl_get)(struct device *dev, u32_t ctrl, u32_t *val);
DECL|line_ctrl_set|member|int (*line_ctrl_set)(struct device *dev, u32_t ctrl, u32_t val);
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|poll_in|member|int (*poll_in)(struct device *dev, unsigned char *p_char);
DECL|poll_out|member|unsigned char (*poll_out)(struct device *dev, unsigned char out_char);
DECL|port|member|u32_t port;
DECL|regs|member|u32_t regs;
DECL|sys_clk_freq|member|u32_t sys_clk_freq;
DECL|uart_device_config|struct|struct uart_device_config {
DECL|uart_driver_api|struct|struct uart_driver_api {
DECL|uart_fifo_fill|function|static inline int uart_fifo_fill(struct device *dev, const u8_t *tx_data, int size)
DECL|uart_fifo_read|function|static inline int uart_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_irq_callback_set|function|static inline void uart_irq_callback_set(struct device *dev, uart_irq_callback_t cb)
DECL|uart_irq_callback_t|typedef|typedef void (*uart_irq_callback_t)(struct device *port);
DECL|uart_irq_callback_user_data_set|function|static inline void uart_irq_callback_user_data_set(struct device *dev, uart_irq_callback_user_data_t cb, void *user_data)
DECL|uart_irq_callback_user_data_t|typedef|typedef void (*uart_irq_callback_user_data_t)(void *user_data);
DECL|uart_irq_config_func_t|typedef|typedef void (*uart_irq_config_func_t)(struct device *port);
DECL|uart_irq_rx_ready|function|static inline int uart_irq_rx_ready(struct device *dev)
DECL|uart_irq_tx_complete|function|static inline int uart_irq_tx_complete(struct device *dev)
DECL|uart_irq_tx_empty|function|static inline int __deprecated uart_irq_tx_empty(struct device *dev)
DECL|uart_irq_tx_ready|function|static inline int uart_irq_tx_ready(struct device *dev)
