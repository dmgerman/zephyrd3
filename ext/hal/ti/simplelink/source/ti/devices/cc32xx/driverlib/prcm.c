DECL|IS_RTC_USED|macro|IS_RTC_USED
DECL|IsRTCUsed|function|static tBoolean IsRTCUsed(void)
DECL|PRCMCC3200MCUInit|function|void PRCMCC3200MCUInit()
DECL|PRCMCameraFreqSet|function|unsigned long PRCMCameraFreqSet(unsigned char ulDivider, unsigned char ulWidth)
DECL|PRCMDeviceTypeGet|function|unsigned long PRCMDeviceTypeGet()
DECL|PRCMHIBRegRead|function|unsigned long PRCMHIBRegRead(unsigned long ulRegAddr)
DECL|PRCMHIBRegWrite|function|void PRCMHIBRegWrite(unsigned long ulRegAddr, unsigned long ulValue)
DECL|PRCMHibernateCycleTrigger|function|void PRCMHibernateCycleTrigger()
DECL|PRCMHibernateEnter|function|PRCMHibernateEnter()
DECL|PRCMHibernateIntervalSet|function|PRCMHibernateIntervalSet(unsigned long long ullTicks)
DECL|PRCMHibernateWakeUpGPIOSelect|function|PRCMHibernateWakeUpGPIOSelect(unsigned long ulGPIOBitMap, unsigned long ulType)
DECL|PRCMHibernateWakeupCauseGet|function|PRCMHibernateWakeupCauseGet()
DECL|PRCMHibernateWakeupSourceDisable|function|PRCMHibernateWakeupSourceDisable(unsigned long ulHIBWakupSrc)
DECL|PRCMHibernateWakeupSourceEnable|function|PRCMHibernateWakeupSourceEnable(unsigned long ulHIBWakupSrc)
DECL|PRCMI2SClockFreqSet|function|PRCMI2SClockFreqSet(unsigned long ulI2CClkFreq)
DECL|PRCMIORetentionDisable|function|void PRCMIORetentionDisable(unsigned long ulIORetGrpFlags)
DECL|PRCMIORetentionEnable|function|void PRCMIORetentionEnable(unsigned long ulIORetGrpFlags)
DECL|PRCMIntDisable|function|void PRCMIntDisable(unsigned long ulIntFlags)
DECL|PRCMIntEnable|function|void PRCMIntEnable(unsigned long ulIntFlags)
DECL|PRCMIntRegister|function|void PRCMIntRegister(void (*pfnHandler)(void))
DECL|PRCMIntStatus|function|unsigned long PRCMIntStatus()
DECL|PRCMIntUnregister|function|void PRCMIntUnregister()
DECL|PRCMLPDSEnterKeepDebugIf|function|PRCMLPDSEnterKeepDebugIf()
DECL|PRCMLPDSEnter|function|PRCMLPDSEnter()
DECL|PRCMLPDSIntervalSet|function|PRCMLPDSIntervalSet(unsigned long ulTicks)
DECL|PRCMLPDSRestoreInfoSet|function|PRCMLPDSRestoreInfoSet(unsigned long ulStackPtr, unsigned long ulProgCntr)
DECL|PRCMLPDSWakeUpGPIOSelect|function|PRCMLPDSWakeUpGPIOSelect(unsigned long ulGPIOPin, unsigned long ulType)
DECL|PRCMLPDSWakeupCauseGet|function|PRCMLPDSWakeupCauseGet()
DECL|PRCMLPDSWakeupSourceDisable|function|PRCMLPDSWakeupSourceDisable(unsigned long ulLpdsWakeupSrc)
DECL|PRCMLPDSWakeupSourceEnable|function|PRCMLPDSWakeupSourceEnable(unsigned long ulLpdsWakeupSrc)
DECL|PRCMMCUReset|function|void PRCMMCUReset(tBoolean bIncludeSubsystem)
DECL|PRCMOCRRegisterRead|function|unsigned long PRCMOCRRegisterRead(unsigned char ucIndex)
DECL|PRCMOCRRegisterWrite|function|void PRCMOCRRegisterWrite(unsigned char ucIndex, unsigned long ulRegValue)
DECL|PRCMPeripheralClkDisable|function|PRCMPeripheralClkDisable(unsigned long ulPeripheral, unsigned long ulClkFlags)
DECL|PRCMPeripheralClkEnable|function|PRCMPeripheralClkEnable(unsigned long ulPeripheral, unsigned long ulClkFlags)
DECL|PRCMPeripheralClockGet|function|PRCMPeripheralClockGet(unsigned long ulPeripheral)
DECL|PRCMPeripheralReset|function|PRCMPeripheralReset(unsigned long ulPeripheral)
DECL|PRCMPeripheralStatusGet|function|PRCMPeripheralStatusGet(unsigned long ulPeripheral)
DECL|PRCMRTCGet|function|void PRCMRTCGet(unsigned long *ulSecs, unsigned short *usMsec)
DECL|PRCMRTCInUseGet|function|tBoolean PRCMRTCInUseGet()
DECL|PRCMRTCInUseSet|function|void PRCMRTCInUseSet()
DECL|PRCMRTCMatchGet|function|void PRCMRTCMatchGet(unsigned long *ulSecs, unsigned short *usMsec)
DECL|PRCMRTCMatchSet|function|void PRCMRTCMatchSet(unsigned long ulSecs, unsigned short usMsec)
DECL|PRCMRTCSet|function|void PRCMRTCSet(unsigned long ulSecs, unsigned short usMsec)
DECL|PRCMSRAMRetentionDisable|function|PRCMSRAMRetentionDisable(unsigned long ulSramColSel, unsigned long ulFlags)
DECL|PRCMSRAMRetentionEnable|function|PRCMSRAMRetentionEnable(unsigned long ulSramColSel, unsigned long ulModeFlags)
DECL|PRCMSleepEnter|function|PRCMSleepEnter()
DECL|PRCMSlowClkCtrFastGet|function|unsigned long long PRCMSlowClkCtrFastGet(void)
DECL|PRCMSlowClkCtrGet|function|PRCMSlowClkCtrGet()
DECL|PRCMSlowClkCtrMatchGet|function|unsigned long long PRCMSlowClkCtrMatchGet()
DECL|PRCMSlowClkCtrMatchSet|function|void PRCMSlowClkCtrMatchSet(unsigned long long ullValue)
DECL|PRCMSysResetCauseGet|function|unsigned long PRCMSysResetCauseGet()
DECL|PRCM_ENABLE_STATUS|macro|PRCM_ENABLE_STATUS
DECL|PRCM_PeriphRegsList|variable|PRCM_PeriphRegsList
DECL|PRCM_SOFT_RESET|macro|PRCM_SOFT_RESET
DECL|RTCU16MSecRegRead|function|static unsigned short RTCU16MSecRegRead(void)
DECL|RTCU16MSecRegWrite|function|static void RTCU16MSecRegWrite(unsigned short u16Msec)
DECL|RTCU32SecRegRead|function|static unsigned long RTCU32SecRegRead(void)
DECL|RTCU32SecRegWrite|function|static void RTCU32SecRegWrite(unsigned long u32Msec)
DECL|RTCUseSet|function|static void RTCUseSet(void)
DECL|RTC_MSEC_IN_U64MSEC|macro|RTC_MSEC_IN_U64MSEC
DECL|RTC_MSEC_U16_REG_ADDR|macro|RTC_MSEC_U16_REG_ADDR
DECL|RTC_SECS_IN_U64MSEC|macro|RTC_SECS_IN_U64MSEC
DECL|RTC_SECS_U32_REG_ADDR|macro|RTC_SECS_U32_REG_ADDR
DECL|RTC_U16MSEC_REG_RD|macro|RTC_U16MSEC_REG_RD
DECL|RTC_U16MSEC_REG_WR|macro|RTC_U16MSEC_REG_WR
DECL|RTC_U16MSEC_REG|macro|RTC_U16MSEC_REG
DECL|RTC_U32SECS_REG_RD|macro|RTC_U32SECS_REG_RD
DECL|RTC_U32SECS_REG_WR|macro|RTC_U32SECS_REG_WR
DECL|RTC_U32SECS_REG|macro|RTC_U32SECS_REG
DECL|RTC_U64MSEC_MK|macro|RTC_U64MSEC_MK
DECL|RTC_USE_SET|macro|RTC_USE_SET
DECL|SCC_U64MSEC_GET|macro|SCC_U64MSEC_GET
DECL|SCC_U64MSEC_MATCH_GET|macro|SCC_U64MSEC_MATCH_GET
DECL|SCC_U64MSEC_MATCH_SET|macro|SCC_U64MSEC_MATCH_SET
DECL|SELECT_SCC_U42BITS|macro|SELECT_SCC_U42BITS
DECL|SYS_CLK|macro|SYS_CLK
DECL|XTAL_CLK|macro|XTAL_CLK
