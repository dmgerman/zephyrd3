DECL|SDIO_DataConfig|function|HAL_StatusTypeDef SDIO_DataConfig(SDIO_TypeDef *SDIOx, SDIO_DataInitTypeDef* Data)
DECL|SDIO_GetCommandResponse|function|uint8_t SDIO_GetCommandResponse(SDIO_TypeDef *SDIOx)
DECL|SDIO_GetDataCounter|function|uint32_t SDIO_GetDataCounter(SDIO_TypeDef *SDIOx)
DECL|SDIO_GetFIFOCount|function|uint32_t SDIO_GetFIFOCount(SDIO_TypeDef *SDIOx)
DECL|SDIO_GetPowerState|function|uint32_t SDIO_GetPowerState(SDIO_TypeDef *SDIOx)
DECL|SDIO_GetResponse|function|uint32_t SDIO_GetResponse(SDIO_TypeDef *SDIOx, uint32_t Response)
DECL|SDIO_Init|function|HAL_StatusTypeDef SDIO_Init(SDIO_TypeDef *SDIOx, SDIO_InitTypeDef Init)
DECL|SDIO_PowerState_OFF|function|HAL_StatusTypeDef SDIO_PowerState_OFF(SDIO_TypeDef *SDIOx)
DECL|SDIO_PowerState_ON|function|HAL_StatusTypeDef SDIO_PowerState_ON(SDIO_TypeDef *SDIOx)
DECL|SDIO_ReadFIFO|function|uint32_t SDIO_ReadFIFO(SDIO_TypeDef *SDIOx)
DECL|SDIO_SendCommand|function|HAL_StatusTypeDef SDIO_SendCommand(SDIO_TypeDef *SDIOx, SDIO_CmdInitTypeDef *Command)
DECL|SDIO_SetSDIOReadWaitMode|function|HAL_StatusTypeDef SDIO_SetSDIOReadWaitMode(SDIO_TypeDef *SDIOx, uint32_t SDIO_ReadWaitMode)
DECL|SDIO_WriteFIFO|function|HAL_StatusTypeDef SDIO_WriteFIFO(SDIO_TypeDef *SDIOx, uint32_t *pWriteData)
