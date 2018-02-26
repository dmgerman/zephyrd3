DECL|FSL_RCM_DRIVER_VERSION|macro|FSL_RCM_DRIVER_VERSION
DECL|RCM_ClearBootRomSource|function|static inline void RCM_ClearBootRomSource(RCM_Type *base)
DECL|RCM_ClearStickyResetSources|function|static inline void RCM_ClearStickyResetSources(RCM_Type *base, uint32_t sourceMasks)
DECL|RCM_GetBootRomSource|function|static inline rcm_boot_rom_config_t RCM_GetBootRomSource(RCM_Type *base)
DECL|RCM_GetEasyPortModePinStatus|function|static inline bool RCM_GetEasyPortModePinStatus(RCM_Type *base)
DECL|RCM_GetPreviousResetSources|function|static inline uint32_t RCM_GetPreviousResetSources(RCM_Type *base)
DECL|RCM_GetResetSourceImplementedStatus|function|static inline uint32_t RCM_GetResetSourceImplementedStatus(RCM_Type *base)
DECL|RCM_GetStickyResetSources|function|static inline uint32_t RCM_GetStickyResetSources(RCM_Type *base)
DECL|RCM_GetVersionId|function|static inline void RCM_GetVersionId(RCM_Type *base, rcm_version_id_t *versionId)
DECL|RCM_SetSystemResetInterruptConfig|function|static inline void RCM_SetSystemResetInterruptConfig(RCM_Type *base, uint32_t intMask, rcm_reset_delay_t delay)
DECL|_FSL_RCM_H_|macro|_FSL_RCM_H_
DECL|_rcm_boot_rom_config|enum|typedef enum _rcm_boot_rom_config
DECL|_rcm_interrupt_enable|enum|typedef enum _rcm_interrupt_enable
DECL|_rcm_reset_delay|enum|typedef enum _rcm_reset_delay
DECL|_rcm_reset_pin_filter_config|struct|typedef struct _rcm_reset_pin_filter_config
DECL|_rcm_reset_source|enum|typedef enum _rcm_reset_source
DECL|_rcm_run_wait_filter_mode|enum|typedef enum _rcm_run_wait_filter_mode
DECL|_rcm_version_id|struct|typedef struct _rcm_version_id
DECL|busClockFilterCount|member|uint8_t busClockFilterCount; /*!< Reset pin bus clock filter width. */
DECL|enableFilterInStop|member|bool enableFilterInStop; /*!< Reset pin filter select in stop mode. */
DECL|feature|member|uint16_t feature; /*!< Feature Specification Number. */
DECL|filterInRunWait|member|rcm_run_wait_filter_mode_t filterInRunWait; /*!< Reset pin filter in run/wait mode. */
DECL|kRCM_BootFlash|enumerator|kRCM_BootFlash = 0U, /*!< Boot from flash */
DECL|kRCM_BootRomBoth|enumerator|kRCM_BootRomBoth = 3U /*!< Boot from boot ROM due to both BOOTCFG0 and FOPT[7] */
DECL|kRCM_BootRomCfg0|enumerator|kRCM_BootRomCfg0 = 1U, /*!< Boot from boot ROM due to BOOTCFG0 */
DECL|kRCM_BootRomFopt|enumerator|kRCM_BootRomFopt = 2U, /*!< Boot from boot ROM due to FOPT[7] */
DECL|kRCM_FilterBusClock|enumerator|kRCM_FilterBusClock = 1U, /*!< Bus clock filter enabled */
DECL|kRCM_FilterDisable|enumerator|kRCM_FilterDisable = 0U, /*!< All filtering disabled */
DECL|kRCM_FilterLpoClock|enumerator|kRCM_FilterLpoClock = 2U /*!< LPO clock filter enabled */
DECL|kRCM_IntAll|enumerator|kRCM_IntAll = RCM_SRIE_LOC_MASK /*!< Enable all interrupts. */
DECL|kRCM_IntCore1|enumerator|kRCM_IntCore1 = RCM_SRIE_CORE1_MASK, /*!< Core 1 interrupt. */
DECL|kRCM_IntCoreLockup|enumerator|kRCM_IntCoreLockup = RCM_SRIE_LOCKUP_MASK, /*!< Core lock up interrupt */
DECL|kRCM_IntExternalPin|enumerator|kRCM_IntExternalPin = RCM_SRIE_PIN_MASK, /*!< External pin interrupt. */
DECL|kRCM_IntGlobal|enumerator|kRCM_IntGlobal = RCM_SRIE_GIE_MASK, /*!< Global interrupts. */
DECL|kRCM_IntLossOfClk|enumerator|kRCM_IntLossOfClk = RCM_SRIE_LOC_MASK, /*!< Loss of clock interrupt. */
DECL|kRCM_IntLossOfLock|enumerator|kRCM_IntLossOfLock = RCM_SRIE_LOL_MASK, /*!< Loss of lock interrupt. */
DECL|kRCM_IntNone|enumerator|kRCM_IntNone = 0U, /*!< No interrupt enabled. */
DECL|kRCM_IntSoftware|enumerator|kRCM_IntSoftware = RCM_SRIE_SW_MASK, /*!< software interrupt */
DECL|kRCM_IntStopModeAckErr|enumerator|kRCM_IntStopModeAckErr = RCM_SRIE_SACKERR_MASK, /*!< Stop mode ACK error interrupt. */
DECL|kRCM_IntWatchDog|enumerator|kRCM_IntWatchDog = RCM_SRIE_WDOG_MASK, /*!< Watch dog interrupt. */
DECL|kRCM_ResetDelay128Lpo|enumerator|kRCM_ResetDelay128Lpo = 2U, /*!< Delay 128 LPO cycles. */
DECL|kRCM_ResetDelay32Lpo|enumerator|kRCM_ResetDelay32Lpo = 1U, /*!< Delay 32 LPO cycles. */
DECL|kRCM_ResetDelay512Lpo|enumerator|kRCM_ResetDelay512Lpo = 3U /*!< Delay 512 LPO cycles. */
DECL|kRCM_ResetDelay8Lpo|enumerator|kRCM_ResetDelay8Lpo = 0U, /*!< Delay 8 LPO cycles. */
DECL|kRCM_SourceAll|enumerator|kRCM_SourceAll = 0xffffffffU,
DECL|kRCM_SourceEzpt|enumerator|kRCM_SourceEzpt = RCM_SRS_EZPT_MASK, /*!< EzPort reset */
DECL|kRCM_SourceJtag|enumerator|kRCM_SourceJtag = RCM_SRS_JTAG_MASK, /*!< JTAG generated reset */
DECL|kRCM_SourceLockup|enumerator|kRCM_SourceLockup = RCM_SRS_LOCKUP_MASK, /*!< Core lock up reset */
DECL|kRCM_SourceLoc|enumerator|kRCM_SourceLoc = RCM_SRS_LOC_MASK, /*!< Loss of clock reset */
DECL|kRCM_SourceLol|enumerator|kRCM_SourceLol = RCM_SRS_LOL_MASK, /*!< Loss of lock reset */
DECL|kRCM_SourceLvd|enumerator|kRCM_SourceLvd = RCM_SRS_LVD_MASK, /*!< Low-voltage detect reset */
DECL|kRCM_SourceMdmap|enumerator|kRCM_SourceMdmap = RCM_SRS_MDM_AP_MASK, /*!< MDM-AP system reset */
DECL|kRCM_SourcePin|enumerator|kRCM_SourcePin = RCM_SRS_PIN_MASK, /*!< External pin reset */
DECL|kRCM_SourcePor|enumerator|kRCM_SourcePor = RCM_SRS_POR_MASK, /*!< Power on reset */
DECL|kRCM_SourceSackerr|enumerator|kRCM_SourceSackerr = RCM_SRS_SACKERR_MASK, /*!< Parameter could get all reset flags */
DECL|kRCM_SourceSw|enumerator|kRCM_SourceSw = RCM_SRS_SW_MASK, /*!< Software reset */
DECL|kRCM_SourceWakeup|enumerator|kRCM_SourceWakeup = RCM_SRS_WAKEUP_MASK, /*!< Low-leakage wakeup reset */
DECL|kRCM_SourceWdog|enumerator|kRCM_SourceWdog = RCM_SRS_WDOG_MASK, /*!< Watchdog reset */
DECL|major|member|uint8_t major; /*!< Major version number. */
DECL|minor|member|uint8_t minor; /*!< Minor version number. */
DECL|rcm_boot_rom_config_t|typedef|} rcm_boot_rom_config_t;
DECL|rcm_interrupt_enable_t|typedef|} rcm_interrupt_enable_t;
DECL|rcm_reset_delay_t|typedef|} rcm_reset_delay_t;
DECL|rcm_reset_pin_filter_config_t|typedef|} rcm_reset_pin_filter_config_t;
DECL|rcm_reset_source_t|typedef|} rcm_reset_source_t;
DECL|rcm_run_wait_filter_mode_t|typedef|} rcm_run_wait_filter_mode_t;
DECL|rcm_version_id_t|typedef|} rcm_version_id_t;
