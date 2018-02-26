DECL|FSL_LLWU_DRIVER_VERSION|macro|FSL_LLWU_DRIVER_VERSION
DECL|LLWU_EnableInternalModuleDmaRequestWakup|function|static inline void LLWU_EnableInternalModuleDmaRequestWakup(LLWU_Type *base, uint32_t moduleIndex, bool enable)
DECL|LLWU_EnableInternalModuleInterruptWakup|function|static inline void LLWU_EnableInternalModuleInterruptWakup(LLWU_Type *base, uint32_t moduleIndex, bool enable)
DECL|LLWU_GetInternalWakeupModuleFlag|function|static inline bool LLWU_GetInternalWakeupModuleFlag(LLWU_Type *base, uint32_t moduleIndex)
DECL|LLWU_GetParam|function|static inline void LLWU_GetParam(LLWU_Type *base, llwu_param_t *param)
DECL|LLWU_GetVersionId|function|static inline void LLWU_GetVersionId(LLWU_Type *base, llwu_version_id_t *versionId)
DECL|_FSL_LLWU_H_|macro|_FSL_LLWU_H_
DECL|_llwu_external_pin_filter_mode|struct|typedef struct _llwu_external_pin_filter_mode
DECL|_llwu_external_pin_mode|enum|typedef enum _llwu_external_pin_mode
DECL|_llwu_param|struct|typedef struct _llwu_param
DECL|_llwu_pin_filter_mode|enum|typedef enum _llwu_pin_filter_mode
DECL|_llwu_version_id|struct|typedef struct _llwu_version_id
DECL|dmas|member|uint8_t dmas; /*!< A number of the wakeup DMA. */
DECL|feature|member|uint16_t feature; /*!< A feature specification number. */
DECL|filterMode|member|llwu_pin_filter_mode_t filterMode; /*!< Filter mode */
DECL|filters|member|uint8_t filters; /*!< A number of the pin filter. */
DECL|kLLWU_ExternalPinAnyEdge|enumerator|kLLWU_ExternalPinAnyEdge = 3U /*!< Pin enabled with any change detection. */
DECL|kLLWU_ExternalPinDisable|enumerator|kLLWU_ExternalPinDisable = 0U, /*!< Pin disabled as a wakeup input. */
DECL|kLLWU_ExternalPinFallingEdge|enumerator|kLLWU_ExternalPinFallingEdge = 2U, /*!< Pin enabled with the falling edge detection.*/
DECL|kLLWU_ExternalPinRisingEdge|enumerator|kLLWU_ExternalPinRisingEdge = 1U, /*!< Pin enabled with the rising edge detection. */
DECL|kLLWU_PinFilterAnyEdge|enumerator|kLLWU_PinFilterAnyEdge = 3U /*!< Filter any edge detection. */
DECL|kLLWU_PinFilterDisable|enumerator|kLLWU_PinFilterDisable = 0U, /*!< Filter disabled. */
DECL|kLLWU_PinFilterFallingEdge|enumerator|kLLWU_PinFilterFallingEdge = 2U, /*!< Filter negative edge detection.*/
DECL|kLLWU_PinFilterRisingEdge|enumerator|kLLWU_PinFilterRisingEdge = 1U, /*!< Filter positive edge detection.*/
DECL|llwu_external_pin_filter_mode_t|typedef|} llwu_external_pin_filter_mode_t;
DECL|llwu_external_pin_mode_t|typedef|} llwu_external_pin_mode_t;
DECL|llwu_param_t|typedef|} llwu_param_t;
DECL|llwu_pin_filter_mode_t|typedef|} llwu_pin_filter_mode_t;
DECL|llwu_version_id_t|typedef|} llwu_version_id_t;
DECL|major|member|uint8_t major; /*!< The major version number. */
DECL|minor|member|uint8_t minor; /*!< The minor version number. */
DECL|modules|member|uint8_t modules; /*!< A number of the wakeup module. */
DECL|pinIndex|member|uint32_t pinIndex; /*!< A pin number */
DECL|pins|member|uint8_t pins; /*!< A number of the wake up pin. */
