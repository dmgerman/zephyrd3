DECL|DSPI_ClearStatusFlags|function|static inline void DSPI_ClearStatusFlags(SPI_Type *base, uint32_t statusFlags)
DECL|DSPI_DUMMY_DATA|macro|DSPI_DUMMY_DATA
DECL|DSPI_DisableDMA|function|static inline void DSPI_DisableDMA(SPI_Type *base, uint32_t mask)
DECL|DSPI_DisableInterrupts|function|static inline void DSPI_DisableInterrupts(SPI_Type *base, uint32_t mask)
DECL|DSPI_EnableDMA|function|static inline void DSPI_EnableDMA(SPI_Type *base, uint32_t mask)
DECL|DSPI_Enable|function|static inline void DSPI_Enable(SPI_Type *base, bool enable)
DECL|DSPI_FlushFifo|function|static inline void DSPI_FlushFifo(SPI_Type *base, bool flushTxFifo, bool flushRxFifo)
DECL|DSPI_GetRxRegisterAddress|function|static inline uint32_t DSPI_GetRxRegisterAddress(SPI_Type *base)
DECL|DSPI_GetStatusFlags|function|static inline uint32_t DSPI_GetStatusFlags(SPI_Type *base)
DECL|DSPI_IsMaster|function|static inline bool DSPI_IsMaster(SPI_Type *base)
DECL|DSPI_MASTER_CTAR_MASK|macro|DSPI_MASTER_CTAR_MASK
DECL|DSPI_MASTER_CTAR_SHIFT|macro|DSPI_MASTER_CTAR_SHIFT
DECL|DSPI_MASTER_PCS_MASK|macro|DSPI_MASTER_PCS_MASK
DECL|DSPI_MASTER_PCS_SHIFT|macro|DSPI_MASTER_PCS_SHIFT
DECL|DSPI_MasterGetFormattedCommand|function|static inline uint32_t DSPI_MasterGetFormattedCommand(dspi_command_data_config_t *command)
DECL|DSPI_MasterGetTxRegisterAddress|function|static inline uint32_t DSPI_MasterGetTxRegisterAddress(SPI_Type *base)
DECL|DSPI_MasterWriteData|function|static inline void DSPI_MasterWriteData(SPI_Type *base, dspi_command_data_config_t *command, uint16_t data)
DECL|DSPI_ReadData|function|static inline uint32_t DSPI_ReadData(SPI_Type *base)
DECL|DSPI_SLAVE_CTAR_MASK|macro|DSPI_SLAVE_CTAR_MASK
DECL|DSPI_SLAVE_CTAR_SHIFT|macro|DSPI_SLAVE_CTAR_SHIFT
DECL|DSPI_SetAllPcsPolarity|function|static inline void DSPI_SetAllPcsPolarity(SPI_Type *base, uint32_t mask)
DECL|DSPI_SetFifoEnable|function|static inline void DSPI_SetFifoEnable(SPI_Type *base, bool enableTxFifo, bool enableRxFifo)
DECL|DSPI_SetMasterSlaveMode|function|static inline void DSPI_SetMasterSlaveMode(SPI_Type *base, dspi_master_slave_mode_t mode)
DECL|DSPI_SlaveGetTxRegisterAddress|function|static inline uint32_t DSPI_SlaveGetTxRegisterAddress(SPI_Type *base)
DECL|DSPI_SlaveWriteData|function|static inline void DSPI_SlaveWriteData(SPI_Type *base, uint32_t data)
DECL|DSPI_StartTransfer|function|static inline void DSPI_StartTransfer(SPI_Type *base)
DECL|DSPI_StopTransfer|function|static inline void DSPI_StopTransfer(SPI_Type *base)
DECL|FSL_DSPI_DRIVER_VERSION|macro|FSL_DSPI_DRIVER_VERSION
DECL|_FSL_DSPI_H_|macro|_FSL_DSPI_H_
DECL|_dspi_clock_phase|enum|typedef enum _dspi_clock_phase
DECL|_dspi_clock_polarity|enum|typedef enum _dspi_clock_polarity
DECL|_dspi_command_data_config|struct|typedef struct _dspi_command_data_config
DECL|_dspi_ctar_selection|enum|typedef enum _dspi_ctar_selection
DECL|_dspi_delay_type|enum|typedef enum _dspi_delay_type
DECL|_dspi_dma_enable|enum|enum _dspi_dma_enable
DECL|_dspi_flags|enum|enum _dspi_flags
DECL|_dspi_interrupt_enable|enum|enum _dspi_interrupt_enable
DECL|_dspi_master_config|struct|typedef struct _dspi_master_config
DECL|_dspi_master_ctar_config|struct|typedef struct _dspi_master_ctar_config
DECL|_dspi_master_handle|struct|struct _dspi_master_handle
DECL|_dspi_master_sample_point|enum|typedef enum _dspi_master_sample_point
DECL|_dspi_master_slave_mode|enum|typedef enum _dspi_master_slave_mode
DECL|_dspi_pcs_polarity_config|enum|typedef enum _dspi_pcs_polarity_config
DECL|_dspi_pcs_polarity|enum|enum _dspi_pcs_polarity
DECL|_dspi_shift_direction|enum|typedef enum _dspi_shift_direction
DECL|_dspi_slave_config|struct|typedef struct _dspi_slave_config
DECL|_dspi_slave_ctar_config|struct|typedef struct _dspi_slave_ctar_config
DECL|_dspi_slave_handle|struct|struct _dspi_slave_handle
DECL|_dspi_status|enum|enum _dspi_status
DECL|_dspi_transfer_config_flag_for_master|enum|enum _dspi_transfer_config_flag_for_master
DECL|_dspi_transfer_config_flag_for_slave|enum|enum _dspi_transfer_config_flag_for_slave
DECL|_dspi_transfer_state|enum|enum _dspi_transfer_state
DECL|_dspi_transfer|struct|typedef struct _dspi_transfer
DECL|_dspi_which_pcs_config|enum|typedef enum _dspi_which_pcs_config
DECL|baudRate|member|uint32_t baudRate; /*!< Baud Rate for DSPI. */
DECL|betweenTransferDelayInNanoSec|member|uint32_t betweenTransferDelayInNanoSec; /*!< After the SCK delay time in nanoseconds; setting to 0 sets the minimum
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< Bits per frame, minimum 4, maximum 16.*/
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< Bits per frame, minimum 4, maximum 16.*/
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< The desired number of bits per frame. */
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< The desired number of bits per frame. */
DECL|callback|member|dspi_master_transfer_callback_t callback; /*!< Completion callback. */
DECL|callback|member|dspi_slave_transfer_callback_t callback; /*!< Completion callback. */
DECL|clearTransferCount|member|bool clearTransferCount; /*!< Clears the SPI Transfer Counter (SPI_TCNT) before transmission starts.*/
DECL|command|member|volatile uint32_t command; /*!< The desired data command. */
DECL|configFlags|member|configFlags; /*!< Transfer transfer configuration flags; set from _dspi_transfer_config_flag_for_master if the
DECL|cpha|member|dspi_clock_phase_t cpha; /*!< Clock phase. */
DECL|cpha|member|dspi_clock_phase_t cpha; /*!< Clock phase. */
DECL|cpol|member|dspi_clock_polarity_t cpol; /*!< Clock polarity. */
DECL|cpol|member|dspi_clock_polarity_t cpol; /*!< Clock polarity. */
DECL|ctarConfig|member|dspi_master_ctar_config_t ctarConfig; /*!< Set the ctarConfig to the desired CTAR. */
DECL|ctarConfig|member|dspi_slave_ctar_config_t ctarConfig; /*!< Set the ctarConfig to the desired CTAR. */
DECL|dataSize|member|volatile size_t dataSize; /*!< Transfer bytes. */
DECL|direction|member|dspi_shift_direction_t direction; /*!< MSB or LSB data shift direction. */
DECL|dspi_clock_phase_t|typedef|} dspi_clock_phase_t;
DECL|dspi_clock_polarity_t|typedef|} dspi_clock_polarity_t;
DECL|dspi_command_data_config_t|typedef|} dspi_command_data_config_t;
DECL|dspi_ctar_selection_t|typedef|} dspi_ctar_selection_t;
DECL|dspi_delay_type_t|typedef|} dspi_delay_type_t;
DECL|dspi_master_config_t|typedef|} dspi_master_config_t;
DECL|dspi_master_ctar_config_t|typedef|} dspi_master_ctar_config_t;
DECL|dspi_master_handle_t|typedef|typedef struct _dspi_master_handle dspi_master_handle_t;
DECL|dspi_master_sample_point_t|typedef|} dspi_master_sample_point_t;
DECL|dspi_master_slave_mode_t|typedef|} dspi_master_slave_mode_t;
DECL|dspi_master_transfer_callback_t|typedef|typedef void (*dspi_master_transfer_callback_t)(SPI_Type *base,
DECL|dspi_pcs_polarity_config_t|typedef|} dspi_pcs_polarity_config_t;
DECL|dspi_shift_direction_t|typedef|} dspi_shift_direction_t;
DECL|dspi_slave_config_t|typedef|} dspi_slave_config_t;
DECL|dspi_slave_ctar_config_t|typedef|} dspi_slave_ctar_config_t;
DECL|dspi_slave_handle_t|typedef|typedef struct _dspi_slave_handle dspi_slave_handle_t;
DECL|dspi_slave_transfer_callback_t|typedef|typedef void (*dspi_slave_transfer_callback_t)(SPI_Type *base,
DECL|dspi_transfer_t|typedef|} dspi_transfer_t;
DECL|dspi_which_pcs_t|typedef|} dspi_which_pcs_t;
DECL|enableContinuousSCK|member|bool enableContinuousSCK; /*!< CONT_SCKE, continuous SCK enable. Note that the continuous SCK is only
DECL|enableContinuousSCK|member|bool enableContinuousSCK; /*!< CONT_SCKE, continuous SCK enable. Note that the continuous SCK is only
DECL|enableModifiedTimingFormat|member|bool enableModifiedTimingFormat; /*!< Enables a modified transfer format to be used if true.*/
DECL|enableModifiedTimingFormat|member|bool enableModifiedTimingFormat; /*!< Enables a modified transfer format to be used if true.*/
DECL|enableRxFifoOverWrite|member|bool enableRxFifoOverWrite; /*!< ROOE, receive FIFO overflow overwrite enable. If ROOE = 0, the incoming
DECL|enableRxFifoOverWrite|member|bool enableRxFifoOverWrite; /*!< ROOE, receive FIFO overflow overwrite enable. If ROOE = 0, the incoming
DECL|errorCount|member|volatile uint32_t errorCount; /*!< Error count for slave transfer.*/
DECL|fifoSize|member|uint8_t fifoSize; /*!< FIFO dataSize. */
DECL|isEndOfQueue|member|bool isEndOfQueue; /*!< Signals that the current transfer is the last in the queue.*/
DECL|isPcsActiveAfterTransfer|member|volatile bool isPcsActiveAfterTransfer; /*!< Indicates whether the PCS signal is active after the last frame transfer.*/
DECL|isPcsContinuous|member|bool isPcsContinuous; /*!< Option to enable the continuous assertion of the chip select between transfers.*/
DECL|isThereExtraByte|member|volatile bool isThereExtraByte; /*!< Indicates whether there are extra bytes.*/
DECL|isThereExtraByte|member|volatile bool isThereExtraByte; /*!< Indicates whether there are extra bytes.*/
DECL|kDSPI_AllInterruptEnable|enumerator|kDSPI_AllInterruptEnable = SPI_RSER_TCF_RE_MASK | SPI_RSER_EOQF_RE_MASK | SPI_RSER_TFUF_RE_MASK |
DECL|kDSPI_AllStatusFlag|enumerator|kDSPI_AllStatusFlag = SPI_SR_TCF_MASK | SPI_SR_EOQF_MASK | SPI_SR_TFUF_MASK | SPI_SR_TFFF_MASK | SPI_SR_RFOF_MASK |
DECL|kDSPI_BetweenTransfer|enumerator|kDSPI_BetweenTransfer /*!< Delay between transfers. */
DECL|kDSPI_Busy|enumerator|kDSPI_Busy, /*!< Transfer queue is not finished. */
DECL|kDSPI_ClockPhaseFirstEdge|enumerator|kDSPI_ClockPhaseFirstEdge = 0U, /*!< CPHA=0. Data is captured on the leading edge of the SCK and changed on the
DECL|kDSPI_ClockPhaseSecondEdge|enumerator|kDSPI_ClockPhaseSecondEdge = 1U /*!< CPHA=1. Data is changed on the leading edge of the SCK and captured on the
DECL|kDSPI_ClockPolarityActiveHigh|enumerator|kDSPI_ClockPolarityActiveHigh = 0U, /*!< CPOL=0. Active-high DSPI clock (idles low).*/
DECL|kDSPI_ClockPolarityActiveLow|enumerator|kDSPI_ClockPolarityActiveLow = 1U /*!< CPOL=1. Active-low DSPI clock (idles high).*/
DECL|kDSPI_Ctar0|enumerator|kDSPI_Ctar0 = 0U, /*!< CTAR0 selection option for master or slave mode; note that CTAR0 and CTAR0_SLAVE are the
DECL|kDSPI_Ctar1|enumerator|kDSPI_Ctar1 = 1U, /*!< CTAR1 selection option for master mode only. */
DECL|kDSPI_Ctar2|enumerator|kDSPI_Ctar2 = 2U, /*!< CTAR2 selection option for master mode only; note that some devices do not support CTAR2. */
DECL|kDSPI_Ctar3|enumerator|kDSPI_Ctar3 = 3U, /*!< CTAR3 selection option for master mode only; note that some devices do not support CTAR3. */
DECL|kDSPI_Ctar4|enumerator|kDSPI_Ctar4 = 4U, /*!< CTAR4 selection option for master mode only; note that some devices do not support CTAR4. */
DECL|kDSPI_Ctar5|enumerator|kDSPI_Ctar5 = 5U, /*!< CTAR5 selection option for master mode only; note that some devices do not support CTAR5. */
DECL|kDSPI_Ctar6|enumerator|kDSPI_Ctar6 = 6U, /*!< CTAR6 selection option for master mode only; note that some devices do not support CTAR6. */
DECL|kDSPI_Ctar7|enumerator|kDSPI_Ctar7 = 7U /*!< CTAR7 selection option for master mode only; note that some devices do not support CTAR7. */
DECL|kDSPI_EndOfQueueFlag|enumerator|kDSPI_EndOfQueueFlag = SPI_SR_EOQF_MASK, /*!< End of Queue Flag.*/
DECL|kDSPI_EndOfQueueInterruptEnable|enumerator|kDSPI_EndOfQueueInterruptEnable = SPI_RSER_EOQF_RE_MASK, /*!< EOQF interrupt enable.*/
DECL|kDSPI_Error|enumerator|kDSPI_Error /*!< Transfer error. */
DECL|kDSPI_Idle|enumerator|kDSPI_Idle = 0x0U, /*!< Nothing in the transmitter/receiver. */
DECL|kDSPI_LastSckToPcs|enumerator|kDSPI_LastSckToPcs, /*!< The last SCK edge to Pcs delay. */
DECL|kDSPI_LsbFirst|enumerator|kDSPI_LsbFirst = 1U /*!< Data transfers start with least significant bit.
DECL|kDSPI_MasterActiveAfterTransfer|enumerator|kDSPI_MasterActiveAfterTransfer = 1U << 21, /*!< Indicates whether the PCS signal is active after the last frame transfer.*/
DECL|kDSPI_MasterCtar0|enumerator|kDSPI_MasterCtar0 = 0U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR0 setting. */
DECL|kDSPI_MasterCtar1|enumerator|kDSPI_MasterCtar1 = 1U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR1 setting. */
DECL|kDSPI_MasterCtar2|enumerator|kDSPI_MasterCtar2 = 2U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR2 setting. */
DECL|kDSPI_MasterCtar3|enumerator|kDSPI_MasterCtar3 = 3U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR3 setting. */
DECL|kDSPI_MasterCtar4|enumerator|kDSPI_MasterCtar4 = 4U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR4 setting. */
DECL|kDSPI_MasterCtar5|enumerator|kDSPI_MasterCtar5 = 5U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR5 setting. */
DECL|kDSPI_MasterCtar6|enumerator|kDSPI_MasterCtar6 = 6U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR6 setting. */
DECL|kDSPI_MasterCtar7|enumerator|kDSPI_MasterCtar7 = 7U << DSPI_MASTER_CTAR_SHIFT, /*!< DSPI master transfer use CTAR7 setting. */
DECL|kDSPI_MasterPcs0|enumerator|kDSPI_MasterPcs0 = 0U << DSPI_MASTER_PCS_SHIFT, /*!< DSPI master transfer use PCS0 signal. */
DECL|kDSPI_MasterPcs1|enumerator|kDSPI_MasterPcs1 = 1U << DSPI_MASTER_PCS_SHIFT, /*!< DSPI master transfer use PCS1 signal. */
DECL|kDSPI_MasterPcs2|enumerator|kDSPI_MasterPcs2 = 2U << DSPI_MASTER_PCS_SHIFT, /*!< DSPI master transfer use PCS2 signal.*/
DECL|kDSPI_MasterPcs3|enumerator|kDSPI_MasterPcs3 = 3U << DSPI_MASTER_PCS_SHIFT, /*!< DSPI master transfer use PCS3 signal. */
DECL|kDSPI_MasterPcs4|enumerator|kDSPI_MasterPcs4 = 4U << DSPI_MASTER_PCS_SHIFT, /*!< DSPI master transfer use PCS4 signal. */
DECL|kDSPI_MasterPcs5|enumerator|kDSPI_MasterPcs5 = 5U << DSPI_MASTER_PCS_SHIFT, /*!< DSPI master transfer use PCS5 signal. */
DECL|kDSPI_MasterPcsContinuous|enumerator|kDSPI_MasterPcsContinuous = 1U << 20, /*!< Indicates whether the PCS signal is continuous. */
DECL|kDSPI_Master|enumerator|kDSPI_Master = 1U, /*!< DSPI peripheral operates in master mode.*/
DECL|kDSPI_MsbFirst|enumerator|kDSPI_MsbFirst = 0U, /*!< Data transfers start with most significant bit.*/
DECL|kDSPI_Pcs0ActiveLow|enumerator|kDSPI_Pcs0ActiveLow = 1U << 0, /*!< Pcs0 Active Low (idles high). */
DECL|kDSPI_Pcs0|enumerator|kDSPI_Pcs0 = 1U << 0, /*!< Pcs[0] */
DECL|kDSPI_Pcs1ActiveLow|enumerator|kDSPI_Pcs1ActiveLow = 1U << 1, /*!< Pcs1 Active Low (idles high). */
DECL|kDSPI_Pcs1|enumerator|kDSPI_Pcs1 = 1U << 1, /*!< Pcs[1] */
DECL|kDSPI_Pcs2ActiveLow|enumerator|kDSPI_Pcs2ActiveLow = 1U << 2, /*!< Pcs2 Active Low (idles high). */
DECL|kDSPI_Pcs2|enumerator|kDSPI_Pcs2 = 1U << 2, /*!< Pcs[2] */
DECL|kDSPI_Pcs3ActiveLow|enumerator|kDSPI_Pcs3ActiveLow = 1U << 3, /*!< Pcs3 Active Low (idles high). */
DECL|kDSPI_Pcs3|enumerator|kDSPI_Pcs3 = 1U << 3, /*!< Pcs[3] */
DECL|kDSPI_Pcs4ActiveLow|enumerator|kDSPI_Pcs4ActiveLow = 1U << 4, /*!< Pcs4 Active Low (idles high). */
DECL|kDSPI_Pcs4|enumerator|kDSPI_Pcs4 = 1U << 4, /*!< Pcs[4] */
DECL|kDSPI_Pcs5ActiveLow|enumerator|kDSPI_Pcs5ActiveLow = 1U << 5, /*!< Pcs5 Active Low (idles high). */
DECL|kDSPI_Pcs5|enumerator|kDSPI_Pcs5 = 1U << 5 /*!< Pcs[5] */
DECL|kDSPI_PcsActiveHigh|enumerator|kDSPI_PcsActiveHigh = 0U, /*!< Pcs Active High (idles low). */
DECL|kDSPI_PcsActiveLow|enumerator|kDSPI_PcsActiveLow = 1U /*!< Pcs Active Low (idles high). */
DECL|kDSPI_PcsAllActiveLow|enumerator|kDSPI_PcsAllActiveLow = 0xFFU /*!< Pcs0 to Pcs5 Active Low (idles high). */
DECL|kDSPI_PcsToSck|enumerator|kDSPI_PcsToSck = 1U, /*!< Pcs-to-SCK delay. */
DECL|kDSPI_RxDmaEnable|enumerator|kDSPI_RxDmaEnable = (SPI_RSER_RFDF_RE_MASK | SPI_RSER_RFDF_DIRS_MASK) /*!< RFDF flag generates DMA requests.
DECL|kDSPI_RxFifoDrainRequestFlag|enumerator|kDSPI_RxFifoDrainRequestFlag = SPI_SR_RFDF_MASK, /*!< Receive FIFO Drain Flag.*/
DECL|kDSPI_RxFifoDrainRequestInterruptEnable|enumerator|kDSPI_RxFifoDrainRequestInterruptEnable = SPI_RSER_RFDF_RE_MASK, /*!< RFDF interrupt enable, DMA disable.*/
DECL|kDSPI_RxFifoOverflowFlag|enumerator|kDSPI_RxFifoOverflowFlag = SPI_SR_RFOF_MASK, /*!< Receive FIFO Overflow Flag.*/
DECL|kDSPI_RxFifoOverflowInterruptEnable|enumerator|kDSPI_RxFifoOverflowInterruptEnable = SPI_RSER_RFOF_RE_MASK, /*!< RFOF interrupt enable.*/
DECL|kDSPI_SckToSin0Clock|enumerator|kDSPI_SckToSin0Clock = 0U, /*!< 0 system clocks between SCK edge and SIN sample.*/
DECL|kDSPI_SckToSin1Clock|enumerator|kDSPI_SckToSin1Clock = 1U, /*!< 1 system clock between SCK edge and SIN sample.*/
DECL|kDSPI_SckToSin2Clock|enumerator|kDSPI_SckToSin2Clock = 2U /*!< 2 system clocks between SCK edge and SIN sample.*/
DECL|kDSPI_SlaveCtar0|enumerator|kDSPI_SlaveCtar0 = 0U << DSPI_SLAVE_CTAR_SHIFT, /*!< DSPI slave transfer use CTAR0 setting. */
DECL|kDSPI_Slave|enumerator|kDSPI_Slave = 0U /*!< DSPI peripheral operates in slave mode.*/
DECL|kDSPI_TxAndRxStatusFlag|enumerator|kDSPI_TxAndRxStatusFlag = SPI_SR_TXRXS_MASK, /*!< The module is in Stopped/Running state.*/
DECL|kDSPI_TxCompleteFlag|enumerator|kDSPI_TxCompleteFlag = SPI_SR_TCF_MASK, /*!< Transfer Complete Flag. */
DECL|kDSPI_TxCompleteInterruptEnable|enumerator|kDSPI_TxCompleteInterruptEnable = SPI_RSER_TCF_RE_MASK, /*!< TCF interrupt enable.*/
DECL|kDSPI_TxDmaEnable|enumerator|kDSPI_TxDmaEnable = (SPI_RSER_TFFF_RE_MASK | SPI_RSER_TFFF_DIRS_MASK), /*!< TFFF flag generates DMA requests.
DECL|kDSPI_TxFifoFillRequestFlag|enumerator|kDSPI_TxFifoFillRequestFlag = SPI_SR_TFFF_MASK, /*!< Transmit FIFO Fill Flag.*/
DECL|kDSPI_TxFifoFillRequestInterruptEnable|enumerator|kDSPI_TxFifoFillRequestInterruptEnable = SPI_RSER_TFFF_RE_MASK, /*!< TFFF interrupt enable, DMA disable.*/
DECL|kDSPI_TxFifoUnderflowFlag|enumerator|kDSPI_TxFifoUnderflowFlag = SPI_SR_TFUF_MASK, /*!< Transmit FIFO Underflow Flag.*/
DECL|kDSPI_TxFifoUnderflowInterruptEnable|enumerator|kDSPI_TxFifoUnderflowInterruptEnable = SPI_RSER_TFUF_RE_MASK, /*!< TFUF interrupt enable.*/
DECL|kStatus_DSPI_Busy|enumerator|kStatus_DSPI_Busy = MAKE_STATUS(kStatusGroup_DSPI, 0), /*!< DSPI transfer is busy.*/
DECL|kStatus_DSPI_Error|enumerator|kStatus_DSPI_Error = MAKE_STATUS(kStatusGroup_DSPI, 1), /*!< DSPI driver error. */
DECL|kStatus_DSPI_Idle|enumerator|kStatus_DSPI_Idle = MAKE_STATUS(kStatusGroup_DSPI, 2), /*!< DSPI is idle.*/
DECL|kStatus_DSPI_OutOfRange|enumerator|kStatus_DSPI_OutOfRange = MAKE_STATUS(kStatusGroup_DSPI, 3) /*!< DSPI transfer out of range. */
DECL|lastCommand|member|volatile uint32_t lastCommand; /*!< The desired last data command. */
DECL|lastSckToPcsDelayInNanoSec|member|uint32_t lastSckToPcsDelayInNanoSec; /*!< The last SCK to PCS delay time in nanoseconds; setting to 0 sets the
DECL|pcsActiveHighOrLow|member|dspi_pcs_polarity_config_t pcsActiveHighOrLow; /*!< The desired PCS active high or low. */
DECL|pcsToSckDelayInNanoSec|member|uint32_t pcsToSckDelayInNanoSec; /*!< PCS to SCK delay time in nanoseconds; setting to 0 sets the minimum
DECL|remainingReceiveByteCount|member|volatile size_t remainingReceiveByteCount; /*!< A number of bytes remaining to receive.*/
DECL|remainingReceiveByteCount|member|volatile size_t remainingReceiveByteCount; /*!< A number of bytes remaining to receive.*/
DECL|remainingSendByteCount|member|volatile size_t remainingSendByteCount; /*!< A number of bytes remaining to send.*/
DECL|remainingSendByteCount|member|volatile size_t remainingSendByteCount; /*!< A number of bytes remaining to send.*/
DECL|rxData|member|uint8_t *rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|samplePoint|member|dspi_master_sample_point_t samplePoint; /*!< Controls when the module master samples SIN in the Modified Transfer
DECL|samplePoint|member|dspi_master_sample_point_t samplePoint; /*!< Controls when the module master samples SIN in the Modified Transfer
DECL|state|member|volatile uint8_t state; /*!< DSPI transfer state, see _dspi_transfer_state.*/
DECL|state|member|volatile uint8_t state; /*!< DSPI transfer state.*/
DECL|totalByteCount|member|size_t totalByteCount; /*!< A number of transfer bytes*/
DECL|totalByteCount|member|size_t totalByteCount; /*!< A number of transfer bytes*/
DECL|txData|member|uint8_t *txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|whichCtar|member|dspi_ctar_selection_t whichCtar; /*!< The desired CTAR to use. */
DECL|whichCtar|member|dspi_ctar_selection_t whichCtar; /*!< The desired CTAR to use. */
DECL|whichCtar|member|dspi_ctar_selection_t whichCtar; /*!< The desired Clock and Transfer Attributes
DECL|whichPcs|member|dspi_which_pcs_t whichPcs; /*!< The desired PCS signal to use for the data transfer.*/
DECL|whichPcs|member|dspi_which_pcs_t whichPcs; /*!< The desired Peripheral Chip Select (pcs). */
