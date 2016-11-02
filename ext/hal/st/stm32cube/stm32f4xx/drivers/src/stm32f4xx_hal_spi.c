DECL|HAL_SPI_DMAPause|function|HAL_StatusTypeDef HAL_SPI_DMAPause(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_DMAResume|function|HAL_StatusTypeDef HAL_SPI_DMAResume(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_DMAStop|function|HAL_StatusTypeDef HAL_SPI_DMAStop(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_DeInit|function|HAL_StatusTypeDef HAL_SPI_DeInit(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_ErrorCallback|function|__weak void HAL_SPI_ErrorCallback(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_GetError|function|uint32_t HAL_SPI_GetError(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_GetState|function|HAL_SPI_StateTypeDef HAL_SPI_GetState(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_IRQHandler|function|void HAL_SPI_IRQHandler(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_Init|function|HAL_StatusTypeDef HAL_SPI_Init(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_MspDeInit|function|__weak void HAL_SPI_MspDeInit(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_MspInit|function|__weak void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_Receive_DMA|function|HAL_StatusTypeDef HAL_SPI_Receive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
DECL|HAL_SPI_Receive_IT|function|HAL_StatusTypeDef HAL_SPI_Receive_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
DECL|HAL_SPI_Receive|function|HAL_StatusTypeDef HAL_SPI_Receive(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SPI_RxCpltCallback|function|__weak void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_RxHalfCpltCallback|function|__weak void HAL_SPI_RxHalfCpltCallback(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_TransmitReceive_DMA|function|HAL_StatusTypeDef HAL_SPI_TransmitReceive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size)
DECL|HAL_SPI_TransmitReceive_IT|function|HAL_StatusTypeDef HAL_SPI_TransmitReceive_IT(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size)
DECL|HAL_SPI_TransmitReceive|function|HAL_StatusTypeDef HAL_SPI_TransmitReceive(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SPI_Transmit_DMA|function|HAL_StatusTypeDef HAL_SPI_Transmit_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
DECL|HAL_SPI_Transmit_IT|function|HAL_StatusTypeDef HAL_SPI_Transmit_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
DECL|HAL_SPI_Transmit|function|HAL_StatusTypeDef HAL_SPI_Transmit(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SPI_TxCpltCallback|function|__weak void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_TxHalfCpltCallback|function|__weak void HAL_SPI_TxHalfCpltCallback(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_TxRxCpltCallback|function|__weak void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi)
DECL|HAL_SPI_TxRxHalfCpltCallback|function|__weak void HAL_SPI_TxRxHalfCpltCallback(SPI_HandleTypeDef *hspi)
DECL|SPI_2linesRxISR_16BITCRC|function|static void SPI_2linesRxISR_16BITCRC(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_2linesRxISR_16BIT|function|static void SPI_2linesRxISR_16BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_2linesRxISR_8BITCRC|function|static void SPI_2linesRxISR_8BITCRC(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_2linesRxISR_8BIT|function|static void SPI_2linesRxISR_8BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_2linesTxISR_16BIT|function|static void SPI_2linesTxISR_16BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_2linesTxISR_8BIT|function|static void SPI_2linesTxISR_8BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_CheckFlag_BSY|function|static HAL_StatusTypeDef SPI_CheckFlag_BSY(SPI_HandleTypeDef *hspi, uint32_t Timeout, uint32_t Tickstart)
DECL|SPI_CloseRxTx_ISR|function|static void SPI_CloseRxTx_ISR(SPI_HandleTypeDef *hspi)
DECL|SPI_CloseRx_ISR|function|static void SPI_CloseRx_ISR(SPI_HandleTypeDef *hspi)
DECL|SPI_CloseTx_ISR|function|static void SPI_CloseTx_ISR(SPI_HandleTypeDef *hspi)
DECL|SPI_DEFAULT_TIMEOUT|macro|SPI_DEFAULT_TIMEOUT
DECL|SPI_DMAAbortOnError|function|static void SPI_DMAAbortOnError(DMA_HandleTypeDef *hdma)
DECL|SPI_DMAError|function|static void SPI_DMAError(DMA_HandleTypeDef *hdma)
DECL|SPI_DMAHalfReceiveCplt|function|static void SPI_DMAHalfReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|SPI_DMAHalfTransmitCplt|function|static void SPI_DMAHalfTransmitCplt(DMA_HandleTypeDef *hdma)
DECL|SPI_DMAHalfTransmitReceiveCplt|function|static void SPI_DMAHalfTransmitReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|SPI_DMAReceiveCplt|function|static void SPI_DMAReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|SPI_DMATransmitCplt|function|static void SPI_DMATransmitCplt(DMA_HandleTypeDef *hdma)
DECL|SPI_DMATransmitReceiveCplt|function|static void SPI_DMATransmitReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|SPI_RxISR_16BITCRC|function|static void SPI_RxISR_16BITCRC(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_RxISR_16BIT|function|static void SPI_RxISR_16BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_RxISR_8BITCRC|function|static void SPI_RxISR_8BITCRC(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_RxISR_8BIT|function|static void SPI_RxISR_8BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_TxISR_16BIT|function|static void SPI_TxISR_16BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_TxISR_8BIT|function|static void SPI_TxISR_8BIT(struct __SPI_HandleTypeDef *hspi)
DECL|SPI_WaitFlagStateUntilTimeout|function|static HAL_StatusTypeDef SPI_WaitFlagStateUntilTimeout(SPI_HandleTypeDef *hspi, uint32_t Flag, uint32_t State, uint32_t Timeout, uint32_t Tickstart)
