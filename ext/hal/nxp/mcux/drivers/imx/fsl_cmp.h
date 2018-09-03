DECL|CMP_EnablePassThroughMode|function|static inline void CMP_EnablePassThroughMode(CMP_Type *base, bool enable)
DECL|CMP_EnableWindowMode|function|static inline void CMP_EnableWindowMode(CMP_Type *base, bool enable)
DECL|CMP_Enable|function|static inline void CMP_Enable(CMP_Type *base, bool enable)
DECL|DACValue|member|uint8_t DACValue; /*!< Value for the DAC Output Voltage. Available range is 0-63.*/
DECL|FSL_CMP_DRIVER_VERSION|macro|FSL_CMP_DRIVER_VERSION
DECL|_FSL_CMP_H_|macro|_FSL_CMP_H_
DECL|_cmp_config|struct|typedef struct _cmp_config
DECL|_cmp_dac_config|struct|typedef struct _cmp_dac_config
DECL|_cmp_filter_config|struct|typedef struct _cmp_filter_config
DECL|_cmp_hysteresis_mode|enum|typedef enum _cmp_hysteresis_mode
DECL|_cmp_interrupt_enable|enum|enum _cmp_interrupt_enable
DECL|_cmp_reference_voltage_source|enum|typedef enum _cmp_reference_voltage_source
DECL|_cmp_status_flags|enum|enum _cmp_status_flags
DECL|cmp_config_t|typedef|} cmp_config_t;
DECL|cmp_dac_config_t|typedef|} cmp_dac_config_t;
DECL|cmp_filter_config_t|typedef|} cmp_filter_config_t;
DECL|cmp_hysteresis_mode_t|typedef|} cmp_hysteresis_mode_t;
DECL|cmp_reference_voltage_source_t|typedef|} cmp_reference_voltage_source_t;
DECL|enableCmp|member|bool enableCmp; /*!< Enable the CMP module. */
DECL|enableHighSpeed|member|bool enableHighSpeed; /*!< Enable High-speed (HS) comparison mode. */
DECL|enableInvertOutput|member|bool enableInvertOutput; /*!< Enable the inverted comparator output. */
DECL|enablePinOut|member|bool enablePinOut; /*!< The comparator output is available on the associated pin. */
DECL|enableSample|member|bool enableSample; /*!< Using the external SAMPLE as a sampling clock input or using a divided bus clock. */
DECL|enableTriggerMode|member|bool enableTriggerMode; /*!< Enable the trigger mode. */
DECL|filterCount|member|uint8_t filterCount; /*!< Filter Sample Count. Available range is 1-7; 0 disables the filter.*/
DECL|filterPeriod|member|uint8_t filterPeriod; /*!< Filter Sample Period. The divider to the bus clock. Available range is 0-255. */
DECL|hysteresisMode|member|cmp_hysteresis_mode_t hysteresisMode; /*!< CMP Hysteresis mode. */
DECL|kCMP_HysteresisLevel0|enumerator|kCMP_HysteresisLevel0 = 0U, /*!< Hysteresis level 0. */
DECL|kCMP_HysteresisLevel1|enumerator|kCMP_HysteresisLevel1 = 1U, /*!< Hysteresis level 1. */
DECL|kCMP_HysteresisLevel2|enumerator|kCMP_HysteresisLevel2 = 2U, /*!< Hysteresis level 2. */
DECL|kCMP_HysteresisLevel3|enumerator|kCMP_HysteresisLevel3 = 3U, /*!< Hysteresis level 3. */
DECL|kCMP_OutputAssertEventFlag|enumerator|kCMP_OutputAssertEventFlag = CMP_SCR_COUT_MASK, /*!< Return the current value of the analog comparator output. */
DECL|kCMP_OutputFallingEventFlag|enumerator|kCMP_OutputFallingEventFlag = CMP_SCR_CFF_MASK, /*!< Falling-edge on the comparison output has occurred. */
DECL|kCMP_OutputFallingInterruptEnable|enumerator|kCMP_OutputFallingInterruptEnable = CMP_SCR_IEF_MASK, /*!< Comparator interrupt enable falling. */
DECL|kCMP_OutputRisingEventFlag|enumerator|kCMP_OutputRisingEventFlag = CMP_SCR_CFR_MASK, /*!< Rising-edge on the comparison output has occurred. */
DECL|kCMP_OutputRisingInterruptEnable|enumerator|kCMP_OutputRisingInterruptEnable = CMP_SCR_IER_MASK, /*!< Comparator interrupt enable rising. */
DECL|kCMP_VrefSourceVin1|enumerator|kCMP_VrefSourceVin1 = 0U, /*!< Vin1 is selected as a resistor ladder network supply reference Vin. */
DECL|kCMP_VrefSourceVin2|enumerator|kCMP_VrefSourceVin2 = 1U, /*!< Vin2 is selected as a resistor ladder network supply reference Vin. */
DECL|referenceVoltageSource|member|cmp_reference_voltage_source_t referenceVoltageSource; /*!< Supply voltage reference source. */
DECL|useUnfilteredOutput|member|bool useUnfilteredOutput; /*!< Set the compare output(COUT) to equal COUTA(true) or COUT(false). */
