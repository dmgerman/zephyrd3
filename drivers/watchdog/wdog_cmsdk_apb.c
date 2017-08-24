DECL|CMSDK_APB_WDOG_CTRL_INTEN|macro|CMSDK_APB_WDOG_CTRL_INTEN
DECL|CMSDK_APB_WDOG_CTRL_RESEN|macro|CMSDK_APB_WDOG_CTRL_RESEN
DECL|CMSDK_APB_WDOG_INTCLR|macro|CMSDK_APB_WDOG_INTCLR
DECL|CMSDK_APB_WDOG_INTEGTESTEN|macro|CMSDK_APB_WDOG_INTEGTESTEN
DECL|CMSDK_APB_WDOG_INTEGTESTOUTSET|macro|CMSDK_APB_WDOG_INTEGTESTOUTSET
DECL|CMSDK_APB_WDOG_LOAD|macro|CMSDK_APB_WDOG_LOAD
DECL|CMSDK_APB_WDOG_LOCK_VALUE|macro|CMSDK_APB_WDOG_LOCK_VALUE
DECL|CMSDK_APB_WDOG_LOCK|macro|CMSDK_APB_WDOG_LOCK
DECL|CMSDK_APB_WDOG_MASKINTSTAT|macro|CMSDK_APB_WDOG_MASKINTSTAT
DECL|CMSDK_APB_WDOG_RAWINTSTAT|macro|CMSDK_APB_WDOG_RAWINTSTAT
DECL|CMSDK_APB_WDOG_RELOAD|macro|CMSDK_APB_WDOG_RELOAD
DECL|CMSDK_APB_WDOG_UNLOCK_VALUE|macro|CMSDK_APB_WDOG_UNLOCK_VALUE
DECL|CMSDK_APB_WDOG_VALUE|macro|CMSDK_APB_WDOG_VALUE
DECL|WDOG_STRUCT|macro|WDOG_STRUCT
DECL|ctrl|member|volatile u32_t ctrl;
DECL|intclr|member|volatile u32_t intclr;
DECL|itcr|member|volatile u32_t itcr;
DECL|itop|member|volatile u32_t itop;
DECL|load|member|volatile u32_t load;
DECL|lock|member|volatile u32_t lock;
DECL|maskintstat|member|volatile u32_t maskintstat;
DECL|mode|variable|mode
DECL|rawintstat|member|volatile u32_t rawintstat;
DECL|reload_s|variable|reload_s
DECL|reserved0|member|volatile u32_t reserved0[762];
DECL|reserved1|member|volatile u32_t reserved1[191];
DECL|user_cb|variable|user_cb
DECL|value|member|volatile u32_t value;
DECL|wdog_cmsdk_apb_api|variable|wdog_cmsdk_apb_api
DECL|wdog_cmsdk_apb_disable|function|static int wdog_cmsdk_apb_disable(struct device *dev)
DECL|wdog_cmsdk_apb_enable|function|static void wdog_cmsdk_apb_enable(struct device *dev)
DECL|wdog_cmsdk_apb_get_config|function|static void wdog_cmsdk_apb_get_config(struct device *dev, struct wdt_config *config)
DECL|wdog_cmsdk_apb_has_fired|function|static int wdog_cmsdk_apb_has_fired(void)
DECL|wdog_cmsdk_apb_init|function|static int wdog_cmsdk_apb_init(struct device *dev)
DECL|wdog_cmsdk_apb_isr|function|static void wdog_cmsdk_apb_isr(void)
DECL|wdog_cmsdk_apb_reload|function|static void wdog_cmsdk_apb_reload(struct device *dev)
DECL|wdog_cmsdk_apb_set_config|function|static int wdog_cmsdk_apb_set_config(struct device *dev, struct wdt_config *config)
DECL|wdog_cmsdk_apb_unlock|function|static void wdog_cmsdk_apb_unlock(struct device *dev)
DECL|wdog_cmsdk_apb|struct|struct wdog_cmsdk_apb {
DECL|wdog_r|variable|wdog_r
