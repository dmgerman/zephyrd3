DECL|SDMMC_CmdAppCommand|function|uint32_t SDMMC_CmdAppCommand(SDMMC_TypeDef *SDMMCx, uint32_t Argument)
DECL|SDMMC_CmdAppOperCommand|function|uint32_t SDMMC_CmdAppOperCommand(SDMMC_TypeDef *SDMMCx, uint32_t Argument)
DECL|SDMMC_CmdBlockLength|function|uint32_t SDMMC_CmdBlockLength(SDMMC_TypeDef *SDMMCx, uint32_t BlockSize)
DECL|SDMMC_CmdBusWidth|function|uint32_t SDMMC_CmdBusWidth(SDMMC_TypeDef *SDMMCx, uint32_t BusWidth)
DECL|SDMMC_CmdEraseEndAdd|function|uint32_t SDMMC_CmdEraseEndAdd(SDMMC_TypeDef *SDMMCx, uint32_t EndAdd)
DECL|SDMMC_CmdEraseStartAdd|function|uint32_t SDMMC_CmdEraseStartAdd(SDMMC_TypeDef *SDMMCx, uint32_t StartAdd)
DECL|SDMMC_CmdErase|function|uint32_t SDMMC_CmdErase(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdGoIdleState|function|uint32_t SDMMC_CmdGoIdleState(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdOpCondition|function|uint32_t SDMMC_CmdOpCondition(SDMMC_TypeDef *SDMMCx, uint32_t Argument)
DECL|SDMMC_CmdOperCond|function|uint32_t SDMMC_CmdOperCond(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdReadMultiBlock|function|uint32_t SDMMC_CmdReadMultiBlock(SDMMC_TypeDef *SDMMCx, uint32_t ReadAdd)
DECL|SDMMC_CmdReadSingleBlock|function|uint32_t SDMMC_CmdReadSingleBlock(SDMMC_TypeDef *SDMMCx, uint32_t ReadAdd)
DECL|SDMMC_CmdSDEraseEndAdd|function|uint32_t SDMMC_CmdSDEraseEndAdd(SDMMC_TypeDef *SDMMCx, uint32_t EndAdd)
DECL|SDMMC_CmdSDEraseStartAdd|function|uint32_t SDMMC_CmdSDEraseStartAdd(SDMMC_TypeDef *SDMMCx, uint32_t StartAdd)
DECL|SDMMC_CmdSelDesel|function|uint32_t SDMMC_CmdSelDesel(SDMMC_TypeDef *SDMMCx, uint64_t Addr)
DECL|SDMMC_CmdSendCID|function|uint32_t SDMMC_CmdSendCID(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdSendCSD|function|uint32_t SDMMC_CmdSendCSD(SDMMC_TypeDef *SDMMCx, uint32_t Argument)
DECL|SDMMC_CmdSendSCR|function|uint32_t SDMMC_CmdSendSCR(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdSendStatus|function|uint32_t SDMMC_CmdSendStatus(SDMMC_TypeDef *SDMMCx, uint32_t Argument)
DECL|SDMMC_CmdSetRelAdd|function|uint32_t SDMMC_CmdSetRelAdd(SDMMC_TypeDef *SDMMCx, uint16_t *pRCA)
DECL|SDMMC_CmdStatusRegister|function|uint32_t SDMMC_CmdStatusRegister(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdStopTransfer|function|uint32_t SDMMC_CmdStopTransfer(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_CmdSwitch|function|uint32_t SDMMC_CmdSwitch(SDMMC_TypeDef *SDMMCx, uint32_t Argument)
DECL|SDMMC_CmdWriteMultiBlock|function|uint32_t SDMMC_CmdWriteMultiBlock(SDMMC_TypeDef *SDMMCx, uint32_t WriteAdd)
DECL|SDMMC_CmdWriteSingleBlock|function|uint32_t SDMMC_CmdWriteSingleBlock(SDMMC_TypeDef *SDMMCx, uint32_t WriteAdd)
DECL|SDMMC_ConfigData|function|HAL_StatusTypeDef SDMMC_ConfigData(SDMMC_TypeDef *SDMMCx, SDMMC_DataInitTypeDef* Data)
DECL|SDMMC_GetCmdError|function|static uint32_t SDMMC_GetCmdError(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetCmdResp1|function|static uint32_t SDMMC_GetCmdResp1(SDMMC_TypeDef *SDMMCx, uint8_t SD_CMD, uint32_t Timeout)
DECL|SDMMC_GetCmdResp2|function|static uint32_t SDMMC_GetCmdResp2(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetCmdResp3|function|static uint32_t SDMMC_GetCmdResp3(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetCmdResp6|function|static uint32_t SDMMC_GetCmdResp6(SDMMC_TypeDef *SDMMCx, uint8_t SD_CMD, uint16_t *pRCA)
DECL|SDMMC_GetCmdResp7|function|static uint32_t SDMMC_GetCmdResp7(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetCommandResponse|function|uint8_t SDMMC_GetCommandResponse(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetDataCounter|function|uint32_t SDMMC_GetDataCounter(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetFIFOCount|function|uint32_t SDMMC_GetFIFOCount(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetPowerState|function|uint32_t SDMMC_GetPowerState(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_GetResponse|function|uint32_t SDMMC_GetResponse(SDMMC_TypeDef *SDMMCx, uint32_t Response)
DECL|SDMMC_Init|function|HAL_StatusTypeDef SDMMC_Init(SDMMC_TypeDef *SDMMCx, SDMMC_InitTypeDef Init)
DECL|SDMMC_PowerState_OFF|function|HAL_StatusTypeDef SDMMC_PowerState_OFF(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_PowerState_ON|function|HAL_StatusTypeDef SDMMC_PowerState_ON(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_ReadFIFO|function|uint32_t SDMMC_ReadFIFO(SDMMC_TypeDef *SDMMCx)
DECL|SDMMC_SendCommand|function|HAL_StatusTypeDef SDMMC_SendCommand(SDMMC_TypeDef *SDMMCx, SDMMC_CmdInitTypeDef *Command)
DECL|SDMMC_SetSDMMCReadWaitMode|function|HAL_StatusTypeDef SDMMC_SetSDMMCReadWaitMode(SDMMC_TypeDef *SDMMCx, uint32_t SDMMC_ReadWaitMode)
DECL|SDMMC_WriteFIFO|function|HAL_StatusTypeDef SDMMC_WriteFIFO(SDMMC_TypeDef *SDMMCx, uint32_t *pWriteData)
