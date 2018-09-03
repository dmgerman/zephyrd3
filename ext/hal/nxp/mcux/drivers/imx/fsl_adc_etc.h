DECL|ADCChannelSelect|member|uint32_t ADCChannelSelect; /* Select ADC sample channel. */
DECL|ADCHCRegisterSelect|member|uint32_t ADCHCRegisterSelect; /* Select relevant ADC_HCx register to trigger. 1U : HC0, 2U: HC1, 4U: HC2 ... */
DECL|ADC_ETC_ClearDMAStatusFlags|function|static inline void ADC_ETC_ClearDMAStatusFlags(ADC_ETC_Type *base, uint32_t mask)
DECL|ADC_ETC_DMA_CTRL_TRGn_REQ_MASK|macro|ADC_ETC_DMA_CTRL_TRGn_REQ_MASK
DECL|ADC_ETC_DisableDMA|function|static inline void ADC_ETC_DisableDMA(ADC_ETC_Type *base, uint32_t triggerGroup)
DECL|ADC_ETC_DoSoftwareReset|function|static inline void ADC_ETC_DoSoftwareReset(ADC_ETC_Type *base, bool enable)
DECL|ADC_ETC_DoSoftwareTrigger|function|static inline void ADC_ETC_DoSoftwareTrigger(ADC_ETC_Type *base, uint32_t triggerGroup)
DECL|ADC_ETC_EnableDMA|function|static inline void ADC_ETC_EnableDMA(ADC_ETC_Type *base, uint32_t triggerGroup)
DECL|ADC_ETC_GetDMAStatusFlags|function|static inline uint32_t ADC_ETC_GetDMAStatusFlags(ADC_ETC_Type *base)
DECL|FSL_ADC_ETC_DRIVER_VERSION|macro|FSL_ADC_ETC_DRIVER_VERSION
DECL|InterruptEnable|member|adc_etc_interrupt_enable_t InterruptEnable; /* Enable/disable Interrupt. */
DECL|TSC0triggerPriority|member|uint32_t TSC0triggerPriority; /* External TSC0 trigger priority, 7 is highest, 0 is lowest. */
DECL|TSC1triggerPriority|member|uint32_t TSC1triggerPriority; /* External TSC1 trigger priority, 7 is highest, 0 is lowest. */
DECL|XBARtriggerMask|member|uint32_t XBARtriggerMask; /* Enable the corresponding trigger source. Available range is trigger0:0x01 to
DECL|_FSL_ADC_ETC_H_|macro|_FSL_ADC_ETC_H_
DECL|_adc_etc_config|struct|typedef struct _adc_etc_config
DECL|_adc_etc_dma_mode_selection|enum|typedef enum _adc_etc_dma_mode_selection
DECL|_adc_etc_external_trigger_source|enum|typedef enum _adc_etc_external_trigger_source
DECL|_adc_etc_interrupt_enable|enum|typedef enum _adc_etc_interrupt_enable
DECL|_adc_etc_status_flag_mask|enum|enum _adc_etc_status_flag_mask
DECL|_adc_etc_trigger_chain_config|struct|typedef struct _adc_etc_trigger_chain_config
DECL|_adc_etc_trigger_config|struct|typedef struct _adc_etc_trigger_config
DECL|adc_etc_config_t|typedef|} adc_etc_config_t;
DECL|adc_etc_dma_mode_selection_t|typedef|} adc_etc_dma_mode_selection_t;
DECL|adc_etc_external_trigger_source_t|typedef|} adc_etc_external_trigger_source_t;
DECL|adc_etc_interrupt_enable_t|typedef|} adc_etc_interrupt_enable_t;
DECL|adc_etc_trigger_chain_config_t|typedef|} adc_etc_trigger_chain_config_t;
DECL|adc_etc_trigger_config_t|typedef|} adc_etc_trigger_config_t;
DECL|clockPreDivider|member|uint32_t clockPreDivider; /* Pre-divider for trig delay and interval. Available range is 0-255.
DECL|dmaMode|member|adc_etc_dma_mode_selection_t dmaMode; /* Select the ADC_ETC DMA mode. */
DECL|enableB2BMode|member|bool enableB2BMode; /* Enable ADC_ETC BackToBack mode. when not enabled B2B mode,
DECL|enableSWTriggerMode|member|bool enableSWTriggerMode; /* Enable the sofware trigger mode. */
DECL|enableSyncMode|member|bool enableSyncMode; /* Enable the sync Mode, In SyncMode ADC1 and ADC2 are controlled by the same trigger source.
DECL|enableTSC0Trigger|member|bool enableTSC0Trigger; /* Enable external TSC0 trigger. It is valid when enableTSCBypass = false. */
DECL|enableTSC1Trigger|member|bool enableTSC1Trigger; /* Enable external TSC1 trigger. It is valid when enableTSCBypass = false.*/
DECL|enableTSCBypass|member|bool enableTSCBypass; /* If bypass TSC, TSC would trigger ADC directly.
DECL|initialDelay|member|uint32_t initialDelay; /* Set trigger initial delay. */
DECL|kADC_ETC_Done0InterruptEnable|enumerator|kADC_ETC_Done0InterruptEnable = 1U, /* Enable the DONE0 interrupt when ADC conversions complete. */
DECL|kADC_ETC_Done0StatusFlagMask|enumerator|kADC_ETC_Done0StatusFlagMask = 1U,
DECL|kADC_ETC_Done1InterruptEnable|enumerator|kADC_ETC_Done1InterruptEnable = 2U, /* Enable the DONE1 interrupt when ADC conversions complete. */
DECL|kADC_ETC_Done1StatusFlagMask|enumerator|kADC_ETC_Done1StatusFlagMask = 2U,
DECL|kADC_ETC_Done2InterruptEnable|enumerator|kADC_ETC_Done2InterruptEnable = 3U, /* Enable the DONE2 interrupt when ADC conversions complete. */
DECL|kADC_ETC_Done2StatusFlagMask|enumerator|kADC_ETC_Done2StatusFlagMask = 4U,
DECL|kADC_ETC_ErrorStatusFlagMask|enumerator|kADC_ETC_ErrorStatusFlagMask = 8U,
DECL|kADC_ETC_InterruptDisable|enumerator|kADC_ETC_InterruptDisable = 0U, /* Disable the ADC_ETC interrupt. */
DECL|kADC_ETC_TSC0TriggerSource|enumerator|kADC_ETC_TSC0TriggerSource = 8U, /* External TSC trigger0 source. */
DECL|kADC_ETC_TSC1TriggerSource|enumerator|kADC_ETC_TSC1TriggerSource = 9U, /* External TSC trigger1 source. */
DECL|kADC_ETC_Trg0TriggerSource|enumerator|kADC_ETC_Trg0TriggerSource = 0U, /* External XBAR trigger0 source. */
DECL|kADC_ETC_Trg1TriggerSource|enumerator|kADC_ETC_Trg1TriggerSource = 1U, /* External XBAR trigger1 source. */
DECL|kADC_ETC_Trg2TriggerSource|enumerator|kADC_ETC_Trg2TriggerSource = 2U, /* External XBAR trigger2 source. */
DECL|kADC_ETC_Trg3TriggerSource|enumerator|kADC_ETC_Trg3TriggerSource = 3U, /* External XBAR trigger3 source. */
DECL|kADC_ETC_Trg4TriggerSource|enumerator|kADC_ETC_Trg4TriggerSource = 4U, /* External XBAR trigger4 source. */
DECL|kADC_ETC_Trg5TriggerSource|enumerator|kADC_ETC_Trg5TriggerSource = 5U, /* External XBAR trigger5 source. */
DECL|kADC_ETC_Trg6TriggerSource|enumerator|kADC_ETC_Trg6TriggerSource = 6U, /* External XBAR trigger6 source. */
DECL|kADC_ETC_Trg7TriggerSource|enumerator|kADC_ETC_Trg7TriggerSource = 7U, /* External XBAR trigger7 source. */
DECL|kADC_ETC_TrigDMAWithLatchedSignal|enumerator|kADC_ETC_TrigDMAWithLatchedSignal =
DECL|kADC_ETC_TrigDMAWithPulsedSignal|enumerator|kADC_ETC_TrigDMAWithPulsedSignal = 1U, /* Trig DMA_REQ with pulsed signal, REQ will be cleared by ACK only. */
DECL|sampleIntervalDelay|member|uint32_t sampleIntervalDelay; /* Set sampling interval delay. */
DECL|triggerChainLength|member|uint32_t triggerChainLength; /* TRIG chain length to the ADC. 0: Trig length is 1. ... 7: Trig length is 8. */
DECL|triggerPriority|member|uint32_t triggerPriority; /* External trigger priority, 7 is highest, 0 is lowest. */
