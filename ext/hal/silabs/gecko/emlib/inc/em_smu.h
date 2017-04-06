DECL|EM_SMU_H|macro|EM_SMU_H
DECL|SMU_EnablePPU|function|__STATIC_INLINE void SMU_EnablePPU(bool enable)
DECL|SMU_GetFaultingPeripheral|function|__STATIC_INLINE SMU_Peripheral_TypeDef SMU_GetFaultingPeripheral(void)
DECL|SMU_INIT_DEFAULT|macro|SMU_INIT_DEFAULT
DECL|SMU_Init_TypeDef|typedef|} SMU_Init_TypeDef;
DECL|SMU_Init|function|__STATIC_INLINE void SMU_Init(const SMU_Init_TypeDef *init)
DECL|SMU_IntClear|function|__STATIC_INLINE void SMU_IntClear(uint32_t flags)
DECL|SMU_IntDisable|function|__STATIC_INLINE void SMU_IntDisable(uint32_t flags)
DECL|SMU_IntEnable|function|__STATIC_INLINE void SMU_IntEnable(uint32_t flags)
DECL|SMU_IntGetEnabled|function|__STATIC_INLINE uint32_t SMU_IntGetEnabled(void)
DECL|SMU_IntGet|function|__STATIC_INLINE uint32_t SMU_IntGet(void)
DECL|SMU_IntSet|function|__STATIC_INLINE void SMU_IntSet(uint32_t flags)
DECL|SMU_Peripheral_TypeDef|typedef|} SMU_Peripheral_TypeDef;
DECL|SMU_PrivilegedAccess_TypeDef|typedef|} SMU_PrivilegedAccess_TypeDef;
DECL|SMU_SetPrivilegedAccess|function|__STATIC_INLINE void SMU_SetPrivilegedAccess(SMU_Peripheral_TypeDef peripheral, bool privileged)
DECL|access|member|SMU_PrivilegedAccess_TypeDef access; /**< Periperal access control array.*/
DECL|enable|member|bool enable; /**< SMU enable flag, when set SMU_Init() will enable SMU.*/
DECL|ppu|member|} ppu;
DECL|privilegedACMP0|member|bool privilegedACMP0 : 1; /**< Privileged access enabler for ACMP0 */
DECL|privilegedACMP1|member|bool privilegedACMP1 : 1; /**< Privileged access enabler for ACMP1 */
DECL|privilegedADC0|member|bool privilegedADC0 : 1; /**< Privileged access enabler for ADC0 */
DECL|privilegedCMU|member|bool privilegedCMU : 1; /**< Privileged access enabler for CMU */
DECL|privilegedCRYOTIMER|member|bool privilegedCRYOTIMER : 1; /**< Privileged access enabler for CRYOTIMER */
DECL|privilegedCRYPTO0|member|bool privilegedCRYPTO0 : 1; /**< Privileged access enabler for CRYPTO0 */
DECL|privilegedCRYPTO1|member|bool privilegedCRYPTO1 : 1; /**< Privileged access enabler for CRYPTO1 */
DECL|privilegedCSEN|member|bool privilegedCSEN : 1; /**< Privileged access enabler for CSEN */
DECL|privilegedEMU|member|bool privilegedEMU : 1; /**< Privileged access enabler for EMU */
DECL|privilegedFPUEH|member|bool privilegedFPUEH : 1; /**< Privileged access enabler for FPUEH */
DECL|privilegedGPCRC|member|bool privilegedGPCRC : 1; /**< Privileged access enabler for GPCRC */
DECL|privilegedGPIO|member|bool privilegedGPIO : 1; /**< Privileged access enabler for GPIO */
DECL|privilegedI2C0|member|bool privilegedI2C0 : 1; /**< Privileged access enabler for I2C0 */
DECL|privilegedI2C1|member|bool privilegedI2C1 : 1; /**< Privileged access enabler for I2C1 */
DECL|privilegedIDAC0|member|bool privilegedIDAC0 : 1; /**< Privileged access enabler for IDAC0 */
DECL|privilegedLDMA|member|bool privilegedLDMA : 1; /**< Privileged access enabler for LDMA */
DECL|privilegedLESENSE|member|bool privilegedLESENSE : 1; /**< Privileged access enabler for LESENSE */
DECL|privilegedLETIMER0|member|bool privilegedLETIMER0 : 1; /**< Privileged access enabler for LETIMER0 */
DECL|privilegedLEUART0|member|bool privilegedLEUART0 : 1; /**< Privileged access enabler for LEUART0 */
DECL|privilegedMSC|member|bool privilegedMSC : 1; /**< Privileged access enabler for MSC */
DECL|privilegedPCNT0|member|bool privilegedPCNT0 : 1; /**< Privileged access enabler for PCNT0 */
DECL|privilegedPCNT1|member|bool privilegedPCNT1 : 1; /**< Privileged access enabler for PCNT1 */
DECL|privilegedPCNT2|member|bool privilegedPCNT2 : 1; /**< Privileged access enabler for PCNT2 */
DECL|privilegedPRS|member|bool privilegedPRS : 1; /**< Privileged access enabler for PRS */
DECL|privilegedRMU|member|bool privilegedRMU : 1; /**< Privileged access enabler for RMU */
DECL|privilegedRTCC|member|bool privilegedRTCC : 1; /**< Privileged access enabler for RTCC */
DECL|privilegedReserved0|member|bool privilegedReserved0 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved1|member|bool privilegedReserved1 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved2|member|bool privilegedReserved2 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved3|member|bool privilegedReserved3 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved4|member|bool privilegedReserved4 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved5|member|bool privilegedReserved5 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved6|member|bool privilegedReserved6 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved7|member|bool privilegedReserved7 : 1; /**< Reserved privileged access enabler */
DECL|privilegedReserved8|member|bool privilegedReserved8 : 1; /**< Reserved privileged access enabler */
DECL|privilegedSMU|member|bool privilegedSMU : 1; /**< Privileged access enabler for SMU */
DECL|privilegedTIMER0|member|bool privilegedTIMER0 : 1; /**< Privileged access enabler for TIMER0 */
DECL|privilegedTIMER1|member|bool privilegedTIMER1 : 1; /**< Privileged access enabler for TIMER1 */
DECL|privilegedTRNG0|member|bool privilegedTRNG0 : 1; /**< Privileged access enabler for TRNG0 */
DECL|privilegedUSART0|member|bool privilegedUSART0 : 1; /**< Privileged access enabler for USART0 */
DECL|privilegedUSART1|member|bool privilegedUSART1 : 1; /**< Privileged access enabler for USART1 */
DECL|privilegedUSART2|member|bool privilegedUSART2 : 1; /**< Privileged access enabler for USART2 */
DECL|privilegedUSART3|member|bool privilegedUSART3 : 1; /**< Privileged access enabler for USART3 */
DECL|privilegedVDAC0|member|bool privilegedVDAC0 : 1; /**< Privileged access enabler for VDAC0 */
DECL|privilegedWDOG0|member|bool privilegedWDOG0 : 1; /**< Privileged access enabler for WDOG0 */
DECL|privilegedWDOG1|member|bool privilegedWDOG1 : 1; /**< Privileged access enabler for WDOG1 */
DECL|privilegedWTIMER0|member|bool privilegedWTIMER0 : 1; /**< Privileged access enabler for WTIMER0 */
DECL|privilegedWTIMER1|member|bool privilegedWTIMER1 : 1; /**< Privileged access enabler for WTIMER1 */
DECL|reg|member|uint32_t reg[2]; /**< Periperal access control array.*/
DECL|smuPeripheralACMP0|enumerator|smuPeripheralACMP0 = _SMU_PPUPATD0_ACMP0_SHIFT, /**< SMU peripheral identifier for ACMP0 */
DECL|smuPeripheralACMP1|enumerator|smuPeripheralACMP1 = _SMU_PPUPATD0_ACMP1_SHIFT, /**< SMU peripheral identifier for ACMP1 */
DECL|smuPeripheralADC0|enumerator|smuPeripheralADC0 = _SMU_PPUPATD0_ADC0_SHIFT, /**< SMU peripheral identifier for ADC0 */
DECL|smuPeripheralCMU|enumerator|smuPeripheralCMU = _SMU_PPUPATD0_CMU_SHIFT, /**< SMU peripheral identifier for CMU */
DECL|smuPeripheralCRYOTIMER|enumerator|smuPeripheralCRYOTIMER = _SMU_PPUPATD0_CRYOTIMER_SHIFT, /**< SMU peripheral identifier for CRYOTIMER */
DECL|smuPeripheralCRYPTO0|enumerator|smuPeripheralCRYPTO0 = _SMU_PPUPATD0_CRYPTO0_SHIFT, /**< SMU peripheral identifier for CRYPTO0 */
DECL|smuPeripheralCRYPTO1|enumerator|smuPeripheralCRYPTO1 = _SMU_PPUPATD0_CRYPTO1_SHIFT, /**< SMU peripheral identifier for CRYPTO1 */
DECL|smuPeripheralCSEN|enumerator|smuPeripheralCSEN = _SMU_PPUPATD0_CSEN_SHIFT, /**< SMU peripheral identifier for CSEN */
DECL|smuPeripheralEMU|enumerator|smuPeripheralEMU = _SMU_PPUPATD0_EMU_SHIFT, /**< SMU peripheral identifier for EMU */
DECL|smuPeripheralEnd|enumerator|smuPeripheralEnd
DECL|smuPeripheralFPUEH|enumerator|smuPeripheralFPUEH = _SMU_PPUPATD0_FPUEH_SHIFT, /**< SMU peripheral identifier for FPUEH */
DECL|smuPeripheralGPCRC|enumerator|smuPeripheralGPCRC = _SMU_PPUPATD0_GPCRC_SHIFT, /**< SMU peripheral identifier for GPCRC */
DECL|smuPeripheralGPIO|enumerator|smuPeripheralGPIO = _SMU_PPUPATD0_GPIO_SHIFT, /**< SMU peripheral identifier for GPIO */
DECL|smuPeripheralI2C0|enumerator|smuPeripheralI2C0 = _SMU_PPUPATD0_I2C0_SHIFT, /**< SMU peripheral identifier for I2C0 */
DECL|smuPeripheralI2C1|enumerator|smuPeripheralI2C1 = _SMU_PPUPATD0_I2C1_SHIFT, /**< SMU peripheral identifier for I2C1 */
DECL|smuPeripheralIDAC0|enumerator|smuPeripheralIDAC0 = _SMU_PPUPATD0_IDAC0_SHIFT, /**< SMU peripheral identifier for IDAC0 */
DECL|smuPeripheralLDMA|enumerator|smuPeripheralLDMA = _SMU_PPUPATD0_LDMA_SHIFT, /**< SMU peripheral identifier for LDMA */
DECL|smuPeripheralLESENSE|enumerator|smuPeripheralLESENSE = _SMU_PPUPATD0_LESENSE_SHIFT, /**< SMU peripheral identifier for LESENSE */
DECL|smuPeripheralLETIMER0|enumerator|smuPeripheralLETIMER0 = _SMU_PPUPATD0_LETIMER0_SHIFT, /**< SMU peripheral identifier for LETIMER0 */
DECL|smuPeripheralLEUART0|enumerator|smuPeripheralLEUART0 = _SMU_PPUPATD0_LEUART0_SHIFT, /**< SMU peripheral identifier for LEUART0 */
DECL|smuPeripheralMSC|enumerator|smuPeripheralMSC = _SMU_PPUPATD0_MSC_SHIFT, /**< SMU peripheral identifier for MSC */
DECL|smuPeripheralPCNT0|enumerator|smuPeripheralPCNT0 = _SMU_PPUPATD0_PCNT0_SHIFT, /**< SMU peripheral identifier for PCNT0 */
DECL|smuPeripheralPCNT1|enumerator|smuPeripheralPCNT1 = _SMU_PPUPATD0_PCNT1_SHIFT, /**< SMU peripheral identifier for PCNT1 */
DECL|smuPeripheralPCNT2|enumerator|smuPeripheralPCNT2 = _SMU_PPUPATD0_PCNT2_SHIFT, /**< SMU peripheral identifier for PCNT2 */
DECL|smuPeripheralPRS|enumerator|smuPeripheralPRS = _SMU_PPUPATD0_PRS_SHIFT, /**< SMU peripheral identifier for PRS */
DECL|smuPeripheralRMU|enumerator|smuPeripheralRMU = 32 + _SMU_PPUPATD1_RMU_SHIFT, /**< SMU peripheral identifier for RMU */
DECL|smuPeripheralRTCC|enumerator|smuPeripheralRTCC = 32 + _SMU_PPUPATD1_RTCC_SHIFT, /**< SMU peripheral identifier for RTCC */
DECL|smuPeripheralSMU|enumerator|smuPeripheralSMU = 32 + _SMU_PPUPATD1_SMU_SHIFT, /**< SMU peripheral identifier for SMU */
DECL|smuPeripheralTIMER0|enumerator|smuPeripheralTIMER0 = 32 + _SMU_PPUPATD1_TIMER0_SHIFT, /**< SMU peripheral identifier for TIMER0 */
DECL|smuPeripheralTIMER1|enumerator|smuPeripheralTIMER1 = 32 + _SMU_PPUPATD1_TIMER1_SHIFT, /**< SMU peripheral identifier for TIMER1 */
DECL|smuPeripheralTRNG0|enumerator|smuPeripheralTRNG0 = 32 + _SMU_PPUPATD1_TRNG0_SHIFT, /**< SMU peripheral identifier for TRNG0 */
DECL|smuPeripheralUSART0|enumerator|smuPeripheralUSART0 = 32 + _SMU_PPUPATD1_USART0_SHIFT, /**< SMU peripheral identifier for USART0 */
DECL|smuPeripheralUSART1|enumerator|smuPeripheralUSART1 = 32 + _SMU_PPUPATD1_USART1_SHIFT, /**< SMU peripheral identifier for USART1 */
DECL|smuPeripheralUSART2|enumerator|smuPeripheralUSART2 = 32 + _SMU_PPUPATD1_USART2_SHIFT, /**< SMU peripheral identifier for USART2 */
DECL|smuPeripheralUSART3|enumerator|smuPeripheralUSART3 = 32 + _SMU_PPUPATD1_USART3_SHIFT, /**< SMU peripheral identifier for USART3 */
DECL|smuPeripheralVDAC0|enumerator|smuPeripheralVDAC0 = _SMU_PPUPATD0_VDAC0_SHIFT, /**< SMU peripheral identifier for VDAC0 */
DECL|smuPeripheralWDOG0|enumerator|smuPeripheralWDOG0 = 32 + _SMU_PPUPATD1_WDOG0_SHIFT, /**< SMU peripheral identifier for WDOG0 */
DECL|smuPeripheralWDOG1|enumerator|smuPeripheralWDOG1 = 32 + _SMU_PPUPATD1_WDOG1_SHIFT, /**< SMU peripheral identifier for WDOG1 */
DECL|smuPeripheralWTIMER0|enumerator|smuPeripheralWTIMER0 = 32 + _SMU_PPUPATD1_WTIMER0_SHIFT, /**< SMU peripheral identifier for WTIMER0 */
DECL|smuPeripheralWTIMER1|enumerator|smuPeripheralWTIMER1 = 32 + _SMU_PPUPATD1_WTIMER1_SHIFT, /**< SMU peripheral identifier for WTIMER1 */
