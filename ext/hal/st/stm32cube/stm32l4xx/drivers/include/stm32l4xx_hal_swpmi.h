DECL|BitRate|member|uint32_t BitRate; /*!< Specifies the SWPMI Bitrate.
DECL|ErrorCallback|member|void (*ErrorCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI error callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< SWPMI Error code */
DECL|HAL_SWPMI_CallbackIDTypeDef|typedef|}HAL_SWPMI_CallbackIDTypeDef;
DECL|HAL_SWPMI_ERROR_CB_ID|enumerator|HAL_SWPMI_ERROR_CB_ID = 0x04U, /*!< SWPMI error callback ID */
DECL|HAL_SWPMI_ERROR_CRC|macro|HAL_SWPMI_ERROR_CRC
DECL|HAL_SWPMI_ERROR_DMA|macro|HAL_SWPMI_ERROR_DMA
DECL|HAL_SWPMI_ERROR_INVALID_CALLBACK|macro|HAL_SWPMI_ERROR_INVALID_CALLBACK
DECL|HAL_SWPMI_ERROR_NONE|macro|HAL_SWPMI_ERROR_NONE
DECL|HAL_SWPMI_ERROR_OVR|macro|HAL_SWPMI_ERROR_OVR
DECL|HAL_SWPMI_ERROR_TIMEOUT|macro|HAL_SWPMI_ERROR_TIMEOUT
DECL|HAL_SWPMI_ERROR_TXBEF_TIMEOUT|macro|HAL_SWPMI_ERROR_TXBEF_TIMEOUT
DECL|HAL_SWPMI_ERROR_UDR|macro|HAL_SWPMI_ERROR_UDR
DECL|HAL_SWPMI_MSPDEINIT_CB_ID|enumerator|HAL_SWPMI_MSPDEINIT_CB_ID = 0x06U /*!< SWPMI MSP de-init callback ID */
DECL|HAL_SWPMI_MSPINIT_CB_ID|enumerator|HAL_SWPMI_MSPINIT_CB_ID = 0x05U, /*!< SWPMI MSP init callback ID */
DECL|HAL_SWPMI_RX_COMPLETE_CB_ID|enumerator|HAL_SWPMI_RX_COMPLETE_CB_ID = 0x00U, /*!< SWPMI receive complete callback ID */
DECL|HAL_SWPMI_RX_HALFCOMPLETE_CB_ID|enumerator|HAL_SWPMI_RX_HALFCOMPLETE_CB_ID = 0x01U, /*!< SWPMI receive half complete callback ID */
DECL|HAL_SWPMI_STATE_BUSY_RX|enumerator|HAL_SWPMI_STATE_BUSY_RX = 0x22, /*!< Data Reception process is ongoing */
DECL|HAL_SWPMI_STATE_BUSY_TX_RX|enumerator|HAL_SWPMI_STATE_BUSY_TX_RX = 0x32, /*!< Data Transmission and Reception process is ongoing */
DECL|HAL_SWPMI_STATE_BUSY_TX|enumerator|HAL_SWPMI_STATE_BUSY_TX = 0x12, /*!< Data Transmission process is ongoing */
DECL|HAL_SWPMI_STATE_BUSY|enumerator|HAL_SWPMI_STATE_BUSY = 0x02, /*!< an internal process is ongoing */
DECL|HAL_SWPMI_STATE_ERROR|enumerator|HAL_SWPMI_STATE_ERROR = 0x04 /*!< Error */
DECL|HAL_SWPMI_STATE_READY|enumerator|HAL_SWPMI_STATE_READY = 0x01, /*!< Peripheral Initialized and ready for use */
DECL|HAL_SWPMI_STATE_RESET|enumerator|HAL_SWPMI_STATE_RESET = 0x00, /*!< Peripheral Reset state */
DECL|HAL_SWPMI_STATE_TIMEOUT|enumerator|HAL_SWPMI_STATE_TIMEOUT = 0x03, /*!< Timeout state */
DECL|HAL_SWPMI_StateTypeDef|typedef|}HAL_SWPMI_StateTypeDef;
DECL|HAL_SWPMI_TX_COMPLETE_CB_ID|enumerator|HAL_SWPMI_TX_COMPLETE_CB_ID = 0x02U, /*!< SWPMI transmit complete callback ID */
DECL|HAL_SWPMI_TX_HALFCOMPLETE_CB_ID|enumerator|HAL_SWPMI_TX_HALFCOMPLETE_CB_ID = 0x03U, /*!< SWPMI transmit half complete callback ID */
DECL|IS_SWPMI_BITRATE_VALUE|macro|IS_SWPMI_BITRATE_VALUE
DECL|IS_SWPMI_RX_BUFFERING_MODE|macro|IS_SWPMI_RX_BUFFERING_MODE
DECL|IS_SWPMI_TX_BUFFERING_MODE|macro|IS_SWPMI_TX_BUFFERING_MODE
DECL|IS_SWPMI_VOLTAGE_CLASS|macro|IS_SWPMI_VOLTAGE_CLASS
DECL|Init|member|SWPMI_InitTypeDef Init; /*!< SWPMI communication parameters */
DECL|Instance|member|SWPMI_TypeDef *Instance; /*!< SWPMI registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< SWPMI object */
DECL|MspDeInitCallback|member|void (*MspDeInitCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI MSP de-init callback */
DECL|MspInitCallback|member|void (*MspInitCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI MSP init callback */
DECL|RxBufferingMode|member|uint32_t RxBufferingMode; /*!< Specifies the reception buffering mode.
DECL|RxCpltCallback|member|void (*RxCpltCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI receive complete callback */
DECL|RxHalfCpltCallback|member|void (*RxHalfCpltCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI receive half complete callback */
DECL|RxXferCount|member|uint32_t RxXferCount; /*!< SWPMI Rx Transfer Counter */
DECL|RxXferSize|member|uint32_t RxXferSize; /*!< SWPMI Rx Transfer size */
DECL|SWPMI_FLAG_DEACTF|macro|SWPMI_FLAG_DEACTF
DECL|SWPMI_FLAG_RXBERF|macro|SWPMI_FLAG_RXBERF
DECL|SWPMI_FLAG_RXBFF|macro|SWPMI_FLAG_RXBFF
DECL|SWPMI_FLAG_RXNE|macro|SWPMI_FLAG_RXNE
DECL|SWPMI_FLAG_RXOVRF|macro|SWPMI_FLAG_RXOVRF
DECL|SWPMI_FLAG_SRF|macro|SWPMI_FLAG_SRF
DECL|SWPMI_FLAG_SUSP|macro|SWPMI_FLAG_SUSP
DECL|SWPMI_FLAG_TCF|macro|SWPMI_FLAG_TCF
DECL|SWPMI_FLAG_TXBEF|macro|SWPMI_FLAG_TXBEF
DECL|SWPMI_FLAG_TXE|macro|SWPMI_FLAG_TXE
DECL|SWPMI_FLAG_TXUNRF|macro|SWPMI_FLAG_TXUNRF
DECL|SWPMI_HandleTypeDef|typedef|}SWPMI_HandleTypeDef;
DECL|SWPMI_IT_RIE|macro|SWPMI_IT_RIE
DECL|SWPMI_IT_RXBERIE|macro|SWPMI_IT_RXBERIE
DECL|SWPMI_IT_RXBFIE|macro|SWPMI_IT_RXBFIE
DECL|SWPMI_IT_RXOVRIE|macro|SWPMI_IT_RXOVRIE
DECL|SWPMI_IT_SRIE|macro|SWPMI_IT_SRIE
DECL|SWPMI_IT_TCIE|macro|SWPMI_IT_TCIE
DECL|SWPMI_IT_TIE|macro|SWPMI_IT_TIE
DECL|SWPMI_IT_TXBEIE|macro|SWPMI_IT_TXBEIE
DECL|SWPMI_IT_TXUNRIE|macro|SWPMI_IT_TXUNRIE
DECL|SWPMI_InitTypeDef|typedef|}SWPMI_InitTypeDef;
DECL|SWPMI_RX_MULTI_SOFTWAREBUFFER|macro|SWPMI_RX_MULTI_SOFTWAREBUFFER
DECL|SWPMI_RX_NO_SOFTWAREBUFFER|macro|SWPMI_RX_NO_SOFTWAREBUFFER
DECL|SWPMI_RX_SINGLE_SOFTWAREBUFFER|macro|SWPMI_RX_SINGLE_SOFTWAREBUFFER
DECL|SWPMI_TX_MULTI_SOFTWAREBUFFER|macro|SWPMI_TX_MULTI_SOFTWAREBUFFER
DECL|SWPMI_TX_NO_SOFTWAREBUFFER|macro|SWPMI_TX_NO_SOFTWAREBUFFER
DECL|SWPMI_TX_SINGLE_SOFTWAREBUFFER|macro|SWPMI_TX_SINGLE_SOFTWAREBUFFER
DECL|SWPMI_VOLTAGE_CLASS_B|macro|SWPMI_VOLTAGE_CLASS_B
DECL|SWPMI_VOLTAGE_CLASS_C|macro|SWPMI_VOLTAGE_CLASS_C
DECL|State|member|__IO HAL_SWPMI_StateTypeDef State; /*!< SWPMI communication state */
DECL|TxBufferingMode|member|uint32_t TxBufferingMode; /*!< Specifies the transmission buffering mode.
DECL|TxCpltCallback|member|void (*TxCpltCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI transmit complete callback */
DECL|TxHalfCpltCallback|member|void (*TxHalfCpltCallback) (struct __SWPMI_HandleTypeDef *hswpmi); /*!< SWPMI transmit half complete callback */
DECL|TxXferCount|member|uint32_t TxXferCount; /*!< SWPMI Tx Transfer Counter */
DECL|TxXferSize|member|uint32_t TxXferSize; /*!< SWPMI Tx Transfer size */
DECL|VoltageClass|member|uint32_t VoltageClass; /*!< Specifies the SWP Voltage Class.
DECL|__HAL_SWPMI_CLEAR_FLAG|macro|__HAL_SWPMI_CLEAR_FLAG
DECL|__HAL_SWPMI_DISABLE_IT|macro|__HAL_SWPMI_DISABLE_IT
DECL|__HAL_SWPMI_DISABLE|macro|__HAL_SWPMI_DISABLE
DECL|__HAL_SWPMI_ENABLE_IT|macro|__HAL_SWPMI_ENABLE_IT
DECL|__HAL_SWPMI_ENABLE|macro|__HAL_SWPMI_ENABLE
DECL|__HAL_SWPMI_GET_FLAG|macro|__HAL_SWPMI_GET_FLAG
DECL|__HAL_SWPMI_GET_IT_SOURCE|macro|__HAL_SWPMI_GET_IT_SOURCE
DECL|__HAL_SWPMI_GET_IT|macro|__HAL_SWPMI_GET_IT
DECL|__HAL_SWPMI_RESET_HANDLE_STATE|macro|__HAL_SWPMI_RESET_HANDLE_STATE
DECL|__HAL_SWPMI_RESET_HANDLE_STATE|macro|__HAL_SWPMI_RESET_HANDLE_STATE
DECL|__STM32L4xx_HAL_SWPMI_H|macro|__STM32L4xx_HAL_SWPMI_H
DECL|__SWPMI_HandleTypeDef|struct|typedef struct __SWPMI_HandleTypeDef
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< SWPMI Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< SWPMI Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint32_t *pRxBuffPtr; /*!< Pointer to SWPMI Rx transfer Buffer */
DECL|pSWPMI_CallbackTypeDef|typedef|typedef void (*pSWPMI_CallbackTypeDef)(SWPMI_HandleTypeDef *hswpmi);
DECL|pTxBuffPtr|member|uint32_t *pTxBuffPtr; /*!< Pointer to SWPMI Tx transfer Buffer */
