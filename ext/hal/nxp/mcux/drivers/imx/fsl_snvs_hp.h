DECL|FSL_SNVS_HP_DRIVER_VERSION|macro|FSL_SNVS_HP_DRIVER_VERSION
DECL|SNVS_HP_RTC_StartTimer|function|static inline void SNVS_HP_RTC_StartTimer(SNVS_Type *base)
DECL|SNVS_HP_RTC_StopTimer|function|static inline void SNVS_HP_RTC_StopTimer(SNVS_Type *base)
DECL|_FSL_SNVS_HP_H_|macro|_FSL_SNVS_HP_H_
DECL|_snvs_hp_interrupt_enable|enum|typedef enum _snvs_hp_interrupt_enable
DECL|_snvs_hp_rtc_config|struct|typedef struct _snvs_hp_rtc_config
DECL|_snvs_hp_rtc_datetime|struct|typedef struct _snvs_hp_rtc_datetime
DECL|_snvs_hp_status_flags|enum|typedef enum _snvs_hp_status_flags
DECL|day|member|uint8_t day; /*!< Range from 1 to 31 (depending on month).*/
DECL|hour|member|uint8_t hour; /*!< Range from 0 to 23.*/
DECL|kSNVS_RTC_AlarmInterruptEnable|enumerator|kSNVS_RTC_AlarmInterruptEnable = 2U, /*!< RTC time alarm.*/
DECL|kSNVS_RTC_AlarmInterruptFlag|enumerator|kSNVS_RTC_AlarmInterruptFlag = 2U, /*!< RTC time alarm flag */
DECL|kSNVS_RTC_PeriodicInterruptEnable|enumerator|kSNVS_RTC_PeriodicInterruptEnable = 1U, /*!< RTC periodic interrupt.*/
DECL|kSNVS_RTC_PeriodicInterruptFlag|enumerator|kSNVS_RTC_PeriodicInterruptFlag = 1U, /*!< RTC periodic interrupt flag */
DECL|minute|member|uint8_t minute; /*!< Range from 0 to 59.*/
DECL|month|member|uint8_t month; /*!< Range from 1 to 12.*/
DECL|periodicInterruptFreq|member|uint32_t periodicInterruptFreq; /*!< Defines frequency of the periodic interrupt;
DECL|rtcCalEnable|member|bool rtcCalEnable; /*!< true: RTC calibration mechanism is enabled;
DECL|rtcCalValue|member|uint32_t rtcCalValue; /*!< Defines signed calibration value for nonsecure RTC;
DECL|second|member|uint8_t second; /*!< Range from 0 to 59.*/
DECL|snvs_hp_interrupt_enable_t|typedef|} snvs_hp_interrupt_enable_t;
DECL|snvs_hp_rtc_config_t|typedef|} snvs_hp_rtc_config_t;
DECL|snvs_hp_rtc_datetime_t|typedef|} snvs_hp_rtc_datetime_t;
DECL|snvs_hp_status_flags_t|typedef|} snvs_hp_status_flags_t;
DECL|year|member|uint16_t year; /*!< Range from 1970 to 2099.*/
