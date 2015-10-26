DECL|EXT_PORTA|macro|EXT_PORTA
DECL|EXT_PORTB|macro|EXT_PORTB
DECL|EXT_PORTC|macro|EXT_PORTC
DECL|EXT_PORTD|macro|EXT_PORTD
DECL|INTEN|macro|INTEN
DECL|INTMASK|macro|INTMASK
DECL|INTSTATUS|macro|INTSTATUS
DECL|INTTYPE_LEVEL|macro|INTTYPE_LEVEL
DECL|INT_BOTHEDGE|macro|INT_BOTHEDGE
DECL|INT_CLOCK_SYNC|macro|INT_CLOCK_SYNC
DECL|INT_POLARITY|macro|INT_POLARITY
DECL|PORTA_DEBOUNCE|macro|PORTA_DEBOUNCE
DECL|PORTA_EOI|macro|PORTA_EOI
DECL|SWPORTA_DDR|macro|SWPORTA_DDR
DECL|SWPORTA_DR|macro|SWPORTA_DR
DECL|SWPORTB_DDR|macro|SWPORTB_DDR
DECL|SWPORTB_DR|macro|SWPORTB_DR
DECL|SWPORTC_DDR|macro|SWPORTC_DDR
DECL|SWPORTC_DR|macro|SWPORTC_DR
DECL|SWPORTD_DDR|macro|SWPORTD_DDR
DECL|SWPORTD_DR|macro|SWPORTD_DR
DECL|api_funcs|variable|api_funcs
DECL|dw_interrupt_config|function|static inline void dw_interrupt_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|dw_pin_config|function|static inline void dw_pin_config(struct device *port, uint32_t pin, int flags)
DECL|dw_port_config|function|static inline void dw_port_config(struct device *port, int flags)
DECL|dw_read|function|static inline uint32_t dw_read(uint32_t base_addr, uint32_t offset)
DECL|dw_set_bit|function|static void dw_set_bit(uint32_t base_addr, uint32_t offset, uint32_t bit, uint8_t value)
DECL|dw_set_gpio_bothedges|function|static inline void dw_set_gpio_bothedges(struct device *port,uint32_t pin, int flags)
DECL|dw_set_gpio_bothedges|function|static inline void dw_set_gpio_bothedges(struct device *port,uint32_t pin, int flags)
DECL|dw_write|function|static inline void dw_write(uint32_t base_addr, uint32_t offset, uint32_t val)
DECL|gpio_0_runtime|variable|gpio_0_runtime
DECL|gpio_1_runtime|variable|gpio_1_runtime
DECL|gpio_config_0_irq|function|void gpio_config_0_irq(struct device *port)
DECL|gpio_config_0|variable|gpio_config_0
DECL|gpio_config_1_irq|function|void gpio_config_1_irq(struct device *port)
DECL|gpio_dw_config_1|variable|gpio_dw_config_1
DECL|gpio_dw_config|function|static inline int gpio_dw_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|gpio_dw_disable_callback|function|static inline int gpio_dw_disable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_dw_enable_callback|function|static inline int gpio_dw_enable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_dw_initialize|function|int gpio_dw_initialize(struct device *port)
DECL|gpio_dw_isr_0|variable|gpio_dw_isr_0
DECL|gpio_dw_isr_1|variable|gpio_dw_isr_1
DECL|gpio_dw_isr|function|void gpio_dw_isr(struct device *port)
DECL|gpio_dw_read|function|static inline int gpio_dw_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_dw_resume_port|function|static inline int gpio_dw_resume_port(struct device *port)
DECL|gpio_dw_set_callback|function|static inline int gpio_dw_set_callback(struct device *port, gpio_callback_t callback)
DECL|gpio_dw_setup|function|static inline int gpio_dw_setup(struct device *dev)
DECL|gpio_dw_setup|macro|gpio_dw_setup
DECL|gpio_dw_suspend_port|function|static inline int gpio_dw_suspend_port(struct device *port)
DECL|gpio_dw_write|function|static inline int gpio_dw_write(struct device *port, int access_op,uint32_t pin, uint32_t value)
