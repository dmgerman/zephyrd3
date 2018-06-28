DECL|CY_SYSTICK_CLOCK_SOURCE_CLK_CPU|enumerator|CY_SYSTICK_CLOCK_SOURCE_CLK_CPU = 4u, /**< The CPU clock is selected. */
DECL|CY_SYSTICK_CLOCK_SOURCE_CLK_ECO|enumerator|CY_SYSTICK_CLOCK_SOURCE_CLK_ECO = 2u, /**< The external crystal oscillator (ECO) clock clk_eco is selected. */
DECL|CY_SYSTICK_CLOCK_SOURCE_CLK_IMO|enumerator|CY_SYSTICK_CLOCK_SOURCE_CLK_IMO = 1u, /**< The internal main oscillator (IMO) clock clk_imo is selected. */
DECL|CY_SYSTICK_CLOCK_SOURCE_CLK_LF|enumerator|CY_SYSTICK_CLOCK_SOURCE_CLK_LF = 0u, /**< The low frequency clock clk_lf is selected. */
DECL|CY_SYSTICK_CLOCK_SOURCE_CLK_TIMER|enumerator|CY_SYSTICK_CLOCK_SOURCE_CLK_TIMER = 3u, /**< The SRSS clk_timer is selected. */
DECL|CY_SYSTICK_IRQ_NUM|macro|CY_SYSTICK_IRQ_NUM
DECL|CY_SYS_SYST_NUM_OF_CALLBACKS|macro|CY_SYS_SYST_NUM_OF_CALLBACKS
DECL|Cy_SysTick_Callback|typedef|typedef void (*Cy_SysTick_Callback)(void);
DECL|Cy_SysTick_Clear|function|__STATIC_INLINE void Cy_SysTick_Clear(void)
DECL|Cy_SysTick_DisableInterrupt|function|__STATIC_INLINE void Cy_SysTick_DisableInterrupt(void)
DECL|Cy_SysTick_EnableInterrupt|function|__STATIC_INLINE void Cy_SysTick_EnableInterrupt(void)
DECL|Cy_SysTick_GetCountFlag|function|__STATIC_INLINE uint32_t Cy_SysTick_GetCountFlag(void)
DECL|Cy_SysTick_GetReload|function|__STATIC_INLINE uint32_t Cy_SysTick_GetReload(void)
DECL|Cy_SysTick_GetValue|function|__STATIC_INLINE uint32_t Cy_SysTick_GetValue(void)
DECL|Cy_SysTick_SetReload|function|__STATIC_INLINE void Cy_SysTick_SetReload(uint32_t value)
DECL|SYSTICK_DRV_VERSION_MAJOR|macro|SYSTICK_DRV_VERSION_MAJOR
DECL|SYSTICK_DRV_VERSION_MINOR|macro|SYSTICK_DRV_VERSION_MINOR
DECL|_CY_SYSTICK_H_|macro|_CY_SYSTICK_H_
DECL|cy_en_systick_clock_source_t|typedef|} cy_en_systick_clock_source_t;
