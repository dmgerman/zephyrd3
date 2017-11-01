DECL|FSL_KPP_DRIVER_VERSION|macro|FSL_KPP_DRIVER_VERSION
DECL|KPP_ClearStatusFlag|function|static inline void KPP_ClearStatusFlag(KPP_Type *base, uint16_t mask)
DECL|KPP_DisableInterrupts|function|static inline void KPP_DisableInterrupts(KPP_Type *base, uint16_t mask)
DECL|KPP_EnableInterrupts|function|static inline void KPP_EnableInterrupts(KPP_Type *base, uint16_t mask)
DECL|KPP_GetStatusFlag|function|static inline uint16_t KPP_GetStatusFlag(KPP_Type *base)
DECL|KPP_KEYPAD_COLUMNNUM_MAX|macro|KPP_KEYPAD_COLUMNNUM_MAX
DECL|KPP_KEYPAD_ROWNUM_MAX|macro|KPP_KEYPAD_ROWNUM_MAX
DECL|KPP_SetSynchronizeChain|function|static inline void KPP_SetSynchronizeChain(KPP_Type *base, uint16_t mask)
DECL|_FSL_KPP_H_|macro|_FSL_KPP_H_
DECL|_kpp_config|struct|typedef struct _kpp_config
DECL|_kpp_interrupt_enable|enum|typedef enum _kpp_interrupt_enable {
DECL|_kpp_sync_operation|enum|typedef enum _kpp_sync_operation {
DECL|activeColumn|member|uint8_t activeColumn; /*!< The column number: bit 7 ~ 0 represents the column 7 ~ 0. */
DECL|activeRow|member|uint8_t activeRow; /*!< The row number: bit 7 ~ 0 represents the row 7 ~ 0. */
DECL|interrupt|member|uint16_t interrupt; /*!< KPP interrupt source. A logical OR of "kpp_interrupt_enable_t". */
DECL|kKPP_ClearKeyDepressSyncChain|enumerator|kKPP_ClearKeyDepressSyncChain = KPP_KPSR_KDSC_MASK, /*!< Keypad depress interrupt status. */
DECL|kKPP_SetKeyReleasesSyncChain|enumerator|kKPP_SetKeyReleasesSyncChain = KPP_KPSR_KRSS_MASK, /*!< Keypad release interrupt status. */
DECL|kKPP_keyDepressInterrupt|enumerator|kKPP_keyDepressInterrupt = KPP_KPSR_KDIE_MASK, /*!< Keypad depress interrupt source */
DECL|kKPP_keyReleaseInterrupt|enumerator|kKPP_keyReleaseInterrupt = KPP_KPSR_KRIE_MASK /*!< Keypad release interrupt source */
DECL|kpp_config_t|typedef|} kpp_config_t;
DECL|kpp_interrupt_enable_t|typedef|} kpp_interrupt_enable_t;
DECL|kpp_sync_operation_t|typedef|} kpp_sync_operation_t;
