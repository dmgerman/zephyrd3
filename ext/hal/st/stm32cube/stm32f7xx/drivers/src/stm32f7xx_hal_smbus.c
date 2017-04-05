DECL|HAL_SMBUS_AddrCallback|function|__weak void HAL_SMBUS_AddrCallback(SMBUS_HandleTypeDef *hsmbus, uint8_t TransferDirection, uint16_t AddrMatchCode)
DECL|HAL_SMBUS_DeInit|function|HAL_StatusTypeDef HAL_SMBUS_DeInit(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_DisableAlert_IT|function|HAL_StatusTypeDef HAL_SMBUS_DisableAlert_IT(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_DisableListen_IT|function|HAL_StatusTypeDef HAL_SMBUS_DisableListen_IT(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_ER_IRQHandler|function|void HAL_SMBUS_ER_IRQHandler(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_EV_IRQHandler|function|void HAL_SMBUS_EV_IRQHandler(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_EnableAlert_IT|function|HAL_StatusTypeDef HAL_SMBUS_EnableAlert_IT(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_EnableListen_IT|function|HAL_StatusTypeDef HAL_SMBUS_EnableListen_IT(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_ErrorCallback|function|__weak void HAL_SMBUS_ErrorCallback(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_GetError|function|uint32_t HAL_SMBUS_GetError(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_GetState|function|uint32_t HAL_SMBUS_GetState(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_Init|function|HAL_StatusTypeDef HAL_SMBUS_Init(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_IsDeviceReady|function|HAL_StatusTypeDef HAL_SMBUS_IsDeviceReady(SMBUS_HandleTypeDef *hsmbus, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout)
DECL|HAL_SMBUS_ListenCpltCallback|function|__weak void HAL_SMBUS_ListenCpltCallback(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_MasterRxCpltCallback|function|__weak void HAL_SMBUS_MasterRxCpltCallback(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_MasterTxCpltCallback|function|__weak void HAL_SMBUS_MasterTxCpltCallback(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_Master_Abort_IT|function|HAL_StatusTypeDef HAL_SMBUS_Master_Abort_IT(SMBUS_HandleTypeDef *hsmbus, uint16_t DevAddress)
DECL|HAL_SMBUS_Master_Receive_IT|function|HAL_StatusTypeDef HAL_SMBUS_Master_Receive_IT(SMBUS_HandleTypeDef *hsmbus, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_SMBUS_Master_Transmit_IT|function|HAL_StatusTypeDef HAL_SMBUS_Master_Transmit_IT(SMBUS_HandleTypeDef *hsmbus, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_SMBUS_MspDeInit|function|__weak void HAL_SMBUS_MspDeInit(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_MspInit|function|__weak void HAL_SMBUS_MspInit(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_SlaveRxCpltCallback|function|__weak void HAL_SMBUS_SlaveRxCpltCallback(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_SlaveTxCpltCallback|function|__weak void HAL_SMBUS_SlaveTxCpltCallback(SMBUS_HandleTypeDef *hsmbus)
DECL|HAL_SMBUS_Slave_Receive_IT|function|HAL_StatusTypeDef HAL_SMBUS_Slave_Receive_IT(SMBUS_HandleTypeDef *hsmbus, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_SMBUS_Slave_Transmit_IT|function|HAL_StatusTypeDef HAL_SMBUS_Slave_Transmit_IT(SMBUS_HandleTypeDef *hsmbus, uint8_t *pData, uint16_t Size, uint32_t XferOptions)
DECL|HAL_TIMEOUT_ADDR|macro|HAL_TIMEOUT_ADDR
DECL|HAL_TIMEOUT_BUSY|macro|HAL_TIMEOUT_BUSY
DECL|HAL_TIMEOUT_DIR|macro|HAL_TIMEOUT_DIR
DECL|HAL_TIMEOUT_RXNE|macro|HAL_TIMEOUT_RXNE
DECL|HAL_TIMEOUT_STOPF|macro|HAL_TIMEOUT_STOPF
DECL|HAL_TIMEOUT_TCR|macro|HAL_TIMEOUT_TCR
DECL|HAL_TIMEOUT_TC|macro|HAL_TIMEOUT_TC
DECL|HAL_TIMEOUT_TXIS|macro|HAL_TIMEOUT_TXIS
DECL|MAX_NBYTE_SIZE|macro|MAX_NBYTE_SIZE
DECL|SMBUS_ConvertOtherXferOptions|function|static void SMBUS_ConvertOtherXferOptions(SMBUS_HandleTypeDef *hsmbus)
DECL|SMBUS_Disable_IRQ|function|static HAL_StatusTypeDef SMBUS_Disable_IRQ(SMBUS_HandleTypeDef *hsmbus, uint16_t InterruptRequest)
DECL|SMBUS_Enable_IRQ|function|static HAL_StatusTypeDef SMBUS_Enable_IRQ(SMBUS_HandleTypeDef *hsmbus, uint16_t InterruptRequest)
DECL|SMBUS_Master_ISR|function|static HAL_StatusTypeDef SMBUS_Master_ISR(SMBUS_HandleTypeDef *hsmbus)
DECL|SMBUS_Slave_ISR|function|static HAL_StatusTypeDef SMBUS_Slave_ISR(SMBUS_HandleTypeDef *hsmbus)
DECL|SMBUS_TransferConfig|function|static void SMBUS_TransferConfig(SMBUS_HandleTypeDef *hsmbus, uint16_t DevAddress, uint8_t Size, uint32_t Mode, uint32_t Request)
DECL|SMBUS_WaitOnFlagUntilTimeout|function|static HAL_StatusTypeDef SMBUS_WaitOnFlagUntilTimeout(SMBUS_HandleTypeDef *hsmbus, uint32_t Flag, FlagStatus Status, uint32_t Timeout)
DECL|TIMING_CLEAR_MASK|macro|TIMING_CLEAR_MASK
