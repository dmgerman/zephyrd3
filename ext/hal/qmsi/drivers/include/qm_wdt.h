DECL|QM_WDT_2_POW_16_CYCLES|enumerator|QM_WDT_2_POW_16_CYCLES, /**< 16 clock cycles timeout. */
DECL|QM_WDT_2_POW_17_CYCLES|enumerator|QM_WDT_2_POW_17_CYCLES, /**< 17 clock cycles timeout. */
DECL|QM_WDT_2_POW_18_CYCLES|enumerator|QM_WDT_2_POW_18_CYCLES, /**< 18 clock cycles timeout. */
DECL|QM_WDT_2_POW_19_CYCLES|enumerator|QM_WDT_2_POW_19_CYCLES, /**< 19 clock cycles timeout. */
DECL|QM_WDT_2_POW_20_CYCLES|enumerator|QM_WDT_2_POW_20_CYCLES, /**< 20 clock cycles timeout. */
DECL|QM_WDT_2_POW_21_CYCLES|enumerator|QM_WDT_2_POW_21_CYCLES, /**< 21 clock cycles timeout. */
DECL|QM_WDT_2_POW_22_CYCLES|enumerator|QM_WDT_2_POW_22_CYCLES, /**< 22 clock cycles timeout. */
DECL|QM_WDT_2_POW_23_CYCLES|enumerator|QM_WDT_2_POW_23_CYCLES, /**< 23 clock cycles timeout. */
DECL|QM_WDT_2_POW_24_CYCLES|enumerator|QM_WDT_2_POW_24_CYCLES, /**< 24 clock cycles timeout. */
DECL|QM_WDT_2_POW_25_CYCLES|enumerator|QM_WDT_2_POW_25_CYCLES, /**< 25 clock cycles timeout. */
DECL|QM_WDT_2_POW_26_CYCLES|enumerator|QM_WDT_2_POW_26_CYCLES, /**< 26 clock cycles timeout. */
DECL|QM_WDT_2_POW_27_CYCLES|enumerator|QM_WDT_2_POW_27_CYCLES, /**< 27 clock cycles timeout. */
DECL|QM_WDT_2_POW_28_CYCLES|enumerator|QM_WDT_2_POW_28_CYCLES, /**< 28 clock cycles timeout. */
DECL|QM_WDT_2_POW_29_CYCLES|enumerator|QM_WDT_2_POW_29_CYCLES, /**< 29 clock cycles timeout. */
DECL|QM_WDT_2_POW_30_CYCLES|enumerator|QM_WDT_2_POW_30_CYCLES, /**< 30 clock cycles timeout. */
DECL|QM_WDT_2_POW_31_CYCLES|enumerator|QM_WDT_2_POW_31_CYCLES, /**< 31 clock cycles timeout. */
DECL|QM_WDT_2_POW_CYCLES_NUM|enumerator|QM_WDT_2_POW_CYCLES_NUM
DECL|QM_WDT_ENABLE|macro|QM_WDT_ENABLE
DECL|QM_WDT_MODE_INTERRUPT_RESET|enumerator|QM_WDT_MODE_INTERRUPT_RESET
DECL|QM_WDT_MODE_OFFSET|macro|QM_WDT_MODE_OFFSET
DECL|QM_WDT_MODE_RESET|enumerator|QM_WDT_MODE_RESET,
DECL|QM_WDT_MODE|macro|QM_WDT_MODE
DECL|QM_WDT_TIMEOUT_MASK|macro|QM_WDT_TIMEOUT_MASK
DECL|__QM_WDT_H__|macro|__QM_WDT_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data);
DECL|mode|member|qm_wdt_mode_t mode; /**< Watchdog response mode. */
DECL|qm_wdt_clock_timeout_cycles_t|typedef|} qm_wdt_clock_timeout_cycles_t;
DECL|qm_wdt_config_t|typedef|} qm_wdt_config_t;
DECL|qm_wdt_mode_t|typedef|} qm_wdt_mode_t;
DECL|timeout|member|qm_wdt_clock_timeout_cycles_t timeout; /**< Timeout in cycles. */
