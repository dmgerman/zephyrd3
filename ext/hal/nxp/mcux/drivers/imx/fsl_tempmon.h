DECL|FSL_TEMPMON_DRIVER_VERSION|macro|FSL_TEMPMON_DRIVER_VERSION
DECL|TEMPMON_StartMeasure|function|static inline void TEMPMON_StartMeasure(TEMPMON_Type *base)
DECL|TEMPMON_StopMeasure|function|static inline void TEMPMON_StopMeasure(TEMPMON_Type *base)
DECL|_FSL_TEMPMON_H_|macro|_FSL_TEMPMON_H_
DECL|_tempmon_alarm_mode|enum|typedef enum _tempmon_alarm_mode
DECL|_tempmon_config|struct|typedef struct _tempmon_config
DECL|frequency|member|uint16_t frequency; /*!< The temperature measure frequency.*/
DECL|highAlarmTemp|member|uint32_t highAlarmTemp; /*!< The high alarm temperature.*/
DECL|kTEMPMON_HighAlarmMode|enumerator|kTEMPMON_HighAlarmMode = 0U, /*!< The high alarm temperature interrupt mode.*/
DECL|kTEMPMON_LowAlarmMode|enumerator|kTEMPMON_LowAlarmMode = 2U, /*!< The low alarm temperature interrupt mode.*/
DECL|kTEMPMON_PanicAlarmMode|enumerator|kTEMPMON_PanicAlarmMode = 1U, /*!< The panic alarm temperature interrupt mode.*/
DECL|lowAlarmTemp|member|uint32_t lowAlarmTemp; /*!< The low alarm temperature.*/
DECL|panicAlarmTemp|member|uint32_t panicAlarmTemp; /*!< The panic alarm temperature.*/
DECL|tempmon_alarm_mode|typedef|} tempmon_alarm_mode;
DECL|tempmon_config_t|typedef|} tempmon_config_t;
