DECL|base_addr|member|uint32_t base_addr;
DECL|bits|member|uint32_t bits;
DECL|callback|member|gpio_callback_t callback;
DECL|config_func|member|gpio_config_irq_t config_func;
DECL|enabled_callbacks|member|uint32_t enabled_callbacks;
DECL|gpio_config_irq_t|typedef|typedef void (*gpio_config_irq_t)(struct device *port);
DECL|gpio_dw_config|struct|struct gpio_dw_config {
DECL|gpio_dw_runtime|struct|struct gpio_dw_runtime {
DECL|irq_num|member|uint32_t irq_num;
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|port_callback|member|uint8_t port_callback;
DECL|shared_irq_dev_name|member|char *shared_irq_dev_name;
