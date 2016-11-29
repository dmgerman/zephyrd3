DECL|TIMER_CTRL_EN|macro|TIMER_CTRL_EN
DECL|TIMER_CTRL_INT_CLEAR|macro|TIMER_CTRL_INT_CLEAR
DECL|TIMER_CTRL_IRQ_EN|macro|TIMER_CTRL_IRQ_EN
DECL|TIMER_CTRL_SEL_EXT_CLK|macro|TIMER_CTRL_SEL_EXT_CLK
DECL|TIMER_CTRL_SEL_EXT_EN|macro|TIMER_CTRL_SEL_EXT_EN
DECL|TIMER_MAX_RELOAD|macro|TIMER_MAX_RELOAD
DECL|counter_tmr_cmsdk_apb_api|variable|counter_tmr_cmsdk_apb_api
DECL|counter_tmr_cmsdk_apb_cfg_0|variable|counter_tmr_cmsdk_apb_cfg_0
DECL|counter_tmr_cmsdk_apb_cfg_1|variable|counter_tmr_cmsdk_apb_cfg_1
DECL|counter_tmr_cmsdk_apb_cfg|struct|struct counter_tmr_cmsdk_apb_cfg {
DECL|counter_tmr_cmsdk_apb_init|function|static int counter_tmr_cmsdk_apb_init(struct device *dev)
DECL|counter_tmr_cmsdk_apb_read|function|static uint32_t counter_tmr_cmsdk_apb_read(struct device *dev)
DECL|counter_tmr_cmsdk_apb_set_alarm|function|static int counter_tmr_cmsdk_apb_set_alarm(struct device *dev, counter_callback_t callback, uint32_t count, void *user_data)
DECL|counter_tmr_cmsdk_apb_start|function|static int counter_tmr_cmsdk_apb_start(struct device *dev)
DECL|counter_tmr_cmsdk_apb_stop|function|static int counter_tmr_cmsdk_apb_stop(struct device *dev)
DECL|ctrl|member|volatile uint32_t ctrl;
DECL|intclear|member|volatile uint32_t intclear;
DECL|intreg|member|} intreg;
DECL|intstatus|member|volatile uint32_t intstatus;
DECL|reload|member|volatile uint32_t reload;
DECL|timer_cmsdk_apb|struct|struct timer_cmsdk_apb {
DECL|timer|member|volatile struct timer_cmsdk_apb *timer;
DECL|value|member|volatile uint32_t value;
