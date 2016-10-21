DECL|DAC_ALIGN_12B_L|macro|DAC_ALIGN_12B_L
DECL|DAC_ALIGN_12B_R|macro|DAC_ALIGN_12B_R
DECL|DAC_ALIGN_8B_R|macro|DAC_ALIGN_8B_R
DECL|DAC_CHANNEL_1|macro|DAC_CHANNEL_1
DECL|DAC_CHANNEL_2|macro|DAC_CHANNEL_2
DECL|DAC_ChannelConfTypeDef|typedef|}DAC_ChannelConfTypeDef;
DECL|DAC_DHR12R1_ALIGNMENT|macro|DAC_DHR12R1_ALIGNMENT
DECL|DAC_DHR12R2_ALIGNMENT|macro|DAC_DHR12R2_ALIGNMENT
DECL|DAC_DHR12RD_ALIGNMENT|macro|DAC_DHR12RD_ALIGNMENT
DECL|DAC_HandleTypeDef|typedef|}DAC_HandleTypeDef;
DECL|DAC_OUTPUTBUFFER_DISABLE|macro|DAC_OUTPUTBUFFER_DISABLE
DECL|DAC_OUTPUTBUFFER_ENABLE|macro|DAC_OUTPUTBUFFER_ENABLE
DECL|DAC_OutputBuffer|member|uint32_t DAC_OutputBuffer; /*!< Specifies whether the DAC channel output buffer is enabled or disabled.
DECL|DAC_Trigger|member|uint32_t DAC_Trigger; /*!< Specifies the external trigger for the selected DAC channel.
DECL|DMA_Handle1|member|DMA_HandleTypeDef *DMA_Handle1; /*!< Pointer DMA handler for channel 1 */
DECL|DMA_Handle2|member|DMA_HandleTypeDef *DMA_Handle2; /*!< Pointer DMA handler for channel 2 */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DAC Error code */
DECL|HAL_DAC_ERROR_DMAUNDERRUNCH1|macro|HAL_DAC_ERROR_DMAUNDERRUNCH1
DECL|HAL_DAC_ERROR_DMAUNDERRUNCH2|macro|HAL_DAC_ERROR_DMAUNDERRUNCH2
DECL|HAL_DAC_ERROR_DMA|macro|HAL_DAC_ERROR_DMA
DECL|HAL_DAC_ERROR_NONE|macro|HAL_DAC_ERROR_NONE
DECL|HAL_DAC_STATE_BUSY|enumerator|HAL_DAC_STATE_BUSY = 0x02, /*!< DAC internal processing is ongoing */
DECL|HAL_DAC_STATE_ERROR|enumerator|HAL_DAC_STATE_ERROR = 0x04 /*!< DAC error state */
DECL|HAL_DAC_STATE_READY|enumerator|HAL_DAC_STATE_READY = 0x01, /*!< DAC initialized and ready for use */
DECL|HAL_DAC_STATE_RESET|enumerator|HAL_DAC_STATE_RESET = 0x00, /*!< DAC not yet initialized or disabled */
DECL|HAL_DAC_STATE_TIMEOUT|enumerator|HAL_DAC_STATE_TIMEOUT = 0x03, /*!< DAC timeout state */
DECL|HAL_DAC_StateTypeDef|typedef|}HAL_DAC_StateTypeDef;
DECL|IS_DAC_ALIGN|macro|IS_DAC_ALIGN
DECL|IS_DAC_CHANNEL|macro|IS_DAC_CHANNEL
DECL|IS_DAC_DATA|macro|IS_DAC_DATA
DECL|IS_DAC_OUTPUT_BUFFER_STATE|macro|IS_DAC_OUTPUT_BUFFER_STATE
DECL|Instance|member|DAC_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DAC locking object */
DECL|State|member|__IO HAL_DAC_StateTypeDef State; /*!< DAC communication state */
DECL|__HAL_DAC_DISABLE|macro|__HAL_DAC_DISABLE
DECL|__HAL_DAC_ENABLE|macro|__HAL_DAC_ENABLE
DECL|__HAL_DAC_RESET_HANDLE_STATE|macro|__HAL_DAC_RESET_HANDLE_STATE
DECL|__STM32F1xx_HAL_DAC_H|macro|__STM32F1xx_HAL_DAC_H
