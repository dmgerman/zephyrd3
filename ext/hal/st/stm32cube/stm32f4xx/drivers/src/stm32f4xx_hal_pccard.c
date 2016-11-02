DECL|HAL_PCCARD_DeInit|function|HAL_StatusTypeDef HAL_PCCARD_DeInit(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_Erase_Sector|function|HAL_StatusTypeDef HAL_PCCARD_Erase_Sector(PCCARD_HandleTypeDef *hpccard, uint16_t SectorAddress, uint8_t *pStatus)
DECL|HAL_PCCARD_GetState|function|HAL_PCCARD_StateTypeDef HAL_PCCARD_GetState(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_GetStatus|function|HAL_PCCARD_StatusTypeDef HAL_PCCARD_GetStatus(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_IRQHandler|function|void HAL_PCCARD_IRQHandler(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_ITCallback|function|__weak void HAL_PCCARD_ITCallback(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_Init|function|HAL_StatusTypeDef HAL_PCCARD_Init(PCCARD_HandleTypeDef *hpccard, FMC_NAND_PCC_TimingTypeDef *ComSpaceTiming, FMC_NAND_PCC_TimingTypeDef *AttSpaceTiming, FMC_NAND_PCC_TimingTypeDef *IOSpaceTiming)
DECL|HAL_PCCARD_MspDeInit|function|__weak void HAL_PCCARD_MspDeInit(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_MspInit|function|__weak void HAL_PCCARD_MspInit(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_ReadStatus|function|HAL_PCCARD_StatusTypeDef HAL_PCCARD_ReadStatus(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_Read_ID|function|HAL_StatusTypeDef HAL_PCCARD_Read_ID(PCCARD_HandleTypeDef *hpccard, uint8_t CompactFlash_ID[], uint8_t *pStatus)
DECL|HAL_PCCARD_Read_Sector|function|HAL_StatusTypeDef HAL_PCCARD_Read_Sector(PCCARD_HandleTypeDef *hpccard, uint16_t *pBuffer, uint16_t SectorAddress, uint8_t *pStatus)
DECL|HAL_PCCARD_Reset|function|HAL_StatusTypeDef HAL_PCCARD_Reset(PCCARD_HandleTypeDef *hpccard)
DECL|HAL_PCCARD_Write_Sector|function|HAL_StatusTypeDef HAL_PCCARD_Write_Sector(PCCARD_HandleTypeDef *hpccard, uint16_t *pBuffer, uint16_t SectorAddress, uint8_t *pStatus)
DECL|PCCARD_STATUS_OK|macro|PCCARD_STATUS_OK
DECL|PCCARD_STATUS_WRITE_OK|macro|PCCARD_STATUS_WRITE_OK
DECL|PCCARD_TIMEOUT_ERASE_SECTOR|macro|PCCARD_TIMEOUT_ERASE_SECTOR
DECL|PCCARD_TIMEOUT_READ_ID|macro|PCCARD_TIMEOUT_READ_ID
DECL|PCCARD_TIMEOUT_READ_WRITE_SECTOR|macro|PCCARD_TIMEOUT_READ_WRITE_SECTOR
DECL|PCCARD_TIMEOUT_STATUS|macro|PCCARD_TIMEOUT_STATUS
