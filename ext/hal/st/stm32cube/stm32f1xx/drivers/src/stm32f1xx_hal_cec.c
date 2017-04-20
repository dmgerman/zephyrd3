DECL|CEC_CFGR_FIELDS|macro|CEC_CFGR_FIELDS
DECL|CEC_ESR_ALL_ERROR|macro|CEC_ESR_ALL_ERROR
DECL|CEC_FLAG_RECEIVE_MASK|macro|CEC_FLAG_RECEIVE_MASK
DECL|CEC_FLAG_TRANSMIT_MASK|macro|CEC_FLAG_TRANSMIT_MASK
DECL|CEC_RXXFERSIZE_INITIALIZE|macro|CEC_RXXFERSIZE_INITIALIZE
DECL|CEC_Receive_IT|function|static HAL_StatusTypeDef CEC_Receive_IT(CEC_HandleTypeDef *hcec)
DECL|CEC_Transmit_IT|function|static HAL_StatusTypeDef CEC_Transmit_IT(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_ChangeRxBuffer|function|void HAL_CEC_ChangeRxBuffer(CEC_HandleTypeDef *hcec, uint8_t* Rxbuffer)
DECL|HAL_CEC_DeInit|function|HAL_StatusTypeDef HAL_CEC_DeInit(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_ErrorCallback|function|__weak void HAL_CEC_ErrorCallback(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_GetError|function|uint32_t HAL_CEC_GetError(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_GetLastReceivedFrameSize|function|uint32_t HAL_CEC_GetLastReceivedFrameSize(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_GetState|function|HAL_CEC_StateTypeDef HAL_CEC_GetState(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_IRQHandler|function|void HAL_CEC_IRQHandler(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_Init|function|HAL_StatusTypeDef HAL_CEC_Init(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_MspDeInit|function|__weak void HAL_CEC_MspDeInit(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_MspInit|function|__weak void HAL_CEC_MspInit(CEC_HandleTypeDef *hcec)
DECL|HAL_CEC_RxCpltCallback|function|__weak void HAL_CEC_RxCpltCallback(CEC_HandleTypeDef *hcec, uint32_t RxFrameSize)
DECL|HAL_CEC_SetDeviceAddress|function|HAL_StatusTypeDef HAL_CEC_SetDeviceAddress(CEC_HandleTypeDef *hcec, uint16_t CEC_OwnAddress)
DECL|HAL_CEC_Transmit_IT|function|HAL_StatusTypeDef HAL_CEC_Transmit_IT(CEC_HandleTypeDef *hcec, uint8_t InitiatorAddress,uint8_t DestinationAddress, uint8_t *pData, uint32_t Size)
DECL|HAL_CEC_TxCpltCallback|function|__weak void HAL_CEC_TxCpltCallback(CEC_HandleTypeDef *hcec)
