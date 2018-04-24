DECL|RTC_ALARM_DAY|macro|RTC_ALARM_DAY
DECL|RTC_ALARM_HOUR|macro|RTC_ALARM_HOUR
DECL|RTC_ALARM_MINUTE|macro|RTC_ALARM_MINUTE
DECL|RTC_ALARM_SECOND|macro|RTC_ALARM_SECOND
DECL|_RTC_H_|macro|_RTC_H_
DECL|_impl_rtc_disable|function|static inline void _impl_rtc_disable(struct device *dev)
DECL|_impl_rtc_enable|function|static inline void _impl_rtc_enable(struct device *dev)
DECL|_impl_rtc_get_pending_int|function|static inline int _impl_rtc_get_pending_int(struct device *dev)
DECL|_impl_rtc_read|function|static inline u32_t _impl_rtc_read(struct device *dev)
DECL|_impl_rtc_set_alarm|function|static inline int _impl_rtc_set_alarm(struct device *dev, const u32_t alarm_val)
DECL|alarm_enable|member|u8_t alarm_enable;
DECL|alarm_val|member|u32_t alarm_val;
DECL|cb_fn|member|void (*cb_fn)(struct device *dev);
DECL|disable|member|rtc_api_disable disable;
DECL|enable|member|rtc_api_enable enable;
DECL|get_pending_int|member|rtc_api_get_pending_int get_pending_int;
DECL|init_val|member|u32_t init_val;
DECL|read|member|rtc_api_read read;
DECL|rtc_api_disable|typedef|typedef void (*rtc_api_disable)(struct device *dev);
DECL|rtc_api_enable|typedef|typedef void (*rtc_api_enable)(struct device *dev);
DECL|rtc_api_get_pending_int|typedef|typedef u32_t (*rtc_api_get_pending_int)(struct device *dev);
DECL|rtc_api_read|typedef|typedef u32_t (*rtc_api_read)(struct device *dev);
DECL|rtc_api_set_alarm|typedef|typedef int (*rtc_api_set_alarm)(struct device *dev,
DECL|rtc_api_set_config|typedef|typedef int (*rtc_api_set_config)(struct device *dev,
DECL|rtc_config|struct|struct rtc_config {
DECL|rtc_driver_api|struct|struct rtc_driver_api {
DECL|rtc_set_config|function|static inline int rtc_set_config(struct device *dev, struct rtc_config *cfg)
DECL|set_alarm|member|rtc_api_set_alarm set_alarm;
DECL|set_config|member|rtc_api_set_config set_config;
