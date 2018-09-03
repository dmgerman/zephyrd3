DECL|ALIGN_32_MASK|macro|ALIGN_32_MASK
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|LPI2C_GenerateCommands|function|static uint32_t LPI2C_GenerateCommands(lpi2c_master_edma_handle_t *handle)
DECL|LPI2C_MasterCreateEDMAHandle|function|void LPI2C_MasterCreateEDMAHandle(LPI2C_Type *base, lpi2c_master_edma_handle_t *handle, edma_handle_t *rxDmaHandle, edma_handle_t *txDmaHandle, lpi2c_master_edma_transfer_callback_t callback,
DECL|LPI2C_MasterEDMACallback|function|static void LPI2C_MasterEDMACallback(edma_handle_t *dmaHandle, void *userData, bool isTransferDone, uint32_t tcds)
DECL|LPI2C_MasterTransferAbortEDMA|function|status_t LPI2C_MasterTransferAbortEDMA(LPI2C_Type *base, lpi2c_master_edma_handle_t *handle)
DECL|LPI2C_MasterTransferEDMA|function|status_t LPI2C_MasterTransferEDMA(LPI2C_Type *base, lpi2c_master_edma_handle_t *handle, lpi2c_master_transfer_t *transfer)
DECL|LPI2C_MasterTransferGetCountEDMA|function|status_t LPI2C_MasterTransferGetCountEDMA(LPI2C_Type *base, lpi2c_master_edma_handle_t *handle, size_t *count)
DECL|_lpi2c_flag_constants|enum|enum _lpi2c_flag_constants
DECL|_lpi2c_master_fifo_cmd|enum|enum _lpi2c_master_fifo_cmd
DECL|_lpi2c_transfer_states|enum|enum _lpi2c_transfer_states
DECL|kIdleState|enumerator|kIdleState = 0,
DECL|kIssueReadCommandState|enumerator|kIssueReadCommandState,
DECL|kMasterClearFlags|enumerator|kMasterClearFlags = kLPI2C_MasterEndOfPacketFlag | kLPI2C_MasterStopDetectFlag | kLPI2C_MasterNackDetectFlag |
DECL|kMasterErrorFlags|enumerator|kMasterErrorFlags = kLPI2C_MasterNackDetectFlag | kLPI2C_MasterArbitrationLostFlag | kLPI2C_MasterFifoErrFlag |
DECL|kMasterIrqFlags|enumerator|kMasterIrqFlags = kLPI2C_MasterArbitrationLostFlag | kLPI2C_MasterTxReadyFlag | kLPI2C_MasterRxReadyFlag |
DECL|kRxDataCmd|enumerator|kRxDataCmd = LPI2C_MTDR_CMD(0X1U), /*!< Receive (DATA[7:0] + 1) bytes */
DECL|kSendCommandState|enumerator|kSendCommandState,
DECL|kSlaveClearFlags|enumerator|kSlaveClearFlags = kLPI2C_SlaveRepeatedStartDetectFlag | kLPI2C_SlaveStopDetectFlag | kLPI2C_SlaveBitErrFlag |
DECL|kSlaveErrorFlags|enumerator|kSlaveErrorFlags = kLPI2C_SlaveFifoErrFlag | kLPI2C_SlaveBitErrFlag,
DECL|kSlaveIrqFlags|enumerator|kSlaveIrqFlags = kLPI2C_SlaveTxReadyFlag | kLPI2C_SlaveRxReadyFlag | kLPI2C_SlaveStopDetectFlag |
DECL|kStartCmd|enumerator|kStartCmd = LPI2C_MTDR_CMD(0x4U), /*!< Generate(repeated) START and transmit address in DATA[[7:0] */
DECL|kStopCmd|enumerator|kStopCmd = LPI2C_MTDR_CMD(0x2U), /*!< Generate STOP condition */
DECL|kStopState|enumerator|kStopState,
DECL|kTransferDataState|enumerator|kTransferDataState,
DECL|kTxDataCmd|enumerator|kTxDataCmd = LPI2C_MTDR_CMD(0x0U), /*!< Transmit DATA[7:0] */
DECL|kWaitForCompletionState|enumerator|kWaitForCompletionState,
DECL|lpi2c_isr_t|typedef|typedef void (*lpi2c_isr_t)(LPI2C_Type *base, void *handle);
