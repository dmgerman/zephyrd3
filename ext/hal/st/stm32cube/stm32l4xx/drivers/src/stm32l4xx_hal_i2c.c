DECL|HAL_I2C_AbortCpltCallback|function|__weak void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_AddrCallback|function|__weak void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode)
DECL|HAL_I2C_DeInit|function|HAL_StatusTypeDef HAL_I2C_DeInit(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_DisableListen_IT|function|HAL_StatusTypeDef HAL_I2C_DisableListen_IT(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_ER_IRQHandler|function|void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_EV_IRQHandler|function|void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_EnableListen_IT|function|HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_ErrorCallback|function|__weak void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_GetError|function|uint32_t HAL_I2C_GetError(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_GetMode|function|HAL_I2C_ModeTypeDef HAL_I2C_GetMode(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_GetState|function|HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_Init|function|HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_IsDeviceReady|function|HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout)
DECL|HAL_I2C_ListenCpltCallback|function|__weak void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_MasterRxCpltCallback|function|__weak void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_MasterTxCpltCallback|function|__weak void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_Master_Abort_IT|function|HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress)
DECL|HAL_I2C_Master_Receive_DMA|function|HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Master_Receive_IT|function|HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Master_Receive|function|HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2C_Master_Sequential_Receive_DMA|function|HAL_StatusTypeDef HAL_I2C_Master_Sequential_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Master_Sequential_Receive_IT|function|HAL_StatusTypeDef HAL_I2C_Master_Sequential_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Master_Sequential_Transmit_DMA|function|HAL_StatusTypeDef HAL_I2C_Master_Sequential_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Master_Sequential_Transmit_IT|function|HAL_StatusTypeDef HAL_I2C_Master_Sequential_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Master_Transmit_DMA|function|HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Master_Transmit_IT|function|HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Master_Transmit|function|HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2C_MemRxCpltCallback|function|__weak void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_MemTxCpltCallback|function|__weak void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_Mem_Read_DMA|function|HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Mem_Read_IT|function|HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Mem_Read|function|HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2C_Mem_Write_DMA|function|HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Mem_Write_IT|function|HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Mem_Write|function|HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2C_MspDeInit|function|__weak void HAL_I2C_MspDeInit(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_MspInit|function|__weak void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_RegisterAddrCallback|function|HAL_StatusTypeDef HAL_I2C_RegisterAddrCallback(I2C_HandleTypeDef *hi2c, pI2C_AddrCallbackTypeDef pCallback)
DECL|HAL_I2C_RegisterCallback|function|HAL_StatusTypeDef HAL_I2C_RegisterCallback(I2C_HandleTypeDef *hi2c, HAL_I2C_CallbackIDTypeDef CallbackID, pI2C_CallbackTypeDef pCallback)
DECL|HAL_I2C_SlaveRxCpltCallback|function|__weak void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_SlaveTxCpltCallback|function|__weak void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_Slave_Receive_DMA|function|HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Slave_Receive_IT|function|HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Slave_Receive|function|HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2C_Slave_Sequential_Receive_DMA|function|HAL_StatusTypeDef HAL_I2C_Slave_Sequential_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Slave_Sequential_Receive_IT|function|HAL_StatusTypeDef HAL_I2C_Slave_Sequential_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Slave_Sequential_Transmit_DMA|function|HAL_StatusTypeDef HAL_I2C_Slave_Sequential_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Slave_Sequential_Transmit_IT|function|HAL_StatusTypeDef HAL_I2C_Slave_Sequential_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_I2C_Slave_Transmit_DMA|function|HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Slave_Transmit_IT|function|HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size)
DECL|HAL_I2C_Slave_Transmit|function|HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_I2C_UnRegisterAddrCallback|function|HAL_StatusTypeDef HAL_I2C_UnRegisterAddrCallback(I2C_HandleTypeDef *hi2c)
DECL|HAL_I2C_UnRegisterCallback|function|HAL_StatusTypeDef HAL_I2C_UnRegisterCallback(I2C_HandleTypeDef *hi2c, HAL_I2C_CallbackIDTypeDef CallbackID)
DECL|I2C_ConvertOtherXferOptions|function|static void I2C_ConvertOtherXferOptions(I2C_HandleTypeDef *hi2c)
DECL|I2C_DMAAbort|function|static void I2C_DMAAbort(DMA_HandleTypeDef *hdma)
DECL|I2C_DMAError|function|static void I2C_DMAError(DMA_HandleTypeDef *hdma)
DECL|I2C_DMAMasterReceiveCplt|function|static void I2C_DMAMasterReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|I2C_DMAMasterTransmitCplt|function|static void I2C_DMAMasterTransmitCplt(DMA_HandleTypeDef *hdma)
DECL|I2C_DMASlaveReceiveCplt|function|static void I2C_DMASlaveReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|I2C_DMASlaveTransmitCplt|function|static void I2C_DMASlaveTransmitCplt(DMA_HandleTypeDef *hdma)
DECL|I2C_Disable_IRQ|function|static void I2C_Disable_IRQ(I2C_HandleTypeDef *hi2c, uint16_t InterruptRequest)
DECL|I2C_Enable_IRQ|function|static void I2C_Enable_IRQ(I2C_HandleTypeDef *hi2c, uint16_t InterruptRequest)
DECL|I2C_Flush_TXDR|function|static void I2C_Flush_TXDR(I2C_HandleTypeDef *hi2c)
DECL|I2C_GET_DMA_REMAIN_DATA|macro|I2C_GET_DMA_REMAIN_DATA
DECL|I2C_ITAddrCplt|function|static void I2C_ITAddrCplt(I2C_HandleTypeDef *hi2c, uint32_t ITFlags)
DECL|I2C_ITError|function|static void I2C_ITError(I2C_HandleTypeDef *hi2c, uint32_t ErrorCode)
DECL|I2C_ITListenCplt|function|static void I2C_ITListenCplt(I2C_HandleTypeDef *hi2c, uint32_t ITFlags)
DECL|I2C_ITMasterCplt|function|static void I2C_ITMasterCplt(I2C_HandleTypeDef *hi2c, uint32_t ITFlags)
DECL|I2C_ITMasterSequentialCplt|function|static void I2C_ITMasterSequentialCplt(I2C_HandleTypeDef *hi2c)
DECL|I2C_ITSlaveCplt|function|static void I2C_ITSlaveCplt(I2C_HandleTypeDef *hi2c, uint32_t ITFlags)
DECL|I2C_ITSlaveSequentialCplt|function|static void I2C_ITSlaveSequentialCplt(I2C_HandleTypeDef *hi2c)
DECL|I2C_IsAcknowledgeFailed|function|static HAL_StatusTypeDef I2C_IsAcknowledgeFailed(I2C_HandleTypeDef *hi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_Master_ISR_DMA|function|static HAL_StatusTypeDef I2C_Master_ISR_DMA(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|I2C_Master_ISR_IT|function|static HAL_StatusTypeDef I2C_Master_ISR_IT(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|I2C_NO_OPTION_FRAME|macro|I2C_NO_OPTION_FRAME
DECL|I2C_RequestMemoryRead|function|static HAL_StatusTypeDef I2C_RequestMemoryRead(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_RequestMemoryWrite|function|static HAL_StatusTypeDef I2C_RequestMemoryWrite(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_STATE_MASTER_BUSY_RX|macro|I2C_STATE_MASTER_BUSY_RX
DECL|I2C_STATE_MASTER_BUSY_TX|macro|I2C_STATE_MASTER_BUSY_TX
DECL|I2C_STATE_MEM_BUSY_RX|macro|I2C_STATE_MEM_BUSY_RX
DECL|I2C_STATE_MEM_BUSY_TX|macro|I2C_STATE_MEM_BUSY_TX
DECL|I2C_STATE_MSK|macro|I2C_STATE_MSK
DECL|I2C_STATE_NONE|macro|I2C_STATE_NONE
DECL|I2C_STATE_SLAVE_BUSY_RX|macro|I2C_STATE_SLAVE_BUSY_RX
DECL|I2C_STATE_SLAVE_BUSY_TX|macro|I2C_STATE_SLAVE_BUSY_TX
DECL|I2C_Slave_ISR_DMA|function|static HAL_StatusTypeDef I2C_Slave_ISR_DMA(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|I2C_Slave_ISR_IT|function|static HAL_StatusTypeDef I2C_Slave_ISR_IT(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources)
DECL|I2C_TIMEOUT_ADDR|macro|I2C_TIMEOUT_ADDR
DECL|I2C_TIMEOUT_BUSY|macro|I2C_TIMEOUT_BUSY
DECL|I2C_TIMEOUT_DIR|macro|I2C_TIMEOUT_DIR
DECL|I2C_TIMEOUT_FLAG|macro|I2C_TIMEOUT_FLAG
DECL|I2C_TIMEOUT_RXNE|macro|I2C_TIMEOUT_RXNE
DECL|I2C_TIMEOUT_STOPF|macro|I2C_TIMEOUT_STOPF
DECL|I2C_TIMEOUT_TCR|macro|I2C_TIMEOUT_TCR
DECL|I2C_TIMEOUT_TC|macro|I2C_TIMEOUT_TC
DECL|I2C_TIMEOUT_TXIS|macro|I2C_TIMEOUT_TXIS
DECL|I2C_TransferConfig|function|static void I2C_TransferConfig(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t Size, uint32_t Mode, uint32_t Request)
DECL|I2C_WaitOnFlagUntilTimeout|function|static HAL_StatusTypeDef I2C_WaitOnFlagUntilTimeout(I2C_HandleTypeDef *hi2c, uint32_t Flag, FlagStatus Status, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_WaitOnRXNEFlagUntilTimeout|function|static HAL_StatusTypeDef I2C_WaitOnRXNEFlagUntilTimeout(I2C_HandleTypeDef *hi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_WaitOnSTOPFlagUntilTimeout|function|static HAL_StatusTypeDef I2C_WaitOnSTOPFlagUntilTimeout(I2C_HandleTypeDef *hi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_WaitOnTXISFlagUntilTimeout|function|static HAL_StatusTypeDef I2C_WaitOnTXISFlagUntilTimeout(I2C_HandleTypeDef *hi2c, uint32_t Timeout, uint32_t Tickstart)
DECL|I2C_XFER_CPLT_IT|macro|I2C_XFER_CPLT_IT
DECL|I2C_XFER_ERROR_IT|macro|I2C_XFER_ERROR_IT
DECL|I2C_XFER_LISTEN_IT|macro|I2C_XFER_LISTEN_IT
DECL|I2C_XFER_RELOAD_IT|macro|I2C_XFER_RELOAD_IT
DECL|I2C_XFER_RX_IT|macro|I2C_XFER_RX_IT
DECL|I2C_XFER_TX_IT|macro|I2C_XFER_TX_IT
DECL|MAX_NBYTE_SIZE|macro|MAX_NBYTE_SIZE
DECL|SlaveAddr_MSK|macro|SlaveAddr_MSK
DECL|SlaveAddr_SHIFT|macro|SlaveAddr_SHIFT
DECL|TIMING_CLEAR_MASK|macro|TIMING_CLEAR_MASK
