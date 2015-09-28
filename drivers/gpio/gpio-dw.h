DECL|CONFIG_GPIO_DW_BITS|macro|CONFIG_GPIO_DW_BITS
DECL|base_addr|member|uint32_t base_addr;
DECL|bits|member|uint32_t bits;
DECL|callback|member|gpio_callback_t callback;
DECL|config_func|member|gpio_config_irq_t config_func;
DECL|enabled_callbacks|member|uint32_t enabled_callbacks;
DECL|gpio_config_dw|struct|struct gpio_config_dw {
DECL|gpio_config_irq_t|typedef|typedef void (*gpio_config_irq_t)(struct device *port);
DECL|gpio_runtime_dw|struct|struct gpio_runtime_dw {
DECL|irq_num|member|uint32_t irq_num;
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|port_callback|member|uint8_t port_callback;
DECL|shared_irq_dev_name|member|char *shared_irq_dev_name;
