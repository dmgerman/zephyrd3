DECL|GPIO_MMIO32_INIT|macro|GPIO_MMIO32_INIT
DECL|GPIO_MMIO32_INIT|macro|GPIO_MMIO32_INIT
DECL|_GPIO_MMIO32_H_|macro|_GPIO_MMIO32_H_
DECL|config|member|const struct gpio_mmio32_config *config;
DECL|gpio_mmio32_config|struct|struct gpio_mmio32_config {
DECL|gpio_mmio32_context|struct|struct gpio_mmio32_context {
DECL|invert|member|uint32_t invert; /* Mask of 'reg' bits that should be inverted */
DECL|mask|member|uint32_t mask;
DECL|reg|member|volatile uint32_t *reg;
