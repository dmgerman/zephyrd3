DECL|DTIMER_DISABLED|enumerator|DTIMER_DISABLED = 0,
DECL|DTIMER_ENABLED|enumerator|DTIMER_ENABLED,
DECL|DUALTIMER_MAX_RELOAD|macro|DUALTIMER_MAX_RELOAD
DECL|dtimer_cc_as|member|const struct arm_clock_control_t dtimer_cc_as;
DECL|dtimer_cc_dss|member|const struct arm_clock_control_t dtimer_cc_dss;
DECL|dtimer_cc_ss|member|const struct arm_clock_control_t dtimer_cc_ss;
DECL|dtimer_cmsdk_apb_config_0|function|static void dtimer_cmsdk_apb_config_0(struct device *dev)
DECL|dtimer_config_func_t|typedef|typedef void (*dtimer_config_func_t)(struct device *dev);
DECL|dtimer_config_func|member|dtimer_config_func_t dtimer_config_func;
DECL|dtimer_status_t|enum|enum dtimer_status_t {
DECL|dtimer|member|volatile struct dualtimer_cmsdk_apb *dtimer;
DECL|load|member|uint32_t load;
DECL|status|member|enum dtimer_status_t status;
DECL|timer_dtmr_cmsdk_apb_api|variable|timer_dtmr_cmsdk_apb_api
DECL|timer_dtmr_cmsdk_apb_cfg_0|variable|timer_dtmr_cmsdk_apb_cfg_0
DECL|timer_dtmr_cmsdk_apb_cfg|struct|struct timer_dtmr_cmsdk_apb_cfg {
DECL|timer_dtmr_cmsdk_apb_dev_data_0|variable|timer_dtmr_cmsdk_apb_dev_data_0
DECL|timer_dtmr_cmsdk_apb_dev_data|struct|struct timer_dtmr_cmsdk_apb_dev_data {
DECL|timer_dtmr_cmsdk_apb_get_pending_int|function|static uint32_t timer_dtmr_cmsdk_apb_get_pending_int(struct device *dev)
DECL|timer_dtmr_cmsdk_apb_init|function|static int timer_dtmr_cmsdk_apb_init(struct device *dev)
DECL|timer_dtmr_cmsdk_apb_isr|function|static void timer_dtmr_cmsdk_apb_isr(void *arg)
DECL|timer_dtmr_cmsdk_apb_read|function|static uint32_t timer_dtmr_cmsdk_apb_read(struct device *dev)
DECL|timer_dtmr_cmsdk_apb_set_alarm|function|static int timer_dtmr_cmsdk_apb_set_alarm(struct device *dev, counter_callback_t callback, uint32_t count, void *user_data)
DECL|timer_dtmr_cmsdk_apb_start|function|static int timer_dtmr_cmsdk_apb_start(struct device *dev)
DECL|timer_dtmr_cmsdk_apb_stop|function|static int timer_dtmr_cmsdk_apb_stop(struct device *dev)
DECL|user_cb|variable|user_cb
