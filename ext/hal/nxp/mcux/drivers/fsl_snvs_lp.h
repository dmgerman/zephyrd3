DECL|FSL_SNVS_LP_DRIVER_VERSION|macro|FSL_SNVS_LP_DRIVER_VERSION
DECL|SNVS_LP_MAX_TAMPER|macro|SNVS_LP_MAX_TAMPER
DECL|SNVS_LP_MAX_TAMPER|macro|SNVS_LP_MAX_TAMPER
DECL|SNVS_LP_SRTC_StartTimer|function|static inline void SNVS_LP_SRTC_StartTimer(SNVS_Type *base)
DECL|SNVS_LP_SRTC_StopTimer|function|static inline void SNVS_LP_SRTC_StopTimer(SNVS_Type *base)
DECL|_FSL_SNVS_LP_H_|macro|_FSL_SNVS_LP_H_
DECL|_snvs_lp_external_tamper_polarity|enum|typedef enum _snvs_lp_external_tamper_polarity
DECL|_snvs_lp_external_tamper_status|enum|typedef enum _snvs_lp_external_tamper_status
DECL|_snvs_lp_external_tamper|enum|typedef enum _snvs_lp_external_tamper
DECL|_snvs_lp_srtc_config|struct|typedef struct _snvs_lp_srtc_config
DECL|_snvs_lp_srtc_datetime|struct|typedef struct _snvs_lp_srtc_datetime
DECL|_snvs_lp_srtc_interrupt_enable|enum|typedef enum _snvs_lp_srtc_interrupt_enable
DECL|_snvs_lp_srtc_status_flags|enum|typedef enum _snvs_lp_srtc_status_flags
DECL|day|member|uint8_t day; /*!< Range from 1 to 31 (depending on month).*/
DECL|hour|member|uint8_t hour; /*!< Range from 0 to 23.*/
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
DECL|kSNVS_SRTC_AlarmInterruptEnable|enumerator|kSNVS_SRTC_AlarmInterruptEnable = 4U, /*!< SRTC time alarm.*/
DECL|kSNVS_SRTC_AlarmInterruptFlag|enumerator|kSNVS_SRTC_AlarmInterruptFlag = 4U, /*!< SRTC time alarm flag*/
DECL|kSNVS_TamperDetected|enumerator|kSNVS_TamperDetected = 1U
DECL|kSNVS_TamperNotDetected|enumerator|kSNVS_TamperNotDetected = 0U,
DECL|minute|member|uint8_t minute; /*!< Range from 0 to 59.*/
DECL|month|member|uint8_t month; /*!< Range from 1 to 12.*/
DECL|second|member|uint8_t second; /*!< Range from 0 to 59.*/
DECL|snvs_lp_external_tamper_polarity_t|typedef|} snvs_lp_external_tamper_polarity_t;
DECL|snvs_lp_external_tamper_status_t|typedef|} snvs_lp_external_tamper_status_t;
DECL|snvs_lp_external_tamper_t|typedef|} snvs_lp_external_tamper_t;
DECL|snvs_lp_srtc_config_t|typedef|} snvs_lp_srtc_config_t;
DECL|snvs_lp_srtc_datetime_t|typedef|} snvs_lp_srtc_datetime_t;
DECL|snvs_lp_srtc_interrupt_enable_t|typedef|} snvs_lp_srtc_interrupt_enable_t;
DECL|snvs_lp_srtc_status_flags_t|typedef|} snvs_lp_srtc_status_flags_t;
DECL|srtcCalEnable|member|bool srtcCalEnable; /*!< true: SRTC calibration mechanism is enabled;
DECL|srtcCalValue|member|uint32_t srtcCalValue; /*!< Defines signed calibration value for SRTC;
DECL|year|member|uint16_t year; /*!< Range from 1970 to 2099.*/
