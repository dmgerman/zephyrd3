DECL|SPI0_DriverIRQHandler|function|void SPI0_DriverIRQHandler(void)
DECL|SPI1_DriverIRQHandler|function|void SPI1_DriverIRQHandler(void)
DECL|SPI2_DriverIRQHandler|function|void SPI2_DriverIRQHandler(void)
DECL|SPI_CommonIRQHandler|function|static void SPI_CommonIRQHandler(SPI_Type *base, uint32_t instance)
DECL|SPI_Deinit|function|void SPI_Deinit(SPI_Type *base)
DECL|SPI_DisableInterrupts|function|void SPI_DisableInterrupts(SPI_Type *base, uint32_t mask)
DECL|SPI_EnableFIFO|function|void SPI_EnableFIFO(SPI_Type *base, bool enable)
DECL|SPI_EnableInterrupts|function|void SPI_EnableInterrupts(SPI_Type *base, uint32_t mask)
DECL|SPI_GetInstance|function|uint32_t SPI_GetInstance(SPI_Type *base)
DECL|SPI_GetStatusFlags|function|uint32_t SPI_GetStatusFlags(SPI_Type *base)
DECL|SPI_GetWatermark|function|static uint8_t SPI_GetWatermark(SPI_Type *base)
DECL|SPI_MasterGetDefaultConfig|function|void SPI_MasterGetDefaultConfig(spi_master_config_t *config)
DECL|SPI_MasterInit|function|void SPI_MasterInit(SPI_Type *base, const spi_master_config_t *config, uint32_t srcClock_Hz)
DECL|SPI_MasterSetBaudRate|function|void SPI_MasterSetBaudRate(SPI_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|SPI_MasterTransferAbort|function|void SPI_MasterTransferAbort(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_MasterTransferBlocking|function|status_t SPI_MasterTransferBlocking(SPI_Type *base, spi_transfer_t *xfer)
DECL|SPI_MasterTransferCreateHandle|function|void SPI_MasterTransferCreateHandle(SPI_Type *base, spi_master_handle_t *handle, spi_master_callback_t callback, void *userData)
DECL|SPI_MasterTransferGetCount|function|status_t SPI_MasterTransferGetCount(SPI_Type *base, spi_master_handle_t *handle, size_t *count)
DECL|SPI_MasterTransferHandleIRQ|function|void SPI_MasterTransferHandleIRQ(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_MasterTransferNonBlocking|function|status_t SPI_MasterTransferNonBlocking(SPI_Type *base, spi_master_handle_t *handle, spi_transfer_t *xfer)
DECL|SPI_ReadData|function|uint16_t SPI_ReadData(SPI_Type *base)
DECL|SPI_ReadNonBlocking|function|static void SPI_ReadNonBlocking(SPI_Type *base, uint8_t *buffer, size_t size)
DECL|SPI_ReceiveTransfer|function|static void SPI_ReceiveTransfer(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_SendInitialTransfer|function|static void SPI_SendInitialTransfer(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_SendTransfer|function|static void SPI_SendTransfer(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_SlaveGetDefaultConfig|function|void SPI_SlaveGetDefaultConfig(spi_slave_config_t *config)
DECL|SPI_SlaveInit|function|void SPI_SlaveInit(SPI_Type *base, const spi_slave_config_t *config)
DECL|SPI_SlaveTransferCreateHandle|function|void SPI_SlaveTransferCreateHandle(SPI_Type *base, spi_slave_handle_t *handle, spi_slave_callback_t callback, void *userData)
DECL|SPI_SlaveTransferHandleIRQ|function|void SPI_SlaveTransferHandleIRQ(SPI_Type *base, spi_slave_handle_t *handle)
DECL|SPI_WriteBlocking|function|void SPI_WriteBlocking(SPI_Type *base, uint8_t *buffer, size_t size)
DECL|SPI_WriteData|function|void SPI_WriteData(SPI_Type *base, uint16_t data)
DECL|SPI_WriteNonBlocking|function|static void SPI_WriteNonBlocking(SPI_Type *base, uint8_t *buffer, size_t size)
DECL|_spi_transfer_states_t|enum|enum _spi_transfer_states_t
DECL|kSPI_Busy|enumerator|kSPI_Busy /*!< SPI is busy tranferring data. */
DECL|kSPI_Idle|enumerator|kSPI_Idle = 0x0, /*!< SPI is idle state */
DECL|s_spiBases|variable|s_spiBases
DECL|s_spiClock|variable|s_spiClock
DECL|s_spiHandle|variable|s_spiHandle
DECL|s_spiIRQ|variable|s_spiIRQ
DECL|s_spiMasterIsr|variable|s_spiMasterIsr
DECL|s_spiSlaveIsr|variable|s_spiSlaveIsr
DECL|spi_isr_t|typedef|typedef void (*spi_isr_t)(SPI_Type *base, spi_master_handle_t *spiHandle);
