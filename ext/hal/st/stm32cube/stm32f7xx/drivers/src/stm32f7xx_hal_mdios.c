DECL|HAL_MDIOS_ClearReadRegAddress|function|HAL_StatusTypeDef HAL_MDIOS_ClearReadRegAddress(MDIOS_HandleTypeDef *hmdios, uint32_t RegNum)
DECL|HAL_MDIOS_ClearWriteRegAddress|function|HAL_StatusTypeDef HAL_MDIOS_ClearWriteRegAddress(MDIOS_HandleTypeDef *hmdios, uint32_t RegNum)
DECL|HAL_MDIOS_DeInit|function|HAL_StatusTypeDef HAL_MDIOS_DeInit(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_EnableEvents|function|HAL_StatusTypeDef HAL_MDIOS_EnableEvents(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_ErrorCallback|function|__weak void HAL_MDIOS_ErrorCallback(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_GetError|function|uint32_t HAL_MDIOS_GetError(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_GetReadRegAddress|function|uint32_t HAL_MDIOS_GetReadRegAddress(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_GetState|function|HAL_MDIOS_StateTypeDef HAL_MDIOS_GetState(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_GetWrittenRegAddress|function|uint32_t HAL_MDIOS_GetWrittenRegAddress(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_IRQHandler|function|void HAL_MDIOS_IRQHandler(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_Init|function|HAL_StatusTypeDef HAL_MDIOS_Init(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_MspDeInit|function|__weak void HAL_MDIOS_MspDeInit(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_MspInit|function|__weak void HAL_MDIOS_MspInit(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_ReadCpltCallback|function|__weak void HAL_MDIOS_ReadCpltCallback(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_ReadReg|function|HAL_StatusTypeDef HAL_MDIOS_ReadReg(MDIOS_HandleTypeDef *hmdios, uint32_t RegNum, uint16_t *pData)
DECL|HAL_MDIOS_WakeUpCallback|function|__weak void HAL_MDIOS_WakeUpCallback(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_WriteCpltCallback|function|__weak void HAL_MDIOS_WriteCpltCallback(MDIOS_HandleTypeDef *hmdios)
DECL|HAL_MDIOS_WriteReg|function|HAL_StatusTypeDef HAL_MDIOS_WriteReg(MDIOS_HandleTypeDef *hmdios, uint32_t RegNum, uint16_t Data)
DECL|MDIOS_ALL_ERRORS_FLAG|macro|MDIOS_ALL_ERRORS_FLAG
DECL|MDIOS_ALL_REG_FLAG|macro|MDIOS_ALL_REG_FLAG
DECL|MDIOS_DIN_BASE_ADDR|macro|MDIOS_DIN_BASE_ADDR
DECL|MDIOS_DOUT_BASE_ADDR|macro|MDIOS_DOUT_BASE_ADDR
DECL|MDIOS_PORT_ADDRESS_SHIFT|macro|MDIOS_PORT_ADDRESS_SHIFT
