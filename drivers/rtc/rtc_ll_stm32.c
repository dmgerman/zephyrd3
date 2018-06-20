DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_SEM|macro|DEV_SEM
DECL|EPOCH_OFFSET|macro|EPOCH_OFFSET
DECL|EXTI_LINE|macro|EXTI_LINE
DECL|EXTI_LINE|macro|EXTI_LINE
DECL|cb_fn|member|void (*cb_fn)(struct device *dev);
DECL|ll_rtc_config|member|LL_RTC_InitTypeDef ll_rtc_config;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|rtc_api|variable|rtc_api
DECL|rtc_config|variable|rtc_config
DECL|rtc_data|variable|rtc_data
DECL|rtc_stm32_config|struct|struct rtc_stm32_config {
DECL|rtc_stm32_data|struct|struct rtc_stm32_data {
DECL|rtc_stm32_disable|function|static void rtc_stm32_disable(struct device *dev)
DECL|rtc_stm32_enable|function|static void rtc_stm32_enable(struct device *dev)
DECL|rtc_stm32_get_pending_int|function|static u32_t rtc_stm32_get_pending_int(struct device *dev)
DECL|rtc_stm32_init|function|static int rtc_stm32_init(struct device *dev)
DECL|rtc_stm32_irq_config|function|static void rtc_stm32_irq_config(struct device *dev)
DECL|rtc_stm32_isr|function|void rtc_stm32_isr(void *arg)
DECL|rtc_stm32_read|function|static u32_t rtc_stm32_read(struct device *dev)
DECL|rtc_stm32_set_alarm|function|static int rtc_stm32_set_alarm(struct device *dev, const u32_t alarm_val)
DECL|rtc_stm32_set_config|function|static int rtc_stm32_set_config(struct device *dev, struct rtc_config *cfg)
DECL|sem|member|struct k_sem sem;
