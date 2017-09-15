DECL|HAL_I2SEx_TransmitReceive_DMA|function|HAL_StatusTypeDef HAL_I2SEx_TransmitReceive_DMA(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData, uint16_t Size)
DECL|HAL_I2SEx_TransmitReceive_IT|function|HAL_StatusTypeDef HAL_I2SEx_TransmitReceive_IT(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData, uint16_t Size)
DECL|HAL_I2SEx_TransmitReceive|function|HAL_StatusTypeDef HAL_I2SEx_TransmitReceive(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2S_DMAPause|function|HAL_StatusTypeDef HAL_I2S_DMAPause(I2S_HandleTypeDef *hi2s)
DECL|HAL_I2S_DMAResume|function|HAL_StatusTypeDef HAL_I2S_DMAResume(I2S_HandleTypeDef *hi2s)
DECL|HAL_I2S_DMAStop|function|HAL_StatusTypeDef HAL_I2S_DMAStop(I2S_HandleTypeDef *hi2s)
DECL|HAL_I2S_FullDuplex_IRQHandler|function|void HAL_I2S_FullDuplex_IRQHandler(I2S_HandleTypeDef *hi2s)
DECL|HAL_I2S_Init|function|HAL_StatusTypeDef HAL_I2S_Init(I2S_HandleTypeDef *hi2s)
DECL|HAL_I2S_TxRxCpltCallback|function|__weak void HAL_I2S_TxRxCpltCallback(I2S_HandleTypeDef *hi2s)
DECL|HAL_I2S_TxRxHalfCpltCallback|function|__weak void HAL_I2S_TxRxHalfCpltCallback(I2S_HandleTypeDef *hi2s)
DECL|I2S_FullDuplexRx_IT|function|static void I2S_FullDuplexRx_IT(I2S_HandleTypeDef *hi2s, I2S_UseTypeDef i2sUsed)
DECL|I2S_FullDuplexTx_IT|function|static void I2S_FullDuplexTx_IT(I2S_HandleTypeDef *hi2s, I2S_UseTypeDef i2sUsed)
DECL|I2S_FullDuplexWaitFlagStateUntilTimeout|function|static HAL_StatusTypeDef I2S_FullDuplexWaitFlagStateUntilTimeout(I2S_HandleTypeDef *hi2s, uint32_t Flag, uint32_t State, uint32_t Timeout, I2S_UseTypeDef i2sUsed)
DECL|I2S_TxRxDMACplt|function|static void I2S_TxRxDMACplt(DMA_HandleTypeDef *hdma)
DECL|I2S_TxRxDMAError|function|static void I2S_TxRxDMAError(DMA_HandleTypeDef *hdma)
DECL|I2S_TxRxDMAHalfCplt|function|static void I2S_TxRxDMAHalfCplt(DMA_HandleTypeDef *hdma)
DECL|I2S_USE_I2SEXT|enumerator|I2S_USE_I2SEXT = 0x01 /*!< I2Sx_ext should be used */
DECL|I2S_USE_I2S|enumerator|I2S_USE_I2S = 0x00U, /*!< I2Sx should be used */
DECL|I2S_UseTypeDef|typedef|}I2S_UseTypeDef;
