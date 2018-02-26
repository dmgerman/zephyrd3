DECL|FSL_SMC_DRIVER_VERSION|macro|FSL_SMC_DRIVER_VERSION
DECL|SMC_GetPowerModeState|function|static inline smc_power_state_t SMC_GetPowerModeState(SMC_Type *base)
DECL|SMC_GetVersionId|function|static inline void SMC_GetVersionId(SMC_Type *base, smc_version_id_t *versionId)
DECL|SMC_PostExitWaitModes|function|static inline void SMC_PostExitWaitModes(void)
DECL|SMC_PreEnterWaitModes|function|static inline void SMC_PreEnterWaitModes(void)
DECL|SMC_SetPowerModeProtection|function|static inline void SMC_SetPowerModeProtection(SMC_Type *base, uint8_t allowedModes)
DECL|_FSL_SMC_H_|macro|_FSL_SMC_H_
DECL|_smc_param|struct|typedef struct _smc_param
DECL|_smc_partial_stop_mode|enum|typedef enum _smc_partial_stop_mode
DECL|_smc_power_mode_lls_config|struct|typedef struct _smc_power_mode_lls_config
DECL|_smc_power_mode_protection|enum|typedef enum _smc_power_mode_protection
DECL|_smc_power_mode_vlls_config|struct|typedef struct _smc_power_mode_vlls_config
DECL|_smc_power_state|enum|typedef enum _smc_power_state
DECL|_smc_run_mode|enum|typedef enum _smc_run_mode
DECL|_smc_status|enum|enum _smc_status
DECL|_smc_stop_mode|enum|typedef enum _smc_stop_mode
DECL|_smc_stop_submode|enum|typedef enum _smc_stop_submode
DECL|_smc_version_id|struct|typedef struct _smc_version_id
DECL|enableLpoClock|member|bool enableLpoClock; /*!< Enable LPO clock in LLS mode */
DECL|enableLpoClock|member|bool enableLpoClock; /*!< Enable LPO clock in VLLS mode */
DECL|enablePorDetectInVlls0|member|bool enablePorDetectInVlls0; /*!< Enable Power on reset detect in VLLS mode */
DECL|enableRam2InVlls2|member|bool enableRam2InVlls2; /*!< Enable RAM2 power in VLLS2 */
DECL|feature|member|uint16_t feature; /*!< Feature Specification Number. */
DECL|hsrunEnable|member|bool hsrunEnable; /*!< HSRUN mode enable. */
DECL|kSMC_AllowPowerModeAll|enumerator|kSMC_AllowPowerModeAll = (0U
DECL|kSMC_AllowPowerModeHsrun|enumerator|kSMC_AllowPowerModeHsrun = SMC_PMPROT_AHSRUN_MASK, /*!< Allow High-speed Run mode. */
DECL|kSMC_AllowPowerModeLls|enumerator|kSMC_AllowPowerModeLls = SMC_PMPROT_ALLS_MASK, /*!< Allow Low-leakage Stop Mode. */
DECL|kSMC_AllowPowerModeVlls|enumerator|kSMC_AllowPowerModeVlls = SMC_PMPROT_AVLLS_MASK, /*!< Allow Very-low-leakage Stop Mode. */
DECL|kSMC_AllowPowerModeVlp|enumerator|kSMC_AllowPowerModeVlp = SMC_PMPROT_AVLP_MASK, /*!< Allow Very-Low-power Mode. */
DECL|kSMC_Hsrun|enumerator|kSMC_Hsrun = 3U /*!< High-speed Run mode (HSRUN). */
DECL|kSMC_PartialStop1|enumerator|kSMC_PartialStop1 = 1U, /*!< Partial Stop with both system and bus clocks disabled*/
DECL|kSMC_PartialStop2|enumerator|kSMC_PartialStop2 = 2U, /*!< Partial Stop with system clock disabled and bus clock enabled*/
DECL|kSMC_PartialStop|enumerator|kSMC_PartialStop = 0U, /*!< STOP - Normal Stop mode*/
DECL|kSMC_PowerStateHsrun|enumerator|kSMC_PowerStateHsrun = 0x01U << 7U /*!< 1000_0000 - Current power mode is HSRUN */
DECL|kSMC_PowerStateLls|enumerator|kSMC_PowerStateLls = 0x01U << 5U, /*!< 0010_0000 - Current power mode is LLS */
DECL|kSMC_PowerStateRun|enumerator|kSMC_PowerStateRun = 0x01U << 0U, /*!< 0000_0001 - Current power mode is RUN */
DECL|kSMC_PowerStateStop|enumerator|kSMC_PowerStateStop = 0x01U << 1U, /*!< 0000_0010 - Current power mode is STOP */
DECL|kSMC_PowerStateVlls|enumerator|kSMC_PowerStateVlls = 0x01U << 6U, /*!< 0100_0000 - Current power mode is VLLS */
DECL|kSMC_PowerStateVlpr|enumerator|kSMC_PowerStateVlpr = 0x01U << 2U, /*!< 0000_0100 - Current power mode is VLPR */
DECL|kSMC_PowerStateVlps|enumerator|kSMC_PowerStateVlps = 0x01U << 4U, /*!< 0001_0000 - Current power mode is VLPS */
DECL|kSMC_PowerStateVlpw|enumerator|kSMC_PowerStateVlpw = 0x01U << 3U, /*!< 0000_1000 - Current power mode is VLPW */
DECL|kSMC_RunNormal|enumerator|kSMC_RunNormal = 0U, /*!< Normal RUN mode. */
DECL|kSMC_RunVlpr|enumerator|kSMC_RunVlpr = 2U, /*!< Very-low-power RUN mode. */
DECL|kSMC_StopLls|enumerator|kSMC_StopLls = 3U, /*!< Low-leakage Stop mode. */
DECL|kSMC_StopNormal|enumerator|kSMC_StopNormal = 0U, /*!< Normal STOP mode. */
DECL|kSMC_StopSub0|enumerator|kSMC_StopSub0 = 0U, /*!< Stop submode 0, for VLLS0/LLS0. */
DECL|kSMC_StopSub1|enumerator|kSMC_StopSub1 = 1U, /*!< Stop submode 1, for VLLS1/LLS1. */
DECL|kSMC_StopSub2|enumerator|kSMC_StopSub2 = 2U, /*!< Stop submode 2, for VLLS2/LLS2. */
DECL|kSMC_StopSub3|enumerator|kSMC_StopSub3 = 3U /*!< Stop submode 3, for VLLS3/LLS3. */
DECL|kSMC_StopVlls|enumerator|kSMC_StopVlls = 4U /*!< Very-low-leakage Stop mode. */
DECL|kSMC_StopVlps|enumerator|kSMC_StopVlps = 2U, /*!< Very-low-power STOP mode. */
DECL|kStatus_SMC_StopAbort|enumerator|kStatus_SMC_StopAbort = MAKE_STATUS(kStatusGroup_POWER, 0) /*!< Entering Stop mode is abort*/
DECL|lls2Enable|member|bool lls2Enable; /*!< LLS2 mode enable. */
DECL|llsEnable|member|bool llsEnable; /*!< LLS mode enable. */
DECL|major|member|uint8_t major; /*!< Major version number. */
DECL|minor|member|uint8_t minor; /*!< Minor version number. */
DECL|smc_param_t|typedef|} smc_param_t;
DECL|smc_partial_stop_option_t|typedef|} smc_partial_stop_option_t;
DECL|smc_power_mode_lls_config_t|typedef|} smc_power_mode_lls_config_t;
DECL|smc_power_mode_protection_t|typedef|} smc_power_mode_protection_t;
DECL|smc_power_mode_vlls_config_t|typedef|} smc_power_mode_vlls_config_t;
DECL|smc_power_state_t|typedef|} smc_power_state_t;
DECL|smc_run_mode_t|typedef|} smc_run_mode_t;
DECL|smc_stop_mode_t|typedef|} smc_stop_mode_t;
DECL|smc_stop_submode_t|typedef|} smc_stop_submode_t;
DECL|smc_version_id_t|typedef|} smc_version_id_t;
DECL|subMode|member|smc_stop_submode_t subMode; /*!< Low-leakage Stop sub-mode */
DECL|subMode|member|smc_stop_submode_t subMode; /*!< Very Low-leakage Stop sub-mode */
DECL|vlls0Enable|member|bool vlls0Enable; /*!< VLLS0 mode enable. */
