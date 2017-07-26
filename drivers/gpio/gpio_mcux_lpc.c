DECL|PORT0_IDX|macro|PORT0_IDX
DECL|PORT1_IDX|macro|PORT1_IDX
DECL|callbacks|member|sys_slist_t callbacks;
DECL|clock_ip_name|member|clock_ip_name_t clock_ip_name;
DECL|gpio_base|member|GPIO_Type *gpio_base;
DECL|gpio_mcux_lpc_configure|function|static int gpio_mcux_lpc_configure(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_mcux_lpc_config|struct|struct gpio_mcux_lpc_config {
DECL|gpio_mcux_lpc_data|struct|struct gpio_mcux_lpc_data {
DECL|gpio_mcux_lpc_driver_api|variable|gpio_mcux_lpc_driver_api
DECL|gpio_mcux_lpc_init|function|static int gpio_mcux_lpc_init(struct device *dev)
DECL|gpio_mcux_lpc_port0_config|variable|gpio_mcux_lpc_port0_config
DECL|gpio_mcux_lpc_port0_data|variable|gpio_mcux_lpc_port0_data
DECL|gpio_mcux_lpc_port1_config|variable|gpio_mcux_lpc_port1_config
DECL|gpio_mcux_lpc_port1_data|variable|gpio_mcux_lpc_port1_data
DECL|gpio_mcux_lpc_read|function|static int gpio_mcux_lpc_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_mcux_lpc_write|function|static int gpio_mcux_lpc_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
DECL|port_no|member|u32_t port_no;
