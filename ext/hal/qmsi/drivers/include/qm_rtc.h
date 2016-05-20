DECL|QM_RTC_ALARM_DAY|macro|QM_RTC_ALARM_DAY
DECL|QM_RTC_ALARM_HOUR|macro|QM_RTC_ALARM_HOUR
DECL|QM_RTC_ALARM_MINUTE|macro|QM_RTC_ALARM_MINUTE
DECL|QM_RTC_ALARM_SECOND|macro|QM_RTC_ALARM_SECOND
DECL|QM_RTC_CCR_ENABLE|macro|QM_RTC_CCR_ENABLE
DECL|QM_RTC_CCR_INTERRUPT_ENABLE|macro|QM_RTC_CCR_INTERRUPT_ENABLE
DECL|QM_RTC_CCR_INTERRUPT_MASK|macro|QM_RTC_CCR_INTERRUPT_MASK
DECL|QM_RTC_DIVIDER|macro|QM_RTC_DIVIDER
DECL|__QM_RTC_H__|macro|__QM_RTC_H__
DECL|alarm_en|member|bool alarm_en; /**< Alarm enable. */
DECL|alarm_val|member|uint32_t alarm_val; /**< Alarm value in RTC clocks. */
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data);
DECL|init_val|member|uint32_t init_val; /**< Initial value in RTC clocks. */
DECL|qm_rtc_config_t|typedef|} qm_rtc_config_t;
