DECL|DUALTIMER_MAX_RELOAD|macro|DUALTIMER_MAX_RELOAD
DECL|counter_dtmr_cmsdk_apb_api|variable|counter_dtmr_cmsdk_apb_api
DECL|counter_dtmr_cmsdk_apb_cfg_0|variable|counter_dtmr_cmsdk_apb_cfg_0
DECL|counter_dtmr_cmsdk_apb_cfg|struct|struct counter_dtmr_cmsdk_apb_cfg {
DECL|counter_dtmr_cmsdk_apb_init|function|static int counter_dtmr_cmsdk_apb_init(struct device *dev)
DECL|counter_dtmr_cmsdk_apb_read|function|static u32_t counter_dtmr_cmsdk_apb_read(struct device *dev)
DECL|counter_dtmr_cmsdk_apb_set_alarm|function|static int counter_dtmr_cmsdk_apb_set_alarm(struct device *dev, counter_callback_t callback, u32_t count, void *user_data)
DECL|counter_dtmr_cmsdk_apb_start|function|static int counter_dtmr_cmsdk_apb_start(struct device *dev)
DECL|counter_dtmr_cmsdk_apb_stop|function|static int counter_dtmr_cmsdk_apb_stop(struct device *dev)
DECL|dtimer_cc_as|member|const struct arm_clock_control_t dtimer_cc_as;
DECL|dtimer_cc_dss|member|const struct arm_clock_control_t dtimer_cc_dss;
DECL|dtimer_cc_ss|member|const struct arm_clock_control_t dtimer_cc_ss;
DECL|dtimer|member|volatile struct dualtimer_cmsdk_apb *dtimer;
