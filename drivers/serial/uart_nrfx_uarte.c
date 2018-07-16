DECL|UARTE_0_CONFIG_INIT|macro|UARTE_0_CONFIG_INIT
DECL|UARTE_0_CONFIG_INIT|macro|UARTE_0_CONFIG_INIT
DECL|UARTE_0_CREATE_TX_BUFF|macro|UARTE_0_CREATE_TX_BUFF
DECL|UARTE_0_CREATE_TX_BUFF|macro|UARTE_0_CREATE_TX_BUFF
DECL|UARTE_0_DATA_INIT|macro|UARTE_0_DATA_INIT
DECL|UARTE_0_DATA_INIT|macro|UARTE_0_DATA_INIT
DECL|UARTE_0_INTERRUPTS_INIT|macro|UARTE_0_INTERRUPTS_INIT
DECL|UARTE_0_INTERRUPTS_INIT|macro|UARTE_0_INTERRUPTS_INIT
DECL|UARTE_0_INTERRUPT_DRIVEN|macro|UARTE_0_INTERRUPT_DRIVEN
DECL|UARTE_0_INTERRUPT_DRIVEN|macro|UARTE_0_INTERRUPT_DRIVEN
DECL|UARTE_0_NRF_HWFC_CONFIG|macro|UARTE_0_NRF_HWFC_CONFIG
DECL|UARTE_0_NRF_HWFC_CONFIG|macro|UARTE_0_NRF_HWFC_CONFIG
DECL|UARTE_0_NRF_PARITY_BIT|macro|UARTE_0_NRF_PARITY_BIT
DECL|UARTE_0_NRF_PARITY_BIT|macro|UARTE_0_NRF_PARITY_BIT
DECL|UARTE_1_CONFIG_INIT|macro|UARTE_1_CONFIG_INIT
DECL|UARTE_1_CONFIG_INIT|macro|UARTE_1_CONFIG_INIT
DECL|UARTE_1_CREATE_TX_BUFF|macro|UARTE_1_CREATE_TX_BUFF
DECL|UARTE_1_CREATE_TX_BUFF|macro|UARTE_1_CREATE_TX_BUFF
DECL|UARTE_1_DATA_INIT|macro|UARTE_1_DATA_INIT
DECL|UARTE_1_DATA_INIT|macro|UARTE_1_DATA_INIT
DECL|UARTE_1_INTERRUPTS_INIT|macro|UARTE_1_INTERRUPTS_INIT
DECL|UARTE_1_INTERRUPTS_INIT|macro|UARTE_1_INTERRUPTS_INIT
DECL|UARTE_1_INTERRUPT_DRIVEN|macro|UARTE_1_INTERRUPT_DRIVEN
DECL|UARTE_1_INTERRUPT_DRIVEN|macro|UARTE_1_INTERRUPT_DRIVEN
DECL|UARTE_1_NRF_HWFC_CONFIG|macro|UARTE_1_NRF_HWFC_CONFIG
DECL|UARTE_1_NRF_HWFC_CONFIG|macro|UARTE_1_NRF_HWFC_CONFIG
DECL|UARTE_1_NRF_PARITY_BIT|macro|UARTE_1_NRF_PARITY_BIT
DECL|UARTE_1_NRF_PARITY_BIT|macro|UARTE_1_NRF_PARITY_BIT
DECL|UARTE_CONFIG_INT|macro|UARTE_CONFIG_INT
DECL|UARTE_DATA_INT|macro|UARTE_DATA_INT
DECL|UARTE_INTERRUPT_DRIVEN|macro|UARTE_INTERRUPT_DRIVEN
DECL|UARTE_NRF_HWFC_DISABLED|macro|UARTE_NRF_HWFC_DISABLED
DECL|UARTE_NRF_HWFC_ENABLED|macro|UARTE_NRF_HWFC_ENABLED
DECL|UARTE_NRF_IRQ_ENABLED|macro|UARTE_NRF_IRQ_ENABLED
DECL|UARTE_TX_BUFFER_INIT|macro|UARTE_TX_BUFFER_INIT
DECL|UARTE_TX_BUFFER_SIZE|macro|UARTE_TX_BUFFER_SIZE
DECL|UART_NRF_UARTE_DEVICE|macro|UART_NRF_UARTE_DEVICE
DECL|baudrate_set|function|static int baudrate_set(struct device *dev, u32_t baudrate)
DECL|baudrate|member|nrf_uarte_baudrate_t baudrate;
DECL|cb_data|member|void *cb_data; /**< Callback function arg */
DECL|cb|member|uart_irq_callback_user_data_t cb; /**< Callback function pointer */
DECL|get_dev_config|function|static inline const struct uarte_nrfx_config *get_dev_config(struct device *dev)
DECL|get_dev_data|function|static inline struct uarte_nrfx_data *get_dev_data(struct device *dev)
DECL|get_uarte_instance|function|static inline NRF_UARTE_Type *get_uarte_instance(struct device *dev)
DECL|hwfc|member|nrf_uarte_hwfc_t hwfc; /* Flow control configuration */
DECL|parity|member|nrf_uarte_parity_t parity; /* Parity configuration */
DECL|pselcts|member|u32_t pselcts; /* CTS pin number */
DECL|pselrts|member|u32_t pselrts; /* RTS pin number */
DECL|pselrxd|member|u32_t pselrxd; /* RXD pin number */
DECL|pseltxd|member|u32_t pseltxd; /* TXD pin number */
DECL|rx_data|member|u8_t rx_data;
DECL|tx_buff_size|member|u16_t tx_buff_size;
DECL|tx_buffer|member|u8_t *tx_buffer;
DECL|uart_nrfx_uarte_driver_api|variable|uart_nrfx_uarte_driver_api
DECL|uarte_init_config|struct|struct uarte_init_config {
DECL|uarte_instance_init|function|static int uarte_instance_init(struct device *dev, const struct uarte_init_config *config, u8_t interrupts_active)
DECL|uarte_nrfx_config|struct|struct uarte_nrfx_config {
DECL|uarte_nrfx_data|struct|struct uarte_nrfx_data {
DECL|uarte_nrfx_err_check|function|static int uarte_nrfx_err_check(struct device *dev)
DECL|uarte_nrfx_fifo_fill|function|static int uarte_nrfx_fifo_fill(struct device *dev,const u8_t *tx_data, int len)
DECL|uarte_nrfx_fifo_read|function|static int uarte_nrfx_fifo_read(struct device *dev,u8_t *rx_data, const int size)
DECL|uarte_nrfx_irq_callback_set|function|static void uarte_nrfx_irq_callback_set(struct device *dev,uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uarte_nrfx_irq_err_disable|function|static void uarte_nrfx_irq_err_disable(struct device *dev)
DECL|uarte_nrfx_irq_err_enable|function|static void uarte_nrfx_irq_err_enable(struct device *dev)
DECL|uarte_nrfx_irq_is_pending|function|static int uarte_nrfx_irq_is_pending(struct device *dev)
DECL|uarte_nrfx_irq_rx_disable|function|static void uarte_nrfx_irq_rx_disable(struct device *dev)
DECL|uarte_nrfx_irq_rx_enable|function|static void uarte_nrfx_irq_rx_enable(struct device *dev)
DECL|uarte_nrfx_irq_rx_ready|function|static int uarte_nrfx_irq_rx_ready(struct device *dev)
DECL|uarte_nrfx_irq_tx_disable|function|static void uarte_nrfx_irq_tx_disable(struct device *dev)
DECL|uarte_nrfx_irq_tx_enable|function|static void uarte_nrfx_irq_tx_enable(struct device *dev)
DECL|uarte_nrfx_irq_tx_ready_complete|function|static int uarte_nrfx_irq_tx_ready_complete(struct device *dev)
DECL|uarte_nrfx_irq_update|function|static int uarte_nrfx_irq_update(struct device *dev)
DECL|uarte_nrfx_isr|function|static void uarte_nrfx_isr(void *arg)
DECL|uarte_nrfx_poll_in|function|static int uarte_nrfx_poll_in(struct device *dev, unsigned char *c)
DECL|uarte_nrfx_poll_out|function|static unsigned char uarte_nrfx_poll_out(struct device *dev, unsigned char c)
DECL|uarte_regs|member|NRF_UARTE_Type *uarte_regs; /* Instance address */
