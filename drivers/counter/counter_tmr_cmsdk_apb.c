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
DECL|timer_cc_as|member|const struct arm_clock_control_t timer_cc_as;
DECL|timer_cc_dss|member|const struct arm_clock_control_t timer_cc_dss;
DECL|timer_cc_ss|member|const struct arm_clock_control_t timer_cc_ss;
DECL|timer|member|volatile struct timer_cmsdk_apb *timer;
