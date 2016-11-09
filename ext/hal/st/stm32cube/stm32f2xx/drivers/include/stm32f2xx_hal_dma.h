DECL|Channel|member|uint32_t Channel; /*!< Specifies the channel used for the specified stream.
DECL|DMA_CHANNEL_0|macro|DMA_CHANNEL_0
DECL|DMA_CHANNEL_1|macro|DMA_CHANNEL_1
DECL|DMA_CHANNEL_2|macro|DMA_CHANNEL_2
DECL|DMA_CHANNEL_3|macro|DMA_CHANNEL_3
DECL|DMA_CHANNEL_4|macro|DMA_CHANNEL_4
DECL|DMA_CHANNEL_5|macro|DMA_CHANNEL_5
DECL|DMA_CHANNEL_6|macro|DMA_CHANNEL_6
DECL|DMA_CHANNEL_7|macro|DMA_CHANNEL_7
DECL|DMA_CIRCULAR|macro|DMA_CIRCULAR
DECL|DMA_FIFOMODE_DISABLE|macro|DMA_FIFOMODE_DISABLE
DECL|DMA_FIFOMODE_ENABLE|macro|DMA_FIFOMODE_ENABLE
DECL|DMA_FIFO_THRESHOLD_1QUARTERFULL|macro|DMA_FIFO_THRESHOLD_1QUARTERFULL
DECL|DMA_FIFO_THRESHOLD_3QUARTERSFULL|macro|DMA_FIFO_THRESHOLD_3QUARTERSFULL
DECL|DMA_FIFO_THRESHOLD_FULL|macro|DMA_FIFO_THRESHOLD_FULL
DECL|DMA_FIFO_THRESHOLD_HALFFULL|macro|DMA_FIFO_THRESHOLD_HALFFULL
DECL|DMA_FLAG_DMEIF0_4|macro|DMA_FLAG_DMEIF0_4
DECL|DMA_FLAG_DMEIF1_5|macro|DMA_FLAG_DMEIF1_5
DECL|DMA_FLAG_DMEIF2_6|macro|DMA_FLAG_DMEIF2_6
DECL|DMA_FLAG_DMEIF3_7|macro|DMA_FLAG_DMEIF3_7
DECL|DMA_FLAG_FEIF0_4|macro|DMA_FLAG_FEIF0_4
DECL|DMA_FLAG_FEIF1_5|macro|DMA_FLAG_FEIF1_5
DECL|DMA_FLAG_FEIF2_6|macro|DMA_FLAG_FEIF2_6
DECL|DMA_FLAG_FEIF3_7|macro|DMA_FLAG_FEIF3_7
DECL|DMA_FLAG_HTIF0_4|macro|DMA_FLAG_HTIF0_4
DECL|DMA_FLAG_HTIF1_5|macro|DMA_FLAG_HTIF1_5
DECL|DMA_FLAG_HTIF2_6|macro|DMA_FLAG_HTIF2_6
DECL|DMA_FLAG_HTIF3_7|macro|DMA_FLAG_HTIF3_7
DECL|DMA_FLAG_TCIF0_4|macro|DMA_FLAG_TCIF0_4
DECL|DMA_FLAG_TCIF1_5|macro|DMA_FLAG_TCIF1_5
DECL|DMA_FLAG_TCIF2_6|macro|DMA_FLAG_TCIF2_6
DECL|DMA_FLAG_TCIF3_7|macro|DMA_FLAG_TCIF3_7
DECL|DMA_FLAG_TEIF0_4|macro|DMA_FLAG_TEIF0_4
DECL|DMA_FLAG_TEIF1_5|macro|DMA_FLAG_TEIF1_5
DECL|DMA_FLAG_TEIF2_6|macro|DMA_FLAG_TEIF2_6
DECL|DMA_FLAG_TEIF3_7|macro|DMA_FLAG_TEIF3_7
DECL|DMA_HandleTypeDef|typedef|}DMA_HandleTypeDef;
DECL|DMA_IT_DME|macro|DMA_IT_DME
DECL|DMA_IT_FE|macro|DMA_IT_FE
DECL|DMA_IT_HT|macro|DMA_IT_HT
DECL|DMA_IT_TC|macro|DMA_IT_TC
DECL|DMA_IT_TE|macro|DMA_IT_TE
DECL|DMA_InitTypeDef|typedef|}DMA_InitTypeDef;
DECL|DMA_MBURST_INC16|macro|DMA_MBURST_INC16
DECL|DMA_MBURST_INC4|macro|DMA_MBURST_INC4
DECL|DMA_MBURST_INC8|macro|DMA_MBURST_INC8
DECL|DMA_MBURST_SINGLE|macro|DMA_MBURST_SINGLE
DECL|DMA_MDATAALIGN_BYTE|macro|DMA_MDATAALIGN_BYTE
DECL|DMA_MDATAALIGN_HALFWORD|macro|DMA_MDATAALIGN_HALFWORD
DECL|DMA_MDATAALIGN_WORD|macro|DMA_MDATAALIGN_WORD
DECL|DMA_MEMORY_TO_MEMORY|macro|DMA_MEMORY_TO_MEMORY
DECL|DMA_MEMORY_TO_PERIPH|macro|DMA_MEMORY_TO_PERIPH
DECL|DMA_MINC_DISABLE|macro|DMA_MINC_DISABLE
DECL|DMA_MINC_ENABLE|macro|DMA_MINC_ENABLE
DECL|DMA_NORMAL|macro|DMA_NORMAL
DECL|DMA_PBURST_INC16|macro|DMA_PBURST_INC16
DECL|DMA_PBURST_INC4|macro|DMA_PBURST_INC4
DECL|DMA_PBURST_INC8|macro|DMA_PBURST_INC8
DECL|DMA_PBURST_SINGLE|macro|DMA_PBURST_SINGLE
DECL|DMA_PDATAALIGN_BYTE|macro|DMA_PDATAALIGN_BYTE
DECL|DMA_PDATAALIGN_HALFWORD|macro|DMA_PDATAALIGN_HALFWORD
DECL|DMA_PDATAALIGN_WORD|macro|DMA_PDATAALIGN_WORD
DECL|DMA_PERIPH_TO_MEMORY|macro|DMA_PERIPH_TO_MEMORY
DECL|DMA_PFCTRL|macro|DMA_PFCTRL
DECL|DMA_PINC_DISABLE|macro|DMA_PINC_DISABLE
DECL|DMA_PINC_ENABLE|macro|DMA_PINC_ENABLE
DECL|DMA_PRIORITY_HIGH|macro|DMA_PRIORITY_HIGH
DECL|DMA_PRIORITY_LOW|macro|DMA_PRIORITY_LOW
DECL|DMA_PRIORITY_MEDIUM|macro|DMA_PRIORITY_MEDIUM
DECL|DMA_PRIORITY_VERY_HIGH|macro|DMA_PRIORITY_VERY_HIGH
DECL|Direction|member|uint32_t Direction; /*!< Specifies if the data will be transferred from memory to peripheral,
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DMA Error code */
DECL|FIFOMode|member|uint32_t FIFOMode; /*!< Specifies if the FIFO mode or Direct mode will be used for the specified stream.
DECL|FIFOThreshold|member|uint32_t FIFOThreshold; /*!< Specifies the FIFO threshold level.
DECL|HAL_DMA_CallbackIDTypeDef|typedef|}HAL_DMA_CallbackIDTypeDef;
DECL|HAL_DMA_ERROR_DME|macro|HAL_DMA_ERROR_DME
DECL|HAL_DMA_ERROR_FE|macro|HAL_DMA_ERROR_FE
DECL|HAL_DMA_ERROR_NONE|macro|HAL_DMA_ERROR_NONE
DECL|HAL_DMA_ERROR_NOT_SUPPORTED|macro|HAL_DMA_ERROR_NOT_SUPPORTED
DECL|HAL_DMA_ERROR_NO_XFER|macro|HAL_DMA_ERROR_NO_XFER
DECL|HAL_DMA_ERROR_PARAM|macro|HAL_DMA_ERROR_PARAM
DECL|HAL_DMA_ERROR_TE|macro|HAL_DMA_ERROR_TE
DECL|HAL_DMA_ERROR_TIMEOUT|macro|HAL_DMA_ERROR_TIMEOUT
DECL|HAL_DMA_FULL_TRANSFER|enumerator|HAL_DMA_FULL_TRANSFER = 0x00U, /*!< Full transfer */
DECL|HAL_DMA_HALF_TRANSFER|enumerator|HAL_DMA_HALF_TRANSFER = 0x01U /*!< Half Transfer */
DECL|HAL_DMA_LevelCompleteTypeDef|typedef|}HAL_DMA_LevelCompleteTypeDef;
DECL|HAL_DMA_STATE_ABORT|enumerator|HAL_DMA_STATE_ABORT = 0x05U, /*!< DMA Abort state */
DECL|HAL_DMA_STATE_BUSY|enumerator|HAL_DMA_STATE_BUSY = 0x02U, /*!< DMA process is ongoing */
DECL|HAL_DMA_STATE_ERROR|enumerator|HAL_DMA_STATE_ERROR = 0x04U, /*!< DMA error state */
DECL|HAL_DMA_STATE_READY|enumerator|HAL_DMA_STATE_READY = 0x01U, /*!< DMA initialized and ready for use */
DECL|HAL_DMA_STATE_RESET|enumerator|HAL_DMA_STATE_RESET = 0x00U, /*!< DMA not yet initialized or disabled */
DECL|HAL_DMA_STATE_TIMEOUT|enumerator|HAL_DMA_STATE_TIMEOUT = 0x03U, /*!< DMA timeout state */
DECL|HAL_DMA_StateTypeDef|typedef|}HAL_DMA_StateTypeDef;
DECL|HAL_DMA_XFER_ABORT_CB_ID|enumerator|HAL_DMA_XFER_ABORT_CB_ID = 0x05U, /*!< Abort */
DECL|HAL_DMA_XFER_ALL_CB_ID|enumerator|HAL_DMA_XFER_ALL_CB_ID = 0x06U /*!< All */
DECL|HAL_DMA_XFER_CPLT_CB_ID|enumerator|HAL_DMA_XFER_CPLT_CB_ID = 0x00U, /*!< Full transfer */
DECL|HAL_DMA_XFER_ERROR_CB_ID|enumerator|HAL_DMA_XFER_ERROR_CB_ID = 0x04U, /*!< Error */
DECL|HAL_DMA_XFER_HALFCPLT_CB_ID|enumerator|HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U, /*!< Half Transfer */
DECL|HAL_DMA_XFER_M1CPLT_CB_ID|enumerator|HAL_DMA_XFER_M1CPLT_CB_ID = 0x02U, /*!< M1 Full Transfer */
DECL|HAL_DMA_XFER_M1HALFCPLT_CB_ID|enumerator|HAL_DMA_XFER_M1HALFCPLT_CB_ID = 0x03U, /*!< M1 Half Transfer */
DECL|IS_DMA_BUFFER_SIZE|macro|IS_DMA_BUFFER_SIZE
DECL|IS_DMA_CHANNEL|macro|IS_DMA_CHANNEL
DECL|IS_DMA_DIRECTION|macro|IS_DMA_DIRECTION
DECL|IS_DMA_FIFO_MODE_STATE|macro|IS_DMA_FIFO_MODE_STATE
DECL|IS_DMA_FIFO_THRESHOLD|macro|IS_DMA_FIFO_THRESHOLD
DECL|IS_DMA_MEMORY_BURST|macro|IS_DMA_MEMORY_BURST
DECL|IS_DMA_MEMORY_DATA_SIZE|macro|IS_DMA_MEMORY_DATA_SIZE
DECL|IS_DMA_MEMORY_INC_STATE|macro|IS_DMA_MEMORY_INC_STATE
DECL|IS_DMA_MODE|macro|IS_DMA_MODE
DECL|IS_DMA_PERIPHERAL_BURST|macro|IS_DMA_PERIPHERAL_BURST
DECL|IS_DMA_PERIPHERAL_DATA_SIZE|macro|IS_DMA_PERIPHERAL_DATA_SIZE
DECL|IS_DMA_PERIPHERAL_INC_STATE|macro|IS_DMA_PERIPHERAL_INC_STATE
DECL|IS_DMA_PRIORITY|macro|IS_DMA_PRIORITY
DECL|Init|member|DMA_InitTypeDef Init; /*!< DMA communication parameters */
DECL|Instance|member|DMA_Stream_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DMA locking object */
DECL|MemBurst|member|uint32_t MemBurst; /*!< Specifies the Burst transfer configuration for the memory transfers.
DECL|MemDataAlignment|member|uint32_t MemDataAlignment; /*!< Specifies the Memory data width.
DECL|MemInc|member|uint32_t MemInc; /*!< Specifies whether the memory address register should be incremented or not.
DECL|Mode|member|uint32_t Mode; /*!< Specifies the operation mode of the DMAy Streamx.
DECL|Parent|member|void *Parent; /*!< Parent object state */
DECL|PeriphBurst|member|uint32_t PeriphBurst; /*!< Specifies the Burst transfer configuration for the peripheral transfers.
DECL|PeriphDataAlignment|member|uint32_t PeriphDataAlignment; /*!< Specifies the Peripheral data width.
DECL|PeriphInc|member|uint32_t PeriphInc; /*!< Specifies whether the Peripheral address register should be incremented or not.
DECL|Priority|member|uint32_t Priority; /*!< Specifies the software priority for the DMAy Streamx.
DECL|State|member|__IO HAL_DMA_StateTypeDef State; /*!< DMA transfer state */
DECL|StreamBaseAddress|member|uint32_t StreamBaseAddress; /*!< DMA Stream Base Address */
DECL|StreamIndex|member|uint32_t StreamIndex; /*!< DMA Stream Index */
DECL|XferAbortCallback|member|void (* XferAbortCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer Abort callback */
DECL|XferCpltCallback|member|void (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer complete callback */
DECL|XferErrorCallback|member|void (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer error callback */
DECL|XferHalfCpltCallback|member|void (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA Half transfer complete callback */
DECL|XferM1CpltCallback|member|void (* XferM1CpltCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer complete Memory1 callback */
DECL|XferM1HalfCpltCallback|member|void (* XferM1HalfCpltCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA transfer Half complete Memory1 callback */
DECL|__DMA_HandleTypeDef|struct|typedef struct __DMA_HandleTypeDef
DECL|__HAL_DMA_CLEAR_FLAG|macro|__HAL_DMA_CLEAR_FLAG
DECL|__HAL_DMA_DISABLE_IT|macro|__HAL_DMA_DISABLE_IT
DECL|__HAL_DMA_DISABLE|macro|__HAL_DMA_DISABLE
DECL|__HAL_DMA_ENABLE_IT|macro|__HAL_DMA_ENABLE_IT
DECL|__HAL_DMA_ENABLE|macro|__HAL_DMA_ENABLE
DECL|__HAL_DMA_GET_COUNTER|macro|__HAL_DMA_GET_COUNTER
DECL|__HAL_DMA_GET_DME_FLAG_INDEX|macro|__HAL_DMA_GET_DME_FLAG_INDEX
DECL|__HAL_DMA_GET_FE_FLAG_INDEX|macro|__HAL_DMA_GET_FE_FLAG_INDEX
DECL|__HAL_DMA_GET_FLAG|macro|__HAL_DMA_GET_FLAG
DECL|__HAL_DMA_GET_FS|macro|__HAL_DMA_GET_FS
DECL|__HAL_DMA_GET_HT_FLAG_INDEX|macro|__HAL_DMA_GET_HT_FLAG_INDEX
DECL|__HAL_DMA_GET_IT_SOURCE|macro|__HAL_DMA_GET_IT_SOURCE
DECL|__HAL_DMA_GET_TC_FLAG_INDEX|macro|__HAL_DMA_GET_TC_FLAG_INDEX
DECL|__HAL_DMA_GET_TE_FLAG_INDEX|macro|__HAL_DMA_GET_TE_FLAG_INDEX
DECL|__HAL_DMA_RESET_HANDLE_STATE|macro|__HAL_DMA_RESET_HANDLE_STATE
DECL|__HAL_DMA_SET_COUNTER|macro|__HAL_DMA_SET_COUNTER
DECL|__STM32F2xx_HAL_DMA_H|macro|__STM32F2xx_HAL_DMA_H
