DECL|ByteSelectMode|member|uint32_t ByteSelectMode; /*!< Specifies the data to be captured by the interface
DECL|ByteSelectStart|member|uint32_t ByteSelectStart; /*!< Specifies if the data to be captured by the interface is even or odd
DECL|CaptureRate|member|uint32_t CaptureRate; /*!< Specifies the frequency of frame capture: All, 1/2 or 1/4.
DECL|DCMI_BSM_ALL|macro|DCMI_BSM_ALL
DECL|DCMI_BSM_ALTERNATE_2|macro|DCMI_BSM_ALTERNATE_2
DECL|DCMI_BSM_ALTERNATE_4|macro|DCMI_BSM_ALTERNATE_4
DECL|DCMI_BSM_OTHER|macro|DCMI_BSM_OTHER
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
DECL|DCMI_LSM_ALL|macro|DCMI_LSM_ALL
DECL|DCMI_LSM_ALTERNATE_2|macro|DCMI_LSM_ALTERNATE_2
DECL|DCMI_MIS_INDEX|macro|DCMI_MIS_INDEX
DECL|DCMI_MODE_CONTINUOUS|macro|DCMI_MODE_CONTINUOUS
DECL|DCMI_MODE_SNAPSHOT|macro|DCMI_MODE_SNAPSHOT
DECL|DCMI_OEBS_EVEN|macro|DCMI_OEBS_EVEN
DECL|DCMI_OEBS_ODD|macro|DCMI_OEBS_ODD
DECL|DCMI_OELS_EVEN|macro|DCMI_OELS_EVEN
DECL|DCMI_OELS_ODD|macro|DCMI_OELS_ODD
DECL|DCMI_PCKPOLARITY_FALLING|macro|DCMI_PCKPOLARITY_FALLING
DECL|DCMI_PCKPOLARITY_RISING|macro|DCMI_PCKPOLARITY_RISING
DECL|DCMI_SR_INDEX|macro|DCMI_SR_INDEX
DECL|DCMI_SYNCHRO_EMBEDDED|macro|DCMI_SYNCHRO_EMBEDDED
DECL|DCMI_SYNCHRO_HARDWARE|macro|DCMI_SYNCHRO_HARDWARE
DECL|DCMI_SyncUnmaskTypeDef|typedef|}DCMI_SyncUnmaskTypeDef;
DECL|DCMI_VSPOLARITY_HIGH|macro|DCMI_VSPOLARITY_HIGH
DECL|DCMI_VSPOLARITY_LOW|macro|DCMI_VSPOLARITY_LOW
DECL|DCMI_WINDOW_COORDINATE|macro|DCMI_WINDOW_COORDINATE
DECL|DCMI_WINDOW_HEIGHT|macro|DCMI_WINDOW_HEIGHT
DECL|DMAM2M_Handle|member|DMA_HandleTypeDef *DMAM2M_Handle; /*!< Pointer to DMA handler for memory to memory copy
DECL|DMA_Handle|member|DMA_HandleTypeDef *DMA_Handle; /*!< Pointer to DMA handler */
DECL|ErrorCallback|member|void (* ErrorCallback) ( struct __DCMI_HandleTypeDef *hdcmi); /*!< DCMI Error Callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DCMI Error code */
DECL|ExtendedDataMode|member|uint32_t ExtendedDataMode; /*!< Specifies the data width: 8-bit, 10-bit, 12-bit or 14-bit.
DECL|FrameEndCode|member|uint8_t FrameEndCode; /*!< Specifies the code of the frame end delimiter. */
DECL|FrameEndUnmask|member|uint8_t FrameEndUnmask; /*!< Specifies the frame end delimiter unmask. */
DECL|FrameEventCallback|member|void (* FrameEventCallback) ( struct __DCMI_HandleTypeDef *hdcmi); /*!< DCMI Frame Event Callback */
DECL|FrameStartCode|member|uint8_t FrameStartCode; /*!< Specifies the code of the frame start delimiter. */
DECL|FrameStartUnmask|member|uint8_t FrameStartUnmask; /*!< Specifies the frame start delimiter unmask. */
DECL|HAL_DCMI_CallbackIDTypeDef|typedef|}HAL_DCMI_CallbackIDTypeDef;
DECL|HAL_DCMI_ERROR_CB_ID|enumerator|HAL_DCMI_ERROR_CB_ID = 0x03U, /*!< DCMI Error Callback ID */
DECL|HAL_DCMI_ERROR_DMA|macro|HAL_DCMI_ERROR_DMA
DECL|HAL_DCMI_ERROR_INVALID_CALLBACK|macro|HAL_DCMI_ERROR_INVALID_CALLBACK
DECL|HAL_DCMI_ERROR_NONE|macro|HAL_DCMI_ERROR_NONE
DECL|HAL_DCMI_ERROR_OVR|macro|HAL_DCMI_ERROR_OVR
DECL|HAL_DCMI_ERROR_SYNC|macro|HAL_DCMI_ERROR_SYNC
DECL|HAL_DCMI_ERROR_TIMEOUT|macro|HAL_DCMI_ERROR_TIMEOUT
DECL|HAL_DCMI_FRAME_EVENT_CB_ID|enumerator|HAL_DCMI_FRAME_EVENT_CB_ID = 0x00U, /*!< DCMI Frame Event Callback ID */
DECL|HAL_DCMI_LINE_EVENT_CB_ID|enumerator|HAL_DCMI_LINE_EVENT_CB_ID = 0x02U, /*!< DCMI Line Event Callback ID */
DECL|HAL_DCMI_MSPDEINIT_CB_ID|enumerator|HAL_DCMI_MSPDEINIT_CB_ID = 0x05U /*!< DCMI MspDeInit callback ID */
DECL|HAL_DCMI_MSPINIT_CB_ID|enumerator|HAL_DCMI_MSPINIT_CB_ID = 0x04U, /*!< DCMI MspInit callback ID */
DECL|HAL_DCMI_STATE_BUSY|enumerator|HAL_DCMI_STATE_BUSY = 0x02U, /*!< DCMI internal processing is ongoing */
DECL|HAL_DCMI_STATE_ERROR|enumerator|HAL_DCMI_STATE_ERROR = 0x04U, /*!< DCMI error state */
DECL|HAL_DCMI_STATE_READY|enumerator|HAL_DCMI_STATE_READY = 0x01U, /*!< DCMI initialized and ready for use */
DECL|HAL_DCMI_STATE_RESET|enumerator|HAL_DCMI_STATE_RESET = 0x00U, /*!< DCMI not yet initialized or disabled */
DECL|HAL_DCMI_STATE_SUSPENDED|enumerator|HAL_DCMI_STATE_SUSPENDED = 0x05U /*!< DCMI suspend state */
DECL|HAL_DCMI_STATE_TIMEOUT|enumerator|HAL_DCMI_STATE_TIMEOUT = 0x03U, /*!< DCMI timeout state */
DECL|HAL_DCMI_StateTypeDef|typedef|}HAL_DCMI_StateTypeDef;
DECL|HAL_DCMI_VSYNC_EVENT_CB_ID|enumerator|HAL_DCMI_VSYNC_EVENT_CB_ID = 0x01U, /*!< DCMI Vsync Event Callback ID */
DECL|HSPolarity|member|uint32_t HSPolarity; /*!< Specifies the Horizontal synchronization polarity: High or Low.
DECL|HalfCopyLength|member|uint32_t HalfCopyLength; /*!< Intermediate copies length
DECL|IS_DCMI_BYTE_SELECT_MODE|macro|IS_DCMI_BYTE_SELECT_MODE
DECL|IS_DCMI_BYTE_SELECT_START|macro|IS_DCMI_BYTE_SELECT_START
DECL|IS_DCMI_CAPTURE_MODE|macro|IS_DCMI_CAPTURE_MODE
DECL|IS_DCMI_CAPTURE_RATE|macro|IS_DCMI_CAPTURE_RATE
DECL|IS_DCMI_EXTENDED_DATA|macro|IS_DCMI_EXTENDED_DATA
DECL|IS_DCMI_HSPOLARITY|macro|IS_DCMI_HSPOLARITY
DECL|IS_DCMI_LINE_SELECT_MODE|macro|IS_DCMI_LINE_SELECT_MODE
DECL|IS_DCMI_LINE_SELECT_START|macro|IS_DCMI_LINE_SELECT_START
DECL|IS_DCMI_MODE_JPEG|macro|IS_DCMI_MODE_JPEG
DECL|IS_DCMI_PCKPOLARITY|macro|IS_DCMI_PCKPOLARITY
DECL|IS_DCMI_SYNCHRO|macro|IS_DCMI_SYNCHRO
DECL|IS_DCMI_VSPOLARITY|macro|IS_DCMI_VSPOLARITY
DECL|IS_DCMI_WINDOW_COORDINATE|macro|IS_DCMI_WINDOW_COORDINATE
DECL|IS_DCMI_WINDOW_HEIGHT|macro|IS_DCMI_WINDOW_HEIGHT
DECL|Init|member|DCMI_InitTypeDef Init; /*!< DCMI init parameters */
DECL|Instance|member|DCMI_TypeDef *Instance; /*!< DCMI Register base address */
DECL|JPEGMode|member|uint32_t JPEGMode; /*!< Enable or Disable the JPEG mode.
DECL|LineEndCode|member|uint8_t LineEndCode; /*!< Specifies the code of the line end delimiter. */
DECL|LineEndUnmask|member|uint8_t LineEndUnmask; /*!< Specifies the line end delimiter unmask. */
DECL|LineEventCallback|member|void (* LineEventCallback ) ( struct __DCMI_HandleTypeDef *hdcmi); /*!< DCMI Line Event Callback */
DECL|LineSelectMode|member|uint32_t LineSelectMode; /*!< Specifies the line of data to be captured by the interface
DECL|LineSelectStart|member|uint32_t LineSelectStart; /*!< Specifies if the line of data to be captured by the interface is even or odd
DECL|LineStartCode|member|uint8_t LineStartCode; /*!< Specifies the code of the line start delimiter. */
DECL|LineStartUnmask|member|uint8_t LineStartUnmask; /*!< Specifies the line start delimiter unmask. */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DCMI locking object */
DECL|MspDeInitCallback|member|void (* MspDeInitCallback) ( struct __DCMI_HandleTypeDef *hdcmi); /*!< DCMI Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback) ( struct __DCMI_HandleTypeDef *hdcmi); /*!< DCMI Msp Init callback */
DECL|PCKPolarity|member|uint32_t PCKPolarity; /*!< Specifies the Pixel clock polarity: Falling or Rising.
DECL|State|member|__IO HAL_DCMI_StateTypeDef State; /*!< DCMI state */
DECL|SynchroCode|member|DCMI_CodesInitTypeDef SynchroCode; /*!< Specifies the frame start delimiter codes. */
DECL|SynchroMode|member|uint32_t SynchroMode; /*!< Specifies the Synchronization Mode: Hardware or Embedded.
DECL|VSPolarity|member|uint32_t VSPolarity; /*!< Specifies the Vertical synchronization polarity: High or Low.
DECL|VsyncEventCallback|member|void (* VsyncEventCallback) ( struct __DCMI_HandleTypeDef *hdcmi); /*!< DCMI Vsync Event Callback */
DECL|XferCount|member|__IO uint32_t XferCount; /*!< DMA transfers counter */
DECL|XferSize|member|__IO uint32_t XferSize; /*!< DMA transfer size */
DECL|__DCMI_HandleTypeDef|struct|typedef struct __DCMI_HandleTypeDef
DECL|__HAL_DCMI_CLEAR_FLAG|macro|__HAL_DCMI_CLEAR_FLAG
DECL|__HAL_DCMI_DISABLE_IT|macro|__HAL_DCMI_DISABLE_IT
DECL|__HAL_DCMI_DISABLE|macro|__HAL_DCMI_DISABLE
DECL|__HAL_DCMI_ENABLE_IT|macro|__HAL_DCMI_ENABLE_IT
DECL|__HAL_DCMI_ENABLE|macro|__HAL_DCMI_ENABLE
DECL|__HAL_DCMI_GET_FLAG|macro|__HAL_DCMI_GET_FLAG
DECL|__HAL_DCMI_GET_IT_SOURCE|macro|__HAL_DCMI_GET_IT_SOURCE
DECL|__HAL_DCMI_RESET_HANDLE_STATE|macro|__HAL_DCMI_RESET_HANDLE_STATE
DECL|__HAL_DCMI_RESET_HANDLE_STATE|macro|__HAL_DCMI_RESET_HANDLE_STATE
DECL|__STM32L4xx_HAL_DCMI_H|macro|__STM32L4xx_HAL_DCMI_H
DECL|pBuffPtr|member|uint32_t pBuffPtr; /*!< Pointer to DMA output buffer */
DECL|pCircularBuffer|member|uint32_t pCircularBuffer; /*!< Pointer to intermediate copy buffer
DECL|pDCMI_CallbackTypeDef|typedef|typedef void (*pDCMI_CallbackTypeDef)(DCMI_HandleTypeDef *hdcmi);
