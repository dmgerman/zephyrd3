DECL|FLASH_Erase_Sector|function|void FLASH_Erase_Sector(uint32_t Sector, uint8_t VoltageRange)
DECL|FLASH_FlushCaches|function|void FLASH_FlushCaches(void)
DECL|FLASH_MassErase|function|static void FLASH_MassErase(uint8_t VoltageRange, uint32_t Banks)
DECL|FLASH_OB_BOR_LevelConfig|function|static HAL_StatusTypeDef FLASH_OB_BOR_LevelConfig(uint8_t Level)
DECL|FLASH_OB_DisableWRP|function|static HAL_StatusTypeDef FLASH_OB_DisableWRP(uint32_t WRPSector, uint32_t Banks)
DECL|FLASH_OB_EnableWRP|function|static HAL_StatusTypeDef FLASH_OB_EnableWRP(uint32_t WRPSector, uint32_t Banks)
DECL|FLASH_OB_GetBOR|function|static uint8_t FLASH_OB_GetBOR(void)
DECL|FLASH_OB_GetRDP|function|static uint8_t FLASH_OB_GetRDP(void)
DECL|FLASH_OB_GetUser|function|static uint8_t FLASH_OB_GetUser(void)
DECL|FLASH_OB_GetWRP|function|static uint16_t FLASH_OB_GetWRP(void)
DECL|FLASH_OB_RDP_LevelConfig|function|static HAL_StatusTypeDef FLASH_OB_RDP_LevelConfig(uint8_t Level)
DECL|FLASH_OB_UserConfig|function|static HAL_StatusTypeDef FLASH_OB_UserConfig(uint8_t Iwdg, uint8_t Stop, uint8_t Stdby)
DECL|FLASH_TIMEOUT_VALUE|macro|FLASH_TIMEOUT_VALUE
DECL|HAL_FLASHEx_Erase_IT|function|HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit)
DECL|HAL_FLASHEx_Erase|function|HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *SectorError)
DECL|HAL_FLASHEx_OBGetConfig|function|void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit)
DECL|HAL_FLASHEx_OBProgram|function|HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit)