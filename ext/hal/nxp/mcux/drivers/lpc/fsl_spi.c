DECL|SPI_BYTES_TO_COUNT|macro|SPI_BYTES_TO_COUNT
DECL|SPI_COUNT_TO_BYTES|macro|SPI_COUNT_TO_BYTES
DECL|SPI_Deinit|function|void SPI_Deinit(SPI_Type *base)
DECL|SPI_EnableRxDMA|function|void SPI_EnableRxDMA(SPI_Type *base, bool enable)
DECL|SPI_EnableTxDMA|function|void SPI_EnableTxDMA(SPI_Type *base, bool enable)
DECL|SPI_FIFO_DEPTH|macro|SPI_FIFO_DEPTH
DECL|SPI_GetConfig|function|void *SPI_GetConfig(SPI_Type *base)
DECL|SPI_GetInstance|function|uint32_t SPI_GetInstance(SPI_Type *base)
DECL|SPI_MasterGetDefaultConfig|function|void SPI_MasterGetDefaultConfig(spi_master_config_t *config)
DECL|SPI_MasterInit|function|status_t SPI_MasterInit(SPI_Type *base, const spi_master_config_t *config, uint32_t srcClock_Hz)
DECL|SPI_MasterSetBaud|function|status_t SPI_MasterSetBaud(SPI_Type *base, uint32_t baudrate_Bps, uint32_t srcClock_Hz)
DECL|SPI_MasterTransferAbort|function|void SPI_MasterTransferAbort(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_MasterTransferBlocking|function|status_t SPI_MasterTransferBlocking(SPI_Type *base, spi_transfer_t *xfer)
DECL|SPI_MasterTransferCreateHandle|function|status_t SPI_MasterTransferCreateHandle(SPI_Type *base, spi_master_handle_t *handle, spi_master_callback_t callback, void *userData)
DECL|SPI_MasterTransferGetCount|function|status_t SPI_MasterTransferGetCount(SPI_Type *base, spi_master_handle_t *handle, size_t *count)
DECL|SPI_MasterTransferHandleIRQ|function|void SPI_MasterTransferHandleIRQ(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_MasterTransferNonBlocking|function|status_t SPI_MasterTransferNonBlocking(SPI_Type *base, spi_master_handle_t *handle, spi_transfer_t *xfer)
DECL|SPI_SlaveGetDefaultConfig|function|void SPI_SlaveGetDefaultConfig(spi_slave_config_t *config)
DECL|SPI_SlaveInit|function|status_t SPI_SlaveInit(SPI_Type *base, const spi_slave_config_t *config)
DECL|SPI_TransferHandleIRQInternal|function|static void SPI_TransferHandleIRQInternal(SPI_Type *base, spi_master_handle_t *handle)
DECL|SPI_WriteData|function|void SPI_WriteData(SPI_Type *base, uint16_t data, uint32_t configFlags)
DECL|g_configs|variable|g_configs
DECL|s_spiBaseAddrs|variable|s_spiBaseAddrs
DECL|s_spiIRQ|variable|s_spiIRQ
