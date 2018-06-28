DECL|CY_PROFILE_BAD_PARAM|enumerator|CY_PROFILE_BAD_PARAM = CY_PROFILE_ID | CY_PDL_STATUS_ERROR | 1UL /**< Invalid input parameters */
DECL|CY_PROFILE_CLK_ECO|enumerator|CY_PROFILE_CLK_ECO = 2, /**< External crystal oscillator (ECO) */
DECL|CY_PROFILE_CLK_HF|enumerator|CY_PROFILE_CLK_HF = 4, /**< High-Frequency clock (HFCLK0) */
DECL|CY_PROFILE_CLK_IMO|enumerator|CY_PROFILE_CLK_IMO = 1, /**< Internal main oscillator (IMO) */
DECL|CY_PROFILE_CLK_LF|enumerator|CY_PROFILE_CLK_LF = 3, /**< Low-frequency clock (LFCLK) */
DECL|CY_PROFILE_CLK_PERI|enumerator|CY_PROFILE_CLK_PERI = 5, /**< Peripheral clock (PeriClk) */
DECL|CY_PROFILE_CLK_TIMER|enumerator|CY_PROFILE_CLK_TIMER = 0, /**< Timer clock (TimerClk) */
DECL|CY_PROFILE_CLR_ALL_CNT|macro|CY_PROFILE_CLR_ALL_CNT
DECL|CY_PROFILE_DRV_VERSION_MAJOR|macro|CY_PROFILE_DRV_VERSION_MAJOR
DECL|CY_PROFILE_DRV_VERSION_MINOR|macro|CY_PROFILE_DRV_VERSION_MINOR
DECL|CY_PROFILE_DURATION|enumerator|CY_PROFILE_DURATION = 1, /**< Count (level) duration in clock cycles */
DECL|CY_PROFILE_EVENT|enumerator|CY_PROFILE_EVENT = 0, /**< Count (edge-detected) module events */
DECL|CY_PROFILE_H|macro|CY_PROFILE_H
DECL|CY_PROFILE_ID|macro|CY_PROFILE_ID
DECL|CY_PROFILE_IS_CNT_VALID|macro|CY_PROFILE_IS_CNT_VALID
DECL|CY_PROFILE_IS_DURATION_VALID|macro|CY_PROFILE_IS_DURATION_VALID
DECL|CY_PROFILE_IS_MONITOR_VALID|macro|CY_PROFILE_IS_MONITOR_VALID
DECL|CY_PROFILE_IS_REFCLK_VALID|macro|CY_PROFILE_IS_REFCLK_VALID
DECL|CY_PROFILE_PRFL_CNT_NR|macro|CY_PROFILE_PRFL_CNT_NR
DECL|CY_PROFILE_START_TR|macro|CY_PROFILE_START_TR
DECL|CY_PROFILE_STOP_TR|macro|CY_PROFILE_STOP_TR
DECL|CY_PROFILE_SUCCESS|enumerator|CY_PROFILE_SUCCESS = 0x00U, /**< Operation completed successfully */
DECL|Cy_Profile_ClearCounters|function|__STATIC_INLINE void Cy_Profile_ClearCounters(void)
DECL|Cy_Profile_DeInit|function|__STATIC_INLINE void Cy_Profile_DeInit(void)
DECL|Cy_Profile_Init|function|__STATIC_INLINE void Cy_Profile_Init(void)
DECL|Cy_Profile_IsProfiling|function|__STATIC_INLINE uint32_t Cy_Profile_IsProfiling(void)
DECL|Cy_Profile_StopProfiling|function|__STATIC_INLINE void Cy_Profile_StopProfiling(void)
DECL|cntAddr|member|PROFILE_CNT_STRUCT_Type * cntAddr; /**< Base address of the counter instance registers */
DECL|cntDuration|member|cy_en_profile_duration_t cntDuration; /**< 0 = event; 1 = duration */
DECL|cntReg|member|uint32_t cntReg; /**< Current CNT register value */
DECL|ctlRegVals|member|cy_stc_profile_ctr_ctl_t ctlRegVals; /**< Initial counter CTL register settings */
DECL|ctlReg|member|uint32_t ctlReg; /**< Current CTL register value */
DECL|ctrNum|member|uint8_t ctrNum; /**< Profile counter number */
DECL|cy_en_profile_duration_t|typedef|} cy_en_profile_duration_t;
DECL|cy_en_profile_ref_clk_t|typedef|} cy_en_profile_ref_clk_t;
DECL|cy_en_profile_status_t|typedef|} cy_en_profile_status_t;
DECL|cy_stc_profile_ctr_ctl_t|typedef|} cy_stc_profile_ctr_ctl_t;
DECL|cy_stc_profile_ctr_ptr_t|typedef|typedef cy_stc_profile_ctr_t * cy_stc_profile_ctr_ptr_t;
DECL|cy_stc_profile_ctr_t|typedef|} cy_stc_profile_ctr_t;
DECL|monSel|member|en_ep_mon_sel_t monSel; /**< The monitor signal to be observed by the counter */
DECL|overflow|member|uint32_t overflow; /**< Extension of cntReg to form a 64-bit counter value */
DECL|refClkSel|member|cy_en_profile_ref_clk_t refClkSel; /**< The reference clock used by the counter */
DECL|used|member|uint8_t used; /**< 0 = available; 1 = used */
DECL|weight|member|uint32_t weight; /**< Weighting factor for the counter */
