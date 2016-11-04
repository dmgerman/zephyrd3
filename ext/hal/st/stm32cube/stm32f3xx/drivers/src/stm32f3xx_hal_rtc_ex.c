DECL|HAL_RTCEx_AlarmBEventCallback|function|__weak void HAL_RTCEx_AlarmBEventCallback(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_BKUPRead|function|uint32_t HAL_RTCEx_BKUPRead(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister)
DECL|HAL_RTCEx_BKUPWrite|function|void HAL_RTCEx_BKUPWrite(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister, uint32_t Data)
DECL|HAL_RTCEx_DeactivateCalibrationOutPut|function|HAL_StatusTypeDef HAL_RTCEx_DeactivateCalibrationOutPut(RTC_HandleTypeDef* hrtc)
DECL|HAL_RTCEx_DeactivateRefClock|function|HAL_StatusTypeDef HAL_RTCEx_DeactivateRefClock(RTC_HandleTypeDef* hrtc)
DECL|HAL_RTCEx_DeactivateTamper|function|HAL_StatusTypeDef HAL_RTCEx_DeactivateTamper(RTC_HandleTypeDef *hrtc, uint32_t Tamper)
DECL|HAL_RTCEx_DeactivateTimeStamp|function|HAL_StatusTypeDef HAL_RTCEx_DeactivateTimeStamp(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_DeactivateWakeUpTimer|function|uint32_t HAL_RTCEx_DeactivateWakeUpTimer(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_DisableBypassShadow|function|HAL_StatusTypeDef HAL_RTCEx_DisableBypassShadow(RTC_HandleTypeDef* hrtc)
DECL|HAL_RTCEx_EnableBypassShadow|function|HAL_StatusTypeDef HAL_RTCEx_EnableBypassShadow(RTC_HandleTypeDef* hrtc)
DECL|HAL_RTCEx_GetTimeStamp|function|HAL_StatusTypeDef HAL_RTCEx_GetTimeStamp(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef* sTimeStamp, RTC_DateTypeDef* sTimeStampDate, uint32_t Format)
DECL|HAL_RTCEx_GetWakeUpTimer|function|uint32_t HAL_RTCEx_GetWakeUpTimer(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_PollForAlarmBEvent|function|HAL_StatusTypeDef HAL_RTCEx_PollForAlarmBEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout)
DECL|HAL_RTCEx_PollForTamper1Event|function|HAL_StatusTypeDef HAL_RTCEx_PollForTamper1Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout)
DECL|HAL_RTCEx_PollForTamper2Event|function|HAL_StatusTypeDef HAL_RTCEx_PollForTamper2Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout)
DECL|HAL_RTCEx_PollForTamper3Event|function|HAL_StatusTypeDef HAL_RTCEx_PollForTamper3Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout)
DECL|HAL_RTCEx_PollForTimeStampEvent|function|HAL_StatusTypeDef HAL_RTCEx_PollForTimeStampEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout)
DECL|HAL_RTCEx_PollForWakeUpTimerEvent|function|HAL_StatusTypeDef HAL_RTCEx_PollForWakeUpTimerEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout)
DECL|HAL_RTCEx_SetCalibrationOutPut|function|HAL_StatusTypeDef HAL_RTCEx_SetCalibrationOutPut(RTC_HandleTypeDef* hrtc, uint32_t CalibOutput)
DECL|HAL_RTCEx_SetRefClock|function|HAL_StatusTypeDef HAL_RTCEx_SetRefClock(RTC_HandleTypeDef* hrtc)
DECL|HAL_RTCEx_SetSmoothCalib|function|HAL_StatusTypeDef HAL_RTCEx_SetSmoothCalib(RTC_HandleTypeDef* hrtc, uint32_t SmoothCalibPeriod, uint32_t SmoothCalibPlusPulses, uint32_t SmoothCalibMinusPulsesValue)
DECL|HAL_RTCEx_SetSynchroShift|function|HAL_StatusTypeDef HAL_RTCEx_SetSynchroShift(RTC_HandleTypeDef* hrtc, uint32_t ShiftAdd1S, uint32_t ShiftSubFS)
DECL|HAL_RTCEx_SetTamper_IT|function|HAL_StatusTypeDef HAL_RTCEx_SetTamper_IT(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper)
DECL|HAL_RTCEx_SetTamper|function|HAL_StatusTypeDef HAL_RTCEx_SetTamper(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper)
DECL|HAL_RTCEx_SetTimeStamp_IT|function|HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp_IT(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin)
DECL|HAL_RTCEx_SetTimeStamp|function|HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin)
DECL|HAL_RTCEx_SetWakeUpTimer_IT|function|HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer_IT(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock)
DECL|HAL_RTCEx_SetWakeUpTimer|function|HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock)
DECL|HAL_RTCEx_Tamper1EventCallback|function|__weak void HAL_RTCEx_Tamper1EventCallback(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_Tamper2EventCallback|function|__weak void HAL_RTCEx_Tamper2EventCallback(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_Tamper3EventCallback|function|__weak void HAL_RTCEx_Tamper3EventCallback(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_TamperTimeStampIRQHandler|function|void HAL_RTCEx_TamperTimeStampIRQHandler(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_TimeStampEventCallback|function|__weak void HAL_RTCEx_TimeStampEventCallback(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_WakeUpTimerEventCallback|function|__weak void HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc)
DECL|HAL_RTCEx_WakeUpTimerIRQHandler|function|void HAL_RTCEx_WakeUpTimerIRQHandler(RTC_HandleTypeDef *hrtc)
