DECL|FSL_SNVS_LP_DRIVER_VERSION|macro|FSL_SNVS_LP_DRIVER_VERSION
DECL|SNVS_LP_EnableMonotonicCounter|function|static inline void SNVS_LP_EnableMonotonicCounter(SNVS_Type *base, bool enable)
DECL|SNVS_LP_EnableZeroizableMasterKeyECC|function|static inline void SNVS_LP_EnableZeroizableMasterKeyECC(SNVS_Type *base, bool enable)
DECL|SNVS_LP_GetZeroizableMasterKeyValid|function|static inline bool SNVS_LP_GetZeroizableMasterKeyValid(SNVS_Type *base)
DECL|SNVS_LP_IncreaseMonotonicCounter|function|static inline void SNVS_LP_IncreaseMonotonicCounter(SNVS_Type *base)
DECL|SNVS_LP_MAX_TAMPER|macro|SNVS_LP_MAX_TAMPER
DECL|SNVS_LP_MAX_TAMPER|macro|SNVS_LP_MAX_TAMPER
DECL|SNVS_LP_SRTC_ClearStatusFlags|function|static inline void SNVS_LP_SRTC_ClearStatusFlags(SNVS_Type *base, uint32_t mask)
DECL|SNVS_LP_SRTC_DisableInterrupts|function|static inline void SNVS_LP_SRTC_DisableInterrupts(SNVS_Type *base, uint32_t mask)
DECL|SNVS_LP_SRTC_EnableInterrupts|function|static inline void SNVS_LP_SRTC_EnableInterrupts(SNVS_Type *base, uint32_t mask)
DECL|SNVS_LP_SRTC_StartTimer|function|static inline void SNVS_LP_SRTC_StartTimer(SNVS_Type *base)
DECL|SNVS_LP_SRTC_StopTimer|function|static inline void SNVS_LP_SRTC_StopTimer(SNVS_Type *base)
DECL|SNVS_LP_SetMasterKeyMode|function|static inline void SNVS_LP_SetMasterKeyMode(SNVS_Type *base, snvs_lp_master_key_mode_t mode)
DECL|SNVS_LP_SetZeroizableMasterKeyProgramMode|function|static inline void SNVS_LP_SetZeroizableMasterKeyProgramMode(SNVS_Type *base, snvs_lp_zmk_program_mode_t mode)
DECL|SNVS_LP_SetZeroizableMasterKeyValid|function|static inline void SNVS_LP_SetZeroizableMasterKeyValid(SNVS_Type *base, bool valid)
DECL|SNVS_ZMK_REG_COUNT|macro|SNVS_ZMK_REG_COUNT
DECL|_FSL_SNVS_LP_H_|macro|_FSL_SNVS_LP_H_
DECL|_snvs_lp_external_tamper_polarity|enum|typedef enum _snvs_lp_external_tamper_polarity
DECL|_snvs_lp_external_tamper_status|enum|typedef enum _snvs_lp_external_tamper_status
DECL|_snvs_lp_external_tamper|enum|typedef enum _snvs_lp_external_tamper
DECL|_snvs_lp_master_key_mode|enum|typedef enum _snvs_lp_master_key_mode
DECL|_snvs_lp_srtc_config|struct|typedef struct _snvs_lp_srtc_config
DECL|_snvs_lp_srtc_datetime|struct|typedef struct _snvs_lp_srtc_datetime
DECL|_snvs_lp_srtc_interrupts|enum|typedef enum _snvs_lp_srtc_interrupts
DECL|_snvs_lp_srtc_status_flags|enum|typedef enum _snvs_lp_srtc_status_flags
DECL|_snvs_lp_zmk_program_mode|enum|typedef enum _snvs_lp_zmk_program_mode
DECL|day|member|uint8_t day; /*!< Range from 1 to 31 (depending on month).*/
DECL|hour|member|uint8_t hour; /*!< Range from 0 to 23.*/
DECL|kSNVS_CMK|enumerator|kSNVS_CMK = 3, /*!< Combined Master Key, it is XOR of OPTMK and ZMK. */
DECL|kSNVS_ExternalTamper10|enumerator|kSNVS_ExternalTamper10 = 10U
DECL|kSNVS_ExternalTamper1|enumerator|kSNVS_ExternalTamper1 = 1U,
DECL|kSNVS_ExternalTamper2|enumerator|kSNVS_ExternalTamper2 = 2U,
DECL|kSNVS_ExternalTamper3|enumerator|kSNVS_ExternalTamper3 = 3U,
DECL|kSNVS_ExternalTamper4|enumerator|kSNVS_ExternalTamper4 = 4U,
DECL|kSNVS_ExternalTamper5|enumerator|kSNVS_ExternalTamper5 = 5U,
DECL|kSNVS_ExternalTamper6|enumerator|kSNVS_ExternalTamper6 = 6U,
DECL|kSNVS_ExternalTamper7|enumerator|kSNVS_ExternalTamper7 = 7U,
DECL|kSNVS_ExternalTamper8|enumerator|kSNVS_ExternalTamper8 = 8U,
DECL|kSNVS_ExternalTamper9|enumerator|kSNVS_ExternalTamper9 = 9U,
DECL|kSNVS_ExternalTamperActiveHigh|enumerator|kSNVS_ExternalTamperActiveHigh = 1U
DECL|kSNVS_ExternalTamperActiveLow|enumerator|kSNVS_ExternalTamperActiveLow = 0U,
DECL|kSNVS_OTPMK|enumerator|kSNVS_OTPMK = 0, /*!< One Time Programmable Master Key. */
DECL|kSNVS_SRTC_AlarmInterruptFlag|enumerator|kSNVS_SRTC_AlarmInterruptFlag = SNVS_LPSR_LPTA_MASK, /*!< SRTC time alarm flag */
DECL|kSNVS_SRTC_AlarmInterrupt|enumerator|kSNVS_SRTC_AlarmInterrupt = SNVS_LPCR_LPTA_EN_MASK, /*!< SRTC time alarm.*/
DECL|kSNVS_TamperDetected|enumerator|kSNVS_TamperDetected = 1U
DECL|kSNVS_TamperNotDetected|enumerator|kSNVS_TamperNotDetected = 0U,
DECL|kSNVS_ZMKHardwareProgram|enumerator|kSNVS_ZMKHardwareProgram, /*!< Hardware programming mode. */
DECL|kSNVS_ZMKSoftwareProgram|enumerator|kSNVS_ZMKSoftwareProgram, /*!< Software programming mode. */
DECL|kSNVS_ZMK|enumerator|kSNVS_ZMK = 2, /*!< Zeroizable Master Key. */
DECL|minute|member|uint8_t minute; /*!< Range from 0 to 59.*/
DECL|month|member|uint8_t month; /*!< Range from 1 to 12.*/
DECL|second|member|uint8_t second; /*!< Range from 0 to 59.*/
DECL|snvs_lp_external_tamper_polarity_t|typedef|} snvs_lp_external_tamper_polarity_t;
DECL|snvs_lp_external_tamper_status_t|typedef|} snvs_lp_external_tamper_status_t;
DECL|snvs_lp_external_tamper_t|typedef|} snvs_lp_external_tamper_t;
DECL|snvs_lp_master_key_mode_t|typedef|} snvs_lp_master_key_mode_t;
DECL|snvs_lp_srtc_config_t|typedef|} snvs_lp_srtc_config_t;
DECL|snvs_lp_srtc_datetime_t|typedef|} snvs_lp_srtc_datetime_t;
DECL|snvs_lp_srtc_interrupts_t|typedef|} snvs_lp_srtc_interrupts_t;
DECL|snvs_lp_srtc_status_flags_t|typedef|} snvs_lp_srtc_status_flags_t;
DECL|snvs_lp_zmk_program_mode_t|typedef|} snvs_lp_zmk_program_mode_t;
DECL|srtcCalEnable|member|bool srtcCalEnable; /*!< true: SRTC calibration mechanism is enabled;
DECL|srtcCalValue|member|uint32_t srtcCalValue; /*!< Defines signed calibration value for SRTC;
DECL|year|member|uint16_t year; /*!< Range from 1970 to 2099.*/
