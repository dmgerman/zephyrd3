DECL|PIN_FROM_ID|macro|PIN_FROM_ID
DECL|_fsl_k64_get_gpio_dev|function|static int _fsl_k64_get_gpio_dev(struct device *dev, mem_addr_t port_base_addr, struct device **gpio_dev_ptr)
DECL|_fsl_k64_get_pin|function|static uint32_t _fsl_k64_get_pin(struct device *dev, uint32_t pin_id, uint32_t *func)
DECL|_fsl_k64_get_port_addr|function|static int _fsl_k64_get_port_addr(uint8_t pin_id, mem_addr_t *port_addr_ptr)
DECL|_fsl_k64_set_pin|function|static uint32_t _fsl_k64_set_pin(struct device *dev, uint32_t pin_id, uint32_t func)
DECL|api_funcs|variable|api_funcs
DECL|config_port_a|function|static inline int config_port_a(mem_addr_t *addr)
DECL|config_port_a|macro|config_port_a
DECL|config_port_b|function|static inline int config_port_b(mem_addr_t *addr)
DECL|config_port_b|macro|config_port_b
DECL|config_port_c|function|static inline int config_port_c(mem_addr_t *addr)
DECL|config_port_c|macro|config_port_c
DECL|config_port_d|function|static inline int config_port_d(mem_addr_t *addr)
DECL|config_port_d|macro|config_port_d
DECL|config_port_e|function|static inline int config_port_e(mem_addr_t *addr)
DECL|config_port_e|macro|config_port_e
DECL|fsl_k64_data|struct|struct fsl_k64_data {
DECL|fsl_k64_dev_get|function|static uint32_t fsl_k64_dev_get(struct device *dev, uint32_t pin, uint32_t *func)
DECL|fsl_k64_dev_set|function|static uint32_t fsl_k64_dev_set(struct device *dev, uint32_t pin, uint32_t func)
DECL|fsl_k64_pinmux_driver|variable|fsl_k64_pinmux_driver
DECL|fsl_k64_pmux|variable|fsl_k64_pmux
DECL|gpio_a|member|struct device *gpio_a; /* port A */
DECL|gpio_b|member|struct device *gpio_b; /* port B */
DECL|gpio_c|member|struct device *gpio_c; /* port C */
DECL|gpio_d|member|struct device *gpio_d; /* port D */
DECL|gpio_e|member|struct device *gpio_e; /* port E */
DECL|pinmux_fsl_k64_initialize|function|int pinmux_fsl_k64_initialize(struct device *port)
