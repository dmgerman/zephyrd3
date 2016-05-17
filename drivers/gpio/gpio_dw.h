DECL|base_addr|member|uint32_t base_addr;
DECL|bits|member|uint32_t bits;
DECL|callbacks|member|sys_slist_t callbacks;
DECL|clock_data|member|void *clock_data;
DECL|clock|member|struct device *clock;
DECL|config_func|member|gpio_config_irq_t config_func;
DECL|gpio_config_irq_t|typedef|typedef void (*gpio_config_irq_t)(struct device *port);
DECL|gpio_dw_config|struct|struct gpio_dw_config {
DECL|gpio_dw_runtime|struct|struct gpio_dw_runtime {
DECL|irq_num|member|uint32_t irq_num; /* set to 0 if GPIO port cannot interrupt */
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|shared_irq_dev_name|member|char *shared_irq_dev_name;
