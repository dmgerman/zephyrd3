DECL|GPIO_DEVICE_INIT|macro|GPIO_DEVICE_INIT
DECL|ack_reg|member|volatile u32_t *ack_reg;
DECL|cb_pins|member|u32_t cb_pins;
DECL|cb|member|sys_slist_t cb;
DECL|clear_reg|member|volatile u32_t *clear_reg;
DECL|config_drive_strength|function|static void config_drive_strength(u32_t pin, int flags)
DECL|config_interrupt|function|static int config_interrupt(u32_t pin, int flags)
DECL|config_polarity|function|static void config_polarity(u32_t pin, int flags)
DECL|convert_int_type|function|static int convert_int_type(int flags)
DECL|gpio_data_pins_0_to_31|variable|gpio_data_pins_0_to_31
DECL|gpio_data_pins_32_to_39|variable|gpio_data_pins_32_to_39
DECL|gpio_esp32_config|function|static int gpio_esp32_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_esp32_data|struct|struct gpio_esp32_data {
DECL|gpio_esp32_disable_callback|function|static int gpio_esp32_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_esp32_driver|variable|gpio_esp32_driver
DECL|gpio_esp32_enable_callback|function|static int gpio_esp32_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_esp32_fire_callbacks|function|static void gpio_esp32_fire_callbacks(struct device *device)
DECL|gpio_esp32_init|function|static int gpio_esp32_init(struct device *device)
DECL|gpio_esp32_isr|function|static void gpio_esp32_isr(void *param)
DECL|gpio_esp32_manage_callback|function|static int gpio_esp32_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_esp32_read|function|static int gpio_esp32_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_esp32_write|function|static int gpio_esp32_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|gpio_pin_reg|function|static inline u32_t *gpio_pin_reg(int pin)
DECL|irq|member|} irq;
DECL|pin_offset|member|int pin_offset;
DECL|pinmux|member|struct device *pinmux;
DECL|port|member|} port;
DECL|read|member|} read;
DECL|reg|member|volatile u32_t *reg;
DECL|set_reg|member|volatile u32_t *set_reg;
DECL|status_reg|member|volatile u32_t *status_reg;
DECL|write|member|} write;
