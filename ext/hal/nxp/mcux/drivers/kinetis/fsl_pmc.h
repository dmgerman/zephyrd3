DECL|FSL_PMC_DRIVER_VERSION|macro|FSL_PMC_DRIVER_VERSION
DECL|PMC_ClearHighVoltDetectFlag|function|static inline void PMC_ClearHighVoltDetectFlag(PMC_Type *base)
DECL|PMC_ClearLowVoltDetectFlag|function|static inline void PMC_ClearLowVoltDetectFlag(PMC_Type *base)
DECL|PMC_ClearLowVoltWarningFlag|function|static inline void PMC_ClearLowVoltWarningFlag(PMC_Type *base)
DECL|PMC_ClearPeriphIOIsolationFlag|function|static inline void PMC_ClearPeriphIOIsolationFlag(PMC_Type *base)
DECL|PMC_GetHighVoltDetectFlag|function|static inline bool PMC_GetHighVoltDetectFlag(PMC_Type *base)
DECL|PMC_GetLowVoltDetectFlag|function|static inline bool PMC_GetLowVoltDetectFlag(PMC_Type *base)
DECL|PMC_GetLowVoltWarningFlag|function|static inline bool PMC_GetLowVoltWarningFlag(PMC_Type *base)
DECL|PMC_GetPeriphIOIsolationFlag|function|static inline bool PMC_GetPeriphIOIsolationFlag(PMC_Type *base)
DECL|PMC_GetVersionId|function|static inline void PMC_GetVersionId(PMC_Type *base, pmc_version_id_t *versionId)
DECL|PMC_IsRegulatorInRunRegulation|function|static inline bool PMC_IsRegulatorInRunRegulation(PMC_Type *base)
DECL|_FSL_PMC_H_|macro|_FSL_PMC_H_
DECL|_pmc_bandgap_buffer_config|struct|typedef struct _pmc_bandgap_buffer_config
DECL|_pmc_bandgap_buffer_drive_select|enum|typedef enum _pmc_bandgap_buffer_drive_select
DECL|_pmc_high_volt_detect_config|struct|typedef struct _pmc_high_volt_detect_config
DECL|_pmc_high_volt_detect_volt_select|enum|typedef enum _pmc_high_volt_detect_volt_select
DECL|_pmc_low_volt_detect_config|struct|typedef struct _pmc_low_volt_detect_config
DECL|_pmc_low_volt_detect_volt_select|enum|typedef enum _pmc_low_volt_detect_volt_select
DECL|_pmc_low_volt_warning_config|struct|typedef struct _pmc_low_volt_warning_config
DECL|_pmc_low_volt_warning_volt_select|enum|typedef enum _pmc_low_volt_warning_volt_select
DECL|_pmc_param|struct|typedef struct _pmc_param
DECL|_pmc_version_id|struct|typedef struct _pmc_version_id
DECL|_pmc_vlp_freq_option|enum|typedef enum _pmc_vlp_freq_option
DECL|drive|member|pmc_bandgap_buffer_drive_select_t drive; /*!< Bandgap buffer drive select. */
DECL|enableInLowPowerMode|member|bool enableInLowPowerMode; /*!< Enable bandgap buffer in low-power mode. */
DECL|enableInt|member|bool enableInt; /*!< Enable interrupt when Low-voltage detect*/
DECL|enableInt|member|bool enableInt; /*!< Enable interrupt when high-voltage detect*/
DECL|enableInt|member|bool enableInt; /*!< Enable interrupt when low-voltage warning*/
DECL|enableReset|member|bool enableReset; /*!< Enable system reset when Low-voltage detect*/
DECL|enableReset|member|bool enableReset; /*!< Enable system reset when high-voltage detect*/
DECL|enable|member|bool enable; /*!< Enable bandgap buffer. */
DECL|feature|member|uint16_t feature; /*!< Feature Specification Number. */
DECL|hvdEnable|member|bool hvdEnable; /*!< HVD enable. */
DECL|kPMC_BandgapBufferDriveHigh|enumerator|kPMC_BandgapBufferDriveHigh = 1U /*!< High-drive. */
DECL|kPMC_BandgapBufferDriveLow|enumerator|kPMC_BandgapBufferDriveLow = 0U, /*!< Low-drive. */
DECL|kPMC_FreqRestrict|enumerator|kPMC_FreqRestrict = 0U, /*!< Frequency is restricted in VLPx mode. */
DECL|kPMC_FreqUnrestrict|enumerator|kPMC_FreqUnrestrict = 1U /*!< Frequency is unrestricted in VLPx mode. */
DECL|kPMC_HighVoltDetectHighTrip|enumerator|kPMC_HighVoltDetectHighTrip = 1U /*!< High-trip point selected (VHVD = VHVDH )*/
DECL|kPMC_HighVoltDetectLowTrip|enumerator|kPMC_HighVoltDetectLowTrip = 0U, /*!< Low-trip point selected (VHVD = VHVDL )*/
DECL|kPMC_LowVoltDetectHighTrip|enumerator|kPMC_LowVoltDetectHighTrip = 1U /*!< High-trip point selected (VLVD = VLVDH )*/
DECL|kPMC_LowVoltDetectLowTrip|enumerator|kPMC_LowVoltDetectLowTrip = 0U, /*!< Low-trip point selected (VLVD = VLVDL )*/
DECL|kPMC_LowVoltWarningHighTrip|enumerator|kPMC_LowVoltWarningHighTrip = 3U /*!< High-trip point selected (VLVW = VLVW4)*/
DECL|kPMC_LowVoltWarningLowTrip|enumerator|kPMC_LowVoltWarningLowTrip = 0U, /*!< Low-trip point selected (VLVW = VLVW1)*/
DECL|kPMC_LowVoltWarningMid1Trip|enumerator|kPMC_LowVoltWarningMid1Trip = 1U, /*!< Mid 1 trip point selected (VLVW = VLVW2)*/
DECL|kPMC_LowVoltWarningMid2Trip|enumerator|kPMC_LowVoltWarningMid2Trip = 2U, /*!< Mid 2 trip point selected (VLVW = VLVW3)*/
DECL|major|member|uint8_t major; /*!< Major version number. */
DECL|minor|member|uint8_t minor; /*!< Minor version number. */
DECL|pmc_bandgap_buffer_config_t|typedef|} pmc_bandgap_buffer_config_t;
DECL|pmc_bandgap_buffer_drive_select_t|typedef|} pmc_bandgap_buffer_drive_select_t;
DECL|pmc_high_volt_detect_config_t|typedef|} pmc_high_volt_detect_config_t;
DECL|pmc_high_volt_detect_volt_select_t|typedef|} pmc_high_volt_detect_volt_select_t;
DECL|pmc_low_volt_detect_config_t|typedef|} pmc_low_volt_detect_config_t;
DECL|pmc_low_volt_detect_volt_select_t|typedef|} pmc_low_volt_detect_volt_select_t;
DECL|pmc_low_volt_warning_config_t|typedef|} pmc_low_volt_warning_config_t;
DECL|pmc_low_volt_warning_volt_select_t|typedef|} pmc_low_volt_warning_volt_select_t;
DECL|pmc_param_t|typedef|} pmc_param_t;
DECL|pmc_version_id_t|typedef|} pmc_version_id_t;
DECL|pmc_vlp_freq_mode_t|typedef|} pmc_vlp_freq_mode_t;
DECL|vlpoEnable|member|bool vlpoEnable; /*!< VLPO enable. */
DECL|voltSelect|member|pmc_high_volt_detect_volt_select_t voltSelect; /*!< High-voltage detect trip point voltage selection*/
DECL|voltSelect|member|pmc_low_volt_detect_volt_select_t voltSelect; /*!< Low-voltage detect trip point voltage selection*/
DECL|voltSelect|member|pmc_low_volt_warning_volt_select_t voltSelect; /*!< Low-voltage warning trip point voltage selection*/
