DECL|base|member|RTC_Type *base;
DECL|callback_data|member|void *callback_data;
DECL|callback|member|void (*callback)(void *data);
DECL|config|member|rtc_config_t config;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_rtc_config|struct|struct mcux_rtc_config {
DECL|mcux_rtc_data|struct|struct mcux_rtc_data {
DECL|mcux_rtc_disable|function|static void mcux_rtc_disable(struct device *dev)
DECL|mcux_rtc_driver_api|variable|mcux_rtc_driver_api
DECL|mcux_rtc_enable|function|static void mcux_rtc_enable(struct device *dev)
DECL|mcux_rtc_get_pending_int|function|static u32_t mcux_rtc_get_pending_int(struct device *dev)
DECL|mcux_rtc_init|function|static int mcux_rtc_init(struct device *dev)
DECL|mcux_rtc_isr|function|static void mcux_rtc_isr(void *arg)
DECL|mcux_rtc_read|function|static u32_t mcux_rtc_read(struct device *dev)
DECL|mcux_rtc_set_alarm|function|static int mcux_rtc_set_alarm(struct device *dev, const u32_t alarm_val)
DECL|mcux_rtc_set_config|function|static int mcux_rtc_set_config(struct device *dev, struct rtc_config *cfg)
DECL|rtc_mcux_config_0|variable|rtc_mcux_config_0
DECL|rtc_mcux_data_0|variable|rtc_mcux_data_0
DECL|rtc_mcux_irq_config_0|function|static void rtc_mcux_irq_config_0(struct device *dev)
DECL|sync|member|struct k_sem sync;
