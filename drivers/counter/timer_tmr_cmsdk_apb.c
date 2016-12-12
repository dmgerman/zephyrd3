DECL|TIMER_DISABLED|enumerator|TIMER_DISABLED = 0,
DECL|TIMER_ENABLED|enumerator|TIMER_ENABLED,
DECL|TIMER_MAX_RELOAD|macro|TIMER_MAX_RELOAD
DECL|load|member|uint32_t load;
DECL|status|member|enum timer_status_t status;
DECL|timer_cc_as|member|const struct arm_clock_control_t timer_cc_as;
DECL|timer_cc_dss|member|const struct arm_clock_control_t timer_cc_dss;
DECL|timer_cc_ss|member|const struct arm_clock_control_t timer_cc_ss;
DECL|timer_cmsdk_apb_config_0|function|static void timer_cmsdk_apb_config_0(struct device *dev)
DECL|timer_cmsdk_apb_config_1|function|static void timer_cmsdk_apb_config_1(struct device *dev)
DECL|timer_config_func_t|typedef|typedef void (*timer_config_func_t)(struct device *dev);
DECL|timer_config_func|member|timer_config_func_t timer_config_func;
DECL|timer_status_t|enum|enum timer_status_t {
DECL|timer_tmr_cmsdk_apb_api|variable|timer_tmr_cmsdk_apb_api
DECL|timer_tmr_cmsdk_apb_cfg_0|variable|timer_tmr_cmsdk_apb_cfg_0
DECL|timer_tmr_cmsdk_apb_cfg_1|variable|timer_tmr_cmsdk_apb_cfg_1
DECL|timer_tmr_cmsdk_apb_cfg|struct|struct timer_tmr_cmsdk_apb_cfg {
DECL|timer_tmr_cmsdk_apb_dev_data_0|variable|timer_tmr_cmsdk_apb_dev_data_0
DECL|timer_tmr_cmsdk_apb_dev_data_1|variable|timer_tmr_cmsdk_apb_dev_data_1
DECL|timer_tmr_cmsdk_apb_dev_data|struct|struct timer_tmr_cmsdk_apb_dev_data {
DECL|timer_tmr_cmsdk_apb_get_pending_int|function|static uint32_t timer_tmr_cmsdk_apb_get_pending_int(struct device *dev)
DECL|timer_tmr_cmsdk_apb_init|function|static int timer_tmr_cmsdk_apb_init(struct device *dev)
DECL|timer_tmr_cmsdk_apb_isr|function|static void timer_tmr_cmsdk_apb_isr(void *arg)
DECL|timer_tmr_cmsdk_apb_read|function|static uint32_t timer_tmr_cmsdk_apb_read(struct device *dev)
DECL|timer_tmr_cmsdk_apb_set_alarm|function|static int timer_tmr_cmsdk_apb_set_alarm(struct device *dev, counter_callback_t callback, uint32_t count, void *user_data)
DECL|timer_tmr_cmsdk_apb_start|function|static int timer_tmr_cmsdk_apb_start(struct device *dev)
DECL|timer_tmr_cmsdk_apb_stop|function|static int timer_tmr_cmsdk_apb_stop(struct device *dev)
DECL|timer|member|volatile struct timer_cmsdk_apb *timer;
DECL|user_cb|variable|user_cb
