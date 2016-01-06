DECL|LINE_CTRL_BAUD_RATE|macro|LINE_CTRL_BAUD_RATE
DECL|LINE_CTRL_DTR|macro|LINE_CTRL_DTR
DECL|LINE_CTRL_RTS|macro|LINE_CTRL_RTS
DECL|UART_OPTION_AFCE|macro|UART_OPTION_AFCE
DECL|__INCuarth|macro|__INCuarth
DECL|base|member|uint8_t *base;
DECL|drv_cmd|member|int (*drv_cmd)(struct device *dev, uint32_t cmd, uint32_t p);
DECL|fifo_fill|member|int (*fifo_fill)(struct device *dev, const uint8_t *tx_data, int len);
DECL|fifo_read|member|int (*fifo_read)(struct device *dev, uint8_t *rx_data, const int size);
DECL|irq_err_disable|member|void (*irq_err_disable)(struct device *dev);
DECL|irq_err_enable|member|void (*irq_err_enable)(struct device *dev);
DECL|irq_get|member|unsigned int (*irq_get)(struct device *dev);
DECL|irq_input_hook|member|int (*irq_input_hook)(struct device *dev, uint8_t byte);
DECL|irq_is_pending|member|int (*irq_is_pending)(struct device *dev);
DECL|irq_pri|member|uint8_t irq_pri; /**< interrupt priority */
DECL|irq_rx_disable|member|void (*irq_rx_disable)(struct device *dev);
DECL|irq_rx_enable|member|void (*irq_rx_enable)(struct device *dev);
DECL|irq_rx_ready|member|int (*irq_rx_ready)(struct device *dev);
DECL|irq_tx_disable|member|void (*irq_tx_disable)(struct device *dev);
DECL|irq_tx_enable|member|void (*irq_tx_enable)(struct device *dev);
DECL|irq_tx_ready|member|int (*irq_tx_ready)(struct device *dev);
DECL|irq_update|member|int (*irq_update)(struct device *dev);
DECL|irq|member|uint8_t irq; /**< interrupt request level */
DECL|line_ctrl_set|member|int (*line_ctrl_set)(struct device *dev, uint32_t ctrl, uint32_t val);
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|poll_in|member|int (*poll_in)(struct device *dev, unsigned char *p_char);
DECL|poll_out|member|unsigned char (*poll_out)(struct device *dev, unsigned char out_char);
DECL|port|member|uint32_t port;
DECL|regs|member|uint32_t regs;
DECL|sys_clk_freq|member|uint32_t sys_clk_freq; /* System clock frequency in Hz */
DECL|uart_device_config|struct|struct uart_device_config {
DECL|uart_driver_api|struct|struct uart_driver_api {
DECL|uart_drv_cmd|function|static inline int uart_drv_cmd(struct device *dev, uint32_t cmd, uint32_t p)
DECL|uart_fifo_fill|function|static inline int uart_fifo_fill(struct device *dev, const uint8_t *tx_data, int size)
DECL|uart_fifo_read|function|static inline int uart_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_irq_err_disable|function|static inline void uart_irq_err_disable(struct device *dev)
DECL|uart_irq_err_enable|function|static inline void uart_irq_err_enable(struct device *dev)
DECL|uart_irq_get|function|static inline unsigned int uart_irq_get(struct device *dev)
DECL|uart_irq_input_hook_set|function|static inline void uart_irq_input_hook_set(struct device *dev,int (*hook)(struct device *, uint8_t))
DECL|uart_irq_input_hook|function|static inline int uart_irq_input_hook(struct device *dev, uint8_t byte)
DECL|uart_irq_is_pending|function|static inline int uart_irq_is_pending(struct device *dev)
DECL|uart_irq_rx_disable|function|static inline void uart_irq_rx_disable(struct device *dev)
DECL|uart_irq_rx_enable|function|static inline void uart_irq_rx_enable(struct device *dev)
DECL|uart_irq_rx_ready|function|static inline int uart_irq_rx_ready(struct device *dev)
DECL|uart_irq_tx_disable|function|static inline void uart_irq_tx_disable(struct device *dev)
DECL|uart_irq_tx_enable|function|static inline void uart_irq_tx_enable(struct device *dev)
DECL|uart_irq_tx_ready|function|static inline int uart_irq_tx_ready(struct device *dev)
DECL|uart_irq_update|function|static inline int uart_irq_update(struct device *dev)
DECL|uart_line_ctrl_set|function|static inline int uart_line_ctrl_set(struct device *dev, uint32_t ctrl, uint32_t val)
DECL|uart_poll_in|function|static inline int uart_poll_in(struct device *dev, unsigned char *p_char)
DECL|uart_poll_out|function|static inline unsigned char uart_poll_out(struct device *dev, unsigned char out_char)
