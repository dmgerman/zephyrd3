DECL|FLEXRAM_ClearInterruptStatus|function|static inline void FLEXRAM_ClearInterruptStatus(FLEXRAM_Type *base, uint32_t status)
DECL|FLEXRAM_DisableInterruptSignal|function|static inline void FLEXRAM_DisableInterruptSignal(FLEXRAM_Type *base, uint32_t status)
DECL|FLEXRAM_DisableInterruptStatus|function|static inline void FLEXRAM_DisableInterruptStatus(FLEXRAM_Type *base, uint32_t status)
DECL|FLEXRAM_EnableForceRamClockOn|function|static inline void FLEXRAM_EnableForceRamClockOn(FLEXRAM_Type *base, bool enable)
DECL|FLEXRAM_EnableInterruptSignal|function|static inline void FLEXRAM_EnableInterruptSignal(FLEXRAM_Type *base, uint32_t status)
DECL|FLEXRAM_EnableInterruptStatus|function|static inline void FLEXRAM_EnableInterruptStatus(FLEXRAM_Type *base, uint32_t status)
DECL|FLEXRAM_GetInterruptStatus|function|static inline uint32_t FLEXRAM_GetInterruptStatus(FLEXRAM_Type *base)
DECL|FLEXRAM_SetAllocateRamSrc|function|static inline void FLEXRAM_SetAllocateRamSrc(flexram_bank_allocate_src_t src)
DECL|FLEXRAM_SetDTCMMagicAddr|function|static inline void FLEXRAM_SetDTCMMagicAddr(FLEXRAM_Type *base, uint16_t magicAddr, uint32_t rwSel)
DECL|FLEXRAM_SetITCMMagicAddr|function|static inline void FLEXRAM_SetITCMMagicAddr(FLEXRAM_Type *base, uint16_t magicAddr, uint32_t rwSel)
DECL|FLEXRAM_SetOCRAMMagicAddr|function|static inline void FLEXRAM_SetOCRAMMagicAddr(FLEXRAM_Type *base, uint16_t magicAddr, uint32_t rwSel)
DECL|FLEXRAM_SetTCMReadAccessMode|function|static inline void FLEXRAM_SetTCMReadAccessMode(FLEXRAM_Type *base, flexram_tcm_access_mode_t mode)
DECL|FLEXRAM_SetTCMWriteAccessMode|function|static inline void FLEXRAM_SetTCMWriteAccessMode(FLEXRAM_Type *base, flexram_tcm_access_mode_t mode)
DECL|FSL_FLEXRAM_DRIVER_VERSION|macro|FSL_FLEXRAM_DRIVER_VERSION
DECL|_FSL_FLEXRAM_H_|macro|_FSL_FLEXRAM_H_
DECL|_flexram_allocate_ram|struct|typedef struct _flexram_allocate_ram
DECL|_flexram_bank_allocate_src|enum|typedef enum _flexram_bank_allocate_src
DECL|_flexram_bank_type|enum|enum _flexram_bank_type
DECL|_flexram_interrupt_status|enum|enum _flexram_interrupt_status
DECL|_flexram_tcm_access_mode|enum|typedef enum _flexram_tcm_access_mode
DECL|_flexram_tcm_size|enum|enum _flexram_tcm_size
DECL|_flexram_wr_rd_sel|enum|enum _flexram_wr_rd_sel
DECL|dtcmBankNum|member|const uint8_t dtcmBankNum; /*!< dtcm bank number to allocate, the number should be power of 2 */
DECL|flexram_allocate_ram_t|typedef|} flexram_allocate_ram_t;
DECL|flexram_bank_allocate_src_t|typedef|} flexram_bank_allocate_src_t;
DECL|flexram_tcm_access_mode_t|typedef|} flexram_tcm_access_mode_t;
DECL|itcmBankNum|member|const uint8_t itcmBankNum; /*!< itcm bank number to allocate, the number should be power of 2 */
DECL|kFLEXRAM_BankAllocateThroughBankCfg|enumerator|kFLEXRAM_BankAllocateThroughBankCfg = 1U, /*!< allocate ram through FLEXRAM_BANK_CFG */
DECL|kFLEXRAM_BankAllocateThroughHardwareFuse|enumerator|kFLEXRAM_BankAllocateThroughHardwareFuse = 0U, /*!< allocate ram through hardware fuse value */
DECL|kFLEXRAM_BankDTCM|enumerator|kFLEXRAM_BankDTCM = 2U, /*!< bank is DTCM */
DECL|kFLEXRAM_BankITCM|enumerator|kFLEXRAM_BankITCM = 3U, /*!< bank is ITCM */
DECL|kFLEXRAM_BankNotUsed|enumerator|kFLEXRAM_BankNotUsed = 0U, /*!< bank is not used */
DECL|kFLEXRAM_BankOCRAM|enumerator|kFLEXRAM_BankOCRAM = 1U, /*!< bank is OCRAM */
DECL|kFLEXRAM_DTCMAccessError|enumerator|kFLEXRAM_DTCMAccessError = FLEXRAM_INT_STATUS_DTCM_ERR_STATUS_MASK, /*!< dtcm access unallocated address */
DECL|kFLEXRAM_DTCMMagicAddrMatch|enumerator|kFLEXRAM_DTCMMagicAddrMatch = FLEXRAM_INT_STATUS_DTCM_MAM_STATUS_MASK, /*!< dtcm maigc address match */
DECL|kFLEXRAM_ITCMAccessError|enumerator|kFLEXRAM_ITCMAccessError = FLEXRAM_INT_STATUS_ITCM_ERR_STATUS_MASK, /*!< itcm access unallocated address */
DECL|kFLEXRAM_ITCMMagicAddrMatch|enumerator|kFLEXRAM_ITCMMagicAddrMatch = FLEXRAM_INT_STATUS_ITCM_MAM_STATUS_MASK, /*!< itcm maigc address match */
DECL|kFLEXRAM_InterruptStatusAll|enumerator|kFLEXRAM_InterruptStatusAll = 0x3FU, /*!< all the interrupt status mask */
DECL|kFLEXRAM_OCRAMAccessError|enumerator|kFLEXRAM_OCRAMAccessError = FLEXRAM_INT_STATUS_OCRAM_ERR_STATUS_MASK, /*!< ocram access unallocated address */
DECL|kFLEXRAM_OCRAMMagicAddrMatch|enumerator|kFLEXRAM_OCRAMMagicAddrMatch = FLEXRAM_INT_STATUS_OCRAM_MAM_STATUS_MASK, /*!< ocram maigc address match */
DECL|kFLEXRAM_Read|enumerator|kFLEXRAM_Read = 0U, /*!< read */
DECL|kFLEXRAM_TCMAccessFastMode|enumerator|kFLEXRAM_TCMAccessFastMode = 0U, /*!< fast access mode */
DECL|kFLEXRAM_TCMAccessWaitMode|enumerator|kFLEXRAM_TCMAccessWaitMode = 1U, /*!< wait access mode */
DECL|kFLEXRAM_TCMSize128KB|enumerator|kFLEXRAM_TCMSize128KB = 128 * 1024U, /*!< TCM total size 128KB */
DECL|kFLEXRAM_TCMSize256KB|enumerator|kFLEXRAM_TCMSize256KB = 256 * 1024U, /*!< TCM total size 256KB */
DECL|kFLEXRAM_TCMSize32KB|enumerator|kFLEXRAM_TCMSize32KB = 32 * 1024U, /*!< TCM total size 32KB */
DECL|kFLEXRAM_TCMSize512KB|enumerator|kFLEXRAM_TCMSize512KB = 512 * 1024U, /*!< TCM total size 512KB */
DECL|kFLEXRAM_TCMSize64KB|enumerator|kFLEXRAM_TCMSize64KB = 64 * 1024U, /*!< TCM total size 64KB */
DECL|kFLEXRAM_Write|enumerator|kFLEXRAM_Write = 1U, /*!< write */
DECL|ocramBankNum|member|const uint8_t ocramBankNum; /*!< ocram banknumber which the SOC support */
