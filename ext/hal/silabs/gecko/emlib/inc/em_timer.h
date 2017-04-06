DECL|EM_TIMER_H|macro|EM_TIMER_H
DECL|TIMER_CCMode_TypeDef|typedef|} TIMER_CCMode_TypeDef;
DECL|TIMER_CH_VALID|macro|TIMER_CH_VALID
DECL|TIMER_CH_VALID|macro|TIMER_CH_VALID
DECL|TIMER_CaptureGet|function|__STATIC_INLINE uint32_t TIMER_CaptureGet(TIMER_TypeDef *timer, unsigned int ch)
DECL|TIMER_ClearDTIFault|function|__STATIC_INLINE void TIMER_ClearDTIFault(TIMER_TypeDef *timer, uint32_t flags)
DECL|TIMER_ClkSel_TypeDef|typedef|} TIMER_ClkSel_TypeDef;
DECL|TIMER_CompareBufSet|function|__STATIC_INLINE void TIMER_CompareBufSet(TIMER_TypeDef *timer, unsigned int ch, uint32_t val)
DECL|TIMER_CompareSet|function|__STATIC_INLINE void TIMER_CompareSet(TIMER_TypeDef *timer, unsigned int ch, uint32_t val)
DECL|TIMER_CounterGet|function|__STATIC_INLINE uint32_t TIMER_CounterGet(TIMER_TypeDef *timer)
DECL|TIMER_CounterSet|function|__STATIC_INLINE void TIMER_CounterSet(TIMER_TypeDef *timer, uint32_t val)
DECL|TIMER_DtiFaultAction_TypeDef|typedef|} TIMER_DtiFaultAction_TypeDef;
DECL|TIMER_Edge_TypeDef|typedef|} TIMER_Edge_TypeDef;
DECL|TIMER_EnableDTI|function|__STATIC_INLINE void TIMER_EnableDTI(TIMER_TypeDef *timer, bool enable)
DECL|TIMER_Enable|function|__STATIC_INLINE void TIMER_Enable(TIMER_TypeDef *timer, bool enable)
DECL|TIMER_Event_TypeDef|typedef|} TIMER_Event_TypeDef;
DECL|TIMER_GetDTIFault|function|__STATIC_INLINE uint32_t TIMER_GetDTIFault(TIMER_TypeDef *timer)
DECL|TIMER_INITCC_DEFAULT|macro|TIMER_INITCC_DEFAULT
DECL|TIMER_INITDTI_DEFAULT|macro|TIMER_INITDTI_DEFAULT
DECL|TIMER_INIT_DEFAULT|macro|TIMER_INIT_DEFAULT
DECL|TIMER_INIT_DEFAULT|macro|TIMER_INIT_DEFAULT
DECL|TIMER_InitCC_TypeDef|typedef|} TIMER_InitCC_TypeDef;
DECL|TIMER_InitDTI_TypeDef|typedef|} TIMER_InitDTI_TypeDef;
DECL|TIMER_Init_TypeDef|typedef|} TIMER_Init_TypeDef;
DECL|TIMER_InputAction_TypeDef|typedef|} TIMER_InputAction_TypeDef;
DECL|TIMER_IntClear|function|__STATIC_INLINE void TIMER_IntClear(TIMER_TypeDef *timer, uint32_t flags)
DECL|TIMER_IntDisable|function|__STATIC_INLINE void TIMER_IntDisable(TIMER_TypeDef *timer, uint32_t flags)
DECL|TIMER_IntEnable|function|__STATIC_INLINE void TIMER_IntEnable(TIMER_TypeDef *timer, uint32_t flags)
DECL|TIMER_IntGetEnabled|function|__STATIC_INLINE uint32_t TIMER_IntGetEnabled(TIMER_TypeDef *timer)
DECL|TIMER_IntGet|function|__STATIC_INLINE uint32_t TIMER_IntGet(TIMER_TypeDef *timer)
DECL|TIMER_IntSet|function|__STATIC_INLINE void TIMER_IntSet(TIMER_TypeDef *timer, uint32_t flags)
DECL|TIMER_Lock|function|__STATIC_INLINE void TIMER_Lock(TIMER_TypeDef *timer)
DECL|TIMER_MaxCount|function|__STATIC_INLINE uint32_t TIMER_MaxCount(const TIMER_TypeDef *ref)
DECL|TIMER_Mode_TypeDef|typedef|} TIMER_Mode_TypeDef;
DECL|TIMER_OutputAction_TypeDef|typedef|} TIMER_OutputAction_TypeDef;
DECL|TIMER_PRSSEL_TypeDef|typedef|} TIMER_PRSSEL_TypeDef;
DECL|TIMER_Prescale_TypeDef|typedef|} TIMER_Prescale_TypeDef;
DECL|TIMER_REF_VALID|macro|TIMER_REF_VALID
DECL|TIMER_TopBufSet|function|__STATIC_INLINE void TIMER_TopBufSet(TIMER_TypeDef *timer, uint32_t val)
DECL|TIMER_TopGet|function|__STATIC_INLINE uint32_t TIMER_TopGet(TIMER_TypeDef *timer)
DECL|TIMER_TopSet|function|__STATIC_INLINE void TIMER_TopSet(TIMER_TypeDef *timer, uint32_t val)
DECL|TIMER_Unlock|function|__STATIC_INLINE void TIMER_Unlock(TIMER_TypeDef *timer)
DECL|TIMER_Valid|function|__STATIC_INLINE bool TIMER_Valid(const TIMER_TypeDef *ref)
DECL|activeLowOut|member|bool activeLowOut;
DECL|ati|member|bool ati;
DECL|autoRestart|member|bool autoRestart;
DECL|clkSel|member|TIMER_ClkSel_TypeDef clkSel;
DECL|cmoa|member|TIMER_OutputAction_TypeDef cmoa;
DECL|cofoa|member|TIMER_OutputAction_TypeDef cofoa;
DECL|coist|member|bool coist;
DECL|count2x|member|bool count2x;
DECL|cufoa|member|TIMER_OutputAction_TypeDef cufoa;
DECL|debugRun|member|bool debugRun;
DECL|dmaClrAct|member|bool dmaClrAct;
DECL|edge|member|TIMER_Edge_TypeDef edge;
DECL|enableFaultSourceCoreLockup|member|bool enableFaultSourceCoreLockup;
DECL|enableFaultSourceDebugger|member|bool enableFaultSourceDebugger;
DECL|enableFaultSourcePrsSel0|member|bool enableFaultSourcePrsSel0;
DECL|enableFaultSourcePrsSel1|member|bool enableFaultSourcePrsSel1;
DECL|enablePrsSource|member|bool enablePrsSource;
DECL|enable|member|bool enable;
DECL|enable|member|bool enable;
DECL|eventCtrl|member|TIMER_Event_TypeDef eventCtrl;
DECL|fallAction|member|TIMER_InputAction_TypeDef fallAction;
DECL|fallTime|member|unsigned int fallTime;
DECL|faultAction|member|TIMER_DtiFaultAction_TypeDef faultAction;
DECL|faultSourcePrsSel0|member|TIMER_PRSSEL_TypeDef faultSourcePrsSel0;
DECL|faultSourcePrsSel1|member|TIMER_PRSSEL_TypeDef faultSourcePrsSel1;
DECL|filter|member|bool filter;
DECL|invertComplementaryOut|member|bool invertComplementaryOut;
DECL|mode|member|TIMER_CCMode_TypeDef mode;
DECL|mode|member|TIMER_Mode_TypeDef mode;
DECL|oneShot|member|bool oneShot;
DECL|outInvert|member|bool outInvert;
DECL|outputsEnableMask|member|uint32_t outputsEnableMask;
DECL|prescale|member|TIMER_Prescale_TypeDef prescale;
DECL|prescale|member|TIMER_Prescale_TypeDef prescale;
DECL|prsInput|member|bool prsInput;
DECL|prsSel|member|TIMER_PRSSEL_TypeDef prsSel;
DECL|prsSel|member|TIMER_PRSSEL_TypeDef prsSel;
DECL|quadModeX4|member|bool quadModeX4;
DECL|riseAction|member|TIMER_InputAction_TypeDef riseAction;
DECL|riseTime|member|unsigned int riseTime;
DECL|sync|member|bool sync;
DECL|timerCCModeCapture|enumerator|timerCCModeCapture = _TIMER_CC_CTRL_MODE_INPUTCAPTURE, /**< Input capture. */
DECL|timerCCModeCompare|enumerator|timerCCModeCompare = _TIMER_CC_CTRL_MODE_OUTPUTCOMPARE, /**< Output compare. */
DECL|timerCCModeOff|enumerator|timerCCModeOff = _TIMER_CC_CTRL_MODE_OFF, /**< Channel turned off. */
DECL|timerCCModePWM|enumerator|timerCCModePWM = _TIMER_CC_CTRL_MODE_PWM /**< Pulse-Width modulation. */
DECL|timerClkSelCC1|enumerator|timerClkSelCC1 = _TIMER_CTRL_CLKSEL_CC1,
DECL|timerClkSelCascade|enumerator|timerClkSelCascade = _TIMER_CTRL_CLKSEL_TIMEROUF
DECL|timerClkSelHFPerClk|enumerator|timerClkSelHFPerClk = _TIMER_CTRL_CLKSEL_PRESCHFPERCLK,
DECL|timerDtiFaultActionClear|enumerator|timerDtiFaultActionClear = _TIMER_DTFC_DTFA_CLEAR, /**< Clear outputs. */
DECL|timerDtiFaultActionInactive|enumerator|timerDtiFaultActionInactive = _TIMER_DTFC_DTFA_INACTIVE, /**< Set outputs inactive. */
DECL|timerDtiFaultActionNone|enumerator|timerDtiFaultActionNone = _TIMER_DTFC_DTFA_NONE, /**< No action on fault. */
DECL|timerDtiFaultActionTristate|enumerator|timerDtiFaultActionTristate = _TIMER_DTFC_DTFA_TRISTATE /**< Tristate outputs. */
DECL|timerEdgeBoth|enumerator|timerEdgeBoth = _TIMER_CC_CTRL_ICEDGE_BOTH,
DECL|timerEdgeFalling|enumerator|timerEdgeFalling = _TIMER_CC_CTRL_ICEDGE_FALLING,
DECL|timerEdgeNone|enumerator|timerEdgeNone = _TIMER_CC_CTRL_ICEDGE_NONE
DECL|timerEdgeRising|enumerator|timerEdgeRising = _TIMER_CC_CTRL_ICEDGE_RISING,
DECL|timerEventEvery2ndEdge|enumerator|timerEventEvery2ndEdge = _TIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE,
DECL|timerEventEveryEdge|enumerator|timerEventEveryEdge = _TIMER_CC_CTRL_ICEVCTRL_EVERYEDGE,
DECL|timerEventFalling|enumerator|timerEventFalling = _TIMER_CC_CTRL_ICEVCTRL_FALLING
DECL|timerEventRising|enumerator|timerEventRising = _TIMER_CC_CTRL_ICEVCTRL_RISING,
DECL|timerInputActionNone|enumerator|timerInputActionNone = _TIMER_CTRL_FALLA_NONE,
DECL|timerInputActionReloadStart|enumerator|timerInputActionReloadStart = _TIMER_CTRL_FALLA_RELOADSTART
DECL|timerInputActionStart|enumerator|timerInputActionStart = _TIMER_CTRL_FALLA_START,
DECL|timerInputActionStop|enumerator|timerInputActionStop = _TIMER_CTRL_FALLA_STOP,
DECL|timerModeDown|enumerator|timerModeDown = _TIMER_CTRL_MODE_DOWN, /**< Down-counting. */
DECL|timerModeQDec|enumerator|timerModeQDec = _TIMER_CTRL_MODE_QDEC /**< Quadrature decoder. */
DECL|timerModeUpDown|enumerator|timerModeUpDown = _TIMER_CTRL_MODE_UPDOWN, /**< Up/down-counting. */
DECL|timerModeUp|enumerator|timerModeUp = _TIMER_CTRL_MODE_UP, /**< Up-counting. */
DECL|timerOutputActionClear|enumerator|timerOutputActionClear = _TIMER_CC_CTRL_CUFOA_CLEAR,
DECL|timerOutputActionNone|enumerator|timerOutputActionNone = _TIMER_CC_CTRL_CUFOA_NONE,
DECL|timerOutputActionSet|enumerator|timerOutputActionSet = _TIMER_CC_CTRL_CUFOA_SET
DECL|timerOutputActionToggle|enumerator|timerOutputActionToggle = _TIMER_CC_CTRL_CUFOA_TOGGLE,
DECL|timerPRSSELCh0|enumerator|timerPRSSELCh0 = _TIMER_CC_CTRL_PRSSEL_PRSCH0, /**< PRS channel 0. */
DECL|timerPRSSELCh10|enumerator|timerPRSSELCh10 = _TIMER_CC_CTRL_PRSSEL_PRSCH10, /**< PRS channel 10. */
DECL|timerPRSSELCh11|enumerator|timerPRSSELCh11 = _TIMER_CC_CTRL_PRSSEL_PRSCH11, /**< PRS channel 11. */
DECL|timerPRSSELCh1|enumerator|timerPRSSELCh1 = _TIMER_CC_CTRL_PRSSEL_PRSCH1, /**< PRS channel 1. */
DECL|timerPRSSELCh2|enumerator|timerPRSSELCh2 = _TIMER_CC_CTRL_PRSSEL_PRSCH2, /**< PRS channel 2. */
DECL|timerPRSSELCh3|enumerator|timerPRSSELCh3 = _TIMER_CC_CTRL_PRSSEL_PRSCH3, /**< PRS channel 3. */
DECL|timerPRSSELCh4|enumerator|timerPRSSELCh4 = _TIMER_CC_CTRL_PRSSEL_PRSCH4, /**< PRS channel 4. */
DECL|timerPRSSELCh5|enumerator|timerPRSSELCh5 = _TIMER_CC_CTRL_PRSSEL_PRSCH5, /**< PRS channel 5. */
DECL|timerPRSSELCh6|enumerator|timerPRSSELCh6 = _TIMER_CC_CTRL_PRSSEL_PRSCH6, /**< PRS channel 6. */
DECL|timerPRSSELCh7|enumerator|timerPRSSELCh7 = _TIMER_CC_CTRL_PRSSEL_PRSCH7, /**< PRS channel 7. */
DECL|timerPRSSELCh8|enumerator|timerPRSSELCh8 = _TIMER_CC_CTRL_PRSSEL_PRSCH8, /**< PRS channel 8. */
DECL|timerPRSSELCh9|enumerator|timerPRSSELCh9 = _TIMER_CC_CTRL_PRSSEL_PRSCH9, /**< PRS channel 9. */
DECL|timerPrescale1024|enumerator|timerPrescale1024 = _TIMER_CTRL_PRESC_DIV1024 /**< Divide by 1024. */
DECL|timerPrescale128|enumerator|timerPrescale128 = _TIMER_CTRL_PRESC_DIV128, /**< Divide by 128. */
DECL|timerPrescale16|enumerator|timerPrescale16 = _TIMER_CTRL_PRESC_DIV16, /**< Divide by 16. */
DECL|timerPrescale1|enumerator|timerPrescale1 = _TIMER_CTRL_PRESC_DIV1, /**< Divide by 1. */
DECL|timerPrescale256|enumerator|timerPrescale256 = _TIMER_CTRL_PRESC_DIV256, /**< Divide by 256. */
DECL|timerPrescale2|enumerator|timerPrescale2 = _TIMER_CTRL_PRESC_DIV2, /**< Divide by 2. */
DECL|timerPrescale32|enumerator|timerPrescale32 = _TIMER_CTRL_PRESC_DIV32, /**< Divide by 32. */
DECL|timerPrescale4|enumerator|timerPrescale4 = _TIMER_CTRL_PRESC_DIV4, /**< Divide by 4. */
DECL|timerPrescale512|enumerator|timerPrescale512 = _TIMER_CTRL_PRESC_DIV512, /**< Divide by 512. */
DECL|timerPrescale64|enumerator|timerPrescale64 = _TIMER_CTRL_PRESC_DIV64, /**< Divide by 64. */
DECL|timerPrescale8|enumerator|timerPrescale8 = _TIMER_CTRL_PRESC_DIV8, /**< Divide by 8. */
