DECL|ALL_FLAGS_MASK|macro|ALL_FLAGS_MASK
DECL|FSL_TSI_DRIVER_VERSION|macro|FSL_TSI_DRIVER_VERSION
DECL|TSI_EnableDmaTransfer|function|static inline void TSI_EnableDmaTransfer(TSI_Type *base, bool enable)
DECL|TSI_EnableEndOfScanDmaTransferOnly|function|static inline void TSI_EnableEndOfScanDmaTransferOnly(TSI_Type *base, bool enable)
DECL|TSI_EnableHardwareTriggerScan|function|static inline void TSI_EnableHardwareTriggerScan(TSI_Type *base, bool enable)
DECL|TSI_EnableLowPower|function|static inline void TSI_EnableLowPower(TSI_Type *base, bool enable)
DECL|TSI_EnableModule|function|static inline void TSI_EnableModule(TSI_Type *base, bool enable)
DECL|TSI_GetCounter|function|static inline uint16_t TSI_GetCounter(TSI_Type *base)
DECL|TSI_GetMeasuredChannelNumber|function|static inline uint8_t TSI_GetMeasuredChannelNumber(TSI_Type *base)
DECL|TSI_GetNoiseModeResult|function|static inline uint8_t TSI_GetNoiseModeResult(TSI_Type *base)
DECL|TSI_GetScanTriggerMode|function|static inline uint32_t TSI_GetScanTriggerMode(TSI_Type *base)
DECL|TSI_GetStatusFlags|function|static inline uint32_t TSI_GetStatusFlags(TSI_Type *base)
DECL|TSI_IsScanInProgress|function|static inline bool TSI_IsScanInProgress(TSI_Type *base)
DECL|TSI_SetAnalogMode|function|static inline void TSI_SetAnalogMode(TSI_Type *base, tsi_analog_mode_t mode)
DECL|TSI_SetElectrodeChargeCurrent|function|static inline void TSI_SetElectrodeChargeCurrent(TSI_Type *base, tsi_external_osc_charge_current_t current)
DECL|TSI_SetElectrodeOSCPrescaler|function|static inline void TSI_SetElectrodeOSCPrescaler(TSI_Type *base, tsi_electrode_osc_prescaler_t prescaler)
DECL|TSI_SetElectrodeSeriesResistor|function|static inline void TSI_SetElectrodeSeriesResistor(TSI_Type *base, tsi_series_resistor_t resistor)
DECL|TSI_SetFilterBits|function|static inline void TSI_SetFilterBits(TSI_Type *base, tsi_filter_bits_t filter)
DECL|TSI_SetHighThreshold|function|static inline void TSI_SetHighThreshold(TSI_Type *base, uint16_t high_threshold)
DECL|TSI_SetLowThreshold|function|static inline void TSI_SetLowThreshold(TSI_Type *base, uint16_t low_threshold)
DECL|TSI_SetMeasuredChannelNumber|function|static inline void TSI_SetMeasuredChannelNumber(TSI_Type *base, uint8_t channel)
DECL|TSI_SetNumberOfScans|function|static inline void TSI_SetNumberOfScans(TSI_Type *base, tsi_n_consecutive_scans_t number)
DECL|TSI_SetOscVoltageRails|function|static inline void TSI_SetOscVoltageRails(TSI_Type *base, tsi_osc_voltage_rails_t dvolt)
DECL|TSI_SetReferenceChargeCurrent|function|static inline void TSI_SetReferenceChargeCurrent(TSI_Type *base, tsi_reference_osc_charge_current_t current)
DECL|TSI_StartSoftwareTrigger|function|static inline void TSI_StartSoftwareTrigger(TSI_Type *base)
DECL|TSI_V4_EXTCHRG_FILTER_BITS_CLEAR|macro|TSI_V4_EXTCHRG_FILTER_BITS_CLEAR
DECL|TSI_V4_EXTCHRG_FILTER_BITS_SHIFT|macro|TSI_V4_EXTCHRG_FILTER_BITS_SHIFT
DECL|TSI_V4_EXTCHRG_RESISTOR_BIT_CLEAR|macro|TSI_V4_EXTCHRG_RESISTOR_BIT_CLEAR
DECL|TSI_V4_EXTCHRG_RESISTOR_BIT_SHIFT|macro|TSI_V4_EXTCHRG_RESISTOR_BIT_SHIFT
DECL|_FSL_TSI_V4_H_|macro|_FSL_TSI_V4_H_
DECL|_tsi_analog_mode|enum|typedef enum _tsi_analog_mode
DECL|_tsi_calibration_data|struct|typedef struct _tsi_calibration_data
DECL|_tsi_config|struct|typedef struct _tsi_config
DECL|_tsi_electrode_osc_prescaler|enum|typedef enum _tsi_electrode_osc_prescaler
DECL|_tsi_external_osc_charge_current|enum|typedef enum _tsi_external_osc_charge_current
DECL|_tsi_filter_bits|enum|typedef enum _tsi_filter_bits
DECL|_tsi_interrupt_enable|enum|typedef enum _tsi_interrupt_enable
DECL|_tsi_n_consecutive_scans|enum|typedef enum _tsi_n_consecutive_scans
DECL|_tsi_osc_voltage_rails|enum|typedef enum _tsi_osc_voltage_rails
DECL|_tsi_reference_osc_charge_current|enum|typedef enum _tsi_reference_osc_charge_current
DECL|_tsi_series_resistance|enum|typedef enum _tsi_series_resistance
DECL|_tsi_status_flags|enum|typedef enum _tsi_status_flags
DECL|calibratedData|member|uint16_t calibratedData[FSL_FEATURE_TSI_CHANNEL_COUNT]; /*!< TSI calibration data storage buffer */
DECL|dvolt|member|tsi_osc_voltage_rails_t dvolt; /*!< Oscillator's voltage rails. */
DECL|extchrg|member|tsi_external_osc_charge_current_t extchrg; /*!< Electrode charge current */
DECL|filter|member|tsi_filter_bits_t filter; /*!< Noise mode filter bits */
DECL|kTSI_AnalogModeSel_AutoNoise|enumerator|kTSI_AnalogModeSel_AutoNoise = 12U /*!< Active TSI analog in automatic noise detection mode */
DECL|kTSI_AnalogModeSel_Capacitive|enumerator|kTSI_AnalogModeSel_Capacitive = 0U, /*!< Active TSI capacitive sensing mode */
DECL|kTSI_AnalogModeSel_NoiseFreqLim|enumerator|kTSI_AnalogModeSel_NoiseFreqLim = 8U, /*!< Single threshold noise detection mode with freq. limitation. */
DECL|kTSI_AnalogModeSel_NoiseNoFreqLim|enumerator|kTSI_AnalogModeSel_NoiseNoFreqLim = 4U, /*!< Single threshold noise detection mode with no freq. limitation. */
DECL|kTSI_ConsecutiveScansNumber_10time|enumerator|kTSI_ConsecutiveScansNumber_10time = 9U, /*!< 10 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_11time|enumerator|kTSI_ConsecutiveScansNumber_11time = 10U, /*!< 11 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_12time|enumerator|kTSI_ConsecutiveScansNumber_12time = 11U, /*!< 12 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_13time|enumerator|kTSI_ConsecutiveScansNumber_13time = 12U, /*!< 13 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_14time|enumerator|kTSI_ConsecutiveScansNumber_14time = 13U, /*!< 14 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_15time|enumerator|kTSI_ConsecutiveScansNumber_15time = 14U, /*!< 15 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_16time|enumerator|kTSI_ConsecutiveScansNumber_16time = 15U, /*!< 16 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_17time|enumerator|kTSI_ConsecutiveScansNumber_17time = 16U, /*!< 17 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_18time|enumerator|kTSI_ConsecutiveScansNumber_18time = 17U, /*!< 18 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_19time|enumerator|kTSI_ConsecutiveScansNumber_19time = 18U, /*!< 19 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_1time|enumerator|kTSI_ConsecutiveScansNumber_1time = 0U, /*!< Once per electrode */
DECL|kTSI_ConsecutiveScansNumber_20time|enumerator|kTSI_ConsecutiveScansNumber_20time = 19U, /*!< 20 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_21time|enumerator|kTSI_ConsecutiveScansNumber_21time = 20U, /*!< 21 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_22time|enumerator|kTSI_ConsecutiveScansNumber_22time = 21U, /*!< 22 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_23time|enumerator|kTSI_ConsecutiveScansNumber_23time = 22U, /*!< 23 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_24time|enumerator|kTSI_ConsecutiveScansNumber_24time = 23U, /*!< 24 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_25time|enumerator|kTSI_ConsecutiveScansNumber_25time = 24U, /*!< 25 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_26time|enumerator|kTSI_ConsecutiveScansNumber_26time = 25U, /*!< 26 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_27time|enumerator|kTSI_ConsecutiveScansNumber_27time = 26U, /*!< 27 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_28time|enumerator|kTSI_ConsecutiveScansNumber_28time = 27U, /*!< 28 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_29time|enumerator|kTSI_ConsecutiveScansNumber_29time = 28U, /*!< 29 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_2time|enumerator|kTSI_ConsecutiveScansNumber_2time = 1U, /*!< Twice per electrode */
DECL|kTSI_ConsecutiveScansNumber_30time|enumerator|kTSI_ConsecutiveScansNumber_30time = 29U, /*!< 30 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_31time|enumerator|kTSI_ConsecutiveScansNumber_31time = 30U, /*!< 31 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_32time|enumerator|kTSI_ConsecutiveScansNumber_32time = 31U /*!< 32 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_3time|enumerator|kTSI_ConsecutiveScansNumber_3time = 2U, /*!< 3 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_4time|enumerator|kTSI_ConsecutiveScansNumber_4time = 3U, /*!< 4 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_5time|enumerator|kTSI_ConsecutiveScansNumber_5time = 4U, /*!< 5 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_6time|enumerator|kTSI_ConsecutiveScansNumber_6time = 5U, /*!< 6 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_7time|enumerator|kTSI_ConsecutiveScansNumber_7time = 6U, /*!< 7 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_8time|enumerator|kTSI_ConsecutiveScansNumber_8time = 7U, /*!< 8 times consecutive scan */
DECL|kTSI_ConsecutiveScansNumber_9time|enumerator|kTSI_ConsecutiveScansNumber_9time = 8U, /*!< 9 times consecutive scan */
DECL|kTSI_ElecOscPrescaler_128div|enumerator|kTSI_ElecOscPrescaler_128div = 7U /*!< Electrode oscillator frequency divided by 128 */
DECL|kTSI_ElecOscPrescaler_16div|enumerator|kTSI_ElecOscPrescaler_16div = 4U, /*!< Electrode oscillator frequency divided by 16 */
DECL|kTSI_ElecOscPrescaler_1div|enumerator|kTSI_ElecOscPrescaler_1div = 0U, /*!< Electrode oscillator frequency divided by 1 */
DECL|kTSI_ElecOscPrescaler_2div|enumerator|kTSI_ElecOscPrescaler_2div = 1U, /*!< Electrode oscillator frequency divided by 2 */
DECL|kTSI_ElecOscPrescaler_32div|enumerator|kTSI_ElecOscPrescaler_32div = 5U, /*!< Electrode oscillator frequency divided by 32 */
DECL|kTSI_ElecOscPrescaler_4div|enumerator|kTSI_ElecOscPrescaler_4div = 2U, /*!< Electrode oscillator frequency divided by 4 */
DECL|kTSI_ElecOscPrescaler_64div|enumerator|kTSI_ElecOscPrescaler_64div = 6U, /*!< Electrode oscillator frequency divided by 64 */
DECL|kTSI_ElecOscPrescaler_8div|enumerator|kTSI_ElecOscPrescaler_8div = 3U, /*!< Electrode oscillator frequency divided by 8 */
DECL|kTSI_EndOfScanFlag|enumerator|kTSI_EndOfScanFlag = TSI_GENCS_EOSF_MASK, /*!< End-Of-Scan flag */
DECL|kTSI_EndOfScanInterruptEnable|enumerator|kTSI_EndOfScanInterruptEnable = 4U /*!< End-Of-Scan interrupt */
DECL|kTSI_ExtOscChargeCurrent_16uA|enumerator|kTSI_ExtOscChargeCurrent_16uA = 5U, /*!< External oscillator charge current is 16 µA */
DECL|kTSI_ExtOscChargeCurrent_1uA|enumerator|kTSI_ExtOscChargeCurrent_1uA = 1U, /*!< External oscillator charge current is 1 µA */
DECL|kTSI_ExtOscChargeCurrent_2uA|enumerator|kTSI_ExtOscChargeCurrent_2uA = 2U, /*!< External oscillator charge current is 2 µA */
DECL|kTSI_ExtOscChargeCurrent_32uA|enumerator|kTSI_ExtOscChargeCurrent_32uA = 6U, /*!< External oscillator charge current is 32 µA */
DECL|kTSI_ExtOscChargeCurrent_4uA|enumerator|kTSI_ExtOscChargeCurrent_4uA = 3U, /*!< External oscillator charge current is 4 µA */
DECL|kTSI_ExtOscChargeCurrent_500nA|enumerator|kTSI_ExtOscChargeCurrent_500nA = 0U, /*!< External oscillator charge current is 500 µA */
DECL|kTSI_ExtOscChargeCurrent_64uA|enumerator|kTSI_ExtOscChargeCurrent_64uA = 7U /*!< External oscillator charge current is 64 µA */
DECL|kTSI_ExtOscChargeCurrent_8uA|enumerator|kTSI_ExtOscChargeCurrent_8uA = 4U, /*!< External oscillator charge current is 8 µA */
DECL|kTSI_FilterBits_0|enumerator|kTSI_FilterBits_0 = 3U /*!< no filter bits,1 peak increments the cnt+1 */
DECL|kTSI_FilterBits_1|enumerator|kTSI_FilterBits_1 = 2U, /*!< 1 filter bits, 2 peaks increments the cnt+1 */
DECL|kTSI_FilterBits_2|enumerator|kTSI_FilterBits_2 = 1U, /*!< 2 filter bits, 4 peaks increments the cnt+1 */
DECL|kTSI_FilterBits_3|enumerator|kTSI_FilterBits_3 = 0U, /*!< 3 filter bits, 8 peaks increments the cnt+1 */
DECL|kTSI_GlobalInterruptEnable|enumerator|kTSI_GlobalInterruptEnable = 1U, /*!< TSI module global interrupt */
DECL|kTSI_OscVolRailsOption_0|enumerator|kTSI_OscVolRailsOption_0 = 0U, /*!< DVOLT value option 0, the value may differ on different platforms */
DECL|kTSI_OscVolRailsOption_1|enumerator|kTSI_OscVolRailsOption_1 = 1U, /*!< DVOLT value option 1, the value may differ on different platforms */
DECL|kTSI_OscVolRailsOption_2|enumerator|kTSI_OscVolRailsOption_2 = 2U, /*!< DVOLT value option 2, the value may differ on different platforms */
DECL|kTSI_OscVolRailsOption_3|enumerator|kTSI_OscVolRailsOption_3 = 3U /*!< DVOLT value option 3, the value may differ on different platforms */
DECL|kTSI_OutOfRangeFlag|enumerator|kTSI_OutOfRangeFlag = TSI_GENCS_OUTRGF_MASK /*!< Out-Of-Range flag */
DECL|kTSI_OutOfRangeInterruptEnable|enumerator|kTSI_OutOfRangeInterruptEnable = 2U, /*!< Out-Of-Range interrupt */
DECL|kTSI_RefOscChargeCurrent_16uA|enumerator|kTSI_RefOscChargeCurrent_16uA = 5U, /*!< Reference oscillator charge current is 16 µA */
DECL|kTSI_RefOscChargeCurrent_1uA|enumerator|kTSI_RefOscChargeCurrent_1uA = 1U, /*!< Reference oscillator charge current is 1 µA */
DECL|kTSI_RefOscChargeCurrent_2uA|enumerator|kTSI_RefOscChargeCurrent_2uA = 2U, /*!< Reference oscillator charge current is 2 µA */
DECL|kTSI_RefOscChargeCurrent_32uA|enumerator|kTSI_RefOscChargeCurrent_32uA = 6U, /*!< Reference oscillator charge current is 32 µA */
DECL|kTSI_RefOscChargeCurrent_4uA|enumerator|kTSI_RefOscChargeCurrent_4uA = 3U, /*!< Reference oscillator charge current is 4 µA */
DECL|kTSI_RefOscChargeCurrent_500nA|enumerator|kTSI_RefOscChargeCurrent_500nA = 0U, /*!< Reference oscillator charge current is 500 µA */
DECL|kTSI_RefOscChargeCurrent_64uA|enumerator|kTSI_RefOscChargeCurrent_64uA = 7U /*!< Reference oscillator charge current is 64 µA */
DECL|kTSI_RefOscChargeCurrent_8uA|enumerator|kTSI_RefOscChargeCurrent_8uA = 4U, /*!< Reference oscillator charge current is 8 µA */
DECL|kTSI_SeriesResistance_187k|enumerator|kTSI_SeriesResistance_187k = 1U /*!< Series Resistance is 18 7 kilo ohms */
DECL|kTSI_SeriesResistance_32k|enumerator|kTSI_SeriesResistance_32k = 0U, /*!< Series Resistance is 32 kilo ohms */
DECL|mode|member|tsi_analog_mode_t mode; /*!< TSI mode of operation. */
DECL|nscn|member|tsi_n_consecutive_scans_t nscn; /*!< Number of scans. */
DECL|prescaler|member|tsi_electrode_osc_prescaler_t prescaler; /*!< Prescaler */
DECL|refchrg|member|tsi_reference_osc_charge_current_t refchrg; /*!< Reference charge current */
DECL|resistor|member|tsi_series_resistor_t resistor; /*!< Series resistance value */
DECL|thresh|member|uint16_t thresh; /*!< High threshold. */
DECL|thresl|member|uint16_t thresl; /*!< Low threshold. */
DECL|tsi_analog_mode_t|typedef|} tsi_analog_mode_t;
DECL|tsi_calibration_data_t|typedef|} tsi_calibration_data_t;
DECL|tsi_config_t|typedef|} tsi_config_t;
DECL|tsi_electrode_osc_prescaler_t|typedef|} tsi_electrode_osc_prescaler_t;
DECL|tsi_external_osc_charge_current_t|typedef|} tsi_external_osc_charge_current_t;
DECL|tsi_filter_bits_t|typedef|} tsi_filter_bits_t;
DECL|tsi_interrupt_enable_t|typedef|} tsi_interrupt_enable_t;
DECL|tsi_n_consecutive_scans_t|typedef|} tsi_n_consecutive_scans_t;
DECL|tsi_osc_voltage_rails_t|typedef|} tsi_osc_voltage_rails_t;
DECL|tsi_reference_osc_charge_current_t|typedef|} tsi_reference_osc_charge_current_t;
DECL|tsi_series_resistor_t|typedef|} tsi_series_resistor_t;
DECL|tsi_status_flags_t|typedef|} tsi_status_flags_t;
