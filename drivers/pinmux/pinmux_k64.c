DECL|PIN_FROM_ID|macro|PIN_FROM_ID
DECL|_fsl_k64_get_pin|function|static int _fsl_k64_get_pin(struct device *dev, uint32_t pin_id, uint32_t *func)
DECL|_fsl_k64_get_port_addr|function|static int _fsl_k64_get_port_addr(uint8_t pin_id, mem_addr_t *port_addr_ptr)
DECL|_fsl_k64_set_pin|function|static int _fsl_k64_set_pin(struct device *dev, uint32_t pin_id, uint32_t func)
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
DECL|fsl_k64_dev_get|function|static int fsl_k64_dev_get(struct device *dev, uint32_t pin, uint32_t *func)
DECL|fsl_k64_dev_set|function|static int fsl_k64_dev_set(struct device *dev, uint32_t pin, uint32_t func)
DECL|fsl_k64_pmux|variable|fsl_k64_pmux
DECL|pinmux_fsl_k64_initialize|function|int pinmux_fsl_k64_initialize(struct device *port)
