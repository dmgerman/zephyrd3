DECL|BUTTON_MSG_ID|macro|BUTTON_MSG_ID
DECL|LED_MSG_ID|macro|LED_MSG_ID
DECL|LED_THREAD_STACK_SIZE|macro|LED_THREAD_STACK_SIZE
DECL|NUM_LEDS_STR|macro|NUM_LEDS_STR
DECL|RESET_LED|macro|RESET_LED
DECL|RX_STR_THREAD_STACK_SIZE|macro|RX_STR_THREAD_STACK_SIZE
DECL|SET_LED|macro|SET_LED
DECL|STR_MSG_ID|macro|STR_MSG_ID
DECL|TX_THREAD_PRIORITY|macro|TX_THREAD_PRIORITY
DECL|TX_THREAD_STACK_SIZE|macro|TX_THREAD_STACK_SIZE
DECL|button_callback|function|void button_callback(struct device *port, struct gpio_callback *cb, u32_t pins)
DECL|gpio_cb|variable|gpio_cb
DECL|led_thread_data|variable|led_thread_data
DECL|led_thread|function|void led_thread(void *msgq, void *can_dev_param, void *gpio_dev_param)
DECL|main|function|void main(void)
DECL|rx_button_isr|function|void rx_button_isr(struct can_msg *msg)
DECL|rx_str_thread_data|variable|rx_str_thread_data
DECL|rx_str_thread|function|void rx_str_thread(void *msgq, void *can_dev_param, void *unused)
DECL|send_string|function|void send_string(char *string, struct device *can_dev)
DECL|tx_irq_callback|function|void tx_irq_callback(u32_t error_flags)
DECL|tx_sem|variable|tx_sem
DECL|tx_thread_data|variable|tx_thread_data
DECL|tx_thread|function|void tx_thread(void *can_dev_param, void *unused2, void *unused3)
