DECL|NRF_SYSTICK_CSR_CLKSOURCE_CPU|enumerator|NRF_SYSTICK_CSR_CLKSOURCE_CPU = 1U << SysTick_CTRL_CLKSOURCE_Pos, /**< Configuration value: Select CPU clock. */
DECL|NRF_SYSTICK_CSR_CLKSOURCE_MASK|enumerator|NRF_SYSTICK_CSR_CLKSOURCE_MASK = SysTick_CTRL_CLKSOURCE_Msk, /**< Configuration bit: Select the SysTick clock source. */
DECL|NRF_SYSTICK_CSR_CLKSOURCE_REF|enumerator|NRF_SYSTICK_CSR_CLKSOURCE_REF = 0U << SysTick_CTRL_CLKSOURCE_Pos, /**< Configuration value: Select reference clock. */
DECL|NRF_SYSTICK_CSR_COUNTFLAG_MASK|enumerator|NRF_SYSTICK_CSR_COUNTFLAG_MASK = SysTick_CTRL_COUNTFLAG_Msk, /**< Status flag: Returns 1 if timer counted to 0 since the last read of this register. */
DECL|NRF_SYSTICK_CSR_DISABLE|enumerator|NRF_SYSTICK_CSR_DISABLE = 0U << SysTick_CTRL_ENABLE_Pos /**< Configuration value: Counter disabled. */
DECL|NRF_SYSTICK_CSR_ENABLE_MASK|enumerator|NRF_SYSTICK_CSR_ENABLE_MASK = SysTick_CTRL_ENABLE_Msk, /**< Configuration bit: Enable the SysTick timer. */
DECL|NRF_SYSTICK_CSR_ENABLE|enumerator|NRF_SYSTICK_CSR_ENABLE = 1U << SysTick_CTRL_ENABLE_Pos, /**< Configuration value: Counter enabled. */
DECL|NRF_SYSTICK_CSR_TICKINT_DISABLE|enumerator|NRF_SYSTICK_CSR_TICKINT_DISABLE = 0U << SysTick_CTRL_TICKINT_Pos, /**< Configuration value: Counting down to zero to asserts the SysTick exception request. */
DECL|NRF_SYSTICK_CSR_TICKINT_ENABLE|enumerator|NRF_SYSTICK_CSR_TICKINT_ENABLE = 1U << SysTick_CTRL_TICKINT_Pos, /**< Configuration value: Counting down to zero does not assert the SysTick exception request. */
DECL|NRF_SYSTICK_CSR_TICKINT_MASK|enumerator|NRF_SYSTICK_CSR_TICKINT_MASK = SysTick_CTRL_TICKINT_Msk, /**< Configuration bit: Enables SysTick exception request. */
DECL|NRF_SYSTICK_H__|macro|NRF_SYSTICK_H__
DECL|NRF_SYSTICK_VAL_MASK|macro|NRF_SYSTICK_VAL_MASK
DECL|nrf_systick_calib_get|function|__STATIC_INLINE uint32_t nrf_systick_calib_get(void)
DECL|nrf_systick_csr_flags_t|typedef|} nrf_systick_csr_flags_t;
DECL|nrf_systick_csr_get|function|__STATIC_INLINE uint32_t nrf_systick_csr_get(void)
DECL|nrf_systick_csr_set|function|__STATIC_INLINE void nrf_systick_csr_set(uint32_t val)
DECL|nrf_systick_load_get|function|__STATIC_INLINE uint32_t nrf_systick_load_get(void)
DECL|nrf_systick_load_set|function|__STATIC_INLINE void nrf_systick_load_set(uint32_t val)
DECL|nrf_systick_val_clear|function|__STATIC_INLINE void nrf_systick_val_clear(void)
DECL|nrf_systick_val_get|function|__STATIC_INLINE uint32_t nrf_systick_val_get(void)
