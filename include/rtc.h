DECL|RTC_ALARM_DAY|macro|RTC_ALARM_DAY
DECL|RTC_ALARM_HOUR|macro|RTC_ALARM_HOUR
DECL|RTC_ALARM_MINUTE|macro|RTC_ALARM_MINUTE
DECL|RTC_ALARM_SECOND|macro|RTC_ALARM_SECOND
DECL|RTC_CLK_DIV_1024|enumerator|RTC_CLK_DIV_1024,
DECL|RTC_CLK_DIV_128|enumerator|RTC_CLK_DIV_128,
DECL|RTC_CLK_DIV_16384|enumerator|RTC_CLK_DIV_16384,
DECL|RTC_CLK_DIV_16|enumerator|RTC_CLK_DIV_16,
DECL|RTC_CLK_DIV_1|enumerator|RTC_CLK_DIV_1,
DECL|RTC_CLK_DIV_2048|enumerator|RTC_CLK_DIV_2048,
DECL|RTC_CLK_DIV_256|enumerator|RTC_CLK_DIV_256,
DECL|RTC_CLK_DIV_2|enumerator|RTC_CLK_DIV_2,
DECL|RTC_CLK_DIV_32768|enumerator|RTC_CLK_DIV_32768
DECL|RTC_CLK_DIV_32|enumerator|RTC_CLK_DIV_32,
DECL|RTC_CLK_DIV_4096|enumerator|RTC_CLK_DIV_4096,
DECL|RTC_CLK_DIV_4|enumerator|RTC_CLK_DIV_4,
DECL|RTC_CLK_DIV_512|enumerator|RTC_CLK_DIV_512,
DECL|RTC_CLK_DIV_64|enumerator|RTC_CLK_DIV_64,
DECL|RTC_CLK_DIV_8192|enumerator|RTC_CLK_DIV_8192,
DECL|RTC_CLK_DIV_8|enumerator|RTC_CLK_DIV_8,
DECL|RTC_DIVIDER|macro|RTC_DIVIDER
DECL|_RTC_H_|macro|_RTC_H_
DECL|alarm_enable|member|uint8_t alarm_enable;
DECL|alarm_val|member|uint32_t alarm_val;
DECL|cb_fn|member|void (*cb_fn)(struct device *dev);
DECL|clk_rtc_div|enum|enum clk_rtc_div {
DECL|disable|member|rtc_api_disable disable;
DECL|enable|member|rtc_api_enable enable;
DECL|init_val|member|uint32_t init_val;
DECL|read|member|rtc_api_read read;
DECL|rtc_api_disable|typedef|typedef void (*rtc_api_disable)(struct device *dev);
DECL|rtc_api_enable|typedef|typedef void (*rtc_api_enable)(struct device *dev);
DECL|rtc_api_read|typedef|typedef uint32_t (*rtc_api_read)(struct device *dev);
DECL|rtc_api_set_alarm|typedef|typedef int (*rtc_api_set_alarm)(struct device *dev,
DECL|rtc_api_set_config|typedef|typedef int (*rtc_api_set_config)(struct device *dev,
DECL|rtc_config|struct|struct rtc_config {
DECL|rtc_disable|function|static inline void rtc_disable(struct device *dev)
DECL|rtc_driver_api|struct|struct rtc_driver_api {
DECL|rtc_enable|function|static inline void rtc_enable(struct device *dev)
DECL|rtc_read|function|static inline uint32_t rtc_read(struct device *dev)
DECL|rtc_set_alarm|function|static inline int rtc_set_alarm(struct device *dev,const uint32_t alarm_val)
DECL|rtc_set_config|function|static inline int rtc_set_config(struct device *dev, struct rtc_config *cfg)
DECL|set_alarm|member|rtc_api_set_alarm set_alarm;
DECL|set_config|member|rtc_api_set_config set_config;
