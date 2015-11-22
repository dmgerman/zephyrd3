DECL|WDT_MODE_INTERRUPT_RESET|enumerator|typedef enum { WDT_MODE_RESET = 0, WDT_MODE_INTERRUPT_RESET } wdt_mode_t;
DECL|WDT_MODE_RESET|enumerator|typedef enum { WDT_MODE_RESET = 0, WDT_MODE_INTERRUPT_RESET } wdt_mode_t;
DECL|_WDT_H_|macro|_WDT_H_
DECL|disable|member|wdt_api_disable disable;
DECL|enable|member|wdt_api_enable enable;
DECL|get_config|member|wdt_api_get_config get_config;
DECL|interrupt_fn|member|void (*interrupt_fn)(void);
DECL|mode|member|wdt_mode_t mode;
DECL|reload|member|wdt_api_reload reload;
DECL|set_config|member|wdt_api_set_config set_config;
DECL|timeout|member|uint32_t timeout;
DECL|wdt_api_disable|typedef|typedef void (*wdt_api_disable)(void);
DECL|wdt_api_enable|typedef|typedef void (*wdt_api_enable)(void);
DECL|wdt_api_get_config|typedef|typedef void (*wdt_api_get_config)(struct wdt_config *config);
DECL|wdt_api_reload|typedef|typedef void (*wdt_api_reload)(void);
DECL|wdt_api_set_config|typedef|typedef int (*wdt_api_set_config)(struct wdt_config *config);
DECL|wdt_config|struct|struct wdt_config {
DECL|wdt_disable|function|static inline void wdt_disable(struct device *dev)
DECL|wdt_driver_api|struct|struct wdt_driver_api {
DECL|wdt_enable|function|static inline void wdt_enable(struct device *dev)
DECL|wdt_get_config|function|static inline void wdt_get_config(struct device *dev, struct wdt_config *config)
DECL|wdt_mode_t|typedef|typedef enum { WDT_MODE_RESET = 0, WDT_MODE_INTERRUPT_RESET } wdt_mode_t;
DECL|wdt_reload|function|static inline void wdt_reload(struct device *dev)
DECL|wdt_set_config|function|static inline int wdt_set_config(struct device *dev, struct wdt_config *config)
