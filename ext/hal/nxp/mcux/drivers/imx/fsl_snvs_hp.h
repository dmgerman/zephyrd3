DECL|FSL_SNVS_HP_DRIVER_VERSION|macro|FSL_SNVS_HP_DRIVER_VERSION
DECL|SNVS_HP_ChangeSSMState|function|static inline void SNVS_HP_ChangeSSMState(SNVS_Type *base)
DECL|SNVS_HP_ClearHighAssuranceCounter|function|static inline void SNVS_HP_ClearHighAssuranceCounter(SNVS_Type *base)
DECL|SNVS_HP_ClearStatusFlags|function|static inline void SNVS_HP_ClearStatusFlags(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_EnableHighAssuranceCounter|function|static inline void SNVS_HP_EnableHighAssuranceCounter(SNVS_Type *base, bool enable)
DECL|SNVS_HP_EnableMasterKeySelection|function|static inline void SNVS_HP_EnableMasterKeySelection(SNVS_Type *base, bool enable)
DECL|SNVS_HP_GetHighAssuranceCounter|function|static inline uint32_t SNVS_HP_GetHighAssuranceCounter(SNVS_Type *base)
DECL|SNVS_HP_GetSSMState|function|static inline snvs_hp_ssm_state_t SNVS_HP_GetSSMState(SNVS_Type *base)
DECL|SNVS_HP_GetStatusFlags|function|static inline uint32_t SNVS_HP_GetStatusFlags(SNVS_Type *base)
DECL|SNVS_HP_LoadHighAssuranceCounter|function|static inline void SNVS_HP_LoadHighAssuranceCounter(SNVS_Type *base)
DECL|SNVS_HP_LockHighAssuranceCounter|function|static inline void SNVS_HP_LockHighAssuranceCounter(SNVS_Type *base)
DECL|SNVS_HP_ProgramZeroizableMasterKey|function|static inline void SNVS_HP_ProgramZeroizableMasterKey(SNVS_Type *base)
DECL|SNVS_HP_RTC_ClearStatusFlags|function|static inline void SNVS_HP_RTC_ClearStatusFlags(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_RTC_DisableInterrupts|function|static inline void SNVS_HP_RTC_DisableInterrupts(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_RTC_EnableInterrupts|function|static inline void SNVS_HP_RTC_EnableInterrupts(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_RTC_StartTimer|function|static inline void SNVS_HP_RTC_StartTimer(SNVS_Type *base)
DECL|SNVS_HP_RTC_StopTimer|function|static inline void SNVS_HP_RTC_StopTimer(SNVS_Type *base)
DECL|SNVS_HP_ResetLP|function|static inline void SNVS_HP_ResetLP(SNVS_Type *base)
DECL|SNVS_HP_SetHighAssuranceCounterInitialValue|function|static inline void SNVS_HP_SetHighAssuranceCounterInitialValue(SNVS_Type *base, uint32_t value)
DECL|SNVS_HP_SetSoftwareFatalSecurityViolation|function|static inline void SNVS_HP_SetSoftwareFatalSecurityViolation(SNVS_Type *base)
DECL|SNVS_HP_SetSoftwareSecurityViolation|function|static inline void SNVS_HP_SetSoftwareSecurityViolation(SNVS_Type *base)
DECL|SNVS_HP_StartHighAssuranceCounter|function|static inline void SNVS_HP_StartHighAssuranceCounter(SNVS_Type *base, bool start)
DECL|_FSL_SNVS_HP_H_|macro|_FSL_SNVS_HP_H_
DECL|_snvs_hp_interrupts|enum|typedef enum _snvs_hp_interrupts
DECL|_snvs_hp_rtc_config|struct|typedef struct _snvs_hp_rtc_config
DECL|_snvs_hp_rtc_datetime|struct|typedef struct _snvs_hp_rtc_datetime
DECL|_snvs_hp_ssm_state|enum|typedef enum _snvs_hp_ssm_state
DECL|_snvs_hp_status_flags|enum|typedef enum _snvs_hp_status_flags
DECL|day|member|uint8_t day; /*!< Range from 1 to 31 (depending on month).*/
DECL|hour|member|uint8_t hour; /*!< Range from 0 to 23.*/
DECL|kSNVS_OTPMK_ZeroFlag|enumerator|kSNVS_OTPMK_ZeroFlag = SNVS_HPSR_OTPMK_ZERO_MASK, /*!< The OTPMK is zero */
DECL|kSNVS_RTC_AlarmInterruptFlag|enumerator|kSNVS_RTC_AlarmInterruptFlag = SNVS_HPSR_HPTA_MASK, /*!< RTC time alarm flag */
DECL|kSNVS_RTC_AlarmInterrupt|enumerator|kSNVS_RTC_AlarmInterrupt = SNVS_HPCR_HPTA_EN_MASK, /*!< RTC time alarm */
DECL|kSNVS_RTC_PeriodicInterruptFlag|enumerator|kSNVS_RTC_PeriodicInterruptFlag = SNVS_HPSR_PI_MASK, /*!< RTC periodic interrupt flag */
DECL|kSNVS_RTC_PeriodicInterrupt|enumerator|kSNVS_RTC_PeriodicInterrupt = SNVS_HPCR_PI_EN_MASK, /*!< RTC periodic interrupt */
DECL|kSNVS_SSMCheck|enumerator|kSNVS_SSMCheck = 0x09, /*!< Check */
DECL|kSNVS_SSMHardFail|enumerator|kSNVS_SSMHardFail = 0x01, /*!< Hard Fail */
DECL|kSNVS_SSMInitInter|enumerator|kSNVS_SSMInitInter = 0x08, /*!< Init Intermediate (transition state between Init and Check) */
DECL|kSNVS_SSMInit|enumerator|kSNVS_SSMInit = 0x00, /*!< Init */
DECL|kSNVS_SSMNonSecure|enumerator|kSNVS_SSMNonSecure = 0x0B, /*!< Non-Secure */
DECL|kSNVS_SSMSecure|enumerator|kSNVS_SSMSecure = 0x0F, /*!< Secure */
DECL|kSNVS_SSMSoftFail|enumerator|kSNVS_SSMSoftFail = 0x03, /*!< Soft Fail */
DECL|kSNVS_SSMTrusted|enumerator|kSNVS_SSMTrusted = 0x0D, /*!< Trusted */
DECL|kSNVS_ZMK_ZeroFlag|enumerator|kSNVS_ZMK_ZeroFlag = SNVS_HPSR_ZMK_ZERO_MASK, /*!< The ZMK is zero */
DECL|minute|member|uint8_t minute; /*!< Range from 0 to 59.*/
DECL|month|member|uint8_t month; /*!< Range from 1 to 12.*/
DECL|periodicInterruptFreq|member|uint32_t periodicInterruptFreq; /*!< Defines frequency of the periodic interrupt;
DECL|rtcCalEnable|member|bool rtcCalEnable; /*!< true: RTC calibration mechanism is enabled;
DECL|rtcCalValue|member|uint32_t rtcCalValue; /*!< Defines signed calibration value for nonsecure RTC;
DECL|second|member|uint8_t second; /*!< Range from 0 to 59.*/
DECL|snvs_hp_interrupts_t|typedef|} snvs_hp_interrupts_t;
DECL|snvs_hp_rtc_config_t|typedef|} snvs_hp_rtc_config_t;
DECL|snvs_hp_rtc_datetime_t|typedef|} snvs_hp_rtc_datetime_t;
DECL|snvs_hp_ssm_state_t|typedef|} snvs_hp_ssm_state_t;
DECL|snvs_hp_status_flags_t|typedef|} snvs_hp_status_flags_t;
DECL|year|member|uint16_t year; /*!< Range from 1970 to 2099.*/
