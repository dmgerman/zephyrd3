DECL|RTC_C_clearInterruptFlag|function|void RTC_C_clearInterruptFlag(uint_fast8_t interruptFlagMask)
DECL|RTC_C_convertBCDToBinary|function|uint16_t RTC_C_convertBCDToBinary(uint16_t valueToConvert)
DECL|RTC_C_convertBinaryToBCD|function|uint16_t RTC_C_convertBinaryToBCD(uint16_t valueToConvert)
DECL|RTC_C_definePrescaleEvent|function|void RTC_C_definePrescaleEvent(uint_fast8_t prescaleSelect, uint_fast8_t prescaleEventDivider)
DECL|RTC_C_disableInterrupt|function|void RTC_C_disableInterrupt(uint8_t interruptMask)
DECL|RTC_C_enableInterrupt|function|void RTC_C_enableInterrupt(uint8_t interruptMask)
DECL|RTC_C_getCalendarTime|function|RTC_C_Calendar RTC_C_getCalendarTime(void)
DECL|RTC_C_getEnabledInterruptStatus|function|uint_fast8_t RTC_C_getEnabledInterruptStatus(void)
DECL|RTC_C_getInterruptStatus|function|uint_fast8_t RTC_C_getInterruptStatus(void)
DECL|RTC_C_getPrescaleValue|function|uint_fast8_t RTC_C_getPrescaleValue(uint_fast8_t prescaleSelect)
DECL|RTC_C_holdClock|function|void RTC_C_holdClock(void)
DECL|RTC_C_initCalendar|function|void RTC_C_initCalendar(const RTC_C_Calendar *calendarTime, uint_fast16_t formatSelect)
DECL|RTC_C_registerInterrupt|function|void RTC_C_registerInterrupt(void (*intHandler)(void))
DECL|RTC_C_setCalendarAlarm|function|void RTC_C_setCalendarAlarm(uint_fast8_t minutesAlarm, uint_fast8_t hoursAlarm, uint_fast8_t dayOfWeekAlarm, uint_fast8_t dayOfmonthAlarm)
DECL|RTC_C_setCalendarEvent|function|void RTC_C_setCalendarEvent(uint_fast16_t eventSelect)
DECL|RTC_C_setCalibrationData|function|void RTC_C_setCalibrationData(uint_fast8_t offsetDirection, uint_fast8_t offsetValue)
DECL|RTC_C_setCalibrationFrequency|function|void RTC_C_setCalibrationFrequency(uint_fast16_t frequencySelect)
DECL|RTC_C_setPrescaleValue|function|void RTC_C_setPrescaleValue(uint_fast8_t prescaleSelect, uint_fast8_t prescaleCounterValue)
DECL|RTC_C_setTemperatureCompensation|function|bool RTC_C_setTemperatureCompensation(uint_fast16_t offsetDirection, uint_fast8_t offsetValue)
DECL|RTC_C_startClock|function|void RTC_C_startClock(void)
DECL|RTC_C_unregisterInterrupt|function|void RTC_C_unregisterInterrupt(void)
