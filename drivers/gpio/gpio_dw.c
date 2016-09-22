DECL|_gpio_dw_clock_config|function|static inline void _gpio_dw_clock_config(struct device *port)
DECL|_gpio_dw_clock_config|macro|_gpio_dw_clock_config
DECL|_gpio_dw_clock_off|function|static inline void _gpio_dw_clock_off(struct device *port)
DECL|_gpio_dw_clock_off|macro|_gpio_dw_clock_off
DECL|_gpio_dw_clock_on|function|static inline void _gpio_dw_clock_on(struct device *port)
DECL|_gpio_dw_clock_on|macro|_gpio_dw_clock_on
DECL|api_funcs|variable|api_funcs
DECL|dw_base_to_block_base|function|static inline int dw_base_to_block_base(uint32_t base_addr)
DECL|dw_base_to_block_base|function|static inline int dw_base_to_block_base(uint32_t base_addr)
DECL|dw_derive_port_from_base|function|static inline int dw_derive_port_from_base(uint32_t base_addr)
DECL|dw_interrupt_config|function|static inline void dw_interrupt_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|dw_interrupt_support|function|static inline int dw_interrupt_support(struct gpio_dw_config *config)
DECL|dw_interrupt_support|function|static inline int dw_interrupt_support(struct gpio_dw_config *config)
DECL|dw_pin_config|function|static inline void dw_pin_config(struct device *port, uint32_t pin, int flags)
DECL|dw_port_config|function|static inline void dw_port_config(struct device *port, int flags)
DECL|dw_read|function|static inline uint32_t dw_read(uint32_t base_addr, uint32_t offset)
DECL|dw_read|function|static inline uint32_t dw_read(uint32_t base_addr, uint32_t offset)
DECL|dw_set_bit|function|static void dw_set_bit(uint32_t base_addr, uint32_t offset, uint32_t bit, uint8_t value)
DECL|dw_set_bit|function|static void dw_set_bit(uint32_t base_addr, uint32_t offset, uint32_t bit, uint8_t value)
DECL|dw_set_both_edges|function|static inline void dw_set_both_edges(uint32_t base_addr, uint32_t pin)
DECL|dw_set_both_edges|function|static inline void dw_set_both_edges(uint32_t base_addr, uint32_t pin)
DECL|dw_write|function|static inline void dw_write(uint32_t base_addr, uint32_t offset, uint32_t val)
DECL|dw_write|function|static inline void dw_write(uint32_t base_addr, uint32_t offset, uint32_t val)
DECL|gpio_0_runtime|variable|gpio_0_runtime
DECL|gpio_1_runtime|variable|gpio_1_runtime
DECL|gpio_2_runtime|variable|gpio_2_runtime
DECL|gpio_3_runtime|variable|gpio_3_runtime
DECL|gpio_config_0_irq|function|void gpio_config_0_irq(struct device *port)
DECL|gpio_config_0|variable|gpio_config_0
DECL|gpio_config_1_irq|function|void gpio_config_1_irq(struct device *port)
DECL|gpio_config_2_irq|function|void gpio_config_2_irq(struct device *port)
DECL|gpio_config_3_irq|function|void gpio_config_3_irq(struct device *port)
DECL|gpio_dw_config_1|variable|gpio_dw_config_1
DECL|gpio_dw_config_2|variable|gpio_dw_config_2
DECL|gpio_dw_config_3|variable|gpio_dw_config_3
DECL|gpio_dw_config|function|static inline int gpio_dw_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|gpio_dw_device_ctrl|function|static int gpio_dw_device_ctrl(struct device *port, uint32_t ctrl_command,void *context)
DECL|gpio_dw_disable_callback|function|static inline int gpio_dw_disable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_dw_enable_callback|function|static inline int gpio_dw_enable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_dw_get_power_state|function|static uint32_t gpio_dw_get_power_state(struct device *port)
DECL|gpio_dw_initialize|function|int gpio_dw_initialize(struct device *port)
DECL|gpio_dw_isr|function|void gpio_dw_isr(void *arg)
DECL|gpio_dw_manage_callback|function|static inline int gpio_dw_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_dw_read|function|static inline int gpio_dw_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_dw_resume_from_suspend_port|function|static inline int gpio_dw_resume_from_suspend_port(struct device *port)
DECL|gpio_dw_set_power_state|function|static void gpio_dw_set_power_state(struct device *port, uint32_t power_state)
DECL|gpio_dw_set_power_state|macro|gpio_dw_set_power_state
DECL|gpio_dw_setup|function|static inline int gpio_dw_setup(struct device *dev)
DECL|gpio_dw_setup|macro|gpio_dw_setup
DECL|gpio_dw_suspend_port|function|static inline int gpio_dw_suspend_port(struct device *port)
DECL|gpio_dw_unmask_int|function|static inline void gpio_dw_unmask_int(uint32_t mask_addr)
DECL|gpio_dw_unmask_int|function|static inline void gpio_dw_unmask_int(uint32_t mask_addr)
DECL|gpio_dw_unmask_int|macro|gpio_dw_unmask_int
DECL|gpio_dw_write|function|static inline int gpio_dw_write(struct device *port, int access_op,uint32_t pin, uint32_t value)
