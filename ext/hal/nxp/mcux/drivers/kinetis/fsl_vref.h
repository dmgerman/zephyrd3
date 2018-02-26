DECL|FSL_VREF_DRIVER_VERSION|macro|FSL_VREF_DRIVER_VERSION
DECL|TRM|macro|TRM
DECL|VREF_GetLowReferenceTrimVal|function|static inline uint8_t VREF_GetLowReferenceTrimVal(VREF_Type *base)
DECL|VREF_GetTrim2V1Val|function|static inline uint8_t VREF_GetTrim2V1Val(VREF_Type *base)
DECL|VREF_GetTrimVal|function|static inline uint8_t VREF_GetTrimVal(VREF_Type *base)
DECL|VREF_SC_ICOMPEN_MASK|macro|VREF_SC_ICOMPEN_MASK
DECL|VREF_SC_ICOMPEN_SHIFT|macro|VREF_SC_ICOMPEN_SHIFT
DECL|VREF_SC_ICOMPEN|macro|VREF_SC_ICOMPEN
DECL|VREF_SC_MODE_LV_MASK|macro|VREF_SC_MODE_LV_MASK
DECL|VREF_SC_MODE_LV_SHIFT|macro|VREF_SC_MODE_LV_SHIFT
DECL|VREF_SC_MODE_LV|macro|VREF_SC_MODE_LV
DECL|VREF_SC_REGEN_MASK|macro|VREF_SC_REGEN_MASK
DECL|VREF_SC_REGEN_SHIFT|macro|VREF_SC_REGEN_SHIFT
DECL|VREF_SC_REGEN|macro|VREF_SC_REGEN
DECL|VREF_SC_VREFEN_MASK|macro|VREF_SC_VREFEN_MASK
DECL|VREF_SC_VREFEN|macro|VREF_SC_VREFEN
DECL|VREF_SC_VREFST_MASK|macro|VREF_SC_VREFST_MASK
DECL|VREF_SC_VREFST_SHIFT|macro|VREF_SC_VREFST_SHIFT
DECL|VREF_TRM_CHOPEN_MASK|macro|VREF_TRM_CHOPEN_MASK
DECL|VREF_TRM_CHOPEN_SHIFT|macro|VREF_TRM_CHOPEN_SHIFT
DECL|VREF_TRM_TRIM_MASK|macro|VREF_TRM_TRIM_MASK
DECL|VREF_TRM_TRIM_SHIFT|macro|VREF_TRM_TRIM_SHIFT
DECL|VREF_TRM_TRIM|macro|VREF_TRM_TRIM
DECL|_FSL_VREF_H_|macro|_FSL_VREF_H_
DECL|_vref_buffer_mode|enum|typedef enum _vref_buffer_mode
DECL|_vref_config|struct|typedef struct _vref_config
DECL|bufferMode|member|vref_buffer_mode_t bufferMode; /*!< Buffer mode selection */
DECL|enable2V1VoltRef|member|bool enable2V1VoltRef; /*!< Enable Internal Voltage Reference (2.1V) */
DECL|enableExternalVoltRef|member|bool enableExternalVoltRef; /*!< Select external voltage reference or not (internal) */
DECL|enableLowRef|member|bool enableLowRef; /*!< Set VREFL (0.4 V) reference buffer enable or disable */
DECL|kVREF_ModeBandgapOnly|enumerator|kVREF_ModeBandgapOnly = 0U, /*!< Bandgap on only, for stabilization and startup */
DECL|kVREF_ModeHighPowerBuffer|enumerator|kVREF_ModeHighPowerBuffer = 1U, /*!< High-power buffer mode enabled */
DECL|kVREF_ModeLowPowerBuffer|enumerator|kVREF_ModeLowPowerBuffer = 2U /*!< Low-power buffer mode enabled */
DECL|vref_buffer_mode_t|typedef|} vref_buffer_mode_t;
DECL|vref_config_t|typedef|} vref_config_t;
