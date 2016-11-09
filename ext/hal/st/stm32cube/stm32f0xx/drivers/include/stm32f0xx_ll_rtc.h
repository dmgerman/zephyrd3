DECL|AlarmDateWeekDaySel|member|uint32_t AlarmDateWeekDaySel; /*!< Specifies the RTC Alarm is on day or WeekDay.
DECL|AlarmDateWeekDay|member|uint8_t AlarmDateWeekDay; /*!< Specifies the RTC Alarm Day/WeekDay.
DECL|AlarmMask|member|uint32_t AlarmMask; /*!< Specifies the RTC Alarm Masks.
DECL|AlarmTime|member|LL_RTC_TimeTypeDef AlarmTime; /*!< Specifies the RTC Alarm Time members. */
DECL|AsynchPrescaler|member|uint32_t AsynchPrescaler; /*!< Specifies the RTC Asynchronous Predivider value.
DECL|Day|member|uint8_t Day; /*!< Specifies the RTC Date Day.
DECL|HourFormat|member|uint32_t HourFormat; /*!< Specifies the RTC Hours Format.
DECL|Hours|member|uint8_t Hours; /*!< Specifies the RTC Time Hours.
DECL|LL_RTC_ALARMOUT_ALMA|macro|LL_RTC_ALARMOUT_ALMA
DECL|LL_RTC_ALARMOUT_ALMB|macro|LL_RTC_ALARMOUT_ALMB
DECL|LL_RTC_ALARMOUT_DISABLE|macro|LL_RTC_ALARMOUT_DISABLE
DECL|LL_RTC_ALARMOUT_WAKEUP|macro|LL_RTC_ALARMOUT_WAKEUP
DECL|LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN|macro|LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN
DECL|LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL|macro|LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL
DECL|LL_RTC_ALMA_ConfigTime|function|__STATIC_INLINE void LL_RTC_ALMA_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
DECL|LL_RTC_ALMA_DATEWEEKDAYSEL_DATE|macro|LL_RTC_ALMA_DATEWEEKDAYSEL_DATE
DECL|LL_RTC_ALMA_DATEWEEKDAYSEL_WEEKDAY|macro|LL_RTC_ALMA_DATEWEEKDAYSEL_WEEKDAY
DECL|LL_RTC_ALMA_DisableWeekday|function|__STATIC_INLINE void LL_RTC_ALMA_DisableWeekday(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_Disable|function|__STATIC_INLINE void LL_RTC_ALMA_Disable(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_EnableWeekday|function|__STATIC_INLINE void LL_RTC_ALMA_EnableWeekday(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_Enable|function|__STATIC_INLINE void LL_RTC_ALMA_Enable(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetDay|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetDay(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetHour|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetHour(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetMask|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetMask(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetMinute|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetMinute(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetSecond|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetSecond(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetSubSecondMask|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetSubSecondMask(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetSubSecond|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetSubSecond(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetTimeFormat|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetTimeFormat(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetTime|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetTime(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_GetWeekDay|function|__STATIC_INLINE uint32_t LL_RTC_ALMA_GetWeekDay(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALMA_MASK_ALL|macro|LL_RTC_ALMA_MASK_ALL
DECL|LL_RTC_ALMA_MASK_DATEWEEKDAY|macro|LL_RTC_ALMA_MASK_DATEWEEKDAY
DECL|LL_RTC_ALMA_MASK_HOURS|macro|LL_RTC_ALMA_MASK_HOURS
DECL|LL_RTC_ALMA_MASK_MINUTES|macro|LL_RTC_ALMA_MASK_MINUTES
DECL|LL_RTC_ALMA_MASK_NONE|macro|LL_RTC_ALMA_MASK_NONE
DECL|LL_RTC_ALMA_MASK_SECONDS|macro|LL_RTC_ALMA_MASK_SECONDS
DECL|LL_RTC_ALMA_SetDay|function|__STATIC_INLINE void LL_RTC_ALMA_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
DECL|LL_RTC_ALMA_SetHour|function|__STATIC_INLINE void LL_RTC_ALMA_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
DECL|LL_RTC_ALMA_SetMask|function|__STATIC_INLINE void LL_RTC_ALMA_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
DECL|LL_RTC_ALMA_SetMinute|function|__STATIC_INLINE void LL_RTC_ALMA_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
DECL|LL_RTC_ALMA_SetSecond|function|__STATIC_INLINE void LL_RTC_ALMA_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
DECL|LL_RTC_ALMA_SetSubSecondMask|function|__STATIC_INLINE void LL_RTC_ALMA_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
DECL|LL_RTC_ALMA_SetSubSecond|function|__STATIC_INLINE void LL_RTC_ALMA_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
DECL|LL_RTC_ALMA_SetTimeFormat|function|__STATIC_INLINE void LL_RTC_ALMA_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
DECL|LL_RTC_ALMA_SetWeekDay|function|__STATIC_INLINE void LL_RTC_ALMA_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
DECL|LL_RTC_ALMA_TIME_FORMAT_AM|macro|LL_RTC_ALMA_TIME_FORMAT_AM
DECL|LL_RTC_ALMA_TIME_FORMAT_PM|macro|LL_RTC_ALMA_TIME_FORMAT_PM
DECL|LL_RTC_AlarmTypeDef|typedef|} LL_RTC_AlarmTypeDef;
DECL|LL_RTC_BAK_GetRegister|function|__STATIC_INLINE uint32_t LL_RTC_BAK_GetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister)
DECL|LL_RTC_BAK_SetRegister|function|__STATIC_INLINE void LL_RTC_BAK_SetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister, uint32_t Data)
DECL|LL_RTC_BKP_DR0|macro|LL_RTC_BKP_DR0
DECL|LL_RTC_BKP_DR1|macro|LL_RTC_BKP_DR1
DECL|LL_RTC_BKP_DR2|macro|LL_RTC_BKP_DR2
DECL|LL_RTC_BKP_DR3|macro|LL_RTC_BKP_DR3
DECL|LL_RTC_BKP_DR4|macro|LL_RTC_BKP_DR4
DECL|LL_RTC_CALIB_INSERTPULSE_NONE|macro|LL_RTC_CALIB_INSERTPULSE_NONE
DECL|LL_RTC_CALIB_INSERTPULSE_SET|macro|LL_RTC_CALIB_INSERTPULSE_SET
DECL|LL_RTC_CALIB_OUTPUT_1HZ|macro|LL_RTC_CALIB_OUTPUT_1HZ
DECL|LL_RTC_CALIB_OUTPUT_512HZ|macro|LL_RTC_CALIB_OUTPUT_512HZ
DECL|LL_RTC_CALIB_OUTPUT_NONE|macro|LL_RTC_CALIB_OUTPUT_NONE
DECL|LL_RTC_CALIB_PERIOD_16SEC|macro|LL_RTC_CALIB_PERIOD_16SEC
DECL|LL_RTC_CALIB_PERIOD_32SEC|macro|LL_RTC_CALIB_PERIOD_32SEC
DECL|LL_RTC_CALIB_PERIOD_8SEC|macro|LL_RTC_CALIB_PERIOD_8SEC
DECL|LL_RTC_CAL_GetMinus|function|__STATIC_INLINE uint32_t LL_RTC_CAL_GetMinus(RTC_TypeDef *RTCx)
DECL|LL_RTC_CAL_GetOutputFreq|function|__STATIC_INLINE uint32_t LL_RTC_CAL_GetOutputFreq(RTC_TypeDef *RTCx)
DECL|LL_RTC_CAL_GetPeriod|function|__STATIC_INLINE uint32_t LL_RTC_CAL_GetPeriod(RTC_TypeDef *RTCx)
DECL|LL_RTC_CAL_IsPulseInserted|function|__STATIC_INLINE uint32_t LL_RTC_CAL_IsPulseInserted(RTC_TypeDef *RTCx)
DECL|LL_RTC_CAL_SetMinus|function|__STATIC_INLINE void LL_RTC_CAL_SetMinus(RTC_TypeDef *RTCx, uint32_t CalibMinus)
DECL|LL_RTC_CAL_SetOutputFreq|function|__STATIC_INLINE void LL_RTC_CAL_SetOutputFreq(RTC_TypeDef *RTCx, uint32_t Frequency)
DECL|LL_RTC_CAL_SetPeriod|function|__STATIC_INLINE void LL_RTC_CAL_SetPeriod(RTC_TypeDef *RTCx, uint32_t Period)
DECL|LL_RTC_CAL_SetPulse|function|__STATIC_INLINE void LL_RTC_CAL_SetPulse(RTC_TypeDef *RTCx, uint32_t Pulse)
DECL|LL_RTC_CR_ALRAIE|macro|LL_RTC_CR_ALRAIE
DECL|LL_RTC_CR_TSIE|macro|LL_RTC_CR_TSIE
DECL|LL_RTC_CR_WUTIE|macro|LL_RTC_CR_WUTIE
DECL|LL_RTC_ClearFlag_ALRA|function|__STATIC_INLINE void LL_RTC_ClearFlag_ALRA(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_RS|function|__STATIC_INLINE void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_TAMP1|function|__STATIC_INLINE void LL_RTC_ClearFlag_TAMP1(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_TAMP2|function|__STATIC_INLINE void LL_RTC_ClearFlag_TAMP2(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_TAMP3|function|__STATIC_INLINE void LL_RTC_ClearFlag_TAMP3(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_TSOV|function|__STATIC_INLINE void LL_RTC_ClearFlag_TSOV(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_TS|function|__STATIC_INLINE void LL_RTC_ClearFlag_TS(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_WUT|function|__STATIC_INLINE void LL_RTC_ClearFlag_WUT(RTC_TypeDef *RTCx)
DECL|LL_RTC_DATE_Config|function|__STATIC_INLINE void LL_RTC_DATE_Config(RTC_TypeDef *RTCx, uint32_t WeekDay, uint32_t Day, uint32_t Month, uint32_t Year)
DECL|LL_RTC_DATE_GetDay|function|__STATIC_INLINE uint32_t LL_RTC_DATE_GetDay(RTC_TypeDef *RTCx)
DECL|LL_RTC_DATE_GetMonth|function|__STATIC_INLINE uint32_t LL_RTC_DATE_GetMonth(RTC_TypeDef *RTCx)
DECL|LL_RTC_DATE_GetWeekDay|function|__STATIC_INLINE uint32_t LL_RTC_DATE_GetWeekDay(RTC_TypeDef *RTCx)
DECL|LL_RTC_DATE_GetYear|function|__STATIC_INLINE uint32_t LL_RTC_DATE_GetYear(RTC_TypeDef *RTCx)
DECL|LL_RTC_DATE_Get|function|__STATIC_INLINE uint32_t LL_RTC_DATE_Get(RTC_TypeDef *RTCx)
DECL|LL_RTC_DATE_SetDay|function|__STATIC_INLINE void LL_RTC_DATE_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
DECL|LL_RTC_DATE_SetMonth|function|__STATIC_INLINE void LL_RTC_DATE_SetMonth(RTC_TypeDef *RTCx, uint32_t Month)
DECL|LL_RTC_DATE_SetWeekDay|function|__STATIC_INLINE void LL_RTC_DATE_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
DECL|LL_RTC_DATE_SetYear|function|__STATIC_INLINE void LL_RTC_DATE_SetYear(RTC_TypeDef *RTCx, uint32_t Year)
DECL|LL_RTC_DateTypeDef|typedef|} LL_RTC_DateTypeDef;
DECL|LL_RTC_DisableIT_ALRA|function|__STATIC_INLINE void LL_RTC_DisableIT_ALRA(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableIT_TAMP|function|__STATIC_INLINE void LL_RTC_DisableIT_TAMP(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableIT_TS|function|__STATIC_INLINE void LL_RTC_DisableIT_TS(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableIT_WUT|function|__STATIC_INLINE void LL_RTC_DisableIT_WUT(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableInitMode|function|__STATIC_INLINE void LL_RTC_DisableInitMode(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisablePushPullMode|function|__STATIC_INLINE void LL_RTC_DisablePushPullMode(RTC_TypeDef* RTCx, uint32_t PinMask)
DECL|LL_RTC_DisableRefClock|function|__STATIC_INLINE void LL_RTC_DisableRefClock(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableShadowRegBypass|function|__STATIC_INLINE void LL_RTC_DisableShadowRegBypass(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableWriteProtection|function|__STATIC_INLINE void LL_RTC_DisableWriteProtection(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_ALRA|function|__STATIC_INLINE void LL_RTC_EnableIT_ALRA(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_TAMP|function|__STATIC_INLINE void LL_RTC_EnableIT_TAMP(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_TS|function|__STATIC_INLINE void LL_RTC_EnableIT_TS(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_WUT|function|__STATIC_INLINE void LL_RTC_EnableIT_WUT(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableInitMode|function|__STATIC_INLINE void LL_RTC_EnableInitMode(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnablePushPullMode|function|__STATIC_INLINE void LL_RTC_EnablePushPullMode(RTC_TypeDef *RTCx, uint32_t PinMask)
DECL|LL_RTC_EnableRefClock|function|__STATIC_INLINE void LL_RTC_EnableRefClock(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableShadowRegBypass|function|__STATIC_INLINE void LL_RTC_EnableShadowRegBypass(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableWriteProtection|function|__STATIC_INLINE void LL_RTC_EnableWriteProtection(RTC_TypeDef *RTCx)
DECL|LL_RTC_FORMAT_BCD|macro|LL_RTC_FORMAT_BCD
DECL|LL_RTC_FORMAT_BIN|macro|LL_RTC_FORMAT_BIN
DECL|LL_RTC_GetAlarmOutEvent|function|__STATIC_INLINE uint32_t LL_RTC_GetAlarmOutEvent(RTC_TypeDef *RTCx)
DECL|LL_RTC_GetAlarmOutputType|function|__STATIC_INLINE uint32_t LL_RTC_GetAlarmOutputType(RTC_TypeDef *RTCx)
DECL|LL_RTC_GetAsynchPrescaler|function|__STATIC_INLINE uint32_t LL_RTC_GetAsynchPrescaler(RTC_TypeDef *RTCx)
DECL|LL_RTC_GetHourFormat|function|__STATIC_INLINE uint32_t LL_RTC_GetHourFormat(RTC_TypeDef *RTCx)
DECL|LL_RTC_GetOutputPolarity|function|__STATIC_INLINE uint32_t LL_RTC_GetOutputPolarity(RTC_TypeDef *RTCx)
DECL|LL_RTC_GetSynchPrescaler|function|__STATIC_INLINE uint32_t LL_RTC_GetSynchPrescaler(RTC_TypeDef *RTCx)
DECL|LL_RTC_HOURFORMAT_24HOUR|macro|LL_RTC_HOURFORMAT_24HOUR
DECL|LL_RTC_HOURFORMAT_AMPM|macro|LL_RTC_HOURFORMAT_AMPM
DECL|LL_RTC_ISR_ALRAF|macro|LL_RTC_ISR_ALRAF
DECL|LL_RTC_ISR_ALRAWF|macro|LL_RTC_ISR_ALRAWF
DECL|LL_RTC_ISR_INITF|macro|LL_RTC_ISR_INITF
DECL|LL_RTC_ISR_INITS|macro|LL_RTC_ISR_INITS
DECL|LL_RTC_ISR_RECALPF|macro|LL_RTC_ISR_RECALPF
DECL|LL_RTC_ISR_RSF|macro|LL_RTC_ISR_RSF
DECL|LL_RTC_ISR_SHPF|macro|LL_RTC_ISR_SHPF
DECL|LL_RTC_ISR_TAMP1F|macro|LL_RTC_ISR_TAMP1F
DECL|LL_RTC_ISR_TAMP2F|macro|LL_RTC_ISR_TAMP2F
DECL|LL_RTC_ISR_TAMP3F|macro|LL_RTC_ISR_TAMP3F
DECL|LL_RTC_ISR_TSF|macro|LL_RTC_ISR_TSF
DECL|LL_RTC_ISR_TSOVF|macro|LL_RTC_ISR_TSOVF
DECL|LL_RTC_ISR_WUTF|macro|LL_RTC_ISR_WUTF
DECL|LL_RTC_ISR_WUTWF|macro|LL_RTC_ISR_WUTWF
DECL|LL_RTC_InitTypeDef|typedef|} LL_RTC_InitTypeDef;
DECL|LL_RTC_IsActiveFlag_ALRAW|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRAW(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_ALRA|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALRA(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_INITS|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_INITS(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_INIT|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_INIT(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_RECALP|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RECALP(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_RS|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_SHP|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_SHP(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_TAMP1|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP1(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_TAMP2|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP2(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_TAMP3|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMP3(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_TSOV|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TSOV(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_TS|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TS(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_WUTW|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUTW(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_WUT|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_WUT(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_ALRA|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_ALRA(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_TAMP|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_TS|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TS(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_WUT|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_WUT(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsShadowRegBypassEnabled|function|__STATIC_INLINE uint32_t LL_RTC_IsShadowRegBypassEnabled(RTC_TypeDef *RTCx)
DECL|LL_RTC_MONTH_APRIL|macro|LL_RTC_MONTH_APRIL
DECL|LL_RTC_MONTH_AUGUST|macro|LL_RTC_MONTH_AUGUST
DECL|LL_RTC_MONTH_DECEMBER|macro|LL_RTC_MONTH_DECEMBER
DECL|LL_RTC_MONTH_FEBRUARY|macro|LL_RTC_MONTH_FEBRUARY
DECL|LL_RTC_MONTH_JANUARY|macro|LL_RTC_MONTH_JANUARY
DECL|LL_RTC_MONTH_JULY|macro|LL_RTC_MONTH_JULY
DECL|LL_RTC_MONTH_JUNE|macro|LL_RTC_MONTH_JUNE
DECL|LL_RTC_MONTH_MARCH|macro|LL_RTC_MONTH_MARCH
DECL|LL_RTC_MONTH_MAY|macro|LL_RTC_MONTH_MAY
DECL|LL_RTC_MONTH_NOVEMBER|macro|LL_RTC_MONTH_NOVEMBER
DECL|LL_RTC_MONTH_OCTOBER|macro|LL_RTC_MONTH_OCTOBER
DECL|LL_RTC_MONTH_SEPTEMBER|macro|LL_RTC_MONTH_SEPTEMBER
DECL|LL_RTC_OUTPUTPOLARITY_PIN_HIGH|macro|LL_RTC_OUTPUTPOLARITY_PIN_HIGH
DECL|LL_RTC_OUTPUTPOLARITY_PIN_LOW|macro|LL_RTC_OUTPUTPOLARITY_PIN_LOW
DECL|LL_RTC_PIN_PC13|macro|LL_RTC_PIN_PC13
DECL|LL_RTC_PIN_PC14|macro|LL_RTC_PIN_PC14
DECL|LL_RTC_PIN_PC15|macro|LL_RTC_PIN_PC15
DECL|LL_RTC_ReadReg|macro|LL_RTC_ReadReg
DECL|LL_RTC_ResetOutputPin|function|__STATIC_INLINE void LL_RTC_ResetOutputPin(RTC_TypeDef* RTCx, uint32_t PinMask)
DECL|LL_RTC_SHIFT_SECOND_ADVANCE|macro|LL_RTC_SHIFT_SECOND_ADVANCE
DECL|LL_RTC_SHIFT_SECOND_DELAY|macro|LL_RTC_SHIFT_SECOND_DELAY
DECL|LL_RTC_SetAlarmOutEvent|function|__STATIC_INLINE void LL_RTC_SetAlarmOutEvent(RTC_TypeDef *RTCx, uint32_t AlarmOutput)
DECL|LL_RTC_SetAlarmOutputType|function|__STATIC_INLINE void LL_RTC_SetAlarmOutputType(RTC_TypeDef *RTCx, uint32_t Output)
DECL|LL_RTC_SetAsynchPrescaler|function|__STATIC_INLINE void LL_RTC_SetAsynchPrescaler(RTC_TypeDef *RTCx, uint32_t AsynchPrescaler)
DECL|LL_RTC_SetHourFormat|function|__STATIC_INLINE void LL_RTC_SetHourFormat(RTC_TypeDef *RTCx, uint32_t HourFormat)
DECL|LL_RTC_SetOutputPin|function|__STATIC_INLINE void LL_RTC_SetOutputPin(RTC_TypeDef* RTCx, uint32_t PinMask)
DECL|LL_RTC_SetOutputPolarity|function|__STATIC_INLINE void LL_RTC_SetOutputPolarity(RTC_TypeDef *RTCx, uint32_t Polarity)
DECL|LL_RTC_SetSynchPrescaler|function|__STATIC_INLINE void LL_RTC_SetSynchPrescaler(RTC_TypeDef *RTCx, uint32_t SynchPrescaler)
DECL|LL_RTC_TAFCR_TAMPIE|macro|LL_RTC_TAFCR_TAMPIE
DECL|LL_RTC_TAMPER_1|macro|LL_RTC_TAMPER_1
DECL|LL_RTC_TAMPER_2|macro|LL_RTC_TAMPER_2
DECL|LL_RTC_TAMPER_3|macro|LL_RTC_TAMPER_3
DECL|LL_RTC_TAMPER_ACTIVELEVEL_TAMP1|macro|LL_RTC_TAMPER_ACTIVELEVEL_TAMP1
DECL|LL_RTC_TAMPER_ACTIVELEVEL_TAMP2|macro|LL_RTC_TAMPER_ACTIVELEVEL_TAMP2
DECL|LL_RTC_TAMPER_ACTIVELEVEL_TAMP3|macro|LL_RTC_TAMPER_ACTIVELEVEL_TAMP3
DECL|LL_RTC_TAMPER_DURATION_1RTCCLK|macro|LL_RTC_TAMPER_DURATION_1RTCCLK
DECL|LL_RTC_TAMPER_DURATION_2RTCCLK|macro|LL_RTC_TAMPER_DURATION_2RTCCLK
DECL|LL_RTC_TAMPER_DURATION_4RTCCLK|macro|LL_RTC_TAMPER_DURATION_4RTCCLK
DECL|LL_RTC_TAMPER_DURATION_8RTCCLK|macro|LL_RTC_TAMPER_DURATION_8RTCCLK
DECL|LL_RTC_TAMPER_DisableActiveLevel|function|__STATIC_INLINE void LL_RTC_TAMPER_DisableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
DECL|LL_RTC_TAMPER_DisablePullUp|function|__STATIC_INLINE void LL_RTC_TAMPER_DisablePullUp(RTC_TypeDef *RTCx)
DECL|LL_RTC_TAMPER_Disable|function|__STATIC_INLINE void LL_RTC_TAMPER_Disable(RTC_TypeDef *RTCx, uint32_t Tamper)
DECL|LL_RTC_TAMPER_EnableActiveLevel|function|__STATIC_INLINE void LL_RTC_TAMPER_EnableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
DECL|LL_RTC_TAMPER_EnablePullUp|function|__STATIC_INLINE void LL_RTC_TAMPER_EnablePullUp(RTC_TypeDef *RTCx)
DECL|LL_RTC_TAMPER_Enable|function|__STATIC_INLINE void LL_RTC_TAMPER_Enable(RTC_TypeDef *RTCx, uint32_t Tamper)
DECL|LL_RTC_TAMPER_FILTER_2SAMPLE|macro|LL_RTC_TAMPER_FILTER_2SAMPLE
DECL|LL_RTC_TAMPER_FILTER_4SAMPLE|macro|LL_RTC_TAMPER_FILTER_4SAMPLE
DECL|LL_RTC_TAMPER_FILTER_8SAMPLE|macro|LL_RTC_TAMPER_FILTER_8SAMPLE
DECL|LL_RTC_TAMPER_FILTER_DISABLE|macro|LL_RTC_TAMPER_FILTER_DISABLE
DECL|LL_RTC_TAMPER_GetFilterCount|function|__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetFilterCount(RTC_TypeDef *RTCx)
DECL|LL_RTC_TAMPER_GetPrecharge|function|__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetPrecharge(RTC_TypeDef *RTCx)
DECL|LL_RTC_TAMPER_GetSamplingFreq|function|__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetSamplingFreq(RTC_TypeDef *RTCx)
DECL|LL_RTC_TAMPER_MASK_TAMPER1|macro|LL_RTC_TAMPER_MASK_TAMPER1
DECL|LL_RTC_TAMPER_MASK_TAMPER2|macro|LL_RTC_TAMPER_MASK_TAMPER2
DECL|LL_RTC_TAMPER_MASK_TAMPER3|macro|LL_RTC_TAMPER_MASK_TAMPER3
DECL|LL_RTC_TAMPER_NOERASE_TAMPER1|macro|LL_RTC_TAMPER_NOERASE_TAMPER1
DECL|LL_RTC_TAMPER_NOERASE_TAMPER2|macro|LL_RTC_TAMPER_NOERASE_TAMPER2
DECL|LL_RTC_TAMPER_NOERASE_TAMPER3|macro|LL_RTC_TAMPER_NOERASE_TAMPER3
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_1024|macro|LL_RTC_TAMPER_SAMPLFREQDIV_1024
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_16384|macro|LL_RTC_TAMPER_SAMPLFREQDIV_16384
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_2048|macro|LL_RTC_TAMPER_SAMPLFREQDIV_2048
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_256|macro|LL_RTC_TAMPER_SAMPLFREQDIV_256
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_32768|macro|LL_RTC_TAMPER_SAMPLFREQDIV_32768
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_4096|macro|LL_RTC_TAMPER_SAMPLFREQDIV_4096
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_512|macro|LL_RTC_TAMPER_SAMPLFREQDIV_512
DECL|LL_RTC_TAMPER_SAMPLFREQDIV_8192|macro|LL_RTC_TAMPER_SAMPLFREQDIV_8192
DECL|LL_RTC_TAMPER_SetFilterCount|function|__STATIC_INLINE void LL_RTC_TAMPER_SetFilterCount(RTC_TypeDef *RTCx, uint32_t FilterCount)
DECL|LL_RTC_TAMPER_SetPrecharge|function|__STATIC_INLINE void LL_RTC_TAMPER_SetPrecharge(RTC_TypeDef *RTCx, uint32_t Duration)
DECL|LL_RTC_TAMPER_SetSamplingFreq|function|__STATIC_INLINE void LL_RTC_TAMPER_SetSamplingFreq(RTC_TypeDef *RTCx, uint32_t SamplingFreq)
DECL|LL_RTC_TIMESTAMP_EDGE_FALLING|macro|LL_RTC_TIMESTAMP_EDGE_FALLING
DECL|LL_RTC_TIMESTAMP_EDGE_RISING|macro|LL_RTC_TIMESTAMP_EDGE_RISING
DECL|LL_RTC_TIME_Config|function|__STATIC_INLINE void LL_RTC_TIME_Config(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
DECL|LL_RTC_TIME_DecHour|function|__STATIC_INLINE void LL_RTC_TIME_DecHour(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_DisableDayLightStore|function|__STATIC_INLINE void LL_RTC_TIME_DisableDayLightStore(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_EnableDayLightStore|function|__STATIC_INLINE void LL_RTC_TIME_EnableDayLightStore(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_FORMAT_AM_OR_24|macro|LL_RTC_TIME_FORMAT_AM_OR_24
DECL|LL_RTC_TIME_FORMAT_PM|macro|LL_RTC_TIME_FORMAT_PM
DECL|LL_RTC_TIME_GetFormat|function|__STATIC_INLINE uint32_t LL_RTC_TIME_GetFormat(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_GetHour|function|__STATIC_INLINE uint32_t LL_RTC_TIME_GetHour(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_GetMinute|function|__STATIC_INLINE uint32_t LL_RTC_TIME_GetMinute(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_GetSecond|function|__STATIC_INLINE uint32_t LL_RTC_TIME_GetSecond(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_GetSubSecond|function|__STATIC_INLINE uint32_t LL_RTC_TIME_GetSubSecond(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_Get|function|__STATIC_INLINE uint32_t LL_RTC_TIME_Get(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_IncHour|function|__STATIC_INLINE void LL_RTC_TIME_IncHour(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_IsDayLightStoreEnabled|function|__STATIC_INLINE uint32_t LL_RTC_TIME_IsDayLightStoreEnabled(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_SetFormat|function|__STATIC_INLINE void LL_RTC_TIME_SetFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
DECL|LL_RTC_TIME_SetHour|function|__STATIC_INLINE void LL_RTC_TIME_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
DECL|LL_RTC_TIME_SetMinute|function|__STATIC_INLINE void LL_RTC_TIME_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
DECL|LL_RTC_TIME_SetSecond|function|__STATIC_INLINE void LL_RTC_TIME_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
DECL|LL_RTC_TIME_Synchronize|function|__STATIC_INLINE void LL_RTC_TIME_Synchronize(RTC_TypeDef *RTCx, uint32_t ShiftSecond, uint32_t Fraction)
DECL|LL_RTC_TS_DisableOnTamper|function|__STATIC_INLINE void LL_RTC_TS_DisableOnTamper(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_Disable|function|__STATIC_INLINE void LL_RTC_TS_Disable(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_EnableOnTamper|function|__STATIC_INLINE void LL_RTC_TS_EnableOnTamper(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_Enable|function|__STATIC_INLINE void LL_RTC_TS_Enable(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetActiveEdge|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetActiveEdge(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetDate|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetDate(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetDay|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetDay(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetHour|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetHour(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetMinute|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetMinute(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetMonth|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetMonth(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetSecond|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetSecond(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetSubSecond|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetSubSecond(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetTimeFormat|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetTimeFormat(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetTime|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetTime(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_GetWeekDay|function|__STATIC_INLINE uint32_t LL_RTC_TS_GetWeekDay(RTC_TypeDef *RTCx)
DECL|LL_RTC_TS_SetActiveEdge|function|__STATIC_INLINE void LL_RTC_TS_SetActiveEdge(RTC_TypeDef *RTCx, uint32_t Edge)
DECL|LL_RTC_TS_TIME_FORMAT_AM|macro|LL_RTC_TS_TIME_FORMAT_AM
DECL|LL_RTC_TS_TIME_FORMAT_PM|macro|LL_RTC_TS_TIME_FORMAT_PM
DECL|LL_RTC_TimeTypeDef|typedef|} LL_RTC_TimeTypeDef;
DECL|LL_RTC_WAKEUPCLOCK_CKSPRE_WUT|macro|LL_RTC_WAKEUPCLOCK_CKSPRE_WUT
DECL|LL_RTC_WAKEUPCLOCK_CKSPRE|macro|LL_RTC_WAKEUPCLOCK_CKSPRE
DECL|LL_RTC_WAKEUPCLOCK_DIV_16|macro|LL_RTC_WAKEUPCLOCK_DIV_16
DECL|LL_RTC_WAKEUPCLOCK_DIV_2|macro|LL_RTC_WAKEUPCLOCK_DIV_2
DECL|LL_RTC_WAKEUPCLOCK_DIV_4|macro|LL_RTC_WAKEUPCLOCK_DIV_4
DECL|LL_RTC_WAKEUPCLOCK_DIV_8|macro|LL_RTC_WAKEUPCLOCK_DIV_8
DECL|LL_RTC_WAKEUP_Disable|function|__STATIC_INLINE void LL_RTC_WAKEUP_Disable(RTC_TypeDef *RTCx)
DECL|LL_RTC_WAKEUP_Enable|function|__STATIC_INLINE void LL_RTC_WAKEUP_Enable(RTC_TypeDef *RTCx)
DECL|LL_RTC_WAKEUP_GetAutoReload|function|__STATIC_INLINE uint32_t LL_RTC_WAKEUP_GetAutoReload(RTC_TypeDef *RTCx)
DECL|LL_RTC_WAKEUP_GetClock|function|__STATIC_INLINE uint32_t LL_RTC_WAKEUP_GetClock(RTC_TypeDef *RTCx)
DECL|LL_RTC_WAKEUP_IsEnabled|function|__STATIC_INLINE uint32_t LL_RTC_WAKEUP_IsEnabled(RTC_TypeDef *RTCx)
DECL|LL_RTC_WAKEUP_SetAutoReload|function|__STATIC_INLINE void LL_RTC_WAKEUP_SetAutoReload(RTC_TypeDef *RTCx, uint32_t Value)
DECL|LL_RTC_WAKEUP_SetClock|function|__STATIC_INLINE void LL_RTC_WAKEUP_SetClock(RTC_TypeDef *RTCx, uint32_t WakeupClock)
DECL|LL_RTC_WEEKDAY_FRIDAY|macro|LL_RTC_WEEKDAY_FRIDAY
DECL|LL_RTC_WEEKDAY_MONDAY|macro|LL_RTC_WEEKDAY_MONDAY
DECL|LL_RTC_WEEKDAY_SATURDAY|macro|LL_RTC_WEEKDAY_SATURDAY
DECL|LL_RTC_WEEKDAY_SUNDAY|macro|LL_RTC_WEEKDAY_SUNDAY
DECL|LL_RTC_WEEKDAY_THURSDAY|macro|LL_RTC_WEEKDAY_THURSDAY
DECL|LL_RTC_WEEKDAY_TUESDAY|macro|LL_RTC_WEEKDAY_TUESDAY
DECL|LL_RTC_WEEKDAY_WEDNESDAY|macro|LL_RTC_WEEKDAY_WEDNESDAY
DECL|LL_RTC_WriteReg|macro|LL_RTC_WriteReg
DECL|Minutes|member|uint8_t Minutes; /*!< Specifies the RTC Time Minutes.
DECL|Month|member|uint8_t Month; /*!< Specifies the RTC Date Month.
DECL|RTC_INIT_MASK|macro|RTC_INIT_MASK
DECL|RTC_OFFSET_DAY|macro|RTC_OFFSET_DAY
DECL|RTC_OFFSET_HOUR|macro|RTC_OFFSET_HOUR
DECL|RTC_OFFSET_MINUTE|macro|RTC_OFFSET_MINUTE
DECL|RTC_OFFSET_MONTH|macro|RTC_OFFSET_MONTH
DECL|RTC_OFFSET_WEEKDAY|macro|RTC_OFFSET_WEEKDAY
DECL|RTC_POSITION_ALMA_DT|macro|RTC_POSITION_ALMA_DT
DECL|RTC_POSITION_ALMA_DU|macro|RTC_POSITION_ALMA_DU
DECL|RTC_POSITION_ALMA_HT|macro|RTC_POSITION_ALMA_HT
DECL|RTC_POSITION_ALMA_HU|macro|RTC_POSITION_ALMA_HU
DECL|RTC_POSITION_ALMA_MASKSS|macro|RTC_POSITION_ALMA_MASKSS
DECL|RTC_POSITION_ALMA_MT|macro|RTC_POSITION_ALMA_MT
DECL|RTC_POSITION_ALMA_MU|macro|RTC_POSITION_ALMA_MU
DECL|RTC_POSITION_ALMA_ST|macro|RTC_POSITION_ALMA_ST
DECL|RTC_POSITION_ALMA_SU|macro|RTC_POSITION_ALMA_SU
DECL|RTC_POSITION_DR_DT|macro|RTC_POSITION_DR_DT
DECL|RTC_POSITION_DR_DU|macro|RTC_POSITION_DR_DU
DECL|RTC_POSITION_DR_MT|macro|RTC_POSITION_DR_MT
DECL|RTC_POSITION_DR_MU|macro|RTC_POSITION_DR_MU
DECL|RTC_POSITION_DR_WDU|macro|RTC_POSITION_DR_WDU
DECL|RTC_POSITION_DR_YT|macro|RTC_POSITION_DR_YT
DECL|RTC_POSITION_DR_YU|macro|RTC_POSITION_DR_YU
DECL|RTC_POSITION_PRER_PREDIV_A|macro|RTC_POSITION_PRER_PREDIV_A
DECL|RTC_POSITION_TR_HT|macro|RTC_POSITION_TR_HT
DECL|RTC_POSITION_TR_HU|macro|RTC_POSITION_TR_HU
DECL|RTC_POSITION_TR_MT|macro|RTC_POSITION_TR_MT
DECL|RTC_POSITION_TR_MU|macro|RTC_POSITION_TR_MU
DECL|RTC_POSITION_TR_ST|macro|RTC_POSITION_TR_ST
DECL|RTC_POSITION_TR_SU|macro|RTC_POSITION_TR_SU
DECL|RTC_POSITION_TS_HU|macro|RTC_POSITION_TS_HU
DECL|RTC_POSITION_TS_MNU|macro|RTC_POSITION_TS_MNU
DECL|RTC_POSITION_TS_MU|macro|RTC_POSITION_TS_MU
DECL|RTC_POSITION_TS_WDU|macro|RTC_POSITION_TS_WDU
DECL|RTC_RSF_MASK|macro|RTC_RSF_MASK
DECL|RTC_WRITE_PROTECTION_DISABLE|macro|RTC_WRITE_PROTECTION_DISABLE
DECL|RTC_WRITE_PROTECTION_ENABLE_1|macro|RTC_WRITE_PROTECTION_ENABLE_1
DECL|RTC_WRITE_PROTECTION_ENABLE_2|macro|RTC_WRITE_PROTECTION_ENABLE_2
DECL|Seconds|member|uint8_t Seconds; /*!< Specifies the RTC Time Seconds.
DECL|SynchPrescaler|member|uint32_t SynchPrescaler; /*!< Specifies the RTC Synchronous Predivider value.
DECL|TimeFormat|member|uint32_t TimeFormat; /*!< Specifies the RTC AM/PM Time.
DECL|WeekDay|member|uint8_t WeekDay; /*!< Specifies the RTC Date WeekDay.
DECL|Year|member|uint8_t Year; /*!< Specifies the RTC Date Year.
DECL|__LL_RTC_CONVERT_BCD2BIN|macro|__LL_RTC_CONVERT_BCD2BIN
DECL|__LL_RTC_CONVERT_BIN2BCD|macro|__LL_RTC_CONVERT_BIN2BCD
DECL|__LL_RTC_GET_DAY|macro|__LL_RTC_GET_DAY
DECL|__LL_RTC_GET_HOUR|macro|__LL_RTC_GET_HOUR
DECL|__LL_RTC_GET_MINUTE|macro|__LL_RTC_GET_MINUTE
DECL|__LL_RTC_GET_MONTH|macro|__LL_RTC_GET_MONTH
DECL|__LL_RTC_GET_SECOND|macro|__LL_RTC_GET_SECOND
DECL|__LL_RTC_GET_WEEKDAY|macro|__LL_RTC_GET_WEEKDAY
DECL|__LL_RTC_GET_YEAR|macro|__LL_RTC_GET_YEAR
DECL|__STM32F0xx_LL_RTC_H|macro|__STM32F0xx_LL_RTC_H
