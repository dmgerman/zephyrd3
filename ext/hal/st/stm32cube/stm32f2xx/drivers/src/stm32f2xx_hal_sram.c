DECL|HAL_SRAM_DMA_XferCpltCallback|function|__weak void HAL_SRAM_DMA_XferCpltCallback(DMA_HandleTypeDef *hdma)
DECL|HAL_SRAM_DMA_XferErrorCallback|function|__weak void HAL_SRAM_DMA_XferErrorCallback(DMA_HandleTypeDef *hdma)
DECL|HAL_SRAM_DeInit|function|HAL_StatusTypeDef HAL_SRAM_DeInit(SRAM_HandleTypeDef *hsram)
DECL|HAL_SRAM_GetState|function|HAL_SRAM_StateTypeDef HAL_SRAM_GetState(SRAM_HandleTypeDef *hsram)
DECL|HAL_SRAM_Init|function|HAL_StatusTypeDef HAL_SRAM_Init(SRAM_HandleTypeDef *hsram, FSMC_NORSRAM_TimingTypeDef *Timing, FSMC_NORSRAM_TimingTypeDef *ExtTiming)
DECL|HAL_SRAM_MspDeInit|function|__weak void HAL_SRAM_MspDeInit(SRAM_HandleTypeDef *hsram)
DECL|HAL_SRAM_MspInit|function|__weak void HAL_SRAM_MspInit(SRAM_HandleTypeDef *hsram)
DECL|HAL_SRAM_Read_16b|function|HAL_StatusTypeDef HAL_SRAM_Read_16b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint16_t *pDstBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_Read_32b|function|HAL_StatusTypeDef HAL_SRAM_Read_32b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pDstBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_Read_8b|function|HAL_StatusTypeDef HAL_SRAM_Read_8b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint8_t *pDstBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_Read_DMA|function|HAL_StatusTypeDef HAL_SRAM_Read_DMA(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pDstBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_WriteOperation_Disable|function|HAL_StatusTypeDef HAL_SRAM_WriteOperation_Disable(SRAM_HandleTypeDef *hsram)
DECL|HAL_SRAM_WriteOperation_Enable|function|HAL_StatusTypeDef HAL_SRAM_WriteOperation_Enable(SRAM_HandleTypeDef *hsram)
DECL|HAL_SRAM_Write_16b|function|HAL_StatusTypeDef HAL_SRAM_Write_16b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint16_t *pSrcBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_Write_32b|function|HAL_StatusTypeDef HAL_SRAM_Write_32b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pSrcBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_Write_8b|function|HAL_StatusTypeDef HAL_SRAM_Write_8b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint8_t *pSrcBuffer, uint32_t BufferSize)
DECL|HAL_SRAM_Write_DMA|function|HAL_StatusTypeDef HAL_SRAM_Write_DMA(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pSrcBuffer, uint32_t BufferSize)