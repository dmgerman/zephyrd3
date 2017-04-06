DECL|BURTC_ClkSel_TypeDef|typedef|} BURTC_ClkSel_TypeDef;
DECL|BURTC_CounterGet|function|__STATIC_INLINE uint32_t BURTC_CounterGet(void)
DECL|BURTC_Enable|function|__STATIC_INLINE void BURTC_Enable(bool enable)
DECL|BURTC_FreezeEnable|function|__STATIC_INLINE void BURTC_FreezeEnable(bool enable)
DECL|BURTC_INIT_DEFAULT|macro|BURTC_INIT_DEFAULT
DECL|BURTC_Init_TypeDef|typedef|} BURTC_Init_TypeDef;
DECL|BURTC_IntClear|function|__STATIC_INLINE void BURTC_IntClear(uint32_t flags)
DECL|BURTC_IntDisable|function|__STATIC_INLINE void BURTC_IntDisable(uint32_t flags)
DECL|BURTC_IntEnable|function|__STATIC_INLINE void BURTC_IntEnable(uint32_t flags)
DECL|BURTC_IntGetEnabled|function|__STATIC_INLINE uint32_t BURTC_IntGetEnabled(void)
DECL|BURTC_IntGet|function|__STATIC_INLINE uint32_t BURTC_IntGet(void)
DECL|BURTC_IntSet|function|__STATIC_INLINE void BURTC_IntSet(uint32_t flags)
DECL|BURTC_LP_TypeDef|typedef|} BURTC_LP_TypeDef;
DECL|BURTC_Lock|function|__STATIC_INLINE void BURTC_Lock(void)
DECL|BURTC_Mode_TypeDef|typedef|} BURTC_Mode_TypeDef;
DECL|BURTC_Powerdown|function|__STATIC_INLINE void BURTC_Powerdown(bool enable)
DECL|BURTC_RetRegGet|function|__STATIC_INLINE uint32_t BURTC_RetRegGet(uint32_t num)
DECL|BURTC_RetRegSet|function|__STATIC_INLINE void BURTC_RetRegSet(uint32_t num, uint32_t data)
DECL|BURTC_StatusClear|function|__STATIC_INLINE void BURTC_StatusClear(void)
DECL|BURTC_Status|function|__STATIC_INLINE uint32_t BURTC_Status(void)
DECL|BURTC_TimestampGet|function|__STATIC_INLINE uint32_t BURTC_TimestampGet(void)
DECL|BURTC_Unlock|function|__STATIC_INLINE void BURTC_Unlock(void)
DECL|EM_BURTC_H|macro|EM_BURTC_H
DECL|burtcClkDiv_128|macro|burtcClkDiv_128
DECL|burtcClkDiv_16|macro|burtcClkDiv_16
DECL|burtcClkDiv_1|macro|burtcClkDiv_1
DECL|burtcClkDiv_2|macro|burtcClkDiv_2
DECL|burtcClkDiv_32|macro|burtcClkDiv_32
DECL|burtcClkDiv_4|macro|burtcClkDiv_4
DECL|burtcClkDiv_64|macro|burtcClkDiv_64
DECL|burtcClkDiv_8|macro|burtcClkDiv_8
DECL|burtcClkSelLFRCO|enumerator|burtcClkSelLFRCO = BURTC_CTRL_CLKSEL_LFRCO,
DECL|burtcClkSelLFXO|enumerator|burtcClkSelLFXO = BURTC_CTRL_CLKSEL_LFXO
DECL|burtcClkSelULFRCO|enumerator|burtcClkSelULFRCO = BURTC_CTRL_CLKSEL_ULFRCO,
DECL|burtcLPBU|enumerator|burtcLPBU = BURTC_LPMODE_LPMODE_BUEN
DECL|burtcLPDisable|enumerator|burtcLPDisable = BURTC_LPMODE_LPMODE_DISABLE,
DECL|burtcLPEnable|enumerator|burtcLPEnable = BURTC_LPMODE_LPMODE_ENABLE,
DECL|burtcModeDisable|enumerator|burtcModeDisable = BURTC_CTRL_MODE_DISABLE,
DECL|burtcModeEM2|enumerator|burtcModeEM2 = BURTC_CTRL_MODE_EM2EN,
DECL|burtcModeEM3|enumerator|burtcModeEM3 = BURTC_CTRL_MODE_EM3EN,
DECL|burtcModeEM4|enumerator|burtcModeEM4 = BURTC_CTRL_MODE_EM4EN,
DECL|clkDiv|member|uint32_t clkDiv; /**< Clock divider; for ULFRCO 1Khz or 2kHz operation */
DECL|clkSel|member|BURTC_ClkSel_TypeDef clkSel; /**< Select clock source */
DECL|compare0Top|member|bool compare0Top; /**< Set if Compare Value 0 is also top value (counter restart) */
DECL|debugRun|member|bool debugRun; /**< If true, counter will keep running under debug halt */
DECL|enable|member|bool enable; /**< Enable BURTC after initialization (starts counter) */
DECL|lowPowerComp|member|uint32_t lowPowerComp; /**< Number of least significantt clock bits to ignore in low power mode */
DECL|lowPowerMode|member|BURTC_LP_TypeDef lowPowerMode; /**< Low power operation mode, requires LFXO or LFRCO */
DECL|mode|member|BURTC_Mode_TypeDef mode; /**< Configure energy mode operation */
DECL|timeStamp|member|bool timeStamp; /**< Enable time stamp on entering backup power domain */
