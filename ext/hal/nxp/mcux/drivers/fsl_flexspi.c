DECL|FLEXSPI0_DriverIRQHandler|function|void FLEXSPI0_DriverIRQHandler(void)
DECL|FLEXSPI1_DriverIRQHandler|function|void FLEXSPI1_DriverIRQHandler(void)
DECL|FLEXSPI_CheckAndClearError|function|status_t FLEXSPI_CheckAndClearError(FLEXSPI_Type *base, uint32_t status)
DECL|FLEXSPI_ConfigureDll|function|static uint32_t FLEXSPI_ConfigureDll(FLEXSPI_Type *base, flexspi_device_config_t *config)
DECL|FLEXSPI_DLLCR_DEFAULT|macro|FLEXSPI_DLLCR_DEFAULT
DECL|FLEXSPI_Deinit|function|void FLEXSPI_Deinit(FLEXSPI_Type *base)
DECL|FLEXSPI_DriverIRQHandler|function|void FLEXSPI_DriverIRQHandler(void)
DECL|FLEXSPI_GetDefaultConfig|function|void FLEXSPI_GetDefaultConfig(flexspi_config_t *config)
DECL|FLEXSPI_GetInstance|function|uint32_t FLEXSPI_GetInstance(FLEXSPI_Type *base)
DECL|FLEXSPI_Init|function|void FLEXSPI_Init(FLEXSPI_Type *base, const flexspi_config_t *config)
DECL|FLEXSPI_LUT_KEY_VAL|macro|FLEXSPI_LUT_KEY_VAL
DECL|FLEXSPI_ReadBlocking|function|status_t FLEXSPI_ReadBlocking(FLEXSPI_Type *base, uint32_t *buffer, size_t size)
DECL|FLEXSPI_SetFlashConfig|function|void FLEXSPI_SetFlashConfig(FLEXSPI_Type *base, flexspi_device_config_t *config, flexspi_port_t port)
DECL|FLEXSPI_TransferAbort|function|void FLEXSPI_TransferAbort(FLEXSPI_Type *base, flexspi_handle_t *handle)
DECL|FLEXSPI_TransferBlocking|function|status_t FLEXSPI_TransferBlocking(FLEXSPI_Type *base, flexspi_transfer_t *xfer)
DECL|FLEXSPI_TransferCreateHandle|function|void FLEXSPI_TransferCreateHandle(FLEXSPI_Type *base, flexspi_handle_t *handle, flexspi_transfer_callback_t callback, void *userData)
DECL|FLEXSPI_TransferGetCount|function|status_t FLEXSPI_TransferGetCount(FLEXSPI_Type *base, flexspi_handle_t *handle, size_t *count)
DECL|FLEXSPI_TransferHandleIRQ|function|void FLEXSPI_TransferHandleIRQ(FLEXSPI_Type *base, flexspi_handle_t *handle)
DECL|FLEXSPI_TransferNonBlocking|function|status_t FLEXSPI_TransferNonBlocking(FLEXSPI_Type *base, flexspi_handle_t *handle, flexspi_transfer_t *xfer)
DECL|FLEXSPI_UpdateLUT|function|void FLEXSPI_UpdateLUT(FLEXSPI_Type *base, uint32_t index, const uint32_t *cmd, uint32_t count)
DECL|FLEXSPI_WriteBlocking|function|status_t FLEXSPI_WriteBlocking(FLEXSPI_Type *base, uint32_t *buffer, size_t size)
DECL|FREQ_1MHz|macro|FREQ_1MHz
DECL|_flexspi_flag_constants|enum|enum _flexspi_flag_constants
DECL|_flexspi_transfer_state|enum|enum _flexspi_transfer_state
DECL|flexspi_isr_t|typedef|typedef void (*flexspi_isr_t)(FLEXSPI_Type *base, void *flexspiHandle);
DECL|kErrorFlags|enumerator|kErrorFlags = kFLEXSPI_SequenceExecutionTimeoutFlag | kFLEXSPI_IpCommandSequenceErrorFlag |
DECL|kFLEXSPI_BusyRead|enumerator|kFLEXSPI_BusyRead = 0x2U, /*!< FLEXSPI is busy write transfer. */
DECL|kFLEXSPI_BusyWrite|enumerator|kFLEXSPI_BusyWrite = 0x1U, /*!< FLEXSPI is busy write transfer. */
DECL|kFLEXSPI_DelayCellUnitMax|enumerator|kFLEXSPI_DelayCellUnitMax = 225, /* 225ps. */
DECL|kFLEXSPI_DelayCellUnitMin|enumerator|kFLEXSPI_DelayCellUnitMin = 75, /* 75ps. */
DECL|kFLEXSPI_Idle|enumerator|kFLEXSPI_Idle = 0x0U, /*!< Transfer is done. */
DECL|kIrqFlags|enumerator|kIrqFlags = kFLEXSPI_IpTxFifoWatermarkEmpltyFlag | kFLEXSPI_IpRxFifoWatermarkAvailableFlag |
DECL|s_flexspiBases|variable|s_flexspiBases
DECL|s_flexspiClock|variable|s_flexspiClock
DECL|s_flexspiHandle|variable|s_flexspiHandle
DECL|s_flexspiIrqs|variable|s_flexspiIrqs
