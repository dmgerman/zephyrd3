DECL|AudioFreq|member|uint32_t AudioFreq; /*!< Specifies the frequency selected for the I2S communication.
DECL|CPOL|member|uint32_t CPOL; /*!< Specifies the idle state of the I2S clock.
DECL|ClockSource|member|uint32_t ClockSource; /*!< Specifies the I2S Clock Source.
DECL|DataFormat|member|uint32_t DataFormat; /*!< Specifies the data format for the I2S communication.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* I2S Error code */
DECL|HAL_I2SEX_ERROR_OVR|macro|HAL_I2SEX_ERROR_OVR
DECL|HAL_I2SEX_ERROR_UDR|macro|HAL_I2SEX_ERROR_UDR
DECL|HAL_I2S_ERROR_DMA|macro|HAL_I2S_ERROR_DMA
DECL|HAL_I2S_ERROR_FRE|macro|HAL_I2S_ERROR_FRE
DECL|HAL_I2S_ERROR_NONE|macro|HAL_I2S_ERROR_NONE
DECL|HAL_I2S_ERROR_OVR|macro|HAL_I2S_ERROR_OVR
DECL|HAL_I2S_ERROR_UDR|macro|HAL_I2S_ERROR_UDR
DECL|HAL_I2S_STATE_BUSY_RX|enumerator|HAL_I2S_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing */
DECL|HAL_I2S_STATE_BUSY_TX_RX|enumerator|HAL_I2S_STATE_BUSY_TX_RX = 0x32U, /*!< Data Transmission and Reception process is ongoing */
DECL|HAL_I2S_STATE_BUSY_TX|enumerator|HAL_I2S_STATE_BUSY_TX = 0x12U, /*!< Data Transmission process is ongoing */
DECL|HAL_I2S_STATE_BUSY|enumerator|HAL_I2S_STATE_BUSY = 0x02U, /*!< I2S internal process is ongoing */
DECL|HAL_I2S_STATE_ERROR|enumerator|HAL_I2S_STATE_ERROR = 0x04U /*!< I2S error state */
DECL|HAL_I2S_STATE_READY|enumerator|HAL_I2S_STATE_READY = 0x01U, /*!< I2S initialized and ready for use */
DECL|HAL_I2S_STATE_RESET|enumerator|HAL_I2S_STATE_RESET = 0x00U, /*!< I2S not yet initialized or disabled */
DECL|HAL_I2S_STATE_TIMEOUT|enumerator|HAL_I2S_STATE_TIMEOUT = 0x03U, /*!< I2S timeout state */
DECL|HAL_I2S_StateTypeDef|typedef|}HAL_I2S_StateTypeDef;
DECL|I2S_AUDIOFREQ_11K|macro|I2S_AUDIOFREQ_11K
DECL|I2S_AUDIOFREQ_16K|macro|I2S_AUDIOFREQ_16K
DECL|I2S_AUDIOFREQ_192K|macro|I2S_AUDIOFREQ_192K
DECL|I2S_AUDIOFREQ_22K|macro|I2S_AUDIOFREQ_22K
DECL|I2S_AUDIOFREQ_32K|macro|I2S_AUDIOFREQ_32K
DECL|I2S_AUDIOFREQ_44K|macro|I2S_AUDIOFREQ_44K
DECL|I2S_AUDIOFREQ_48K|macro|I2S_AUDIOFREQ_48K
DECL|I2S_AUDIOFREQ_8K|macro|I2S_AUDIOFREQ_8K
DECL|I2S_AUDIOFREQ_96K|macro|I2S_AUDIOFREQ_96K
DECL|I2S_AUDIOFREQ_DEFAULT|macro|I2S_AUDIOFREQ_DEFAULT
DECL|I2S_CLOCK_EXTERNAL|macro|I2S_CLOCK_EXTERNAL
DECL|I2S_CLOCK_PLL|macro|I2S_CLOCK_PLL
DECL|I2S_CPOL_HIGH|macro|I2S_CPOL_HIGH
DECL|I2S_CPOL_LOW|macro|I2S_CPOL_LOW
DECL|I2S_DATAFORMAT_16B_EXTENDED|macro|I2S_DATAFORMAT_16B_EXTENDED
DECL|I2S_DATAFORMAT_16B|macro|I2S_DATAFORMAT_16B
DECL|I2S_DATAFORMAT_24B|macro|I2S_DATAFORMAT_24B
DECL|I2S_DATAFORMAT_32B|macro|I2S_DATAFORMAT_32B
DECL|I2S_FLAG_BSY|macro|I2S_FLAG_BSY
DECL|I2S_FLAG_CHSIDE|macro|I2S_FLAG_CHSIDE
DECL|I2S_FLAG_FRE|macro|I2S_FLAG_FRE
DECL|I2S_FLAG_OVR|macro|I2S_FLAG_OVR
DECL|I2S_FLAG_RXNE|macro|I2S_FLAG_RXNE
DECL|I2S_FLAG_TXE|macro|I2S_FLAG_TXE
DECL|I2S_FLAG_UDR|macro|I2S_FLAG_UDR
DECL|I2S_HandleTypeDef|typedef|}I2S_HandleTypeDef;
DECL|I2S_IT_ERR|macro|I2S_IT_ERR
DECL|I2S_IT_RXNE|macro|I2S_IT_RXNE
DECL|I2S_IT_TXE|macro|I2S_IT_TXE
DECL|I2S_InitTypeDef|typedef|}I2S_InitTypeDef;
DECL|I2S_MCLKOUTPUT_DISABLE|macro|I2S_MCLKOUTPUT_DISABLE
DECL|I2S_MCLKOUTPUT_ENABLE|macro|I2S_MCLKOUTPUT_ENABLE
DECL|I2S_MODE_MASTER_RX|macro|I2S_MODE_MASTER_RX
DECL|I2S_MODE_MASTER_TX|macro|I2S_MODE_MASTER_TX
DECL|I2S_MODE_SLAVE_RX|macro|I2S_MODE_SLAVE_RX
DECL|I2S_MODE_SLAVE_TX|macro|I2S_MODE_SLAVE_TX
DECL|I2S_STANDARD_LSB|macro|I2S_STANDARD_LSB
DECL|I2S_STANDARD_MSB|macro|I2S_STANDARD_MSB
DECL|I2S_STANDARD_PCM_LONG|macro|I2S_STANDARD_PCM_LONG
DECL|I2S_STANDARD_PCM_SHORT|macro|I2S_STANDARD_PCM_SHORT
DECL|I2S_STANDARD_PHILIPS|macro|I2S_STANDARD_PHILIPS
DECL|IS_I2S_AUDIO_FREQ|macro|IS_I2S_AUDIO_FREQ
DECL|IS_I2S_CLOCKSOURCE|macro|IS_I2S_CLOCKSOURCE
DECL|IS_I2S_CPOL|macro|IS_I2S_CPOL
DECL|IS_I2S_DATA_FORMAT|macro|IS_I2S_DATA_FORMAT
DECL|IS_I2S_MCLK_OUTPUT|macro|IS_I2S_MCLK_OUTPUT
DECL|IS_I2S_MODE|macro|IS_I2S_MODE
DECL|IS_I2S_STANDARD|macro|IS_I2S_STANDARD
DECL|Init|member|I2S_InitTypeDef Init; /* I2S communication parameters */
DECL|Instance|member|SPI_TypeDef *Instance; /* I2S registers base address */
DECL|Lock|member|__IO HAL_LockTypeDef Lock; /* I2S locking object */
DECL|MCLKOutput|member|uint32_t MCLKOutput; /*!< Specifies whether the I2S MCLK output is enabled or not.
DECL|Mode|member|uint32_t Mode; /*!< Specifies the I2S operating mode.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /* I2S Rx transfer counter */
DECL|RxXferSize|member|__IO uint16_t RxXferSize; /* I2S Rx transfer size */
DECL|Standard|member|uint32_t Standard; /*!< Specifies the standard used for the I2S communication.
DECL|State|member|__IO HAL_I2S_StateTypeDef State; /* I2S communication state */
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /* I2S Tx transfer Counter */
DECL|TxXferSize|member|__IO uint16_t TxXferSize; /* I2S Tx transfer size */
DECL|__HAL_I2S_CLEAR_OVRFLAG|macro|__HAL_I2S_CLEAR_OVRFLAG
DECL|__HAL_I2S_CLEAR_UDRFLAG|macro|__HAL_I2S_CLEAR_UDRFLAG
DECL|__HAL_I2S_DISABLE_IT|macro|__HAL_I2S_DISABLE_IT
DECL|__HAL_I2S_DISABLE|macro|__HAL_I2S_DISABLE
DECL|__HAL_I2S_ENABLE_IT|macro|__HAL_I2S_ENABLE_IT
DECL|__HAL_I2S_ENABLE|macro|__HAL_I2S_ENABLE
DECL|__HAL_I2S_GET_FLAG|macro|__HAL_I2S_GET_FLAG
DECL|__HAL_I2S_GET_IT_SOURCE|macro|__HAL_I2S_GET_IT_SOURCE
DECL|__HAL_I2S_RESET_HANDLE_STATE|macro|__HAL_I2S_RESET_HANDLE_STATE
DECL|__STM32F2xx_HAL_I2S_H|macro|__STM32F2xx_HAL_I2S_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /* I2S Rx DMA handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /* I2S Tx DMA handle parameters */
DECL|pRxBuffPtr|member|uint16_t *pRxBuffPtr; /* Pointer to I2S Rx transfer buffer */
DECL|pTxBuffPtr|member|uint16_t *pTxBuffPtr; /* Pointer to I2S Tx transfer buffer */
