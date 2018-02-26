DECL|FSL_PDB_DRIVER_VERSION|macro|FSL_PDB_DRIVER_VERSION
DECL|PDB_ClearADCPreTriggerStatusFlags|function|static inline void PDB_ClearADCPreTriggerStatusFlags(PDB_Type *base, uint32_t channel, uint32_t mask)
DECL|PDB_ClearStatusFlags|function|static inline void PDB_ClearStatusFlags(PDB_Type *base, uint32_t mask)
DECL|PDB_DisableInterrupts|function|static inline void PDB_DisableInterrupts(PDB_Type *base, uint32_t mask)
DECL|PDB_DoLoadValues|function|static inline void PDB_DoLoadValues(PDB_Type *base)
DECL|PDB_DoSoftwareTrigger|function|static inline void PDB_DoSoftwareTrigger(PDB_Type *base)
DECL|PDB_EnableDMA|function|static inline void PDB_EnableDMA(PDB_Type *base, bool enable)
DECL|PDB_EnableInterrupts|function|static inline void PDB_EnableInterrupts(PDB_Type *base, uint32_t mask)
DECL|PDB_EnablePulseOutTrigger|function|static inline void PDB_EnablePulseOutTrigger(PDB_Type *base, uint32_t channelMask, bool enable)
DECL|PDB_Enable|function|static inline void PDB_Enable(PDB_Type *base, bool enable)
DECL|PDB_GetADCPreTriggerStatusFlags|function|static inline uint32_t PDB_GetADCPreTriggerStatusFlags(PDB_Type *base, uint32_t channel)
DECL|PDB_GetCounterValue|function|static inline uint32_t PDB_GetCounterValue(PDB_Type *base)
DECL|PDB_GetStatusFlags|function|static inline uint32_t PDB_GetStatusFlags(PDB_Type *base)
DECL|PDB_SetADCPreTriggerConfig|function|static inline void PDB_SetADCPreTriggerConfig(PDB_Type *base, uint32_t channel, pdb_adc_pretrigger_config_t *config)
DECL|PDB_SetADCPreTriggerDelayValue|function|static inline void PDB_SetADCPreTriggerDelayValue(PDB_Type *base, uint32_t channel, uint32_t preChannel, uint32_t value)
DECL|PDB_SetCounterDelayValue|function|static inline void PDB_SetCounterDelayValue(PDB_Type *base, uint32_t value)
DECL|PDB_SetDACTriggerIntervalValue|function|static inline void PDB_SetDACTriggerIntervalValue(PDB_Type *base, uint32_t channel, uint32_t value)
DECL|PDB_SetModulusValue|function|static inline void PDB_SetModulusValue(PDB_Type *base, uint32_t value)
DECL|PDB_SetPulseOutTriggerDelayValue|function|static inline void PDB_SetPulseOutTriggerDelayValue(PDB_Type *base, uint32_t channel, uint32_t value1, uint32_t value2)
DECL|_FSL_PDB_H_|macro|_FSL_PDB_H_
DECL|_pdb_adc_pretrigger_config|struct|typedef struct _pdb_adc_pretrigger_config
DECL|_pdb_adc_pretrigger_flags|enum|enum _pdb_adc_pretrigger_flags
DECL|_pdb_config|struct|typedef struct _pdb_config
DECL|_pdb_dac_trigger_config|struct|typedef struct _pdb_dac_trigger_config
DECL|_pdb_divider_multiplication_factor|enum|typedef enum _pdb_divider_multiplication_factor
DECL|_pdb_interrupt_enable|enum|enum _pdb_interrupt_enable
DECL|_pdb_load_value_mode|enum|typedef enum _pdb_load_value_mode
DECL|_pdb_prescaler_divider|enum|typedef enum _pdb_prescaler_divider
DECL|_pdb_status_flags|enum|enum _pdb_status_flags
DECL|_pdb_trigger_input_source|enum|typedef enum _pdb_trigger_input_source
DECL|dividerMultiplicationFactor|member|pdb_divider_multiplication_factor_t dividerMultiplicationFactor; /*!< Multiplication factor select for prescaler. */
DECL|enableBackToBackOperationMask|member|uint32_t enableBackToBackOperationMask; /*!< PDB Channel pre-trigger Back-to-Back Operation Enable.
DECL|enableContinuousMode|member|bool enableContinuousMode; /*!< Enable the PDB operation in Continuous mode.*/
DECL|enableExternalTriggerInput|member|bool enableExternalTriggerInput; /*!< Enables the external trigger for DAC interval counter. */
DECL|enableIntervalTrigger|member|bool enableIntervalTrigger; /*!< Enables the DAC interval trigger. */
DECL|enableOutputMask|member|uint32_t enableOutputMask; /*!< PDB Channel Pre-trigger Output Select.
DECL|enablePreTriggerMask|member|uint32_t enablePreTriggerMask; /*!< PDB Channel Pre-trigger Enable. */
DECL|kPDB_ADCPreTriggerChannel0ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel0ErrorFlag = PDB_S_ERR(1U << 0), /*!< Pre-trigger 0 Error. */
DECL|kPDB_ADCPreTriggerChannel0Flag|enumerator|kPDB_ADCPreTriggerChannel0Flag = PDB_S_CF(1U << 0), /*!< Pre-trigger 0 flag. */
DECL|kPDB_ADCPreTriggerChannel1ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel1ErrorFlag = PDB_S_ERR(1U << 1), /*!< Pre-trigger 1 Error. */
DECL|kPDB_ADCPreTriggerChannel1Flag|enumerator|kPDB_ADCPreTriggerChannel1Flag = PDB_S_CF(1U << 1), /*!< Pre-trigger 1 flag. */
DECL|kPDB_ADCPreTriggerChannel2ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel2ErrorFlag = PDB_S_ERR(1U << 2), /*!< Pre-trigger 2 Error. */
DECL|kPDB_ADCPreTriggerChannel2Flag|enumerator|kPDB_ADCPreTriggerChannel2Flag = PDB_S_CF(1U << 2), /*!< Pre-trigger 2 flag. */
DECL|kPDB_ADCPreTriggerChannel3ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel3ErrorFlag = PDB_S_ERR(1U << 3), /*!< Pre-trigger 3 Error. */
DECL|kPDB_ADCPreTriggerChannel3Flag|enumerator|kPDB_ADCPreTriggerChannel3Flag = PDB_S_CF(1U << 3), /*!< Pre-trigger 3 flag. */
DECL|kPDB_ADCPreTriggerChannel4ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel4ErrorFlag = PDB_S_ERR(1U << 4), /*!< Pre-trigger 4 Error. */
DECL|kPDB_ADCPreTriggerChannel4Flag|enumerator|kPDB_ADCPreTriggerChannel4Flag = PDB_S_CF(1U << 4), /*!< Pre-trigger 4 flag. */
DECL|kPDB_ADCPreTriggerChannel5ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel5ErrorFlag = PDB_S_ERR(1U << 5), /*!< Pre-trigger 5 Error. */
DECL|kPDB_ADCPreTriggerChannel5Flag|enumerator|kPDB_ADCPreTriggerChannel5Flag = PDB_S_CF(1U << 5), /*!< Pre-trigger 5 flag. */
DECL|kPDB_ADCPreTriggerChannel6ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel6ErrorFlag = PDB_S_ERR(1U << 6), /*!< Pre-trigger 6 Error. */
DECL|kPDB_ADCPreTriggerChannel6Flag|enumerator|kPDB_ADCPreTriggerChannel6Flag = PDB_S_CF(1U << 6), /*!< Pre-trigger 6 flag. */
DECL|kPDB_ADCPreTriggerChannel7ErrorFlag|enumerator|kPDB_ADCPreTriggerChannel7ErrorFlag = PDB_S_ERR(1U << 7), /*!< Pre-trigger 7 Error. */
DECL|kPDB_ADCPreTriggerChannel7Flag|enumerator|kPDB_ADCPreTriggerChannel7Flag = PDB_S_CF(1U << 7), /*!< Pre-trigger 7 flag. */
DECL|kPDB_DelayEventFlag|enumerator|kPDB_DelayEventFlag = PDB_SC_PDBIF_MASK, /*!< PDB timer delay event flag. */
DECL|kPDB_DelayInterruptEnable|enumerator|kPDB_DelayInterruptEnable = PDB_SC_PDBIE_MASK, /*!< PDB delay interrupt enable. */
DECL|kPDB_DividerMultiplicationFactor10|enumerator|kPDB_DividerMultiplicationFactor10 = 1U, /*!< Multiplication factor is 10. */
DECL|kPDB_DividerMultiplicationFactor1|enumerator|kPDB_DividerMultiplicationFactor1 = 0U, /*!< Multiplication factor is 1. */
DECL|kPDB_DividerMultiplicationFactor20|enumerator|kPDB_DividerMultiplicationFactor20 = 2U, /*!< Multiplication factor is 20. */
DECL|kPDB_DividerMultiplicationFactor40|enumerator|kPDB_DividerMultiplicationFactor40 = 3U, /*!< Multiplication factor is 40. */
DECL|kPDB_LoadOKFlag|enumerator|kPDB_LoadOKFlag = PDB_SC_LDOK_MASK, /*!< This flag is automatically cleared when the values in buffers are
DECL|kPDB_LoadValueImmediately|enumerator|kPDB_LoadValueImmediately = 0U, /*!< Load immediately after 1 is written to LDOK. */
DECL|kPDB_LoadValueOnCounterOverflowOrTriggerInput|enumerator|kPDB_LoadValueOnCounterOverflowOrTriggerInput = 3U, /*!< Load either when the PDB counter overflows or a trigger
DECL|kPDB_LoadValueOnCounterOverflow|enumerator|kPDB_LoadValueOnCounterOverflow = 1U, /*!< Load when the PDB counter overflows (reaches the MOD
DECL|kPDB_LoadValueOnTriggerInput|enumerator|kPDB_LoadValueOnTriggerInput = 2U, /*!< Load a trigger input event is detected. */
DECL|kPDB_PrescalerDivider128|enumerator|kPDB_PrescalerDivider128 = 7U, /*!< Divider x128. */
DECL|kPDB_PrescalerDivider16|enumerator|kPDB_PrescalerDivider16 = 4U, /*!< Divider x16. */
DECL|kPDB_PrescalerDivider1|enumerator|kPDB_PrescalerDivider1 = 0U, /*!< Divider x1. */
DECL|kPDB_PrescalerDivider2|enumerator|kPDB_PrescalerDivider2 = 1U, /*!< Divider x2. */
DECL|kPDB_PrescalerDivider32|enumerator|kPDB_PrescalerDivider32 = 5U, /*!< Divider x32. */
DECL|kPDB_PrescalerDivider4|enumerator|kPDB_PrescalerDivider4 = 2U, /*!< Divider x4. */
DECL|kPDB_PrescalerDivider64|enumerator|kPDB_PrescalerDivider64 = 6U, /*!< Divider x64. */
DECL|kPDB_PrescalerDivider8|enumerator|kPDB_PrescalerDivider8 = 3U, /*!< Divider x8. */
DECL|kPDB_SequenceErrorInterruptEnable|enumerator|kPDB_SequenceErrorInterruptEnable = PDB_SC_PDBEIE_MASK, /*!< PDB sequence error interrupt enable. */
DECL|kPDB_TriggerInput0|enumerator|kPDB_TriggerInput0 = 0U, /*!< Trigger-In 0. */
DECL|kPDB_TriggerInput10|enumerator|kPDB_TriggerInput10 = 10U, /*!< Trigger-In 10. */
DECL|kPDB_TriggerInput11|enumerator|kPDB_TriggerInput11 = 11U, /*!< Trigger-In 11. */
DECL|kPDB_TriggerInput12|enumerator|kPDB_TriggerInput12 = 12U, /*!< Trigger-In 12. */
DECL|kPDB_TriggerInput13|enumerator|kPDB_TriggerInput13 = 13U, /*!< Trigger-In 13. */
DECL|kPDB_TriggerInput14|enumerator|kPDB_TriggerInput14 = 14U, /*!< Trigger-In 14. */
DECL|kPDB_TriggerInput1|enumerator|kPDB_TriggerInput1 = 1U, /*!< Trigger-In 1. */
DECL|kPDB_TriggerInput2|enumerator|kPDB_TriggerInput2 = 2U, /*!< Trigger-In 2. */
DECL|kPDB_TriggerInput3|enumerator|kPDB_TriggerInput3 = 3U, /*!< Trigger-In 3. */
DECL|kPDB_TriggerInput4|enumerator|kPDB_TriggerInput4 = 4U, /*!< Trigger-In 4. */
DECL|kPDB_TriggerInput5|enumerator|kPDB_TriggerInput5 = 5U, /*!< Trigger-In 5. */
DECL|kPDB_TriggerInput6|enumerator|kPDB_TriggerInput6 = 6U, /*!< Trigger-In 6. */
DECL|kPDB_TriggerInput7|enumerator|kPDB_TriggerInput7 = 7U, /*!< Trigger-In 7. */
DECL|kPDB_TriggerInput8|enumerator|kPDB_TriggerInput8 = 8U, /*!< Trigger-In 8. */
DECL|kPDB_TriggerInput9|enumerator|kPDB_TriggerInput9 = 9U, /*!< Trigger-In 9. */
DECL|kPDB_TriggerSoftware|enumerator|kPDB_TriggerSoftware = 15U, /*!< Trigger-In 15, software trigger. */
DECL|loadValueMode|member|pdb_load_value_mode_t loadValueMode; /*!< Select the load value mode. */
DECL|pdb_adc_pretrigger_config_t|typedef|} pdb_adc_pretrigger_config_t;
DECL|pdb_config_t|typedef|} pdb_config_t;
DECL|pdb_dac_trigger_config_t|typedef|} pdb_dac_trigger_config_t;
DECL|pdb_divider_multiplication_factor_t|typedef|} pdb_divider_multiplication_factor_t;
DECL|pdb_load_value_mode_t|typedef|} pdb_load_value_mode_t;
DECL|pdb_prescaler_divider_t|typedef|} pdb_prescaler_divider_t;
DECL|pdb_trigger_input_source_t|typedef|} pdb_trigger_input_source_t;
DECL|prescalerDivider|member|pdb_prescaler_divider_t prescalerDivider; /*!< Select the prescaler divider. */
DECL|triggerInputSource|member|pdb_trigger_input_source_t triggerInputSource; /*!< Select the trigger input source. */
