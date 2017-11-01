DECL|DMA_SPI0_INT_DriverIRQHandler|function|void DMA_SPI0_INT_DriverIRQHandler(void)
DECL|DMA_SPI1_INT_DriverIRQHandler|function|void DMA_SPI1_INT_DriverIRQHandler(void)
DECL|DMA_SPI2_INT_DriverIRQHandler|function|void DMA_SPI2_INT_DriverIRQHandler(void)
DECL|DMA_SPI3_INT_DriverIRQHandler|function|void DMA_SPI3_INT_DriverIRQHandler(void)
DECL|LPSPI0_DriverIRQHandler|function|void LPSPI0_DriverIRQHandler(void)
DECL|LPSPI1_DriverIRQHandler|function|void LPSPI1_DriverIRQHandler(void)
DECL|LPSPI2_DriverIRQHandler|function|void LPSPI2_DriverIRQHandler(void)
DECL|LPSPI3_DriverIRQHandler|function|void LPSPI3_DriverIRQHandler(void)
DECL|LPSPI4_DriverIRQHandler|function|void LPSPI4_DriverIRQHandler(void)
DECL|LPSPI5_DriverIRQHandler|function|void LPSPI5_DriverIRQHandler(void)
DECL|LPSPI_CheckTransferArgument|function|bool LPSPI_CheckTransferArgument(lpspi_transfer_t *transfer, uint32_t bitsPerFrame, uint32_t bytesPerFrame)
DECL|LPSPI_CombineWriteData|function|static uint32_t LPSPI_CombineWriteData(uint8_t *txData, uint32_t bytesEachWrite, bool isByteSwap)
DECL|LPSPI_CommonIRQHandler|function|static void LPSPI_CommonIRQHandler(LPSPI_Type *base, void *param)
DECL|LPSPI_Deinit|function|void LPSPI_Deinit(LPSPI_Type *base)
DECL|LPSPI_GetInstance|function|uint32_t LPSPI_GetInstance(LPSPI_Type *base)
DECL|LPSPI_MasterGetDefaultConfig|function|void LPSPI_MasterGetDefaultConfig(lpspi_master_config_t *masterConfig)
DECL|LPSPI_MasterInit|function|void LPSPI_MasterInit(LPSPI_Type *base, const lpspi_master_config_t *masterConfig, uint32_t srcClock_Hz)
DECL|LPSPI_MasterSetBaudRate|function|uint32_t LPSPI_MasterSetBaudRate(LPSPI_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz, uint32_t *tcrPrescaleValue)
DECL|LPSPI_MasterSetDelayScaler|function|void LPSPI_MasterSetDelayScaler(LPSPI_Type *base, uint32_t scaler, lpspi_delay_type_t whichDelay)
DECL|LPSPI_MasterSetDelayTimes|function|uint32_t LPSPI_MasterSetDelayTimes(LPSPI_Type *base, uint32_t delayTimeInNanoSec, lpspi_delay_type_t whichDelay, uint32_t srcClock_Hz)
DECL|LPSPI_MasterTransferAbort|function|void LPSPI_MasterTransferAbort(LPSPI_Type *base, lpspi_master_handle_t *handle)
DECL|LPSPI_MasterTransferBlocking|function|status_t LPSPI_MasterTransferBlocking(LPSPI_Type *base, lpspi_transfer_t *transfer)
DECL|LPSPI_MasterTransferComplete|function|static void LPSPI_MasterTransferComplete(LPSPI_Type *base, lpspi_master_handle_t *handle)
DECL|LPSPI_MasterTransferCreateHandle|function|void LPSPI_MasterTransferCreateHandle(LPSPI_Type *base, lpspi_master_handle_t *handle, lpspi_master_transfer_callback_t callback, void *userData)
DECL|LPSPI_MasterTransferFillUpTxFifo|function|static void LPSPI_MasterTransferFillUpTxFifo(LPSPI_Type *base, lpspi_master_handle_t *handle)
DECL|LPSPI_MasterTransferGetCount|function|status_t LPSPI_MasterTransferGetCount(LPSPI_Type *base, lpspi_master_handle_t *handle, size_t *count)
DECL|LPSPI_MasterTransferHandleIRQ|function|void LPSPI_MasterTransferHandleIRQ(LPSPI_Type *base, lpspi_master_handle_t *handle)
DECL|LPSPI_MasterTransferNonBlocking|function|status_t LPSPI_MasterTransferNonBlocking(LPSPI_Type *base, lpspi_master_handle_t *handle, lpspi_transfer_t *transfer)
DECL|LPSPI_Reset|function|void LPSPI_Reset(LPSPI_Type *base)
DECL|LPSPI_SeparateReadData|function|static void LPSPI_SeparateReadData(uint8_t *rxData, uint32_t readData, uint32_t bytesEachRead, bool isByteSwap)
DECL|LPSPI_SetDummyData|function|void LPSPI_SetDummyData(LPSPI_Type *base, uint8_t dummyData)
DECL|LPSPI_SetOnePcsPolarity|function|static void LPSPI_SetOnePcsPolarity(LPSPI_Type *base, lpspi_which_pcs_t pcs, lpspi_pcs_polarity_config_t activeLowOrHigh)
DECL|LPSPI_SlaveGetDefaultConfig|function|void LPSPI_SlaveGetDefaultConfig(lpspi_slave_config_t *slaveConfig)
DECL|LPSPI_SlaveInit|function|void LPSPI_SlaveInit(LPSPI_Type *base, const lpspi_slave_config_t *slaveConfig)
DECL|LPSPI_SlaveTransferAbort|function|void LPSPI_SlaveTransferAbort(LPSPI_Type *base, lpspi_slave_handle_t *handle)
DECL|LPSPI_SlaveTransferComplete|function|static void LPSPI_SlaveTransferComplete(LPSPI_Type *base, lpspi_slave_handle_t *handle)
DECL|LPSPI_SlaveTransferCreateHandle|function|void LPSPI_SlaveTransferCreateHandle(LPSPI_Type *base, lpspi_slave_handle_t *handle, lpspi_slave_transfer_callback_t callback, void *userData)
DECL|LPSPI_SlaveTransferFillUpTxFifo|function|static void LPSPI_SlaveTransferFillUpTxFifo(LPSPI_Type *base, lpspi_slave_handle_t *handle)
DECL|LPSPI_SlaveTransferGetCount|function|status_t LPSPI_SlaveTransferGetCount(LPSPI_Type *base, lpspi_slave_handle_t *handle, size_t *count)
DECL|LPSPI_SlaveTransferHandleIRQ|function|void LPSPI_SlaveTransferHandleIRQ(LPSPI_Type *base, lpspi_slave_handle_t *handle)
DECL|LPSPI_SlaveTransferNonBlocking|function|status_t LPSPI_SlaveTransferNonBlocking(LPSPI_Type *base, lpspi_slave_handle_t *handle, lpspi_transfer_t *transfer)
DECL|_lpspi_default_watermarks|enum|enum _lpspi_default_watermarks
DECL|kLpspiDefaultRxWatermark|enumerator|kLpspiDefaultRxWatermark = 0,
DECL|kLpspiDefaultTxWatermark|enumerator|kLpspiDefaultTxWatermark = 0,
DECL|lpspi_master_isr_t|typedef|typedef void (*lpspi_master_isr_t)(LPSPI_Type *base, lpspi_master_handle_t *handle);
DECL|lpspi_slave_isr_t|typedef|typedef void (*lpspi_slave_isr_t)(LPSPI_Type *base, lpspi_slave_handle_t *handle);
DECL|s_LpspiPeriphClocks|variable|s_LpspiPeriphClocks
DECL|s_baudratePrescaler|variable|s_baudratePrescaler
DECL|s_dummyData|variable|s_dummyData
DECL|s_lpspiBases|variable|s_lpspiBases
DECL|s_lpspiClocks|variable|s_lpspiClocks
DECL|s_lpspiHandle|variable|s_lpspiHandle
DECL|s_lpspiIRQ|variable|s_lpspiIRQ
DECL|s_lpspiMasterIsr|variable|s_lpspiMasterIsr
DECL|s_lpspiSlaveIsr|variable|s_lpspiSlaveIsr
