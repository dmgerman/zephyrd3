DECL|CaptureRate|member|uint32_t CaptureRate; /*!< Specifies the frequency of frame capture: All, 1/2 or 1/4.
DECL|DCMI_CR_ALL_FRAME|macro|DCMI_CR_ALL_FRAME
DECL|DCMI_CR_ALTERNATE_2_FRAME|macro|DCMI_CR_ALTERNATE_2_FRAME
DECL|DCMI_CR_ALTERNATE_4_FRAME|macro|DCMI_CR_ALTERNATE_4_FRAME
DECL|DCMI_CodesInitTypeDef|typedef|}DCMI_CodesInitTypeDef;
DECL|DCMI_EXTEND_DATA_10B|macro|DCMI_EXTEND_DATA_10B
DECL|DCMI_EXTEND_DATA_12B|macro|DCMI_EXTEND_DATA_12B
DECL|DCMI_EXTEND_DATA_14B|macro|DCMI_EXTEND_DATA_14B
DECL|DCMI_EXTEND_DATA_8B|macro|DCMI_EXTEND_DATA_8B
DECL|DCMI_FLAG_ERRMI|macro|DCMI_FLAG_ERRMI
DECL|DCMI_FLAG_ERRRI|macro|DCMI_FLAG_ERRRI
DECL|DCMI_FLAG_FNE|macro|DCMI_FLAG_FNE
DECL|DCMI_FLAG_FRAMEMI|macro|DCMI_FLAG_FRAMEMI
DECL|DCMI_FLAG_FRAMERI|macro|DCMI_FLAG_FRAMERI
DECL|DCMI_FLAG_HSYNC|macro|DCMI_FLAG_HSYNC
DECL|DCMI_FLAG_LINEMI|macro|DCMI_FLAG_LINEMI
DECL|DCMI_FLAG_LINERI|macro|DCMI_FLAG_LINERI
DECL|DCMI_FLAG_OVRMI|macro|DCMI_FLAG_OVRMI
DECL|DCMI_FLAG_OVRRI|macro|DCMI_FLAG_OVRRI
DECL|DCMI_FLAG_VSYNCMI|macro|DCMI_FLAG_VSYNCMI
DECL|DCMI_FLAG_VSYNCRI|macro|DCMI_FLAG_VSYNCRI
DECL|DCMI_FLAG_VSYNC|macro|DCMI_FLAG_VSYNC
DECL|DCMI_HSPOLARITY_HIGH|macro|DCMI_HSPOLARITY_HIGH
DECL|DCMI_HSPOLARITY_LOW|macro|DCMI_HSPOLARITY_LOW
DECL|DCMI_HandleTypeDef|typedef|}DCMI_HandleTypeDef;
DECL|DCMI_IT_ERR|macro|DCMI_IT_ERR
DECL|DCMI_IT_FRAME|macro|DCMI_IT_FRAME
DECL|DCMI_IT_LINE|macro|DCMI_IT_LINE
DECL|DCMI_IT_OVR|macro|DCMI_IT_OVR
DECL|DCMI_IT_VSYNC|macro|DCMI_IT_VSYNC
DECL|DCMI_InitTypeDef|typedef|}DCMI_InitTypeDef;
DECL|DCMI_JPEG_DISABLE|macro|DCMI_JPEG_DISABLE
DECL|DCMI_JPEG_ENABLE|macro|DCMI_JPEG_ENABLE
DECL|DCMI_MIS_INDEX|macro|DCMI_MIS_INDEX
DECL|DCMI_MODE_CONTINUOUS|macro|DCMI_MODE_CONTINUOUS
DECL|DCMI_MODE_SNAPSHOT|macro|DCMI_MODE_SNAPSHOT
DECL|DCMI_PCKPOLARITY_FALLING|macro|DCMI_PCKPOLARITY_FALLING
DECL|DCMI_PCKPOLARITY_RISING|macro|DCMI_PCKPOLARITY_RISING
DECL|DCMI_POSITION_CWSIZE_VLINE|macro|DCMI_POSITION_CWSIZE_VLINE
DECL|DCMI_POSITION_CWSTRT_VST|macro|DCMI_POSITION_CWSTRT_VST
DECL|DCMI_SR_INDEX|macro|DCMI_SR_INDEX
DECL|DCMI_SYNCHRO_EMBEDDED|macro|DCMI_SYNCHRO_EMBEDDED
DECL|DCMI_SYNCHRO_HARDWARE|macro|DCMI_SYNCHRO_HARDWARE
DECL|DCMI_VSPOLARITY_HIGH|macro|DCMI_VSPOLARITY_HIGH
DECL|DCMI_VSPOLARITY_LOW|macro|DCMI_VSPOLARITY_LOW
DECL|DCMI_WINDOW_COORDINATE|macro|DCMI_WINDOW_COORDINATE
DECL|DCMI_WINDOW_HEIGHT|macro|DCMI_WINDOW_HEIGHT
DECL|DMA_Handle|member|DMA_HandleTypeDef *DMA_Handle; /*!< Pointer to the DMA handler */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DCMI Error code */
DECL|ExtendedDataMode|member|uint32_t ExtendedDataMode; /*!< Specifies the data width: 8-bit, 10-bit, 12-bit or 14-bit.
DECL|FrameEndCode|member|uint8_t FrameEndCode; /*!< Specifies the code of the frame end delimiter. */
DECL|FrameStartCode|member|uint8_t FrameStartCode; /*!< Specifies the code of the frame start delimiter. */
DECL|HAL_DCMI_ERROR_DMA|macro|HAL_DCMI_ERROR_DMA
DECL|HAL_DCMI_ERROR_NONE|macro|HAL_DCMI_ERROR_NONE
DECL|HAL_DCMI_ERROR_OVR|macro|HAL_DCMI_ERROR_OVR
DECL|HAL_DCMI_ERROR_SYNC|macro|HAL_DCMI_ERROR_SYNC
DECL|HAL_DCMI_ERROR_TIMEOUT|macro|HAL_DCMI_ERROR_TIMEOUT
DECL|HAL_DCMI_STATE_BUSY|enumerator|HAL_DCMI_STATE_BUSY = 0x02U, /*!< DCMI internal processing is ongoing */
DECL|HAL_DCMI_STATE_ERROR|enumerator|HAL_DCMI_STATE_ERROR = 0x04U, /*!< DCMI error state */
DECL|HAL_DCMI_STATE_READY|enumerator|HAL_DCMI_STATE_READY = 0x01U, /*!< DCMI initialized and ready for use */
DECL|HAL_DCMI_STATE_RESET|enumerator|HAL_DCMI_STATE_RESET = 0x00U, /*!< DCMI not yet initialized or disabled */
DECL|HAL_DCMI_STATE_SUSPENDED|enumerator|HAL_DCMI_STATE_SUSPENDED = 0x05U /*!< DCMI suspend state */
DECL|HAL_DCMI_STATE_TIMEOUT|enumerator|HAL_DCMI_STATE_TIMEOUT = 0x03U, /*!< DCMI timeout state */
DECL|HAL_DCMI_StateTypeDef|typedef|}HAL_DCMI_StateTypeDef;
DECL|HSPolarity|member|uint32_t HSPolarity; /*!< Specifies the Horizontal synchronization polarity: High or Low.
DECL|IS_DCMI_CAPTURE_MODE|macro|IS_DCMI_CAPTURE_MODE
DECL|IS_DCMI_CAPTURE_RATE|macro|IS_DCMI_CAPTURE_RATE
DECL|IS_DCMI_EXTENDED_DATA|macro|IS_DCMI_EXTENDED_DATA
DECL|IS_DCMI_HSPOLARITY|macro|IS_DCMI_HSPOLARITY
DECL|IS_DCMI_MODE_JPEG|macro|IS_DCMI_MODE_JPEG
DECL|IS_DCMI_PCKPOLARITY|macro|IS_DCMI_PCKPOLARITY
DECL|IS_DCMI_SYNCHRO|macro|IS_DCMI_SYNCHRO
DECL|IS_DCMI_VSPOLARITY|macro|IS_DCMI_VSPOLARITY
DECL|IS_DCMI_WINDOW_COORDINATE|macro|IS_DCMI_WINDOW_COORDINATE
DECL|IS_DCMI_WINDOW_HEIGHT|macro|IS_DCMI_WINDOW_HEIGHT
DECL|Init|member|DCMI_InitTypeDef Init; /*!< DCMI parameters */
DECL|Instance|member|DCMI_TypeDef *Instance; /*!< DCMI Register base address */
DECL|JPEGMode|member|uint32_t JPEGMode; /*!< Enable or Disable the JPEG mode.
DECL|LineEndCode|member|uint8_t LineEndCode; /*!< Specifies the code of the line end delimiter. */
DECL|LineStartCode|member|uint8_t LineStartCode; /*!< Specifies the code of the line start delimiter. */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DCMI locking object */
DECL|PCKPolarity|member|uint32_t PCKPolarity; /*!< Specifies the Pixel clock polarity: Falling or Rising.
DECL|State|member|__IO HAL_DCMI_StateTypeDef State; /*!< DCMI state */
DECL|SynchroMode|member|uint32_t SynchroMode; /*!< Specifies the Synchronization Mode: Hardware or Embedded.
DECL|SyncroCode|member|DCMI_CodesInitTypeDef SyncroCode; /*!< Specifies the code of the frame start delimiter. */
DECL|VSPolarity|member|uint32_t VSPolarity; /*!< Specifies the Vertical synchronization polarity: High or Low.
DECL|XferCount|member|__IO uint32_t XferCount; /*!< DMA transfer counter */
DECL|XferSize|member|__IO uint32_t XferSize; /*!< DMA transfer size */
DECL|XferTransferNumber|member|uint32_t XferTransferNumber; /*!< DMA transfer number */
DECL|__HAL_DCMI_CLEAR_FLAG|macro|__HAL_DCMI_CLEAR_FLAG
DECL|__HAL_DCMI_DISABLE_IT|macro|__HAL_DCMI_DISABLE_IT
DECL|__HAL_DCMI_DISABLE|macro|__HAL_DCMI_DISABLE
DECL|__HAL_DCMI_ENABLE_IT|macro|__HAL_DCMI_ENABLE_IT
DECL|__HAL_DCMI_ENABLE|macro|__HAL_DCMI_ENABLE
DECL|__HAL_DCMI_GET_FLAG|macro|__HAL_DCMI_GET_FLAG
DECL|__HAL_DCMI_GET_IT_SOURCE|macro|__HAL_DCMI_GET_IT_SOURCE
DECL|__HAL_DCMI_RESET_HANDLE_STATE|macro|__HAL_DCMI_RESET_HANDLE_STATE
DECL|__STM32F2xx_HAL_DCMI_H|macro|__STM32F2xx_HAL_DCMI_H
DECL|pBuffPtr|member|uint32_t pBuffPtr; /*!< Pointer to DMA output buffer */
