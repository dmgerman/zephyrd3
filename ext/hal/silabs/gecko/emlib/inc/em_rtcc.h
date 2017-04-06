DECL|EM_RTCC_H|macro|EM_RTCC_H
DECL|ERRATA_FIX_RTCC_E203|macro|ERRATA_FIX_RTCC_E203
DECL|ERRATA_FIX_RTCC_E204|macro|ERRATA_FIX_RTCC_E204
DECL|RTCC_CCChConf_TypeDef|typedef|} RTCC_CCChConf_TypeDef;
DECL|RTCC_CH_INIT_CAPTURE_DEFAULT|macro|RTCC_CH_INIT_CAPTURE_DEFAULT
DECL|RTCC_CH_INIT_COMPARE_DEFAULT|macro|RTCC_CH_INIT_COMPARE_DEFAULT
DECL|RTCC_CH_VALID|macro|RTCC_CH_VALID
DECL|RTCC_CapComChMode_TypeDef|typedef|} RTCC_CapComChMode_TypeDef;
DECL|RTCC_ChannelCCVGet|function|__STATIC_INLINE uint32_t RTCC_ChannelCCVGet( int ch )
DECL|RTCC_ChannelCCVSet|function|__STATIC_INLINE void RTCC_ChannelCCVSet( int ch, uint32_t value )
DECL|RTCC_ChannelDateGet|function|__STATIC_INLINE uint32_t RTCC_ChannelDateGet( int ch )
DECL|RTCC_ChannelDateSet|function|__STATIC_INLINE void RTCC_ChannelDateSet( int ch, uint32_t date )
DECL|RTCC_ChannelTimeGet|function|__STATIC_INLINE uint32_t RTCC_ChannelTimeGet( int ch )
DECL|RTCC_ChannelTimeSet|function|__STATIC_INLINE void RTCC_ChannelTimeSet( int ch, uint32_t time )
DECL|RTCC_CntMode_TypeDef|typedef|} RTCC_CntMode_TypeDef;
DECL|RTCC_CntPresc_TypeDef|typedef|} RTCC_CntPresc_TypeDef;
DECL|RTCC_CombinedCounterGet|function|__STATIC_INLINE uint32_t RTCC_CombinedCounterGet( void )
DECL|RTCC_CompBase_TypeDef|typedef|} RTCC_CompBase_TypeDef;
DECL|RTCC_CompMatchOutAction_TypeDef|typedef|} RTCC_CompMatchOutAction_TypeDef;
DECL|RTCC_CounterGet|function|__STATIC_INLINE uint32_t RTCC_CounterGet( void )
DECL|RTCC_CounterSet|function|__STATIC_INLINE void RTCC_CounterSet( uint32_t value )
DECL|RTCC_DateGet|function|__STATIC_INLINE uint32_t RTCC_DateGet( void )
DECL|RTCC_DateSet|function|__STATIC_INLINE void RTCC_DateSet( uint32_t date )
DECL|RTCC_DayCompareMode_TypeDef|typedef|} RTCC_DayCompareMode_TypeDef;
DECL|RTCC_EM4WakeupEnable|function|__STATIC_INLINE void RTCC_EM4WakeupEnable( bool enable )
DECL|RTCC_INIT_DEFAULT|macro|RTCC_INIT_DEFAULT
DECL|RTCC_INIT_DEFAULT|macro|RTCC_INIT_DEFAULT
DECL|RTCC_InEdgeSel_TypeDef|typedef|} RTCC_InEdgeSel_TypeDef;
DECL|RTCC_Init_TypeDef|typedef|} RTCC_Init_TypeDef;
DECL|RTCC_IntClear|function|__STATIC_INLINE void RTCC_IntClear( uint32_t flags )
DECL|RTCC_IntDisable|function|__STATIC_INLINE void RTCC_IntDisable( uint32_t flags )
DECL|RTCC_IntEnable|function|__STATIC_INLINE void RTCC_IntEnable( uint32_t flags )
DECL|RTCC_IntGetEnabled|function|__STATIC_INLINE uint32_t RTCC_IntGetEnabled( void )
DECL|RTCC_IntGet|function|__STATIC_INLINE uint32_t RTCC_IntGet( void )
DECL|RTCC_IntSet|function|__STATIC_INLINE void RTCC_IntSet( uint32_t flags )
DECL|RTCC_Lock|function|__STATIC_INLINE void RTCC_Lock( void )
DECL|RTCC_PRSSel_TypeDef|typedef|} RTCC_PRSSel_TypeDef;
DECL|RTCC_PreCounterGet|function|__STATIC_INLINE uint32_t RTCC_PreCounterGet( void )
DECL|RTCC_PreCounterSet|function|__STATIC_INLINE void RTCC_PreCounterSet( uint32_t preCntVal )
DECL|RTCC_PrescMode_TypeDef|typedef|} RTCC_PrescMode_TypeDef;
DECL|RTCC_RetentionRamPowerDown|function|__STATIC_INLINE void RTCC_RetentionRamPowerDown( void )
DECL|RTCC_StatusGet|function|__STATIC_INLINE uint32_t RTCC_StatusGet( void )
DECL|RTCC_TimeGet|function|__STATIC_INLINE uint32_t RTCC_TimeGet( void )
DECL|RTCC_TimeSet|function|__STATIC_INLINE void RTCC_TimeSet( uint32_t time )
DECL|RTCC_Unlock|function|__STATIC_INLINE void RTCC_Unlock( void )
DECL|chMode|member|RTCC_CapComChMode_TypeDef chMode;
DECL|cntMode|member|RTCC_CntMode_TypeDef cntMode;
DECL|cntWrapOnCCV1|member|bool cntWrapOnCCV1;
DECL|compBase|member|RTCC_CompBase_TypeDef compBase;
DECL|compMask|member|uint8_t compMask;
DECL|compMatchOutAction|member|RTCC_CompMatchOutAction_TypeDef compMatchOutAction;
DECL|dayCompMode|member|RTCC_DayCompareMode_TypeDef dayCompMode;
DECL|debugRun|member|bool debugRun;
DECL|disLeapYearCorr|member|bool disLeapYearCorr;
DECL|enaBackupModeSet|member|bool enaBackupModeSet;
DECL|enaOSCFailDetect|member|bool enaOSCFailDetect;
DECL|enable|member|bool enable;
DECL|inputEdgeSel|member|RTCC_InEdgeSel_TypeDef inputEdgeSel;
DECL|precntWrapOnCCV0|member|bool precntWrapOnCCV0;
DECL|prescMode|member|RTCC_PrescMode_TypeDef prescMode;
DECL|presc|member|RTCC_CntPresc_TypeDef presc;
DECL|prsSel|member|RTCC_PRSSel_TypeDef prsSel;
DECL|rtccCapComChModeCapture|enumerator|rtccCapComChModeCapture = _RTCC_CC_CTRL_MODE_INPUTCAPTURE, /**< Capture mode. */
DECL|rtccCapComChModeCompare|enumerator|rtccCapComChModeCompare = _RTCC_CC_CTRL_MODE_OUTPUTCOMPARE, /**< Compare mode. */
DECL|rtccCapComChModeOff|enumerator|rtccCapComChModeOff = _RTCC_CC_CTRL_MODE_OFF, /**< Capture/Compare channel turned off. */
DECL|rtccCntModeCalendar|enumerator|rtccCntModeCalendar = _RTCC_CTRL_CNTTICK_CCV0MATCH
DECL|rtccCntModeNormal|enumerator|rtccCntModeNormal = _RTCC_CTRL_CNTTICK_PRESC,
DECL|rtccCntPresc_1024|enumerator|rtccCntPresc_1024 = _RTCC_CTRL_CNTPRESC_DIV1024, /**< Divide clock by 1024. */
DECL|rtccCntPresc_128|enumerator|rtccCntPresc_128 = _RTCC_CTRL_CNTPRESC_DIV128, /**< Divide clock by 128. */
DECL|rtccCntPresc_16384|enumerator|rtccCntPresc_16384 = _RTCC_CTRL_CNTPRESC_DIV16384, /**< Divide clock by 16384. */
DECL|rtccCntPresc_16|enumerator|rtccCntPresc_16 = _RTCC_CTRL_CNTPRESC_DIV16, /**< Divide clock by 16. */
DECL|rtccCntPresc_1|enumerator|rtccCntPresc_1 = _RTCC_CTRL_CNTPRESC_DIV1, /**< Divide clock by 1. */
DECL|rtccCntPresc_2048|enumerator|rtccCntPresc_2048 = _RTCC_CTRL_CNTPRESC_DIV2048, /**< Divide clock by 2048. */
DECL|rtccCntPresc_256|enumerator|rtccCntPresc_256 = _RTCC_CTRL_CNTPRESC_DIV256, /**< Divide clock by 256. */
DECL|rtccCntPresc_2|enumerator|rtccCntPresc_2 = _RTCC_CTRL_CNTPRESC_DIV2, /**< Divide clock by 2. */
DECL|rtccCntPresc_32768|enumerator|rtccCntPresc_32768 = _RTCC_CTRL_CNTPRESC_DIV32768 /**< Divide clock by 32768. */
DECL|rtccCntPresc_32|enumerator|rtccCntPresc_32 = _RTCC_CTRL_CNTPRESC_DIV32, /**< Divide clock by 32. */
DECL|rtccCntPresc_4096|enumerator|rtccCntPresc_4096 = _RTCC_CTRL_CNTPRESC_DIV4096, /**< Divide clock by 4096. */
DECL|rtccCntPresc_4|enumerator|rtccCntPresc_4 = _RTCC_CTRL_CNTPRESC_DIV4, /**< Divide clock by 4. */
DECL|rtccCntPresc_512|enumerator|rtccCntPresc_512 = _RTCC_CTRL_CNTPRESC_DIV512, /**< Divide clock by 512. */
DECL|rtccCntPresc_64|enumerator|rtccCntPresc_64 = _RTCC_CTRL_CNTPRESC_DIV64, /**< Divide clock by 64. */
DECL|rtccCntPresc_8192|enumerator|rtccCntPresc_8192 = _RTCC_CTRL_CNTPRESC_DIV8192, /**< Divide clock by 8192. */
DECL|rtccCntPresc_8|enumerator|rtccCntPresc_8 = _RTCC_CTRL_CNTPRESC_DIV8, /**< Divide clock by 8. */
DECL|rtccCntTickCCV0Match|enumerator|rtccCntTickCCV0Match = _RTCC_CTRL_CNTTICK_CCV0MATCH
DECL|rtccCntTickPresc|enumerator|rtccCntTickPresc = _RTCC_CTRL_CNTTICK_PRESC,
DECL|rtccCompBaseCnt|enumerator|rtccCompBaseCnt = _RTCC_CC_CTRL_COMPBASE_CNT,
DECL|rtccCompBasePreCnt|enumerator|rtccCompBasePreCnt = _RTCC_CC_CTRL_COMPBASE_PRECNT
DECL|rtccCompMatchOutActionClear|enumerator|rtccCompMatchOutActionClear = _RTCC_CC_CTRL_CMOA_CLEAR, /**< Clear output. */
DECL|rtccCompMatchOutActionPulse|enumerator|rtccCompMatchOutActionPulse = _RTCC_CC_CTRL_CMOA_PULSE, /**< Generate a pulse. */
DECL|rtccCompMatchOutActionSet|enumerator|rtccCompMatchOutActionSet = _RTCC_CC_CTRL_CMOA_SET /**< Set output. */
DECL|rtccCompMatchOutActionToggle|enumerator|rtccCompMatchOutActionToggle = _RTCC_CC_CTRL_CMOA_TOGGLE, /**< Toggle output. */
DECL|rtccDayCompareModeMonth|enumerator|rtccDayCompareModeMonth = _RTCC_CC_CTRL_DAYCC_MONTH, /**< Day of month is selected for Capture/Compare. */
DECL|rtccDayCompareModeWeek|enumerator|rtccDayCompareModeWeek = _RTCC_CC_CTRL_DAYCC_WEEK /**< Day of week is selected for Capture/Compare. */
DECL|rtccInEdgeBoth|enumerator|rtccInEdgeBoth = _RTCC_CC_CTRL_ICEDGE_BOTH, /**< Both edges detected. */
DECL|rtccInEdgeFalling|enumerator|rtccInEdgeFalling = _RTCC_CC_CTRL_ICEDGE_FALLING, /**< Falling edges detected. */
DECL|rtccInEdgeNone|enumerator|rtccInEdgeNone = _RTCC_CC_CTRL_ICEDGE_NONE /**< No edge detection, signal is left as is. */
DECL|rtccInEdgeRising|enumerator|rtccInEdgeRising = _RTCC_CC_CTRL_ICEDGE_RISING, /**< Rising edges detected. */
DECL|rtccPRSCh0|enumerator|rtccPRSCh0 = _RTCC_CC_CTRL_PRSSEL_PRSCH0, /**< PRS channel 0. */
DECL|rtccPRSCh10|enumerator|rtccPRSCh10 = _RTCC_CC_CTRL_PRSSEL_PRSCH10, /**< PRS channel 10. */
DECL|rtccPRSCh11|enumerator|rtccPRSCh11 = _RTCC_CC_CTRL_PRSSEL_PRSCH11 /**< PRS channel 11. */
DECL|rtccPRSCh1|enumerator|rtccPRSCh1 = _RTCC_CC_CTRL_PRSSEL_PRSCH1, /**< PRS channel 1. */
DECL|rtccPRSCh2|enumerator|rtccPRSCh2 = _RTCC_CC_CTRL_PRSSEL_PRSCH2, /**< PRS channel 2. */
DECL|rtccPRSCh3|enumerator|rtccPRSCh3 = _RTCC_CC_CTRL_PRSSEL_PRSCH3, /**< PRS channel 3. */
DECL|rtccPRSCh4|enumerator|rtccPRSCh4 = _RTCC_CC_CTRL_PRSSEL_PRSCH4, /**< PRS channel 4. */
DECL|rtccPRSCh5|enumerator|rtccPRSCh5 = _RTCC_CC_CTRL_PRSSEL_PRSCH5, /**< PRS channel 5. */
DECL|rtccPRSCh6|enumerator|rtccPRSCh6 = _RTCC_CC_CTRL_PRSSEL_PRSCH6, /**< PRS channel 6. */
DECL|rtccPRSCh7|enumerator|rtccPRSCh7 = _RTCC_CC_CTRL_PRSSEL_PRSCH7, /**< PRS channel 7. */
DECL|rtccPRSCh8|enumerator|rtccPRSCh8 = _RTCC_CC_CTRL_PRSSEL_PRSCH8, /**< PRS channel 8. */
DECL|rtccPRSCh9|enumerator|rtccPRSCh9 = _RTCC_CC_CTRL_PRSSEL_PRSCH9, /**< PRS channel 9. */
