DECL|MISCCFG_IRQ_ROUTE_POS|macro|MISCCFG_IRQ_ROUTE_POS
DECL|NUM_ISLANDS|macro|NUM_ISLANDS
DECL|PAD_CFG0_PMODE_MASK|macro|PAD_CFG0_PMODE_MASK
DECL|PAD_CFG0_PREGFRXSEL|macro|PAD_CFG0_PREGFRXSEL
DECL|PAD_CFG0_RXDIS|macro|PAD_CFG0_RXDIS
DECL|PAD_CFG0_RXEVCFG_DRIVE0|macro|PAD_CFG0_RXEVCFG_DRIVE0
DECL|PAD_CFG0_RXEVCFG_EDGE|macro|PAD_CFG0_RXEVCFG_EDGE
DECL|PAD_CFG0_RXEVCFG_LEVEL|macro|PAD_CFG0_RXEVCFG_LEVEL
DECL|PAD_CFG0_RXEVCFG_MASK|macro|PAD_CFG0_RXEVCFG_MASK
DECL|PAD_CFG0_RXEVCFG_POS|macro|PAD_CFG0_RXEVCFG_POS
DECL|PAD_CFG0_RXINV|macro|PAD_CFG0_RXINV
DECL|PAD_CFG0_RXPADSTSEL|macro|PAD_CFG0_RXPADSTSEL
DECL|PAD_CFG0_RXRAW1|macro|PAD_CFG0_RXRAW1
DECL|PAD_CFG0_RXSTATE_POS|macro|PAD_CFG0_RXSTATE_POS
DECL|PAD_CFG0_RXSTATE|macro|PAD_CFG0_RXSTATE
DECL|PAD_CFG0_TXDIS|macro|PAD_CFG0_TXDIS
DECL|PAD_CFG0_TXSTATE_POS|macro|PAD_CFG0_TXSTATE_POS
DECL|PAD_CFG0_TXSTATE|macro|PAD_CFG0_TXSTATE
DECL|PAD_CFG1_IOSSTATE_IGNORE|macro|PAD_CFG1_IOSSTATE_IGNORE
DECL|PAD_CFG1_IOSSTATE_MASK|macro|PAD_CFG1_IOSSTATE_MASK
DECL|PAD_CFG1_IOSSTATE_POS|macro|PAD_CFG1_IOSSTATE_POS
DECL|PAD_CFG1_IOSTERM_DISPUD|macro|PAD_CFG1_IOSTERM_DISPUD
DECL|PAD_CFG1_IOSTERM_FUNC|macro|PAD_CFG1_IOSTERM_FUNC
DECL|PAD_CFG1_IOSTERM_MASK|macro|PAD_CFG1_IOSTERM_MASK
DECL|PAD_CFG1_IOSTERM_PD|macro|PAD_CFG1_IOSTERM_PD
DECL|PAD_CFG1_IOSTERM_POS|macro|PAD_CFG1_IOSTERM_POS
DECL|PAD_CFG1_IOSTERM_PU|macro|PAD_CFG1_IOSTERM_PU
DECL|PAD_CFG1_TERM_MASK|macro|PAD_CFG1_TERM_MASK
DECL|PAD_CFG1_TERM_NONE|macro|PAD_CFG1_TERM_NONE
DECL|PAD_CFG1_TERM_PD|macro|PAD_CFG1_TERM_PD
DECL|PAD_CFG1_TERM_POS|macro|PAD_CFG1_TERM_POS
DECL|PAD_CFG1_TERM_PU|macro|PAD_CFG1_TERM_PU
DECL|PAD_HOST_SW_OWN_ACPI|macro|PAD_HOST_SW_OWN_ACPI
DECL|PAD_HOST_SW_OWN_GPIO|macro|PAD_HOST_SW_OWN_GPIO
DECL|PAD_OWN_CSME|macro|PAD_OWN_CSME
DECL|PAD_OWN_HOST|macro|PAD_OWN_HOST
DECL|PAD_OWN_IE|macro|PAD_OWN_IE
DECL|PAD_OWN_ISH|macro|PAD_OWN_ISH
DECL|PAD_OWN_MASK|macro|PAD_OWN_MASK
DECL|REG_GPI_INT_EN_BASE|macro|REG_GPI_INT_EN_BASE
DECL|REG_GPI_INT_STS_BASE|macro|REG_GPI_INT_STS_BASE
DECL|REG_MISCCFG|macro|REG_MISCCFG
DECL|REG_PAD_BASE_ADDR|macro|REG_PAD_BASE_ADDR
DECL|REG_PAD_HOST_SW_OWNER|macro|REG_PAD_HOST_SW_OWNER
DECL|REG_PAD_OWNER_BASE|macro|REG_PAD_OWNER_BASE
DECL|apl_gpio_island|struct|struct apl_gpio_island {
DECL|cb|member|sys_slist_t cb;
DECL|check_perm|function|static bool check_perm(struct device *dev, u32_t island, u32_t raw_pin)
DECL|check_perm|macro|check_perm
DECL|extract_island_and_pin|function|static inline void extract_island_and_pin(u32_t pin, u32_t *island, u32_t *raw_pin)
DECL|gpio_intel_apl_api|variable|gpio_intel_apl_api
DECL|gpio_intel_apl_cfg|variable|gpio_intel_apl_cfg
DECL|gpio_intel_apl_config|function|static int gpio_intel_apl_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_intel_apl_config|struct|struct gpio_intel_apl_config {
DECL|gpio_intel_apl_data|struct|struct gpio_intel_apl_data {
DECL|gpio_intel_apl_data|variable|gpio_intel_apl_data
DECL|gpio_intel_apl_disable_callback|function|static int gpio_intel_apl_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_intel_apl_enable_callback|function|static int gpio_intel_apl_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_intel_apl_init|function|int gpio_intel_apl_init(struct device *dev)
DECL|gpio_intel_apl_irq_config|function|static void gpio_intel_apl_irq_config(struct device *dev)
DECL|gpio_intel_apl_isr|function|static void gpio_intel_apl_isr(void *arg)
DECL|gpio_intel_apl_manage_callback|function|static int gpio_intel_apl_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_intel_apl_read|function|static int gpio_intel_apl_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_intel_apl_write|function|static int gpio_intel_apl_write(struct device *dev, int access_op,u32_t pin, u32_t value)
DECL|islands|member|struct apl_gpio_island islands[NUM_ISLANDS];
DECL|num_pins|member|u32_t num_pins;
DECL|pad_base|member|u32_t pad_base[NUM_ISLANDS];
DECL|reg_base|member|u32_t reg_base;
