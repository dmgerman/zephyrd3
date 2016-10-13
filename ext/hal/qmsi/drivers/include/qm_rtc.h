DECL|QM_RTC_ALARM_DAY|macro|QM_RTC_ALARM_DAY
DECL|QM_RTC_ALARM_HOUR|macro|QM_RTC_ALARM_HOUR
DECL|QM_RTC_ALARM_MINUTE|macro|QM_RTC_ALARM_MINUTE
DECL|QM_RTC_ALARM_SECOND|macro|QM_RTC_ALARM_SECOND
DECL|__QM_RTC_H__|macro|__QM_RTC_H__
DECL|alarm_en|member|bool alarm_en; /**< Alarm enable. */
DECL|alarm_val|member|uint32_t alarm_val; /**< Alarm value in RTC clocks. */
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data);
DECL|init_val|member|uint32_t init_val; /**< Initial value in RTC clocks. */
DECL|prescaler|member|clk_rtc_div_t prescaler;
DECL|qm_rtc_config_t|typedef|} qm_rtc_config_t;
