DECL|DAYS_IN_A_YEAR|macro|DAYS_IN_A_YEAR
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|SECONDS_IN_A_DAY|macro|SECONDS_IN_A_DAY
DECL|SECONDS_IN_A_HOUR|macro|SECONDS_IN_A_HOUR
DECL|SECONDS_IN_A_MINUTE|macro|SECONDS_IN_A_MINUTE
DECL|SNVS_DEFAULT_PGD_VALUE|macro|SNVS_DEFAULT_PGD_VALUE
DECL|SNVS_LP_CheckDatetimeFormat|function|static bool SNVS_LP_CheckDatetimeFormat(const snvs_lp_srtc_datetime_t *datetime)
DECL|SNVS_LP_ClearExternalTamperStatus|function|void SNVS_LP_ClearExternalTamperStatus(SNVS_Type *base, snvs_lp_external_tamper_t pin)
DECL|SNVS_LP_ConvertDatetimeToSeconds|function|static uint32_t SNVS_LP_ConvertDatetimeToSeconds(const snvs_lp_srtc_datetime_t *datetime)
DECL|SNVS_LP_ConvertSecondsToDatetime|function|static void SNVS_LP_ConvertSecondsToDatetime(uint32_t seconds, snvs_lp_srtc_datetime_t *datetime)
DECL|SNVS_LP_Deinit|function|void SNVS_LP_Deinit(SNVS_Type *base)
DECL|SNVS_LP_DisableExternalTamper|function|void SNVS_LP_DisableExternalTamper(SNVS_Type *base, snvs_lp_external_tamper_t pin)
DECL|SNVS_LP_EnableExternalTamper|function|void SNVS_LP_EnableExternalTamper(SNVS_Type *base, snvs_lp_external_tamper_t pin, snvs_lp_external_tamper_polarity_t polarity)
DECL|SNVS_LP_GetExternalTamperStatus|function|snvs_lp_external_tamper_status_t SNVS_LP_GetExternalTamperStatus(SNVS_Type *base, snvs_lp_external_tamper_t pin)
DECL|SNVS_LP_GetInstance|function|static uint32_t SNVS_LP_GetInstance(SNVS_Type *base)
DECL|SNVS_LP_GetMonotonicCounter|function|uint64_t SNVS_LP_GetMonotonicCounter(SNVS_Type *base)
DECL|SNVS_LP_Init|function|void SNVS_LP_Init(SNVS_Type *base)
DECL|SNVS_LP_SRTC_Deinit|function|void SNVS_LP_SRTC_Deinit(SNVS_Type *base)
DECL|SNVS_LP_SRTC_GetAlarm|function|void SNVS_LP_SRTC_GetAlarm(SNVS_Type *base, snvs_lp_srtc_datetime_t *datetime)
DECL|SNVS_LP_SRTC_GetDatetime|function|void SNVS_LP_SRTC_GetDatetime(SNVS_Type *base, snvs_lp_srtc_datetime_t *datetime)
DECL|SNVS_LP_SRTC_GetDefaultConfig|function|void SNVS_LP_SRTC_GetDefaultConfig(snvs_lp_srtc_config_t *config)
DECL|SNVS_LP_SRTC_GetEnabledInterrupts|function|uint32_t SNVS_LP_SRTC_GetEnabledInterrupts(SNVS_Type *base)
DECL|SNVS_LP_SRTC_GetSeconds|function|static uint32_t SNVS_LP_SRTC_GetSeconds(SNVS_Type *base)
DECL|SNVS_LP_SRTC_GetStatusFlags|function|uint32_t SNVS_LP_SRTC_GetStatusFlags(SNVS_Type *base)
DECL|SNVS_LP_SRTC_Init|function|void SNVS_LP_SRTC_Init(SNVS_Type *base, const snvs_lp_srtc_config_t *config)
DECL|SNVS_LP_SRTC_SetAlarm|function|status_t SNVS_LP_SRTC_SetAlarm(SNVS_Type *base, const snvs_lp_srtc_datetime_t *alarmTime)
DECL|SNVS_LP_SRTC_SetDatetime|function|status_t SNVS_LP_SRTC_SetDatetime(SNVS_Type *base, const snvs_lp_srtc_datetime_t *datetime)
DECL|SNVS_LP_WriteZeroizableMasterKey|function|void SNVS_LP_WriteZeroizableMasterKey(SNVS_Type *base, uint32_t ZMKey[SNVS_ZMK_REG_COUNT])
DECL|YEAR_RANGE_END|macro|YEAR_RANGE_END
DECL|YEAR_RANGE_START|macro|YEAR_RANGE_START
DECL|s_snvsLpClock|variable|s_snvsLpClock
