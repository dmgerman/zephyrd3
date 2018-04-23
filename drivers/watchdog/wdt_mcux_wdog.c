DECL|MIN_TIMEOUT|macro|MIN_TIMEOUT
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base|member|WDOG_Type *base;
DECL|callback|member|wdt_callback_t callback;
DECL|clock_name|member|char *clock_name;
DECL|clock_subsys|member|clock_control_subsys_t clock_subsys;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_wdog_api|variable|mcux_wdog_api
DECL|mcux_wdog_config_0|variable|mcux_wdog_config_0
DECL|mcux_wdog_config_func_0|function|static void mcux_wdog_config_func_0(struct device *dev)
DECL|mcux_wdog_config|struct|struct mcux_wdog_config {
DECL|mcux_wdog_data_0|variable|mcux_wdog_data_0
DECL|mcux_wdog_data|struct|struct mcux_wdog_data {
DECL|mcux_wdog_disable|function|static int mcux_wdog_disable(struct device *dev)
DECL|mcux_wdog_feed|function|static int mcux_wdog_feed(struct device *dev, int channel_id)
DECL|mcux_wdog_init|function|static int mcux_wdog_init(struct device *dev)
DECL|mcux_wdog_install_timeout|function|static int mcux_wdog_install_timeout(struct device *dev, const struct wdt_timeout_cfg *cfg)
DECL|mcux_wdog_isr|function|static void mcux_wdog_isr(void *arg)
DECL|mcux_wdog_setup|function|static int mcux_wdog_setup(struct device *dev, u8_t options)
DECL|timeout_valid|member|bool timeout_valid;
DECL|wdog_config|member|wdog_config_t wdog_config;
