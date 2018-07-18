DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|init_wdt|function|static int init_wdt(struct device *dev)
DECL|m_allocated_channels|variable|m_allocated_channels
DECL|m_callbacks|variable|m_callbacks
DECL|m_timeout|variable|m_timeout
DECL|wdt_event_handler|function|static void wdt_event_handler(void)
DECL|wdt_nrf_api|variable|wdt_nrf_api
DECL|wdt_nrf_disable|function|static int wdt_nrf_disable(struct device *dev)
DECL|wdt_nrf_enable|function|static void wdt_nrf_enable(struct device *dev)
DECL|wdt_nrf_feed|function|static int wdt_nrf_feed(struct device *dev, int channel_id)
DECL|wdt_nrf_get_config|function|static void wdt_nrf_get_config(struct device *dev, struct wdt_config *config)
DECL|wdt_nrf_install_timeout|function|static int wdt_nrf_install_timeout(struct device *dev, const struct wdt_timeout_cfg *cfg)
DECL|wdt_nrf_reload|function|static void wdt_nrf_reload(struct device *dev)
DECL|wdt_nrf_set_config|function|static int wdt_nrf_set_config(struct device *dev, struct wdt_config *config)
DECL|wdt_nrf_setup|function|static int wdt_nrf_setup(struct device *dev, u8_t options)
DECL|wdt_nrfx|variable|wdt_nrfx
