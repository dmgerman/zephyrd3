DECL|WDT_REGS|macro|WDT_REGS
DECL|cb|member|void (*cb)(struct device *dev);
DECL|wdt_sam0_api|variable|wdt_sam0_api
DECL|wdt_sam0_data|variable|wdt_sam0_data
DECL|wdt_sam0_dev_data|struct|struct wdt_sam0_dev_data {
DECL|wdt_sam0_disable|function|static int wdt_sam0_disable(struct device *dev)
DECL|wdt_sam0_enable|function|static void wdt_sam0_enable(struct device *dev)
DECL|wdt_sam0_get_config|function|static void wdt_sam0_get_config(struct device *dev, struct wdt_config *config)
DECL|wdt_sam0_init|function|static int wdt_sam0_init(struct device *dev)
DECL|wdt_sam0_isr|function|static void wdt_sam0_isr(struct device *dev)
DECL|wdt_sam0_reload|function|static void wdt_sam0_reload(struct device *dev)
DECL|wdt_sam0_set_config|function|static int wdt_sam0_set_config(struct device *dev, struct wdt_config *config)
DECL|wdt_sam0_wait_synchronization|function|static void wdt_sam0_wait_synchronization(void)
