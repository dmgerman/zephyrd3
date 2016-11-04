DECL|ChannelSelection|member|uint32_t ChannelSelection; /*!< Specifies whether the control flow will take the channel status from channel A or B.
DECL|ChannelStatusMask|member|uint32_t ChannelStatusMask; /*!< Specifies whether the channel status and user bits are copied or not into the received frame.
DECL|ChannelStatusMask|member|uint32_t ChannelStatusMask; /*!< Specifies whether the channel status and user bits are copied or not into the received frame.
DECL|CsXferCount|member|__IO uint16_t CsXferCount; /* SPDIFRX Rx transfer counter
DECL|CsXferSize|member|__IO uint16_t CsXferSize; /* SPDIFRX Rx transfer size */
DECL|DataFormat|member|uint32_t DataFormat; /*!< Specifies the Data samples format (LSB, MSB, ...).
DECL|DataFormat|member|uint32_t DataFormat; /*!< Specifies the Data samples format (LSB, MSB, ...).
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* SPDIFRX Error code */
DECL|HAL_SPDIFRX_ERROR_DMA|macro|HAL_SPDIFRX_ERROR_DMA
DECL|HAL_SPDIFRX_ERROR_NONE|macro|HAL_SPDIFRX_ERROR_NONE
DECL|HAL_SPDIFRX_ERROR_OVR|macro|HAL_SPDIFRX_ERROR_OVR
DECL|HAL_SPDIFRX_ERROR_PE|macro|HAL_SPDIFRX_ERROR_PE
DECL|HAL_SPDIFRX_ERROR_TIMEOUT|macro|HAL_SPDIFRX_ERROR_TIMEOUT
DECL|HAL_SPDIFRX_ERROR_UNKNOWN|macro|HAL_SPDIFRX_ERROR_UNKNOWN
DECL|HAL_SPDIFRX_STATE_BUSY_CX|enumerator|HAL_SPDIFRX_STATE_BUSY_CX = 0x04U, /*!< SPDIFRX internal Control Flow RX process is ongoing */
DECL|HAL_SPDIFRX_STATE_BUSY_RX|enumerator|HAL_SPDIFRX_STATE_BUSY_RX = 0x03U, /*!< SPDIFRX internal Data Flow RX process is ongoing */
DECL|HAL_SPDIFRX_STATE_BUSY|enumerator|HAL_SPDIFRX_STATE_BUSY = 0x02U, /*!< SPDIFRX internal process is ongoing */
DECL|HAL_SPDIFRX_STATE_ERROR|enumerator|HAL_SPDIFRX_STATE_ERROR = 0x07U /*!< SPDIFRX error state */
DECL|HAL_SPDIFRX_STATE_READY|enumerator|HAL_SPDIFRX_STATE_READY = 0x01U, /*!< SPDIFRX initialized and ready for use */
DECL|HAL_SPDIFRX_STATE_RESET|enumerator|HAL_SPDIFRX_STATE_RESET = 0x00U, /*!< SPDIFRX not yet initialized or disabled */
DECL|HAL_SPDIFRX_StateTypeDef|typedef|}HAL_SPDIFRX_StateTypeDef;
DECL|IS_CHANNEL_STATUS_MASK|macro|IS_CHANNEL_STATUS_MASK
DECL|IS_PARITY_ERROR_MASK|macro|IS_PARITY_ERROR_MASK
DECL|IS_PREAMBLE_TYPE_MASK|macro|IS_PREAMBLE_TYPE_MASK
DECL|IS_SPDIFRX_CHANNEL|macro|IS_SPDIFRX_CHANNEL
DECL|IS_SPDIFRX_DATA_FORMAT|macro|IS_SPDIFRX_DATA_FORMAT
DECL|IS_SPDIFRX_INPUT_SELECT|macro|IS_SPDIFRX_INPUT_SELECT
DECL|IS_SPDIFRX_MAX_RETRIES|macro|IS_SPDIFRX_MAX_RETRIES
DECL|IS_SPDIFRX_WAIT_FOR_ACTIVITY|macro|IS_SPDIFRX_WAIT_FOR_ACTIVITY
DECL|IS_STEREO_MODE|macro|IS_STEREO_MODE
DECL|IS_VALIDITY_MASK|macro|IS_VALIDITY_MASK
DECL|Init|member|SPDIFRX_InitTypeDef Init; /* SPDIFRX communication parameters */
DECL|InputSelection|member|uint32_t InputSelection; /*!< Specifies the SPDIF input selection.
DECL|Instance|member|SPDIFRX_TypeDef *Instance; /* SPDIFRX registers base address */
DECL|Lock|member|__IO HAL_LockTypeDef Lock; /* SPDIFRX locking object */
DECL|ParityErrorMask|member|uint32_t ParityErrorMask; /*!< Specifies whether the parity error bit is copied or not into the received frame.
DECL|ParityErrorMask|member|uint32_t ParityErrorMask; /*!< Specifies whether the parity error bit is copied or not into the received frame.
DECL|PreambleTypeMask|member|uint32_t PreambleTypeMask; /*!< Specifies whether The preamble type bits are copied or not into the received frame.
DECL|PreambleTypeMask|member|uint32_t PreambleTypeMask; /*!< Specifies whether The preamble type bits are copied or not into the received frame.
DECL|Retries|member|uint32_t Retries; /*!< Specifies the Maximum allowed re-tries during synchronization phase.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /* SPDIFRX Rx transfer counter
DECL|RxXferSize|member|__IO uint16_t RxXferSize; /* SPDIFRX Rx transfer size */
DECL|SPDIFRX_CHANNELSTATUS_OFF|macro|SPDIFRX_CHANNELSTATUS_OFF
DECL|SPDIFRX_CHANNELSTATUS_ON|macro|SPDIFRX_CHANNELSTATUS_ON
DECL|SPDIFRX_CHANNEL_A|macro|SPDIFRX_CHANNEL_A
DECL|SPDIFRX_CHANNEL_B|macro|SPDIFRX_CHANNEL_B
DECL|SPDIFRX_DATAFORMAT_32BITS|macro|SPDIFRX_DATAFORMAT_32BITS
DECL|SPDIFRX_DATAFORMAT_LSB|macro|SPDIFRX_DATAFORMAT_LSB
DECL|SPDIFRX_DATAFORMAT_MSB|macro|SPDIFRX_DATAFORMAT_MSB
DECL|SPDIFRX_FLAG_CSRNE|macro|SPDIFRX_FLAG_CSRNE
DECL|SPDIFRX_FLAG_FERR|macro|SPDIFRX_FLAG_FERR
DECL|SPDIFRX_FLAG_OVR|macro|SPDIFRX_FLAG_OVR
DECL|SPDIFRX_FLAG_PERR|macro|SPDIFRX_FLAG_PERR
DECL|SPDIFRX_FLAG_RXNE|macro|SPDIFRX_FLAG_RXNE
DECL|SPDIFRX_FLAG_SBD|macro|SPDIFRX_FLAG_SBD
DECL|SPDIFRX_FLAG_SERR|macro|SPDIFRX_FLAG_SERR
DECL|SPDIFRX_FLAG_SYNCD|macro|SPDIFRX_FLAG_SYNCD
DECL|SPDIFRX_FLAG_TERR|macro|SPDIFRX_FLAG_TERR
DECL|SPDIFRX_HandleTypeDef|typedef|}SPDIFRX_HandleTypeDef;
DECL|SPDIFRX_INPUT_IN0|macro|SPDIFRX_INPUT_IN0
DECL|SPDIFRX_INPUT_IN1|macro|SPDIFRX_INPUT_IN1
DECL|SPDIFRX_INPUT_IN2|macro|SPDIFRX_INPUT_IN2
DECL|SPDIFRX_INPUT_IN3|macro|SPDIFRX_INPUT_IN3
DECL|SPDIFRX_IT_CSRNE|macro|SPDIFRX_IT_CSRNE
DECL|SPDIFRX_IT_IFEIE|macro|SPDIFRX_IT_IFEIE
DECL|SPDIFRX_IT_OVRIE|macro|SPDIFRX_IT_OVRIE
DECL|SPDIFRX_IT_PERRIE|macro|SPDIFRX_IT_PERRIE
DECL|SPDIFRX_IT_RXNE|macro|SPDIFRX_IT_RXNE
DECL|SPDIFRX_IT_SBLKIE|macro|SPDIFRX_IT_SBLKIE
DECL|SPDIFRX_IT_SYNCDIE|macro|SPDIFRX_IT_SYNCDIE
DECL|SPDIFRX_InitTypeDef|typedef|}SPDIFRX_InitTypeDef;
DECL|SPDIFRX_MAXRETRIES_15|macro|SPDIFRX_MAXRETRIES_15
DECL|SPDIFRX_MAXRETRIES_3|macro|SPDIFRX_MAXRETRIES_3
DECL|SPDIFRX_MAXRETRIES_63|macro|SPDIFRX_MAXRETRIES_63
DECL|SPDIFRX_MAXRETRIES_NONE|macro|SPDIFRX_MAXRETRIES_NONE
DECL|SPDIFRX_PARITYERRORMASK_OFF|macro|SPDIFRX_PARITYERRORMASK_OFF
DECL|SPDIFRX_PARITYERRORMASK_ON|macro|SPDIFRX_PARITYERRORMASK_ON
DECL|SPDIFRX_PREAMBLETYPEMASK_OFF|macro|SPDIFRX_PREAMBLETYPEMASK_OFF
DECL|SPDIFRX_PREAMBLETYPEMASK_ON|macro|SPDIFRX_PREAMBLETYPEMASK_ON
DECL|SPDIFRX_STATE_IDLE|macro|SPDIFRX_STATE_IDLE
DECL|SPDIFRX_STATE_RCV|macro|SPDIFRX_STATE_RCV
DECL|SPDIFRX_STATE_SYNC|macro|SPDIFRX_STATE_SYNC
DECL|SPDIFRX_STEREOMODE_DISABLE|macro|SPDIFRX_STEREOMODE_DISABLE
DECL|SPDIFRX_STEREOMODE_ENABLE|macro|SPDIFRX_STEREOMODE_ENABLE
DECL|SPDIFRX_SetDataFormatTypeDef|typedef|}SPDIFRX_SetDataFormatTypeDef;
DECL|SPDIFRX_VALIDITYMASK_OFF|macro|SPDIFRX_VALIDITYMASK_OFF
DECL|SPDIFRX_VALIDITYMASK_ON|macro|SPDIFRX_VALIDITYMASK_ON
DECL|SPDIFRX_WAITFORACTIVITY_OFF|macro|SPDIFRX_WAITFORACTIVITY_OFF
DECL|SPDIFRX_WAITFORACTIVITY_ON|macro|SPDIFRX_WAITFORACTIVITY_ON
DECL|State|member|__IO HAL_SPDIFRX_StateTypeDef State; /* SPDIFRX communication state */
DECL|StereoMode|member|uint32_t StereoMode; /*!< Specifies whether the peripheral is in stereo or mono mode.
DECL|StereoMode|member|uint32_t StereoMode; /*!< Specifies whether the peripheral is in stereo or mono mode.
DECL|ValidityBitMask|member|uint32_t ValidityBitMask; /*!< Specifies whether the validity bit is copied or not into the received frame.
DECL|ValidityBitMask|member|uint32_t ValidityBitMask; /*!< Specifies whether the validity bit is copied or not into the received frame.
DECL|WaitForActivity|member|uint32_t WaitForActivity; /*!< Specifies the wait for activity on SPDIF selected input.
DECL|__HAL_SPDIFRX_CLEAR_IT|macro|__HAL_SPDIFRX_CLEAR_IT
DECL|__HAL_SPDIFRX_DISABLE_IT|macro|__HAL_SPDIFRX_DISABLE_IT
DECL|__HAL_SPDIFRX_ENABLE_IT|macro|__HAL_SPDIFRX_ENABLE_IT
DECL|__HAL_SPDIFRX_GET_FLAG|macro|__HAL_SPDIFRX_GET_FLAG
DECL|__HAL_SPDIFRX_GET_IT_SOURCE|macro|__HAL_SPDIFRX_GET_IT_SOURCE
DECL|__HAL_SPDIFRX_IDLE|macro|__HAL_SPDIFRX_IDLE
DECL|__HAL_SPDIFRX_RCV|macro|__HAL_SPDIFRX_RCV
DECL|__HAL_SPDIFRX_RESET_HANDLE_STATE|macro|__HAL_SPDIFRX_RESET_HANDLE_STATE
DECL|__HAL_SPDIFRX_SYNC|macro|__HAL_SPDIFRX_SYNC
DECL|__STM32F7xx_HAL_SPDIFRX_H|macro|__STM32F7xx_HAL_SPDIFRX_H
DECL|hdmaCsRx|member|DMA_HandleTypeDef *hdmaCsRx; /* SPDIFRX EC60958_channel_status and user_information DMA handle parameters */
DECL|hdmaDrRx|member|DMA_HandleTypeDef *hdmaDrRx; /* SPDIFRX Rx DMA handle parameters */
DECL|pCsBuffPtr|member|uint32_t *pCsBuffPtr; /* Pointer to SPDIFRX Cx transfer buffer */
DECL|pRxBuffPtr|member|uint32_t *pRxBuffPtr; /* Pointer to SPDIFRX Rx transfer buffer */
