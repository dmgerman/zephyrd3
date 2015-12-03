DECL|WDT_2_16_CYCLES|enumerator|WDT_2_16_CYCLES,
DECL|WDT_2_17_CYCLES|enumerator|WDT_2_17_CYCLES,
DECL|WDT_2_18_CYCLES|enumerator|WDT_2_18_CYCLES,
DECL|WDT_2_19_CYCLES|enumerator|WDT_2_19_CYCLES,
DECL|WDT_2_20_CYCLES|enumerator|WDT_2_20_CYCLES,
DECL|WDT_2_21_CYCLES|enumerator|WDT_2_21_CYCLES,
DECL|WDT_2_22_CYCLES|enumerator|WDT_2_22_CYCLES,
DECL|WDT_2_23_CYCLES|enumerator|WDT_2_23_CYCLES,
DECL|WDT_2_24_CYCLES|enumerator|WDT_2_24_CYCLES,
DECL|WDT_2_25_CYCLES|enumerator|WDT_2_25_CYCLES,
DECL|WDT_2_26_CYCLES|enumerator|WDT_2_26_CYCLES,
DECL|WDT_2_27_CYCLES|enumerator|WDT_2_27_CYCLES,
DECL|WDT_2_28_CYCLES|enumerator|WDT_2_28_CYCLES,
DECL|WDT_2_29_CYCLES|enumerator|WDT_2_29_CYCLES,
DECL|WDT_2_30_CYCLES|enumerator|WDT_2_30_CYCLES,
DECL|WDT_2_31_CYCLES|enumerator|WDT_2_31_CYCLES
DECL|WDT_MODE_INTERRUPT_RESET|enumerator|WDT_MODE_INTERRUPT_RESET
DECL|WDT_MODE_OFFSET|macro|WDT_MODE_OFFSET
DECL|WDT_MODE_RESET|enumerator|WDT_MODE_RESET = 0,
DECL|WDT_MODE|macro|WDT_MODE
DECL|WDT_TIMEOUT_MASK|macro|WDT_TIMEOUT_MASK
DECL|_WDT_H_|macro|_WDT_H_
DECL|disable|member|wdt_api_disable disable;
DECL|enable|member|wdt_api_enable enable;
DECL|get_config|member|wdt_api_get_config get_config;
DECL|interrupt_fn|member|void (*interrupt_fn)(struct device *dev);
DECL|mode|member|enum wdt_mode mode;
DECL|reload|member|wdt_api_reload reload;
DECL|set_config|member|wdt_api_set_config set_config;
DECL|timeout|member|uint32_t timeout;
DECL|wdt_api_disable|typedef|typedef void (*wdt_api_disable)(struct device *dev);
DECL|wdt_api_enable|typedef|typedef void (*wdt_api_enable)(struct device *dev);
DECL|wdt_api_get_config|typedef|typedef void (*wdt_api_get_config)(struct device *dev,
DECL|wdt_api_reload|typedef|typedef void (*wdt_api_reload)(struct device *dev);
DECL|wdt_api_set_config|typedef|typedef int (*wdt_api_set_config)(struct device *dev,
DECL|wdt_clock_timeout_cycles|enum|enum wdt_clock_timeout_cycles {
DECL|wdt_config|struct|struct wdt_config {
DECL|wdt_disable|function|static inline void wdt_disable(struct device *dev)
DECL|wdt_driver_api|struct|struct wdt_driver_api {
DECL|wdt_enable|function|static inline void wdt_enable(struct device *dev)
DECL|wdt_get_config|function|static inline void wdt_get_config(struct device *dev, struct wdt_config *config)
DECL|wdt_mode|enum|enum wdt_mode {
DECL|wdt_reload|function|static inline void wdt_reload(struct device *dev)
DECL|wdt_set_config|function|static inline int wdt_set_config(struct device *dev, struct wdt_config *config)
