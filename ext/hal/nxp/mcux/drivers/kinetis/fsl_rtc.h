DECL|FSL_RTC_DRIVER_VERSION|macro|FSL_RTC_DRIVER_VERSION
DECL|RTC_Deinit|function|static inline void RTC_Deinit(RTC_Type *base)
DECL|RTC_DisableInterrupts|function|static inline void RTC_DisableInterrupts(RTC_Type *base, uint32_t mask)
DECL|RTC_EnableInterrupts|function|static inline void RTC_EnableInterrupts(RTC_Type *base, uint32_t mask)
DECL|RTC_GetEnabledInterrupts|function|static inline uint32_t RTC_GetEnabledInterrupts(RTC_Type *base)
DECL|RTC_GetStatusFlags|function|static inline uint32_t RTC_GetStatusFlags(RTC_Type *base)
DECL|RTC_Reset|function|static inline void RTC_Reset(RTC_Type *base)
DECL|RTC_SetOscCapLoad|function|static inline void RTC_SetOscCapLoad(RTC_Type *base, uint32_t capLoad)
DECL|RTC_StartTimer|function|static inline void RTC_StartTimer(RTC_Type *base)
DECL|RTC_StopTimer|function|static inline void RTC_StopTimer(RTC_Type *base)
DECL|_FSL_RTC_H_|macro|_FSL_RTC_H_
DECL|_rtc_config|struct|typedef struct _rtc_config
DECL|_rtc_datetime|struct|typedef struct _rtc_datetime
DECL|_rtc_interrupt_enable|enum|typedef enum _rtc_interrupt_enable
DECL|_rtc_osc_cap_load|enum|typedef enum _rtc_osc_cap_load
DECL|_rtc_status_flags|enum|typedef enum _rtc_status_flags
DECL|compensationInterval|member|uint32_t compensationInterval; /*!< Compensation interval that is written to the CIR field in RTC TCR Register */
DECL|compensationTime|member|uint32_t compensationTime; /*!< Compensation time that is written to the TCR field in RTC TCR Register */
DECL|day|member|uint8_t day; /*!< Range from 1 to 31 (depending on month).*/
DECL|hour|member|uint8_t hour; /*!< Range from 0 to 23.*/
DECL|kRTC_AlarmFlag|enumerator|kRTC_AlarmFlag = RTC_SR_TAF_MASK /*!< Alarm flag*/
DECL|kRTC_AlarmInterruptEnable|enumerator|kRTC_AlarmInterruptEnable = RTC_IER_TAIE_MASK, /*!< Alarm interrupt.*/
DECL|kRTC_Capacitor_16p|enumerator|kRTC_Capacitor_16p = RTC_CR_SC16P_MASK /*!< 16 pF capacitor load */
DECL|kRTC_Capacitor_2p|enumerator|kRTC_Capacitor_2p = RTC_CR_SC2P_MASK, /*!< 2 pF capacitor load */
DECL|kRTC_Capacitor_4p|enumerator|kRTC_Capacitor_4p = RTC_CR_SC4P_MASK, /*!< 4 pF capacitor load */
DECL|kRTC_Capacitor_8p|enumerator|kRTC_Capacitor_8p = RTC_CR_SC8P_MASK, /*!< 8 pF capacitor load */
DECL|kRTC_SecondsInterruptEnable|enumerator|kRTC_SecondsInterruptEnable = RTC_IER_TSIE_MASK /*!< Seconds interrupt.*/
DECL|kRTC_TimeInvalidFlag|enumerator|kRTC_TimeInvalidFlag = RTC_SR_TIF_MASK, /*!< Time invalid flag */
DECL|kRTC_TimeInvalidInterruptEnable|enumerator|kRTC_TimeInvalidInterruptEnable = RTC_IER_TIIE_MASK, /*!< Time invalid interrupt.*/
DECL|kRTC_TimeOverflowFlag|enumerator|kRTC_TimeOverflowFlag = RTC_SR_TOF_MASK, /*!< Time overflow flag */
DECL|kRTC_TimeOverflowInterruptEnable|enumerator|kRTC_TimeOverflowInterruptEnable = RTC_IER_TOIE_MASK, /*!< Time overflow interrupt.*/
DECL|minute|member|uint8_t minute; /*!< Range from 0 to 59.*/
DECL|month|member|uint8_t month; /*!< Range from 1 to 12.*/
DECL|rtc_config_t|typedef|} rtc_config_t;
DECL|rtc_datetime_t|typedef|} rtc_datetime_t;
DECL|rtc_interrupt_enable_t|typedef|} rtc_interrupt_enable_t;
DECL|rtc_osc_cap_load_t|typedef|} rtc_osc_cap_load_t;
DECL|rtc_status_flags_t|typedef|} rtc_status_flags_t;
DECL|second|member|uint8_t second; /*!< Range from 0 to 59.*/
DECL|supervisorAccess|member|bool supervisorAccess; /*!< true: Non-supervisor accesses are allowed;
DECL|updateMode|member|bool updateMode; /*!< true: Registers can be written even when locked under certain
DECL|wakeupSelect|member|bool wakeupSelect; /*!< true: Wakeup pin outputs the 32 KHz clock;
DECL|year|member|uint16_t year; /*!< Range from 1970 to 2099.*/
