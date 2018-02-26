DECL|FSL_RTC_DRIVER_VERSION|macro|FSL_RTC_DRIVER_VERSION
DECL|RTC_ClearStatusFlags|function|static inline void RTC_ClearStatusFlags(RTC_Type *base, uint32_t mask)
DECL|RTC_Deinit|function|static inline void RTC_Deinit(RTC_Type *base)
DECL|RTC_DisableInterrupts|function|static inline void RTC_DisableInterrupts(RTC_Type *base, uint32_t mask)
DECL|RTC_EnableInterrupts|function|static inline void RTC_EnableInterrupts(RTC_Type *base, uint32_t mask)
DECL|RTC_GetEnabledInterrupts|function|static inline uint32_t RTC_GetEnabledInterrupts(RTC_Type *base)
DECL|RTC_GetStatusFlags|function|static inline uint32_t RTC_GetStatusFlags(RTC_Type *base)
DECL|RTC_GetWakeupCount|function|static inline uint16_t RTC_GetWakeupCount(RTC_Type *base)
DECL|RTC_Reset|function|static inline void RTC_Reset(RTC_Type *base)
DECL|RTC_SetWakeupCount|function|static inline void RTC_SetWakeupCount(RTC_Type *base, uint16_t wakeupValue)
DECL|RTC_StartTimer|function|static inline void RTC_StartTimer(RTC_Type *base)
DECL|RTC_StopTimer|function|static inline void RTC_StopTimer(RTC_Type *base)
DECL|_FSL_RTC_H_|macro|_FSL_RTC_H_
DECL|_rtc_datetime|struct|typedef struct _rtc_datetime
DECL|_rtc_interrupt_enable|enum|typedef enum _rtc_interrupt_enable
DECL|_rtc_status_flags|enum|typedef enum _rtc_status_flags
DECL|day|member|uint8_t day; /*!< Range from 1 to 31 (depending on month).*/
DECL|hour|member|uint8_t hour; /*!< Range from 0 to 23.*/
DECL|kRTC_AlarmFlag|enumerator|kRTC_AlarmFlag = RTC_CTRL_ALARM1HZ_MASK, /*!< Alarm flag*/
DECL|kRTC_AlarmInterruptEnable|enumerator|kRTC_AlarmInterruptEnable = RTC_CTRL_ALARMDPD_EN_MASK, /*!< Alarm interrupt.*/
DECL|kRTC_WakeupFlag|enumerator|kRTC_WakeupFlag = RTC_CTRL_WAKE1KHZ_MASK /*!< 1kHz wake-up timer flag*/
DECL|kRTC_WakeupInterruptEnable|enumerator|kRTC_WakeupInterruptEnable = RTC_CTRL_WAKEDPD_EN_MASK /*!< Wake-up interrupt.*/
DECL|minute|member|uint8_t minute; /*!< Range from 0 to 59.*/
DECL|month|member|uint8_t month; /*!< Range from 1 to 12.*/
DECL|rtc_datetime_t|typedef|} rtc_datetime_t;
DECL|rtc_interrupt_enable_t|typedef|} rtc_interrupt_enable_t;
DECL|rtc_status_flags_t|typedef|} rtc_status_flags_t;
DECL|second|member|uint8_t second; /*!< Range from 0 to 59.*/
DECL|year|member|uint16_t year; /*!< Range from 1970 to 2099.*/
