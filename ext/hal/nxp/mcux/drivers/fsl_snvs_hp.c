DECL|DAYS_IN_A_YEAR|macro|DAYS_IN_A_YEAR
DECL|SECONDS_IN_A_DAY|macro|SECONDS_IN_A_DAY
DECL|SECONDS_IN_A_HOUR|macro|SECONDS_IN_A_HOUR
DECL|SECONDS_IN_A_MINUTE|macro|SECONDS_IN_A_MINUTE
DECL|SNVS_HPCOMR_SW_SV_MASK|macro|SNVS_HPCOMR_SW_SV_MASK
DECL|SNVS_HPSR_HPTA_MASK|macro|SNVS_HPSR_HPTA_MASK
DECL|SNVS_HPSR_PI_MASK|macro|SNVS_HPSR_PI_MASK
DECL|SNVS_HP_CheckDatetimeFormat|function|static bool SNVS_HP_CheckDatetimeFormat(const snvs_hp_rtc_datetime_t *datetime)
DECL|SNVS_HP_ConvertDatetimeToSeconds|function|static uint32_t SNVS_HP_ConvertDatetimeToSeconds(const snvs_hp_rtc_datetime_t *datetime)
DECL|SNVS_HP_ConvertSecondsToDatetime|function|static void SNVS_HP_ConvertSecondsToDatetime(uint32_t seconds, snvs_hp_rtc_datetime_t *datetime)
DECL|SNVS_HP_GetInstance|function|static uint32_t SNVS_HP_GetInstance(SNVS_Type *base)
DECL|SNVS_HP_RTC_ClearStatusFlags|function|void SNVS_HP_RTC_ClearStatusFlags(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_RTC_Deinit|function|void SNVS_HP_RTC_Deinit(SNVS_Type *base)
DECL|SNVS_HP_RTC_DisableInterrupts|function|void SNVS_HP_RTC_DisableInterrupts(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_RTC_EnableInterrupts|function|void SNVS_HP_RTC_EnableInterrupts(SNVS_Type *base, uint32_t mask)
DECL|SNVS_HP_RTC_GetAlarm|function|void SNVS_HP_RTC_GetAlarm(SNVS_Type *base, snvs_hp_rtc_datetime_t *datetime)
DECL|SNVS_HP_RTC_GetDatetime|function|void SNVS_HP_RTC_GetDatetime(SNVS_Type *base, snvs_hp_rtc_datetime_t *datetime)
DECL|SNVS_HP_RTC_GetDefaultConfig|function|void SNVS_HP_RTC_GetDefaultConfig(snvs_hp_rtc_config_t *config)
DECL|SNVS_HP_RTC_GetEnabledInterrupts|function|uint32_t SNVS_HP_RTC_GetEnabledInterrupts(SNVS_Type *base)
DECL|SNVS_HP_RTC_GetSeconds|function|static uint32_t SNVS_HP_RTC_GetSeconds(SNVS_Type *base)
DECL|SNVS_HP_RTC_GetStatusFlags|function|uint32_t SNVS_HP_RTC_GetStatusFlags(SNVS_Type *base)
DECL|SNVS_HP_RTC_Init|function|void SNVS_HP_RTC_Init(SNVS_Type *base, const snvs_hp_rtc_config_t *config)
DECL|SNVS_HP_RTC_SetAlarm|function|status_t SNVS_HP_RTC_SetAlarm(SNVS_Type *base, const snvs_hp_rtc_datetime_t *alarmTime)
DECL|SNVS_HP_RTC_SetDatetime|function|status_t SNVS_HP_RTC_SetDatetime(SNVS_Type *base, const snvs_hp_rtc_datetime_t *datetime)
DECL|SNVS_HP_RTC_TimeSynchronize|function|void SNVS_HP_RTC_TimeSynchronize(SNVS_Type *base)
DECL|YEAR_RANGE_END|macro|YEAR_RANGE_END
DECL|YEAR_RANGE_START|macro|YEAR_RANGE_START
DECL|s_snvsHpClock|variable|s_snvsHpClock
