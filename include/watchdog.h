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
DECL|WDT_FLAG_RESET_CPU_CORE|macro|WDT_FLAG_RESET_CPU_CORE
DECL|WDT_FLAG_RESET_MASK|macro|WDT_FLAG_RESET_MASK
DECL|WDT_FLAG_RESET_NONE|macro|WDT_FLAG_RESET_NONE
DECL|WDT_FLAG_RESET_SHIFT|macro|WDT_FLAG_RESET_SHIFT
DECL|WDT_FLAG_RESET_SOC|macro|WDT_FLAG_RESET_SOC
DECL|WDT_MODE_INTERRUPT_RESET|enumerator|WDT_MODE_INTERRUPT_RESET
DECL|WDT_MODE_OFFSET|macro|WDT_MODE_OFFSET
DECL|WDT_MODE_RESET|enumerator|WDT_MODE_RESET = 0,
DECL|WDT_MODE|macro|WDT_MODE
DECL|WDT_OPT_PAUSE_HALTED_BY_DBG|macro|WDT_OPT_PAUSE_HALTED_BY_DBG
DECL|WDT_OPT_PAUSE_IN_SLEEP|macro|WDT_OPT_PAUSE_IN_SLEEP
DECL|WDT_TIMEOUT_MASK|macro|WDT_TIMEOUT_MASK
DECL|_WDT_H_|macro|_WDT_H_
DECL|callback|member|wdt_callback_t callback;
DECL|disable|member|wdt_api_disable disable;
DECL|enable|member|wdt_api_enable enable;
DECL|feed|member|wdt_api_feed feed;
DECL|flags|member|u8_t flags;
DECL|get_config|member|wdt_api_get_config get_config;
DECL|install_timeout|member|wdt_api_install_timeout install_timeout;
DECL|interrupt_fn|member|void (*interrupt_fn)(struct device *dev);
DECL|max|member|u32_t max;
DECL|min|member|u32_t min;
DECL|mode|member|enum wdt_mode mode;
DECL|next|member|struct wdt_timeout_cfg *next;
DECL|reload|member|wdt_api_reload reload;
DECL|set_config|member|wdt_api_set_config set_config;
DECL|setup|member|wdt_api_setup setup;
DECL|timeout|member|u32_t timeout;
DECL|wdt_api_disable|typedef|typedef int (*wdt_api_disable)(struct device *dev);
DECL|wdt_api_enable|typedef|typedef void (*wdt_api_enable)(struct device *dev);
DECL|wdt_api_feed|typedef|typedef int (*wdt_api_feed)(struct device *dev, int channel_id);
DECL|wdt_api_get_config|typedef|typedef void (*wdt_api_get_config)(struct device *dev,
DECL|wdt_api_install_timeout|typedef|typedef int (*wdt_api_install_timeout)(struct device *dev,
DECL|wdt_api_reload|typedef|typedef void (*wdt_api_reload)(struct device *dev);
DECL|wdt_api_set_config|typedef|typedef int (*wdt_api_set_config)(struct device *dev,
DECL|wdt_api_setup|typedef|typedef int (*wdt_api_setup)(struct device *dev, u8_t options);
DECL|wdt_callback_t|typedef|typedef void (*wdt_callback_t)(struct device *dev, int channel_id);
DECL|wdt_clock_timeout_cycles|enum|enum wdt_clock_timeout_cycles {
DECL|wdt_config|struct|struct wdt_config {
DECL|wdt_disable|function|static inline int wdt_disable(struct device *dev)
DECL|wdt_driver_api|struct|struct wdt_driver_api {
DECL|wdt_enable|function|static inline void __deprecated wdt_enable(struct device *dev)
DECL|wdt_feed|function|static inline int wdt_feed(struct device *dev, int channel_id)
DECL|wdt_get_config|function|static inline void __deprecated wdt_get_config(struct device *dev, struct wdt_config *config)
DECL|wdt_install_timeout|function|static inline int wdt_install_timeout(struct device *dev, const struct wdt_timeout_cfg *cfg)
DECL|wdt_mode|enum|enum wdt_mode {
DECL|wdt_reload|function|static inline void __deprecated wdt_reload(struct device *dev)
DECL|wdt_set_config|function|static inline int __deprecated wdt_set_config(struct device *dev, struct wdt_config *config)
DECL|wdt_setup|function|static inline int wdt_setup(struct device *dev, u8_t options)
DECL|wdt_timeout_cfg|struct|struct wdt_timeout_cfg {
DECL|wdt_window|struct|struct wdt_window {
DECL|window|member|struct wdt_window window;
