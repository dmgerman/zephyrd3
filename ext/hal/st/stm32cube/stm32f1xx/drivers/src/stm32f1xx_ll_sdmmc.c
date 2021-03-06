DECL|SDIO_ConfigData|function|HAL_StatusTypeDef SDIO_ConfigData(SDIO_TypeDef *SDIOx, SDIO_DataInitTypeDef* Data)
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
DECL|SDIO_SetSDMMCReadWaitMode|function|HAL_StatusTypeDef SDIO_SetSDMMCReadWaitMode(SDIO_TypeDef *SDIOx, uint32_t SDIO_ReadWaitMode)
DECL|SDIO_WriteFIFO|function|HAL_StatusTypeDef SDIO_WriteFIFO(SDIO_TypeDef *SDIOx, uint32_t *pWriteData)
DECL|SDMMC_CmdAppCommand|function|uint32_t SDMMC_CmdAppCommand(SDIO_TypeDef *SDIOx, uint32_t Argument)
DECL|SDMMC_CmdAppOperCommand|function|uint32_t SDMMC_CmdAppOperCommand(SDIO_TypeDef *SDIOx, uint32_t SdType)
DECL|SDMMC_CmdBlockLength|function|uint32_t SDMMC_CmdBlockLength(SDIO_TypeDef *SDIOx, uint32_t BlockSize)
DECL|SDMMC_CmdBusWidth|function|uint32_t SDMMC_CmdBusWidth(SDIO_TypeDef *SDIOx, uint32_t BusWidth)
DECL|SDMMC_CmdEraseEndAdd|function|uint32_t SDMMC_CmdEraseEndAdd(SDIO_TypeDef *SDIOx, uint32_t EndAdd)
DECL|SDMMC_CmdEraseStartAdd|function|uint32_t SDMMC_CmdEraseStartAdd(SDIO_TypeDef *SDIOx, uint32_t StartAdd)
DECL|SDMMC_CmdErase|function|uint32_t SDMMC_CmdErase(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdGoIdleState|function|uint32_t SDMMC_CmdGoIdleState(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdOpCondition|function|uint32_t SDMMC_CmdOpCondition(SDIO_TypeDef *SDIOx, uint32_t Argument)
DECL|SDMMC_CmdOperCond|function|uint32_t SDMMC_CmdOperCond(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdReadMultiBlock|function|uint32_t SDMMC_CmdReadMultiBlock(SDIO_TypeDef *SDIOx, uint32_t ReadAdd)
DECL|SDMMC_CmdReadSingleBlock|function|uint32_t SDMMC_CmdReadSingleBlock(SDIO_TypeDef *SDIOx, uint32_t ReadAdd)
DECL|SDMMC_CmdSDEraseEndAdd|function|uint32_t SDMMC_CmdSDEraseEndAdd(SDIO_TypeDef *SDIOx, uint32_t EndAdd)
DECL|SDMMC_CmdSDEraseStartAdd|function|uint32_t SDMMC_CmdSDEraseStartAdd(SDIO_TypeDef *SDIOx, uint32_t StartAdd)
DECL|SDMMC_CmdSelDesel|function|uint32_t SDMMC_CmdSelDesel(SDIO_TypeDef *SDIOx, uint64_t Addr)
DECL|SDMMC_CmdSendCID|function|uint32_t SDMMC_CmdSendCID(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdSendCSD|function|uint32_t SDMMC_CmdSendCSD(SDIO_TypeDef *SDIOx, uint32_t Argument)
DECL|SDMMC_CmdSendSCR|function|uint32_t SDMMC_CmdSendSCR(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdSendStatus|function|uint32_t SDMMC_CmdSendStatus(SDIO_TypeDef *SDIOx, uint32_t Argument)
DECL|SDMMC_CmdSetRelAdd|function|uint32_t SDMMC_CmdSetRelAdd(SDIO_TypeDef *SDIOx, uint16_t *pRCA)
DECL|SDMMC_CmdStatusRegister|function|uint32_t SDMMC_CmdStatusRegister(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdStopTransfer|function|uint32_t SDMMC_CmdStopTransfer(SDIO_TypeDef *SDIOx)
DECL|SDMMC_CmdSwitch|function|uint32_t SDMMC_CmdSwitch(SDIO_TypeDef *SDIOx, uint32_t Argument)
DECL|SDMMC_CmdWriteMultiBlock|function|uint32_t SDMMC_CmdWriteMultiBlock(SDIO_TypeDef *SDIOx, uint32_t WriteAdd)
DECL|SDMMC_CmdWriteSingleBlock|function|uint32_t SDMMC_CmdWriteSingleBlock(SDIO_TypeDef *SDIOx, uint32_t WriteAdd)
DECL|SDMMC_GetCmdError|function|static uint32_t SDMMC_GetCmdError(SDIO_TypeDef *SDIOx)
DECL|SDMMC_GetCmdResp1|function|static uint32_t SDMMC_GetCmdResp1(SDIO_TypeDef *SDIOx, uint8_t SD_CMD, uint32_t Timeout)
DECL|SDMMC_GetCmdResp2|function|static uint32_t SDMMC_GetCmdResp2(SDIO_TypeDef *SDIOx)
DECL|SDMMC_GetCmdResp3|function|static uint32_t SDMMC_GetCmdResp3(SDIO_TypeDef *SDIOx)
DECL|SDMMC_GetCmdResp6|function|static uint32_t SDMMC_GetCmdResp6(SDIO_TypeDef *SDIOx, uint8_t SD_CMD, uint16_t *pRCA)
DECL|SDMMC_GetCmdResp7|function|static uint32_t SDMMC_GetCmdResp7(SDIO_TypeDef *SDIOx)
