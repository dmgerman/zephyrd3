DECL|FMPI2C_DMAAbort|function|static void FMPI2C_DMAAbort(DMA_HandleTypeDef *hdma)
DECL|FMPI2C_DMAError|function|static void FMPI2C_DMAError(DMA_HandleTypeDef *hdma)
DECL|FMPI2C_DMAMasterReceiveCplt|function|static void FMPI2C_DMAMasterReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|FMPI2C_DMAMasterTransmitCplt|function|static void FMPI2C_DMAMasterTransmitCplt(DMA_HandleTypeDef *hdma)
DECL|FMPI2C_DMASlaveReceiveCplt|function|static void FMPI2C_DMASlaveReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|FMPI2C_DMASlaveTransmitCplt|function|static void FMPI2C_DMASlaveTransmitCplt(DMA_HandleTypeDef *hdma)
DECL|FMPI2C_Disable_IRQ|function|static HAL_StatusTypeDef FMPI2C_Disable_IRQ(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t InterruptRequest)
DECL|FMPI2C_Enable_IRQ|function|static HAL_StatusTypeDef FMPI2C_Enable_IRQ(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t InterruptRequest)
DECL|FMPI2C_Flush_TXDR|function|static void FMPI2C_Flush_TXDR(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|FMPI2C_GET_DMA_REMAIN_DATA|macro|FMPI2C_GET_DMA_REMAIN_DATA
DECL|FMPI2C_ITAddrCplt|function|static void FMPI2C_ITAddrCplt(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags)
DECL|FMPI2C_ITError|function|static void FMPI2C_ITError(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ErrorCode)
DECL|FMPI2C_ITListenCplt|function|static void FMPI2C_ITListenCplt(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags)
DECL|FMPI2C_ITMasterCplt|function|static void FMPI2C_ITMasterCplt(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags)
DECL|FMPI2C_ITMasterSequentialCplt|function|static void FMPI2C_ITMasterSequentialCplt(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|FMPI2C_ITSlaveCplt|function|static void FMPI2C_ITSlaveCplt(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags)
DECL|FMPI2C_ITSlaveSequentialCplt|function|static void FMPI2C_ITSlaveSequentialCplt(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|FMPI2C_IsAcknowledgeFailed|function|static HAL_StatusTypeDef FMPI2C_IsAcknowledgeFailed(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_Master_ISR_DMA|function|static HAL_StatusTypeDef FMPI2C_Master_ISR_DMA(struct __FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|FMPI2C_Master_ISR_IT|function|static HAL_StatusTypeDef FMPI2C_Master_ISR_IT(struct __FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|FMPI2C_RequestMemoryRead|function|static HAL_StatusTypeDef FMPI2C_RequestMemoryRead(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_RequestMemoryWrite|function|static HAL_StatusTypeDef FMPI2C_RequestMemoryWrite(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_STATE_MASTER_BUSY_RX|macro|FMPI2C_STATE_MASTER_BUSY_RX
DECL|FMPI2C_STATE_MASTER_BUSY_TX|macro|FMPI2C_STATE_MASTER_BUSY_TX
DECL|FMPI2C_STATE_MEM_BUSY_RX|macro|FMPI2C_STATE_MEM_BUSY_RX
DECL|FMPI2C_STATE_MEM_BUSY_TX|macro|FMPI2C_STATE_MEM_BUSY_TX
DECL|FMPI2C_STATE_MSK|macro|FMPI2C_STATE_MSK
DECL|FMPI2C_STATE_NONE|macro|FMPI2C_STATE_NONE
DECL|FMPI2C_STATE_SLAVE_BUSY_RX|macro|FMPI2C_STATE_SLAVE_BUSY_RX
DECL|FMPI2C_STATE_SLAVE_BUSY_TX|macro|FMPI2C_STATE_SLAVE_BUSY_TX
DECL|FMPI2C_Slave_ISR_DMA|function|static HAL_StatusTypeDef FMPI2C_Slave_ISR_DMA(struct __FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|FMPI2C_Slave_ISR_IT|function|static HAL_StatusTypeDef FMPI2C_Slave_ISR_IT(struct __FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|FMPI2C_TIMEOUT_ADDR|macro|FMPI2C_TIMEOUT_ADDR
DECL|FMPI2C_TIMEOUT_BUSY|macro|FMPI2C_TIMEOUT_BUSY
DECL|FMPI2C_TIMEOUT_DIR|macro|FMPI2C_TIMEOUT_DIR
DECL|FMPI2C_TIMEOUT_FLAG|macro|FMPI2C_TIMEOUT_FLAG
DECL|FMPI2C_TIMEOUT_RXNE|macro|FMPI2C_TIMEOUT_RXNE
DECL|FMPI2C_TIMEOUT_STOPF|macro|FMPI2C_TIMEOUT_STOPF
DECL|FMPI2C_TIMEOUT_TCR|macro|FMPI2C_TIMEOUT_TCR
DECL|FMPI2C_TIMEOUT_TC|macro|FMPI2C_TIMEOUT_TC
DECL|FMPI2C_TIMEOUT_TXIS|macro|FMPI2C_TIMEOUT_TXIS
DECL|FMPI2C_TransferConfig|function|static void FMPI2C_TransferConfig(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t Size, uint32_t Mode, uint32_t Request)
DECL|FMPI2C_WaitOnFlagUntilTimeout|function|static HAL_StatusTypeDef FMPI2C_WaitOnFlagUntilTimeout(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t Flag, FlagStatus Status, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_WaitOnRXNEFlagUntilTimeout|function|static HAL_StatusTypeDef FMPI2C_WaitOnRXNEFlagUntilTimeout(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_WaitOnSTOPFlagUntilTimeout|function|static HAL_StatusTypeDef FMPI2C_WaitOnSTOPFlagUntilTimeout(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_WaitOnTXISFlagUntilTimeout|function|static HAL_StatusTypeDef FMPI2C_WaitOnTXISFlagUntilTimeout(FMPI2C_HandleTypeDef *hfmpi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|FMPI2C_XFER_CPLT_IT|macro|FMPI2C_XFER_CPLT_IT
DECL|FMPI2C_XFER_ERROR_IT|macro|FMPI2C_XFER_ERROR_IT
DECL|FMPI2C_XFER_LISTEN_IT|macro|FMPI2C_XFER_LISTEN_IT
DECL|FMPI2C_XFER_RELOAD_IT|macro|FMPI2C_XFER_RELOAD_IT
DECL|FMPI2C_XFER_RX_IT|macro|FMPI2C_XFER_RX_IT
DECL|FMPI2C_XFER_TX_IT|macro|FMPI2C_XFER_TX_IT
DECL|HAL_FMPI2C_AbortCpltCallback|function|__weak void HAL_FMPI2C_AbortCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_AddrCallback|function|__weak void HAL_FMPI2C_AddrCallback(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t TransferDirection, uint16_t AddrMatchCode)
DECL|HAL_FMPI2C_DeInit|function|HAL_StatusTypeDef HAL_FMPI2C_DeInit(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_DisableListen_IT|function|HAL_StatusTypeDef HAL_FMPI2C_DisableListen_IT(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_ER_IRQHandler|function|void HAL_FMPI2C_ER_IRQHandler(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_EV_IRQHandler|function|void HAL_FMPI2C_EV_IRQHandler(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_EnableListen_IT|function|HAL_StatusTypeDef HAL_FMPI2C_EnableListen_IT(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_ErrorCallback|function|__weak void HAL_FMPI2C_ErrorCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_GetError|function|uint32_t HAL_FMPI2C_GetError(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_GetMode|function|HAL_FMPI2C_ModeTypeDef HAL_FMPI2C_GetMode(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_GetState|function|HAL_FMPI2C_StateTypeDef HAL_FMPI2C_GetState(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_Init|function|HAL_StatusTypeDef HAL_FMPI2C_Init(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_IsDeviceReady|function|HAL_StatusTypeDef HAL_FMPI2C_IsDeviceReady(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout)
DECL|HAL_FMPI2C_ListenCpltCallback|function|__weak void HAL_FMPI2C_ListenCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_MasterRxCpltCallback|function|__weak void HAL_FMPI2C_MasterRxCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_MasterTxCpltCallback|function|__weak void HAL_FMPI2C_MasterTxCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_Master_Abort_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Abort_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress)
DECL|HAL_FMPI2C_Master_Receive_DMA|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Receive_DMA(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Master_Receive_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Receive_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Master_Receive|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Receive(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_FMPI2C_Master_Sequential_Receive_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Sequential_Receive_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_FMPI2C_Master_Sequential_Transmit_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Sequential_Transmit_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_FMPI2C_Master_Transmit_DMA|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Transmit_DMA(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Master_Transmit_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Transmit_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Master_Transmit|function|HAL_StatusTypeDef HAL_FMPI2C_Master_Transmit(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_FMPI2C_MemRxCpltCallback|function|__weak void HAL_FMPI2C_MemRxCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_MemTxCpltCallback|function|__weak void HAL_FMPI2C_MemTxCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_Mem_Read_DMA|function|HAL_StatusTypeDef HAL_FMPI2C_Mem_Read_DMA(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Mem_Read_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Mem_Read_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Mem_Read|function|HAL_StatusTypeDef HAL_FMPI2C_Mem_Read(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_FMPI2C_Mem_Write_DMA|function|HAL_StatusTypeDef HAL_FMPI2C_Mem_Write_DMA(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Mem_Write_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Mem_Write_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Mem_Write|function|HAL_StatusTypeDef HAL_FMPI2C_Mem_Write(FMPI2C_HandleTypeDef *hfmpi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_FMPI2C_MspDeInit|function|__weak void HAL_FMPI2C_MspDeInit(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_MspInit|function|__weak void HAL_FMPI2C_MspInit(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_SlaveRxCpltCallback|function|__weak void HAL_FMPI2C_SlaveRxCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_SlaveTxCpltCallback|function|__weak void HAL_FMPI2C_SlaveTxCpltCallback(FMPI2C_HandleTypeDef *hfmpi2c)
DECL|HAL_FMPI2C_Slave_Receive_DMA|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Receive_DMA(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Slave_Receive_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Receive_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Slave_Receive|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Receive(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_FMPI2C_Slave_Sequential_Receive_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Sequential_Receive_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_FMPI2C_Slave_Sequential_Transmit_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Sequential_Transmit_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_FMPI2C_Slave_Transmit_DMA|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Transmit_DMA(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Slave_Transmit_IT|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Transmit_IT(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_FMPI2C_Slave_Transmit|function|HAL_StatusTypeDef HAL_FMPI2C_Slave_Transmit(FMPI2C_HandleTypeDef *hfmpi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|MAX_NBYTE_SIZE|macro|MAX_NBYTE_SIZE
DECL|SlaveAddr_MSK|macro|SlaveAddr_MSK
DECL|SlaveAddr_SHIFT|macro|SlaveAddr_SHIFT
DECL|TIMING_CLEAR_MASK|macro|TIMING_CLEAR_MASK
