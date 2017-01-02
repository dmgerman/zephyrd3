DECL|DSPI_CommonIRQHandler|function|static void DSPI_CommonIRQHandler(SPI_Type *base, void *param)
DECL|DSPI_Deinit|function|void DSPI_Deinit(SPI_Type *base)
DECL|DSPI_EnableInterrupts|function|void DSPI_EnableInterrupts(SPI_Type *base, uint32_t mask)
DECL|DSPI_GetDefaultDataCommandConfig|function|void DSPI_GetDefaultDataCommandConfig(dspi_command_data_config_t *command)
DECL|DSPI_GetInstance|function|uint32_t DSPI_GetInstance(SPI_Type *base)
DECL|DSPI_MasterGetDefaultConfig|function|void DSPI_MasterGetDefaultConfig(dspi_master_config_t *masterConfig)
DECL|DSPI_MasterInit|function|void DSPI_MasterInit(SPI_Type *base, const dspi_master_config_t *masterConfig, uint32_t srcClock_Hz)
DECL|DSPI_MasterSetBaudRate|function|uint32_t DSPI_MasterSetBaudRate(SPI_Type *base, dspi_ctar_selection_t whichCtar, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|DSPI_MasterSetDelayScaler|function|void DSPI_MasterSetDelayScaler( SPI_Type *base, dspi_ctar_selection_t whichCtar, uint32_t prescaler, uint32_t scaler, dspi_delay_type_t whichDelay)
DECL|DSPI_MasterSetDelayTimes|function|uint32_t DSPI_MasterSetDelayTimes(SPI_Type *base, dspi_ctar_selection_t whichCtar, dspi_delay_type_t whichDelay, uint32_t srcClock_Hz, uint32_t delayTimeInNanoSec)
DECL|DSPI_MasterTransferAbort|function|void DSPI_MasterTransferAbort(SPI_Type *base, dspi_master_handle_t *handle)
DECL|DSPI_MasterTransferBlocking|function|status_t DSPI_MasterTransferBlocking(SPI_Type *base, dspi_transfer_t *transfer)
DECL|DSPI_MasterTransferComplete|function|static void DSPI_MasterTransferComplete(SPI_Type *base, dspi_master_handle_t *handle)
DECL|DSPI_MasterTransferCreateHandle|function|void DSPI_MasterTransferCreateHandle(SPI_Type *base, dspi_master_handle_t *handle, dspi_master_transfer_callback_t callback, void *userData)
DECL|DSPI_MasterTransferFillUpTxFifo|function|static void DSPI_MasterTransferFillUpTxFifo(SPI_Type *base, dspi_master_handle_t *handle)
DECL|DSPI_MasterTransferGetCount|function|status_t DSPI_MasterTransferGetCount(SPI_Type *base, dspi_master_handle_t *handle, size_t *count)
DECL|DSPI_MasterTransferHandleIRQ|function|void DSPI_MasterTransferHandleIRQ(SPI_Type *base, dspi_master_handle_t *handle)
DECL|DSPI_MasterTransferNonBlocking|function|status_t DSPI_MasterTransferNonBlocking(SPI_Type *base, dspi_master_handle_t *handle, dspi_transfer_t *transfer)
DECL|DSPI_MasterTransferPrepare|function|static void DSPI_MasterTransferPrepare(SPI_Type *base, dspi_master_handle_t *handle, dspi_transfer_t *transfer)
DECL|DSPI_MasterWriteCommandDataBlocking|function|void DSPI_MasterWriteCommandDataBlocking(SPI_Type *base, uint32_t data)
DECL|DSPI_MasterWriteDataBlocking|function|void DSPI_MasterWriteDataBlocking(SPI_Type *base, dspi_command_data_config_t *command, uint16_t data)
DECL|DSPI_SetOnePcsPolarity|function|static void DSPI_SetOnePcsPolarity(SPI_Type *base, dspi_which_pcs_t pcs, dspi_pcs_polarity_config_t activeLowOrHigh)
DECL|DSPI_SlaveGetDefaultConfig|function|void DSPI_SlaveGetDefaultConfig(dspi_slave_config_t *slaveConfig)
DECL|DSPI_SlaveInit|function|void DSPI_SlaveInit(SPI_Type *base, const dspi_slave_config_t *slaveConfig)
DECL|DSPI_SlaveTransferAbort|function|void DSPI_SlaveTransferAbort(SPI_Type *base, dspi_slave_handle_t *handle)
DECL|DSPI_SlaveTransferComplete|function|static void DSPI_SlaveTransferComplete(SPI_Type *base, dspi_slave_handle_t *handle)
DECL|DSPI_SlaveTransferCreateHandle|function|void DSPI_SlaveTransferCreateHandle(SPI_Type *base, dspi_slave_handle_t *handle, dspi_slave_transfer_callback_t callback, void *userData)
DECL|DSPI_SlaveTransferFillUpTxFifo|function|static void DSPI_SlaveTransferFillUpTxFifo(SPI_Type *base, dspi_slave_handle_t *handle)
DECL|DSPI_SlaveTransferGetCount|function|status_t DSPI_SlaveTransferGetCount(SPI_Type *base, dspi_slave_handle_t *handle, size_t *count)
DECL|DSPI_SlaveTransferHandleIRQ|function|void DSPI_SlaveTransferHandleIRQ(SPI_Type *base, dspi_slave_handle_t *handle)
DECL|DSPI_SlaveTransferNonBlocking|function|status_t DSPI_SlaveTransferNonBlocking(SPI_Type *base, dspi_slave_handle_t *handle, dspi_transfer_t *transfer)
DECL|DSPI_SlaveWriteDataBlocking|function|void DSPI_SlaveWriteDataBlocking(SPI_Type *base, uint32_t data)
DECL|SPI0_DriverIRQHandler|function|void SPI0_DriverIRQHandler(void)
DECL|SPI1_DriverIRQHandler|function|void SPI1_DriverIRQHandler(void)
DECL|SPI2_DriverIRQHandler|function|void SPI2_DriverIRQHandler(void)
DECL|SPI3_DriverIRQHandler|function|void SPI3_DriverIRQHandler(void)
DECL|SPI4_DriverIRQHandler|function|void SPI4_DriverIRQHandler(void)
DECL|SPI5_DriverIRQHandler|function|void SPI5_DriverIRQHandler(void)
DECL|dspi_master_isr_t|typedef|typedef void (*dspi_master_isr_t)(SPI_Type *base, dspi_master_handle_t *handle);
DECL|dspi_slave_isr_t|typedef|typedef void (*dspi_slave_isr_t)(SPI_Type *base, dspi_slave_handle_t *handle);
DECL|g_dspiHandle|variable|g_dspiHandle
DECL|s_baudratePrescaler|variable|s_baudratePrescaler
DECL|s_baudrateScaler|variable|s_baudrateScaler
DECL|s_delayPrescaler|variable|s_delayPrescaler
DECL|s_delayScaler|variable|s_delayScaler
DECL|s_dspiBases|variable|s_dspiBases
DECL|s_dspiClock|variable|s_dspiClock
DECL|s_dspiIRQ|variable|s_dspiIRQ
DECL|s_dspiMasterIsr|variable|s_dspiMasterIsr
DECL|s_dspiSlaveIsr|variable|s_dspiSlaveIsr
