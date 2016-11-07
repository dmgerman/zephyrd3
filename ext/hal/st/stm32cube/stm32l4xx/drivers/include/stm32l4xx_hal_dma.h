DECL|ChannelIndex|member|uint32_t ChannelIndex; /*!< DMA Channel Index */
DECL|DMA_CIRCULAR|macro|DMA_CIRCULAR
DECL|DMA_FLAG_GL1|macro|DMA_FLAG_GL1
DECL|DMA_FLAG_GL2|macro|DMA_FLAG_GL2
DECL|DMA_FLAG_GL3|macro|DMA_FLAG_GL3
DECL|DMA_FLAG_GL4|macro|DMA_FLAG_GL4
DECL|DMA_FLAG_GL5|macro|DMA_FLAG_GL5
DECL|DMA_FLAG_GL6|macro|DMA_FLAG_GL6
DECL|DMA_FLAG_GL7|macro|DMA_FLAG_GL7
DECL|DMA_FLAG_HT1|macro|DMA_FLAG_HT1
DECL|DMA_FLAG_HT2|macro|DMA_FLAG_HT2
DECL|DMA_FLAG_HT3|macro|DMA_FLAG_HT3
DECL|DMA_FLAG_HT4|macro|DMA_FLAG_HT4
DECL|DMA_FLAG_HT5|macro|DMA_FLAG_HT5
DECL|DMA_FLAG_HT6|macro|DMA_FLAG_HT6
DECL|DMA_FLAG_HT7|macro|DMA_FLAG_HT7
DECL|DMA_FLAG_TC1|macro|DMA_FLAG_TC1
DECL|DMA_FLAG_TC2|macro|DMA_FLAG_TC2
DECL|DMA_FLAG_TC3|macro|DMA_FLAG_TC3
DECL|DMA_FLAG_TC4|macro|DMA_FLAG_TC4
DECL|DMA_FLAG_TC5|macro|DMA_FLAG_TC5
DECL|DMA_FLAG_TC6|macro|DMA_FLAG_TC6
DECL|DMA_FLAG_TC7|macro|DMA_FLAG_TC7
DECL|DMA_FLAG_TE1|macro|DMA_FLAG_TE1
DECL|DMA_FLAG_TE2|macro|DMA_FLAG_TE2
DECL|DMA_FLAG_TE3|macro|DMA_FLAG_TE3
DECL|DMA_FLAG_TE4|macro|DMA_FLAG_TE4
DECL|DMA_FLAG_TE5|macro|DMA_FLAG_TE5
DECL|DMA_FLAG_TE6|macro|DMA_FLAG_TE6
DECL|DMA_FLAG_TE7|macro|DMA_FLAG_TE7
DECL|DMA_HandleTypeDef|typedef|}DMA_HandleTypeDef;
DECL|DMA_IT_HT|macro|DMA_IT_HT
DECL|DMA_IT_TC|macro|DMA_IT_TC
DECL|DMA_IT_TE|macro|DMA_IT_TE
DECL|DMA_InitTypeDef|typedef|} DMA_InitTypeDef;
DECL|DMA_MDATAALIGN_BYTE|macro|DMA_MDATAALIGN_BYTE
DECL|DMA_MDATAALIGN_HALFWORD|macro|DMA_MDATAALIGN_HALFWORD
DECL|DMA_MDATAALIGN_WORD|macro|DMA_MDATAALIGN_WORD
DECL|DMA_MEMORY_TO_MEMORY|macro|DMA_MEMORY_TO_MEMORY
DECL|DMA_MEMORY_TO_PERIPH|macro|DMA_MEMORY_TO_PERIPH
DECL|DMA_MINC_DISABLE|macro|DMA_MINC_DISABLE
DECL|DMA_MINC_ENABLE|macro|DMA_MINC_ENABLE
DECL|DMA_NORMAL|macro|DMA_NORMAL
DECL|DMA_PDATAALIGN_BYTE|macro|DMA_PDATAALIGN_BYTE
DECL|DMA_PDATAALIGN_HALFWORD|macro|DMA_PDATAALIGN_HALFWORD
DECL|DMA_PDATAALIGN_WORD|macro|DMA_PDATAALIGN_WORD
DECL|DMA_PERIPH_TO_MEMORY|macro|DMA_PERIPH_TO_MEMORY
DECL|DMA_PINC_DISABLE|macro|DMA_PINC_DISABLE
DECL|DMA_PINC_ENABLE|macro|DMA_PINC_ENABLE
DECL|DMA_PRIORITY_HIGH|macro|DMA_PRIORITY_HIGH
DECL|DMA_PRIORITY_LOW|macro|DMA_PRIORITY_LOW
DECL|DMA_PRIORITY_MEDIUM|macro|DMA_PRIORITY_MEDIUM
DECL|DMA_PRIORITY_VERY_HIGH|macro|DMA_PRIORITY_VERY_HIGH
DECL|DMA_REQUEST_0|macro|DMA_REQUEST_0
DECL|DMA_REQUEST_1|macro|DMA_REQUEST_1
DECL|DMA_REQUEST_2|macro|DMA_REQUEST_2
DECL|DMA_REQUEST_3|macro|DMA_REQUEST_3
DECL|DMA_REQUEST_4|macro|DMA_REQUEST_4
DECL|DMA_REQUEST_5|macro|DMA_REQUEST_5
DECL|DMA_REQUEST_6|macro|DMA_REQUEST_6
DECL|DMA_REQUEST_7|macro|DMA_REQUEST_7
DECL|Direction|member|uint32_t Direction; /*!< Specifies if the data will be transferred from memory to peripheral,
DECL|DmaBaseAddress|member|DMA_TypeDef *DmaBaseAddress; /*!< DMA Channel Base Address */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DMA Error code */
DECL|HAL_DMA_CallbackIDTypeDef|typedef|}HAL_DMA_CallbackIDTypeDef;
DECL|HAL_DMA_ERROR_NONE|macro|HAL_DMA_ERROR_NONE
DECL|HAL_DMA_ERROR_NOT_SUPPORTED|macro|HAL_DMA_ERROR_NOT_SUPPORTED
DECL|HAL_DMA_ERROR_NO_XFER|macro|HAL_DMA_ERROR_NO_XFER
DECL|HAL_DMA_ERROR_TE|macro|HAL_DMA_ERROR_TE
DECL|HAL_DMA_ERROR_TIMEOUT|macro|HAL_DMA_ERROR_TIMEOUT
DECL|HAL_DMA_FULL_TRANSFER|enumerator|HAL_DMA_FULL_TRANSFER = 0x00, /*!< Full transfer */
DECL|HAL_DMA_HALF_TRANSFER|enumerator|HAL_DMA_HALF_TRANSFER = 0x01 /*!< Half Transfer */
DECL|HAL_DMA_LevelCompleteTypeDef|typedef|}HAL_DMA_LevelCompleteTypeDef;
DECL|HAL_DMA_STATE_BUSY|enumerator|HAL_DMA_STATE_BUSY = 0x02, /*!< DMA process is ongoing */
DECL|HAL_DMA_STATE_READY|enumerator|HAL_DMA_STATE_READY = 0x01, /*!< DMA initialized and ready for use */
DECL|HAL_DMA_STATE_RESET|enumerator|HAL_DMA_STATE_RESET = 0x00, /*!< DMA not yet initialized or disabled */
DECL|HAL_DMA_STATE_TIMEOUT|enumerator|HAL_DMA_STATE_TIMEOUT = 0x03, /*!< DMA timeout state */
DECL|HAL_DMA_StateTypeDef|typedef|}HAL_DMA_StateTypeDef;
DECL|HAL_DMA_XFER_ABORT_CB_ID|enumerator|HAL_DMA_XFER_ABORT_CB_ID = 0x03, /*!< Abort */
DECL|HAL_DMA_XFER_ALL_CB_ID|enumerator|HAL_DMA_XFER_ALL_CB_ID = 0x04 /*!< All */
DECL|HAL_DMA_XFER_CPLT_CB_ID|enumerator|HAL_DMA_XFER_CPLT_CB_ID = 0x00, /*!< Full transfer */
DECL|HAL_DMA_XFER_ERROR_CB_ID|enumerator|HAL_DMA_XFER_ERROR_CB_ID = 0x02, /*!< Error */
DECL|HAL_DMA_XFER_HALFCPLT_CB_ID|enumerator|HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01, /*!< Half transfer */
DECL|IS_DMA_ALL_REQUEST|macro|IS_DMA_ALL_REQUEST
DECL|IS_DMA_BUFFER_SIZE|macro|IS_DMA_BUFFER_SIZE
DECL|IS_DMA_DIRECTION|macro|IS_DMA_DIRECTION
DECL|IS_DMA_MEMORY_DATA_SIZE|macro|IS_DMA_MEMORY_DATA_SIZE
DECL|IS_DMA_MEMORY_INC_STATE|macro|IS_DMA_MEMORY_INC_STATE
DECL|IS_DMA_MODE|macro|IS_DMA_MODE
DECL|IS_DMA_PERIPHERAL_DATA_SIZE|macro|IS_DMA_PERIPHERAL_DATA_SIZE
DECL|IS_DMA_PERIPHERAL_INC_STATE|macro|IS_DMA_PERIPHERAL_INC_STATE
DECL|IS_DMA_PRIORITY|macro|IS_DMA_PRIORITY
DECL|Init|member|DMA_InitTypeDef Init; /*!< DMA communication parameters */
DECL|Instance|member|DMA_Channel_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DMA locking object */
DECL|MemDataAlignment|member|uint32_t MemDataAlignment; /*!< Specifies the Memory data width.
DECL|MemInc|member|uint32_t MemInc; /*!< Specifies whether the memory address register should be incremented or not.
DECL|Mode|member|uint32_t Mode; /*!< Specifies the operation mode of the DMAy Channelx.
DECL|Parent|member|void *Parent; /*!< Parent object state */
DECL|PeriphDataAlignment|member|uint32_t PeriphDataAlignment; /*!< Specifies the Peripheral data width.
DECL|PeriphInc|member|uint32_t PeriphInc; /*!< Specifies whether the Peripheral address register should be incremented or not.
DECL|Priority|member|uint32_t Priority; /*!< Specifies the software priority for the DMAy Channelx.
DECL|Request|member|uint32_t Request; /*!< Specifies the request selected for the specified channel.
DECL|State|member|__IO HAL_DMA_StateTypeDef State; /*!< DMA transfer state */
DECL|XferAbortCallback|member|void (* XferAbortCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer abort callback */
DECL|XferCpltCallback|member|void (* XferCpltCallback)(struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer complete callback */
DECL|XferErrorCallback|member|void (* XferErrorCallback)(struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer error callback */
DECL|XferHalfCpltCallback|member|void (* XferHalfCpltCallback)(struct __DMA_HandleTypeDef * hdma); /*!< DMA Half transfer complete callback */
DECL|__DMA_HandleTypeDef|struct|typedef struct __DMA_HandleTypeDef
DECL|__HAL_DMA_CLEAR_FLAG|macro|__HAL_DMA_CLEAR_FLAG
DECL|__HAL_DMA_DISABLE_IT|macro|__HAL_DMA_DISABLE_IT
DECL|__HAL_DMA_DISABLE|macro|__HAL_DMA_DISABLE
DECL|__HAL_DMA_ENABLE_IT|macro|__HAL_DMA_ENABLE_IT
DECL|__HAL_DMA_ENABLE|macro|__HAL_DMA_ENABLE
DECL|__HAL_DMA_GET_COUNTER|macro|__HAL_DMA_GET_COUNTER
DECL|__HAL_DMA_GET_FLAG|macro|__HAL_DMA_GET_FLAG
DECL|__HAL_DMA_GET_GI_FLAG_INDEX|macro|__HAL_DMA_GET_GI_FLAG_INDEX
DECL|__HAL_DMA_GET_HT_FLAG_INDEX|macro|__HAL_DMA_GET_HT_FLAG_INDEX
DECL|__HAL_DMA_GET_IT_SOURCE|macro|__HAL_DMA_GET_IT_SOURCE
DECL|__HAL_DMA_GET_TC_FLAG_INDEX|macro|__HAL_DMA_GET_TC_FLAG_INDEX
DECL|__HAL_DMA_GET_TE_FLAG_INDEX|macro|__HAL_DMA_GET_TE_FLAG_INDEX
DECL|__HAL_DMA_RESET_HANDLE_STATE|macro|__HAL_DMA_RESET_HANDLE_STATE
DECL|__STM32L4xx_HAL_DMA_H|macro|__STM32L4xx_HAL_DMA_H
