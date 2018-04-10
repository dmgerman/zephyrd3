DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0|macro|LED0
DECL|LED1_GPIO_CONTROLLER|macro|LED1_GPIO_CONTROLLER
DECL|LED1|macro|LED1
DECL|PORT0|macro|PORT0
DECL|PORT1|macro|PORT1
DECL|PRIORITY|macro|PRIORITY
DECL|STACKSIZE|macro|STACKSIZE
DECL|blink1|function|void blink1(void)
DECL|blink2|function|void blink2(void)
DECL|blink|function|void blink(const char *port, u32_t sleep_ms, u32_t led, u32_t id)
DECL|cnt|member|u32_t cnt;
DECL|fifo_reserved|member|void *fifo_reserved; /* 1st word reserved for use by fifo */
DECL|led|member|u32_t led;
DECL|printk_data_t|struct|struct printk_data_t {
DECL|printk_fifo|variable|printk_fifo
DECL|uart_out|function|void uart_out(void)
