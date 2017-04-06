DECL|DEFAULT_WDOG|macro|DEFAULT_WDOG
DECL|DEFAULT_WDOG|macro|DEFAULT_WDOG
DECL|EM_WDOG_H|macro|EM_WDOG_H
DECL|WDOG_ClkSel_TypeDef|typedef|} WDOG_ClkSel_TypeDef;
DECL|WDOG_Enable|function|__STATIC_INLINE void WDOG_Enable(bool enable)
DECL|WDOG_Feed|function|__STATIC_INLINE void WDOG_Feed(void)
DECL|WDOG_INIT_DEFAULT|macro|WDOG_INIT_DEFAULT
DECL|WDOG_INIT_DEFAULT|macro|WDOG_INIT_DEFAULT
DECL|WDOG_Init_TypeDef|typedef|} WDOG_Init_TypeDef;
DECL|WDOG_Init|function|__STATIC_INLINE void WDOG_Init(const WDOG_Init_TypeDef *init)
DECL|WDOG_Lock|function|__STATIC_INLINE void WDOG_Lock(void)
DECL|WDOG_PeriodSel_TypeDef|typedef|} WDOG_PeriodSel_TypeDef;
DECL|WDOG_WarnSel_TypeDef|typedef|} WDOG_WarnSel_TypeDef;
DECL|WDOG_WinSel_TypeDef|typedef|} WDOG_WinSel_TypeDef;
DECL|WDOGn_IntClear|function|__STATIC_INLINE void WDOGn_IntClear(WDOG_TypeDef *wdog, uint32_t flags)
DECL|WDOGn_IntDisable|function|__STATIC_INLINE void WDOGn_IntDisable(WDOG_TypeDef *wdog, uint32_t flags)
DECL|WDOGn_IntEnable|function|__STATIC_INLINE void WDOGn_IntEnable(WDOG_TypeDef *wdog, uint32_t flags)
DECL|WDOGn_IntGetEnabled|function|__STATIC_INLINE uint32_t WDOGn_IntGetEnabled(WDOG_TypeDef *wdog)
DECL|WDOGn_IntGet|function|__STATIC_INLINE uint32_t WDOGn_IntGet(WDOG_TypeDef *wdog)
DECL|WDOGn_IntSet|function|__STATIC_INLINE void WDOGn_IntSet(WDOG_TypeDef *wdog, uint32_t flags)
DECL|clkSel|member|WDOG_ClkSel_TypeDef clkSel;
DECL|debugRun|member|bool debugRun;
DECL|em2Run|member|bool em2Run;
DECL|em3Run|member|bool em3Run;
DECL|em4Block|member|bool em4Block;
DECL|enable|member|bool enable;
DECL|lock|member|bool lock;
DECL|perSel|member|WDOG_PeriodSel_TypeDef perSel;
DECL|resetDisable|member|bool resetDisable;
DECL|swoscBlock|member|bool swoscBlock;
DECL|warnSel|member|WDOG_WarnSel_TypeDef warnSel;
DECL|wdogClkSelLFRCO|enumerator|wdogClkSelLFRCO = _WDOG_CTRL_CLKSEL_LFRCO, /**< Low frequency RC oscillator */
DECL|wdogClkSelLFXO|enumerator|wdogClkSelLFXO = _WDOG_CTRL_CLKSEL_LFXO /**< Low frequency crystal oscillator */
DECL|wdogClkSelULFRCO|enumerator|wdogClkSelULFRCO = _WDOG_CTRL_CLKSEL_ULFRCO, /**< Ultra low frequency (1 kHz) clock */
DECL|wdogIllegalWindowDisable|enumerator|wdogIllegalWindowDisable = 0,
DECL|wdogIllegalWindowTime12_5pct|enumerator|wdogIllegalWindowTime12_5pct = 1,
DECL|wdogIllegalWindowTime25_0pct|enumerator|wdogIllegalWindowTime25_0pct = 2,
DECL|wdogIllegalWindowTime37_5pct|enumerator|wdogIllegalWindowTime37_5pct = 3,
DECL|wdogIllegalWindowTime50_0pct|enumerator|wdogIllegalWindowTime50_0pct = 4,
DECL|wdogIllegalWindowTime62_5pct|enumerator|wdogIllegalWindowTime62_5pct = 5,
DECL|wdogIllegalWindowTime75_0pct|enumerator|wdogIllegalWindowTime75_0pct = 6,
DECL|wdogIllegalWindowTime87_5pct|enumerator|wdogIllegalWindowTime87_5pct = 7,
DECL|wdogPeriod_128k|enumerator|wdogPeriod_128k = 0xE, /**< 131073 clock periods */
DECL|wdogPeriod_129|enumerator|wdogPeriod_129 = 0x4, /**< 129 clock periods */
DECL|wdogPeriod_16k|enumerator|wdogPeriod_16k = 0xB, /**< 16385 clock periods */
DECL|wdogPeriod_17|enumerator|wdogPeriod_17 = 0x1, /**< 17 clock periods */
DECL|wdogPeriod_1k|enumerator|wdogPeriod_1k = 0x7, /**< 1025 clock periods */
DECL|wdogPeriod_256k|enumerator|wdogPeriod_256k = 0xF /**< 262145 clock periods */
DECL|wdogPeriod_257|enumerator|wdogPeriod_257 = 0x5, /**< 257 clock periods */
DECL|wdogPeriod_2k|enumerator|wdogPeriod_2k = 0x8, /**< 2049 clock periods */
DECL|wdogPeriod_32k|enumerator|wdogPeriod_32k = 0xC, /**< 32769 clock periods */
DECL|wdogPeriod_33|enumerator|wdogPeriod_33 = 0x2, /**< 33 clock periods */
DECL|wdogPeriod_4k|enumerator|wdogPeriod_4k = 0x9, /**< 4097 clock periods */
DECL|wdogPeriod_513|enumerator|wdogPeriod_513 = 0x6, /**< 513 clock periods */
DECL|wdogPeriod_64k|enumerator|wdogPeriod_64k = 0xD, /**< 65537 clock periods */
DECL|wdogPeriod_65|enumerator|wdogPeriod_65 = 0x3, /**< 65 clock periods */
DECL|wdogPeriod_8k|enumerator|wdogPeriod_8k = 0xA, /**< 8193 clock periods */
DECL|wdogPeriod_9|enumerator|wdogPeriod_9 = 0x0, /**< 9 clock periods */
DECL|wdogWarnDisable|enumerator|wdogWarnDisable = 0,
DECL|wdogWarnTime25pct|enumerator|wdogWarnTime25pct = 1,
DECL|wdogWarnTime50pct|enumerator|wdogWarnTime50pct = 2,
DECL|wdogWarnTime75pct|enumerator|wdogWarnTime75pct = 3,
DECL|winSel|member|WDOG_WinSel_TypeDef winSel;
