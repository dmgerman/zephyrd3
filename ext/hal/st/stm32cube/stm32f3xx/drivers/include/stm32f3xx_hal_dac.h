DECL|DAC_ALIGN_12B_L|macro|DAC_ALIGN_12B_L
DECL|DAC_ALIGN_12B_R|macro|DAC_ALIGN_12B_R
DECL|DAC_ALIGN_8B_R|macro|DAC_ALIGN_8B_R
DECL|DAC_ChannelConfTypeDef|typedef|}DAC_ChannelConfTypeDef;
DECL|DAC_DHR12R1_ALIGNMENT|macro|DAC_DHR12R1_ALIGNMENT
DECL|DAC_DHR12R2_ALIGNMENT|macro|DAC_DHR12R2_ALIGNMENT
DECL|DAC_DHR12RD_ALIGNMENT|macro|DAC_DHR12RD_ALIGNMENT
DECL|DAC_FLAG_DMAUDR1|macro|DAC_FLAG_DMAUDR1
DECL|DAC_FLAG_DMAUDR2|macro|DAC_FLAG_DMAUDR2
DECL|DAC_HandleTypeDef|typedef|}DAC_HandleTypeDef;
DECL|DAC_IT_DMAUDR1|macro|DAC_IT_DMAUDR1
DECL|DAC_IT_DMAUDR2|macro|DAC_IT_DMAUDR2
DECL|DAC_LFSRUNMASK_BIT0|macro|DAC_LFSRUNMASK_BIT0
DECL|DAC_LFSRUNMASK_BITS10_0|macro|DAC_LFSRUNMASK_BITS10_0
DECL|DAC_LFSRUNMASK_BITS11_0|macro|DAC_LFSRUNMASK_BITS11_0
DECL|DAC_LFSRUNMASK_BITS1_0|macro|DAC_LFSRUNMASK_BITS1_0
DECL|DAC_LFSRUNMASK_BITS2_0|macro|DAC_LFSRUNMASK_BITS2_0
DECL|DAC_LFSRUNMASK_BITS3_0|macro|DAC_LFSRUNMASK_BITS3_0
DECL|DAC_LFSRUNMASK_BITS4_0|macro|DAC_LFSRUNMASK_BITS4_0
DECL|DAC_LFSRUNMASK_BITS5_0|macro|DAC_LFSRUNMASK_BITS5_0
DECL|DAC_LFSRUNMASK_BITS6_0|macro|DAC_LFSRUNMASK_BITS6_0
DECL|DAC_LFSRUNMASK_BITS7_0|macro|DAC_LFSRUNMASK_BITS7_0
DECL|DAC_LFSRUNMASK_BITS8_0|macro|DAC_LFSRUNMASK_BITS8_0
DECL|DAC_LFSRUNMASK_BITS9_0|macro|DAC_LFSRUNMASK_BITS9_0
DECL|DAC_OUTPUTBUFFER_DISABLE|macro|DAC_OUTPUTBUFFER_DISABLE
DECL|DAC_OUTPUTBUFFER_ENABLE|macro|DAC_OUTPUTBUFFER_ENABLE
DECL|DAC_OUTPUTSWITCH_DISABLE|macro|DAC_OUTPUTSWITCH_DISABLE
DECL|DAC_OUTPUTSWITCH_ENABLE|macro|DAC_OUTPUTSWITCH_ENABLE
DECL|DAC_OutputBuffer|member|uint32_t DAC_OutputBuffer; /*!< Specifies whether the DAC channel output buffer is enabled or disabled.
DECL|DAC_OutputSwitch|member|uint32_t DAC_OutputSwitch; /*!< Specifies whether the DAC channel output switch is enabled or disabled.
DECL|DAC_TRIANGLEAMPLITUDE_1023|macro|DAC_TRIANGLEAMPLITUDE_1023
DECL|DAC_TRIANGLEAMPLITUDE_127|macro|DAC_TRIANGLEAMPLITUDE_127
DECL|DAC_TRIANGLEAMPLITUDE_15|macro|DAC_TRIANGLEAMPLITUDE_15
DECL|DAC_TRIANGLEAMPLITUDE_1|macro|DAC_TRIANGLEAMPLITUDE_1
DECL|DAC_TRIANGLEAMPLITUDE_2047|macro|DAC_TRIANGLEAMPLITUDE_2047
DECL|DAC_TRIANGLEAMPLITUDE_255|macro|DAC_TRIANGLEAMPLITUDE_255
DECL|DAC_TRIANGLEAMPLITUDE_31|macro|DAC_TRIANGLEAMPLITUDE_31
DECL|DAC_TRIANGLEAMPLITUDE_3|macro|DAC_TRIANGLEAMPLITUDE_3
DECL|DAC_TRIANGLEAMPLITUDE_4095|macro|DAC_TRIANGLEAMPLITUDE_4095
DECL|DAC_TRIANGLEAMPLITUDE_511|macro|DAC_TRIANGLEAMPLITUDE_511
DECL|DAC_TRIANGLEAMPLITUDE_63|macro|DAC_TRIANGLEAMPLITUDE_63
DECL|DAC_TRIANGLEAMPLITUDE_7|macro|DAC_TRIANGLEAMPLITUDE_7
DECL|DAC_Trigger|member|uint32_t DAC_Trigger; /*!< Specifies the external trigger for the selected DAC channel.
DECL|DMA_Handle1|member|DMA_HandleTypeDef *DMA_Handle1; /*!< Pointer DMA handler for channel 1U */
DECL|DMA_Handle2|member|DMA_HandleTypeDef *DMA_Handle2; /*!< Pointer DMA handler for channel 2U */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DAC Error code */
DECL|HAL_DAC_ERROR_DMAUNDERRUNCH1|macro|HAL_DAC_ERROR_DMAUNDERRUNCH1
DECL|HAL_DAC_ERROR_DMAUNDERRUNCH2|macro|HAL_DAC_ERROR_DMAUNDERRUNCH2
DECL|HAL_DAC_ERROR_DMA|macro|HAL_DAC_ERROR_DMA
DECL|HAL_DAC_ERROR_NONE|macro|HAL_DAC_ERROR_NONE
DECL|HAL_DAC_STATE_BUSY|enumerator|HAL_DAC_STATE_BUSY = 0x02U, /*!< DAC internal processing is ongoing */
DECL|HAL_DAC_STATE_ERROR|enumerator|HAL_DAC_STATE_ERROR = 0x04 /*!< DAC error state */
DECL|HAL_DAC_STATE_READY|enumerator|HAL_DAC_STATE_READY = 0x01U, /*!< DAC initialized and ready for use */
DECL|HAL_DAC_STATE_RESET|enumerator|HAL_DAC_STATE_RESET = 0x00U, /*!< DAC not yet initialized or disabled */
DECL|HAL_DAC_STATE_TIMEOUT|enumerator|HAL_DAC_STATE_TIMEOUT = 0x03U, /*!< DAC timeout state */
DECL|HAL_DAC_StateTypeDef|typedef|}HAL_DAC_StateTypeDef;
DECL|IS_DAC_ALIGN|macro|IS_DAC_ALIGN
DECL|IS_DAC_DATA|macro|IS_DAC_DATA
DECL|IS_DAC_LFSR_UNMASK_TRIANGLE_AMPLITUDE|macro|IS_DAC_LFSR_UNMASK_TRIANGLE_AMPLITUDE
DECL|IS_DAC_OUTPUT_BUFFER_STATE|macro|IS_DAC_OUTPUT_BUFFER_STATE
DECL|IS_DAC_OUTPUT_SWITCH_STATE|macro|IS_DAC_OUTPUT_SWITCH_STATE
DECL|Instance|member|DAC_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DAC locking object */
DECL|State|member|__IO HAL_DAC_StateTypeDef State; /*!< DAC communication state */
DECL|__DAC_HandleTypeDef|struct|typedef struct __DAC_HandleTypeDef
DECL|__HAL_DAC_CLEAR_FLAG|macro|__HAL_DAC_CLEAR_FLAG
DECL|__HAL_DAC_DISABLE_IT|macro|__HAL_DAC_DISABLE_IT
DECL|__HAL_DAC_DISABLE|macro|__HAL_DAC_DISABLE
DECL|__HAL_DAC_ENABLE_IT|macro|__HAL_DAC_ENABLE_IT
DECL|__HAL_DAC_ENABLE|macro|__HAL_DAC_ENABLE
DECL|__HAL_DAC_GET_FLAG|macro|__HAL_DAC_GET_FLAG
DECL|__HAL_DAC_GET_IT_SOURCE|macro|__HAL_DAC_GET_IT_SOURCE
DECL|__HAL_DAC_RESET_HANDLE_STATE|macro|__HAL_DAC_RESET_HANDLE_STATE
DECL|__STM32F3xx_HAL_DAC_H|macro|__STM32F3xx_HAL_DAC_H
