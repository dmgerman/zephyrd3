DECL|AlarmTime|member|LL_RTC_TimeTypeDef AlarmTime; /*!< Specifies the RTC Alarm Time members. */
DECL|AsynchPrescaler|member|uint32_t AsynchPrescaler; /*!< Specifies the RTC Asynchronous Predivider value.
DECL|Hours|member|uint8_t Hours; /*!< Specifies the RTC Time Hours.
DECL|LL_RTC_ALARM_Get|function|__STATIC_INLINE uint32_t LL_RTC_ALARM_Get(RTC_TypeDef *RTCx)
DECL|LL_RTC_ALARM_Set|function|__STATIC_INLINE void LL_RTC_ALARM_Set(RTC_TypeDef *RTCx, uint32_t AlarmCounter)
DECL|LL_RTC_AlarmTypeDef|typedef|} LL_RTC_AlarmTypeDef;
DECL|LL_RTC_BKP_DR10|macro|LL_RTC_BKP_DR10
DECL|LL_RTC_BKP_DR11|macro|LL_RTC_BKP_DR11
DECL|LL_RTC_BKP_DR12|macro|LL_RTC_BKP_DR12
DECL|LL_RTC_BKP_DR13|macro|LL_RTC_BKP_DR13
DECL|LL_RTC_BKP_DR14|macro|LL_RTC_BKP_DR14
DECL|LL_RTC_BKP_DR15|macro|LL_RTC_BKP_DR15
DECL|LL_RTC_BKP_DR16|macro|LL_RTC_BKP_DR16
DECL|LL_RTC_BKP_DR17|macro|LL_RTC_BKP_DR17
DECL|LL_RTC_BKP_DR18|macro|LL_RTC_BKP_DR18
DECL|LL_RTC_BKP_DR19|macro|LL_RTC_BKP_DR19
DECL|LL_RTC_BKP_DR1|macro|LL_RTC_BKP_DR1
DECL|LL_RTC_BKP_DR20|macro|LL_RTC_BKP_DR20
DECL|LL_RTC_BKP_DR21|macro|LL_RTC_BKP_DR21
DECL|LL_RTC_BKP_DR22|macro|LL_RTC_BKP_DR22
DECL|LL_RTC_BKP_DR23|macro|LL_RTC_BKP_DR23
DECL|LL_RTC_BKP_DR24|macro|LL_RTC_BKP_DR24
DECL|LL_RTC_BKP_DR25|macro|LL_RTC_BKP_DR25
DECL|LL_RTC_BKP_DR26|macro|LL_RTC_BKP_DR26
DECL|LL_RTC_BKP_DR27|macro|LL_RTC_BKP_DR27
DECL|LL_RTC_BKP_DR28|macro|LL_RTC_BKP_DR28
DECL|LL_RTC_BKP_DR29|macro|LL_RTC_BKP_DR29
DECL|LL_RTC_BKP_DR2|macro|LL_RTC_BKP_DR2
DECL|LL_RTC_BKP_DR30|macro|LL_RTC_BKP_DR30
DECL|LL_RTC_BKP_DR31|macro|LL_RTC_BKP_DR31
DECL|LL_RTC_BKP_DR32|macro|LL_RTC_BKP_DR32
DECL|LL_RTC_BKP_DR33|macro|LL_RTC_BKP_DR33
DECL|LL_RTC_BKP_DR34|macro|LL_RTC_BKP_DR34
DECL|LL_RTC_BKP_DR35|macro|LL_RTC_BKP_DR35
DECL|LL_RTC_BKP_DR36|macro|LL_RTC_BKP_DR36
DECL|LL_RTC_BKP_DR37|macro|LL_RTC_BKP_DR37
DECL|LL_RTC_BKP_DR38|macro|LL_RTC_BKP_DR38
DECL|LL_RTC_BKP_DR39|macro|LL_RTC_BKP_DR39
DECL|LL_RTC_BKP_DR3|macro|LL_RTC_BKP_DR3
DECL|LL_RTC_BKP_DR40|macro|LL_RTC_BKP_DR40
DECL|LL_RTC_BKP_DR41|macro|LL_RTC_BKP_DR41
DECL|LL_RTC_BKP_DR42|macro|LL_RTC_BKP_DR42
DECL|LL_RTC_BKP_DR4|macro|LL_RTC_BKP_DR4
DECL|LL_RTC_BKP_DR5|macro|LL_RTC_BKP_DR5
DECL|LL_RTC_BKP_DR6|macro|LL_RTC_BKP_DR6
DECL|LL_RTC_BKP_DR7|macro|LL_RTC_BKP_DR7
DECL|LL_RTC_BKP_DR8|macro|LL_RTC_BKP_DR8
DECL|LL_RTC_BKP_DR9|macro|LL_RTC_BKP_DR9
DECL|LL_RTC_BKP_GetRegister|function|__STATIC_INLINE uint32_t LL_RTC_BKP_GetRegister(BKP_TypeDef *BKPx, uint32_t BackupRegister)
DECL|LL_RTC_BKP_SetRegister|function|__STATIC_INLINE void LL_RTC_BKP_SetRegister(BKP_TypeDef *BKPx, uint32_t BackupRegister, uint32_t Data)
DECL|LL_RTC_CALIB_OUTPUT_ALARM|macro|LL_RTC_CALIB_OUTPUT_ALARM
DECL|LL_RTC_CALIB_OUTPUT_NONE|macro|LL_RTC_CALIB_OUTPUT_NONE
DECL|LL_RTC_CALIB_OUTPUT_RTCCLOCK|macro|LL_RTC_CALIB_OUTPUT_RTCCLOCK
DECL|LL_RTC_CALIB_OUTPUT_SECOND|macro|LL_RTC_CALIB_OUTPUT_SECOND
DECL|LL_RTC_CAL_GetCoarseDigital|function|__STATIC_INLINE uint32_t LL_RTC_CAL_GetCoarseDigital(BKP_TypeDef *BKPx)
DECL|LL_RTC_CAL_SetCoarseDigital|function|__STATIC_INLINE void LL_RTC_CAL_SetCoarseDigital(BKP_TypeDef* BKPx, uint32_t Value)
DECL|LL_RTC_ClearFlag_ALR|function|__STATIC_INLINE void LL_RTC_ClearFlag_ALR(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_OW|function|__STATIC_INLINE void LL_RTC_ClearFlag_OW(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_RS|function|__STATIC_INLINE void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_SEC|function|__STATIC_INLINE void LL_RTC_ClearFlag_SEC(RTC_TypeDef *RTCx)
DECL|LL_RTC_ClearFlag_TAMPE|function|__STATIC_INLINE void LL_RTC_ClearFlag_TAMPE(BKP_TypeDef *BKPx)
DECL|LL_RTC_ClearFlag_TAMPI|function|__STATIC_INLINE void LL_RTC_ClearFlag_TAMPI(BKP_TypeDef *BKPx)
DECL|LL_RTC_DisableIT_ALR|function|__STATIC_INLINE void LL_RTC_DisableIT_ALR(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableIT_OW|function|__STATIC_INLINE void LL_RTC_DisableIT_OW(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableIT_SEC|function|__STATIC_INLINE void LL_RTC_DisableIT_SEC(RTC_TypeDef *RTCx)
DECL|LL_RTC_DisableIT_TAMP|function|__STATIC_INLINE void LL_RTC_DisableIT_TAMP(BKP_TypeDef *BKPx)
DECL|LL_RTC_DisableWriteProtection|function|__STATIC_INLINE void LL_RTC_DisableWriteProtection(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_ALR|function|__STATIC_INLINE void LL_RTC_EnableIT_ALR(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_OW|function|__STATIC_INLINE void LL_RTC_EnableIT_OW(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_SEC|function|__STATIC_INLINE void LL_RTC_EnableIT_SEC(RTC_TypeDef *RTCx)
DECL|LL_RTC_EnableIT_TAMP|function|__STATIC_INLINE void LL_RTC_EnableIT_TAMP(BKP_TypeDef *BKPx)
DECL|LL_RTC_EnableWriteProtection|function|__STATIC_INLINE void LL_RTC_EnableWriteProtection(RTC_TypeDef *RTCx)
DECL|LL_RTC_FORMAT_BCD|macro|LL_RTC_FORMAT_BCD
DECL|LL_RTC_FORMAT_BIN|macro|LL_RTC_FORMAT_BIN
DECL|LL_RTC_GetDivider|function|__STATIC_INLINE uint32_t LL_RTC_GetDivider(RTC_TypeDef *RTCx)
DECL|LL_RTC_GetOutPutSource|function|__STATIC_INLINE uint32_t LL_RTC_GetOutPutSource(BKP_TypeDef *BKPx)
DECL|LL_RTC_InitTypeDef|typedef|} LL_RTC_InitTypeDef;
DECL|LL_RTC_IsActiveFlag_ALR|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_ALR(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_OW|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_OW(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_RS|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_RTOF|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_RTOF(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_SEC|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_SEC(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsActiveFlag_TAMPE|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMPE(BKP_TypeDef *BKPx)
DECL|LL_RTC_IsActiveFlag_TAMPI|function|__STATIC_INLINE uint32_t LL_RTC_IsActiveFlag_TAMPI(BKP_TypeDef *BKPx)
DECL|LL_RTC_IsEnabledIT_ALR|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_ALR(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_OW|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_OW(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_SEC|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_SEC(RTC_TypeDef *RTCx)
DECL|LL_RTC_IsEnabledIT_TAMP|function|__STATIC_INLINE uint32_t LL_RTC_IsEnabledIT_TAMP(BKP_TypeDef *BKPx)
DECL|LL_RTC_ReadReg|macro|LL_RTC_ReadReg
DECL|LL_RTC_SetAsynchPrescaler|function|__STATIC_INLINE void LL_RTC_SetAsynchPrescaler(RTC_TypeDef *RTCx, uint32_t AsynchPrescaler)
DECL|LL_RTC_SetOutputSource|function|__STATIC_INLINE void LL_RTC_SetOutputSource(BKP_TypeDef *BKPx, uint32_t OutputSource)
DECL|LL_RTC_TAMPER_ACTIVELEVEL_HIGH|macro|LL_RTC_TAMPER_ACTIVELEVEL_HIGH
DECL|LL_RTC_TAMPER_ACTIVELEVEL_LOW|macro|LL_RTC_TAMPER_ACTIVELEVEL_LOW
DECL|LL_RTC_TAMPER_Disable|function|__STATIC_INLINE void LL_RTC_TAMPER_Disable(BKP_TypeDef *BKPx)
DECL|LL_RTC_TAMPER_Enable|function|__STATIC_INLINE void LL_RTC_TAMPER_Enable(BKP_TypeDef *BKPx)
DECL|LL_RTC_TAMPER_GetActiveLevel|function|__STATIC_INLINE uint32_t LL_RTC_TAMPER_GetActiveLevel(BKP_TypeDef *BKPx)
DECL|LL_RTC_TAMPER_SetActiveLevel|function|__STATIC_INLINE void LL_RTC_TAMPER_SetActiveLevel(BKP_TypeDef *BKPx, uint32_t Tamper)
DECL|LL_RTC_TIME_Get|function|__STATIC_INLINE uint32_t LL_RTC_TIME_Get(RTC_TypeDef *RTCx)
DECL|LL_RTC_TIME_Set|function|__STATIC_INLINE void LL_RTC_TIME_Set(RTC_TypeDef *RTCx, uint32_t TimeCounter)
DECL|LL_RTC_TimeTypeDef|typedef|} LL_RTC_TimeTypeDef;
DECL|LL_RTC_WriteReg|macro|LL_RTC_WriteReg
DECL|Minutes|member|uint8_t Minutes; /*!< Specifies the RTC Time Minutes.
DECL|OutPutSource|member|uint32_t OutPutSource; /*!< Specifies which signal will be routed to the RTC Tamper pin.
DECL|Seconds|member|uint8_t Seconds; /*!< Specifies the RTC Time Seconds.
DECL|__LL_RTC_CONVERT_BCD2BIN|macro|__LL_RTC_CONVERT_BCD2BIN
DECL|__LL_RTC_CONVERT_BIN2BCD|macro|__LL_RTC_CONVERT_BIN2BCD
DECL|__STM32F1xx_LL_RTC_H|macro|__STM32F1xx_LL_RTC_H
