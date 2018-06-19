DECL|GPIO_NRF_DEVICE|macro|GPIO_NRF_DEVICE
DECL|NRF_P0|macro|NRF_P0
DECL|active_level|member|u32_t active_level;
DECL|callbacks|member|sys_slist_t callbacks;
DECL|check_level_trigger_pins|function|static u32_t check_level_trigger_pins(struct device *port)
DECL|double_edge|member|u32_t double_edge;
DECL|fire_callbacks|function|static inline void fire_callbacks(struct device *port, u32_t pins)
DECL|get_port_cfg|function|static inline const struct gpio_nrfx_cfg *get_port_cfg(struct device *port)
DECL|get_port_data|function|static inline struct gpio_nrfx_data *get_port_data(struct device *port)
DECL|gpio_nrfx_cfg|struct|struct gpio_nrfx_cfg {
DECL|gpio_nrfx_config|function|static int gpio_nrfx_config(struct device *port, int access_op, u32_t pin, int flags)
DECL|gpio_nrfx_data|struct|struct gpio_nrfx_data {
DECL|gpio_nrfx_drv_api_funcs|variable|gpio_nrfx_drv_api_funcs
DECL|gpio_nrfx_init|function|static int gpio_nrfx_init(struct device *port)
DECL|gpio_nrfx_manage_callback|function|static int gpio_nrfx_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_nrfx_p0|variable|gpio_nrfx_p0
DECL|gpio_nrfx_p1|variable|gpio_nrfx_p1
DECL|gpio_nrfx_pin_disable_callback|function|static inline int gpio_nrfx_pin_disable_callback(struct device *port, int access_op, u32_t pin)
DECL|gpio_nrfx_pin_enable_callback|function|static inline int gpio_nrfx_pin_enable_callback(struct device *port,int access_op, u32_t pin)
DECL|gpio_nrfx_pin_manage_callback|function|static int gpio_nrfx_pin_manage_callback(struct device *port, int access_op, u32_t pin, bool enable)
DECL|gpio_nrfx_read|function|static int gpio_nrfx_read(struct device *port, int access_op, u32_t pin, u32_t *value)
DECL|gpio_nrfx_write|function|static int gpio_nrfx_write(struct device *port, int access_op, u32_t pin, u32_t value)
DECL|gpiote_channel_alloc|function|static int gpiote_channel_alloc(u32_t abs_pin, nrf_gpiote_polarity_t polarity)
DECL|gpiote_channel_free|function|static void gpiote_channel_free(u32_t abs_pin)
DECL|gpiote_event_handler|function|static void gpiote_event_handler(void)
DECL|gpiote_pin_int_cfg|function|static int gpiote_pin_int_cfg(struct device *port, u32_t pin)
DECL|int_en|member|u32_t int_en;
DECL|inverted|member|u32_t inverted;
DECL|pin_int_en|member|u32_t pin_int_en;
DECL|port_num|member|u8_t port_num;
DECL|port|member|NRF_GPIO_Type *port;
DECL|trig_edge|member|u32_t trig_edge;
