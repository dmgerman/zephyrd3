DECL|HAL_SAI_Abort|function|HAL_StatusTypeDef HAL_SAI_Abort(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_DMAPause|function|HAL_StatusTypeDef HAL_SAI_DMAPause(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_DMAResume|function|HAL_StatusTypeDef HAL_SAI_DMAResume(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_DMAStop|function|HAL_StatusTypeDef HAL_SAI_DMAStop(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_DeInit|function|HAL_StatusTypeDef HAL_SAI_DeInit(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_DisableRxMuteMode|function|HAL_StatusTypeDef HAL_SAI_DisableRxMuteMode(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_DisableTxMuteMode|function|HAL_StatusTypeDef HAL_SAI_DisableTxMuteMode(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_EnableRxMuteMode|function|HAL_StatusTypeDef HAL_SAI_EnableRxMuteMode(SAI_HandleTypeDef *hsai, SAIcallback callback, uint16_t counter)
DECL|HAL_SAI_EnableTxMuteMode|function|HAL_StatusTypeDef HAL_SAI_EnableTxMuteMode(SAI_HandleTypeDef *hsai, uint16_t val)
DECL|HAL_SAI_ErrorCallback|function|__weak void HAL_SAI_ErrorCallback(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_GetError|function|uint32_t HAL_SAI_GetError(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_GetState|function|HAL_SAI_StateTypeDef HAL_SAI_GetState(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_IRQHandler|function|void HAL_SAI_IRQHandler(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_InitProtocol|function|HAL_StatusTypeDef HAL_SAI_InitProtocol(SAI_HandleTypeDef *hsai, uint32_t protocol, uint32_t datasize, uint32_t nbslot)
DECL|HAL_SAI_Init|function|HAL_StatusTypeDef HAL_SAI_Init(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_MspDeInit|function|__weak void HAL_SAI_MspDeInit(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_MspInit|function|__weak void HAL_SAI_MspInit(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_Receive_DMA|function|HAL_StatusTypeDef HAL_SAI_Receive_DMA(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size)
DECL|HAL_SAI_Receive_IT|function|HAL_StatusTypeDef HAL_SAI_Receive_IT(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size)
DECL|HAL_SAI_Receive|function|HAL_StatusTypeDef HAL_SAI_Receive(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SAI_RegisterCallback|function|HAL_StatusTypeDef HAL_SAI_RegisterCallback(SAI_HandleTypeDef *hsai, HAL_SAI_CallbackIDTypeDef CallbackID, pSAI_CallbackTypeDef pCallback)
DECL|HAL_SAI_RxCpltCallback|function|__weak void HAL_SAI_RxCpltCallback(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_RxHalfCpltCallback|function|__weak void HAL_SAI_RxHalfCpltCallback(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_Transmit_DMA|function|HAL_StatusTypeDef HAL_SAI_Transmit_DMA(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size)
DECL|HAL_SAI_Transmit_IT|function|HAL_StatusTypeDef HAL_SAI_Transmit_IT(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size)
DECL|HAL_SAI_Transmit|function|HAL_StatusTypeDef HAL_SAI_Transmit(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SAI_TxCpltCallback|function|__weak void HAL_SAI_TxCpltCallback(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_TxHalfCpltCallback|function|__weak void HAL_SAI_TxHalfCpltCallback(SAI_HandleTypeDef *hsai)
DECL|HAL_SAI_UnRegisterCallback|function|HAL_StatusTypeDef HAL_SAI_UnRegisterCallback(SAI_HandleTypeDef *hsai, HAL_SAI_CallbackIDTypeDef CallbackID)
DECL|SAI_DEFAULT_TIMEOUT|macro|SAI_DEFAULT_TIMEOUT
DECL|SAI_DMAAbort|function|static void SAI_DMAAbort(DMA_HandleTypeDef *hdma)
DECL|SAI_DMAError|function|static void SAI_DMAError(DMA_HandleTypeDef *hdma)
DECL|SAI_DMARxCplt|function|static void SAI_DMARxCplt(DMA_HandleTypeDef *hdma)
DECL|SAI_DMARxHalfCplt|function|static void SAI_DMARxHalfCplt(DMA_HandleTypeDef *hdma)
DECL|SAI_DMATxCplt|function|static void SAI_DMATxCplt(DMA_HandleTypeDef *hdma)
DECL|SAI_DMATxHalfCplt|function|static void SAI_DMATxHalfCplt(DMA_HandleTypeDef *hdma)
DECL|SAI_Disable|function|static HAL_StatusTypeDef SAI_Disable(SAI_HandleTypeDef *hsai)
DECL|SAI_FIFO_SIZE|macro|SAI_FIFO_SIZE
DECL|SAI_FillFifo|function|static void SAI_FillFifo(SAI_HandleTypeDef *hsai)
DECL|SAI_InitI2S|function|static HAL_StatusTypeDef SAI_InitI2S(SAI_HandleTypeDef *hsai, uint32_t protocol, uint32_t datasize, uint32_t nbslot)
DECL|SAI_InitPCM|function|static HAL_StatusTypeDef SAI_InitPCM(SAI_HandleTypeDef *hsai, uint32_t protocol, uint32_t datasize, uint32_t nbslot)
DECL|SAI_InterruptFlag|function|static uint32_t SAI_InterruptFlag(const SAI_HandleTypeDef *hsai, SAI_ModeTypedef mode)
DECL|SAI_LONG_TIMEOUT|macro|SAI_LONG_TIMEOUT
DECL|SAI_MODE_DMA|enumerator|SAI_MODE_DMA,
DECL|SAI_MODE_IT|enumerator|SAI_MODE_IT
DECL|SAI_ModeTypedef|typedef|} SAI_ModeTypedef;
DECL|SAI_Receive_IT16Bit|function|static void SAI_Receive_IT16Bit(SAI_HandleTypeDef *hsai)
DECL|SAI_Receive_IT32Bit|function|static void SAI_Receive_IT32Bit(SAI_HandleTypeDef *hsai)
DECL|SAI_Receive_IT8Bit|function|static void SAI_Receive_IT8Bit(SAI_HandleTypeDef *hsai)
DECL|SAI_Transmit_IT16Bit|function|static void SAI_Transmit_IT16Bit(SAI_HandleTypeDef *hsai)
DECL|SAI_Transmit_IT32Bit|function|static void SAI_Transmit_IT32Bit(SAI_HandleTypeDef *hsai)
DECL|SAI_Transmit_IT8Bit|function|static void SAI_Transmit_IT8Bit(SAI_HandleTypeDef *hsai)
