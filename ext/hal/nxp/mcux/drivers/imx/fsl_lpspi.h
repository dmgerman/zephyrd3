DECL|FSL_LPSPI_DRIVER_VERSION|macro|FSL_LPSPI_DRIVER_VERSION
DECL|LPSPI_ClearStatusFlags|function|static inline void LPSPI_ClearStatusFlags(LPSPI_Type *base, uint32_t statusFlags)
DECL|LPSPI_DUMMY_DATA|macro|LPSPI_DUMMY_DATA
DECL|LPSPI_DisableDMA|function|static inline void LPSPI_DisableDMA(LPSPI_Type *base, uint32_t mask)
DECL|LPSPI_DisableInterrupts|function|static inline void LPSPI_DisableInterrupts(LPSPI_Type *base, uint32_t mask)
DECL|LPSPI_EnableDMA|function|static inline void LPSPI_EnableDMA(LPSPI_Type *base, uint32_t mask)
DECL|LPSPI_EnableInterrupts|function|static inline void LPSPI_EnableInterrupts(LPSPI_Type *base, uint32_t mask)
DECL|LPSPI_Enable|function|static inline void LPSPI_Enable(LPSPI_Type *base, bool enable)
DECL|LPSPI_FlushFifo|function|static inline void LPSPI_FlushFifo(LPSPI_Type *base, bool flushTxFifo, bool flushRxFifo)
DECL|LPSPI_GetRxFifoCount|function|static inline uint32_t LPSPI_GetRxFifoCount(LPSPI_Type *base)
DECL|LPSPI_GetRxFifoSize|function|static inline uint32_t LPSPI_GetRxFifoSize(LPSPI_Type *base)
DECL|LPSPI_GetRxRegisterAddress|function|static inline uint32_t LPSPI_GetRxRegisterAddress(LPSPI_Type *base)
DECL|LPSPI_GetStatusFlags|function|static inline uint32_t LPSPI_GetStatusFlags(LPSPI_Type *base)
DECL|LPSPI_GetTxFifoCount|function|static inline uint32_t LPSPI_GetTxFifoCount(LPSPI_Type *base)
DECL|LPSPI_GetTxFifoSize|function|static inline uint32_t LPSPI_GetTxFifoSize(LPSPI_Type *base)
DECL|LPSPI_GetTxRegisterAddress|function|static inline uint32_t LPSPI_GetTxRegisterAddress(LPSPI_Type *base)
DECL|LPSPI_IsMaster|function|static inline bool LPSPI_IsMaster(LPSPI_Type *base)
DECL|LPSPI_MASTER_PCS_MASK|macro|LPSPI_MASTER_PCS_MASK
DECL|LPSPI_MASTER_PCS_SHIFT|macro|LPSPI_MASTER_PCS_SHIFT
DECL|LPSPI_ReadData|function|static inline uint32_t LPSPI_ReadData(LPSPI_Type *base)
DECL|LPSPI_SLAVE_PCS_MASK|macro|LPSPI_SLAVE_PCS_MASK
DECL|LPSPI_SLAVE_PCS_SHIFT|macro|LPSPI_SLAVE_PCS_SHIFT
DECL|LPSPI_SetAllPcsPolarity|function|static inline void LPSPI_SetAllPcsPolarity(LPSPI_Type *base, uint32_t mask)
DECL|LPSPI_SetFifoWatermarks|function|static inline void LPSPI_SetFifoWatermarks(LPSPI_Type *base, uint32_t txWater, uint32_t rxWater)
DECL|LPSPI_SetFrameSize|function|static inline void LPSPI_SetFrameSize(LPSPI_Type *base, uint32_t frameSize)
DECL|LPSPI_SetMasterSlaveMode|function|static inline void LPSPI_SetMasterSlaveMode(LPSPI_Type *base, lpspi_master_slave_mode_t mode)
DECL|LPSPI_WriteData|function|static inline void LPSPI_WriteData(LPSPI_Type *base, uint32_t data)
DECL|_FSL_LPSPI_H_|macro|_FSL_LPSPI_H_
DECL|_lpspi_clock_phase|enum|typedef enum _lpspi_clock_phase
DECL|_lpspi_clock_polarity|enum|typedef enum _lpspi_clock_polarity
DECL|_lpspi_data_out_config|enum|typedef enum _lpspi_data_out_config
DECL|_lpspi_delay_type|enum|typedef enum _lpspi_delay_type
DECL|_lpspi_dma_enable|enum|enum _lpspi_dma_enable
DECL|_lpspi_flags|enum|enum _lpspi_flags
DECL|_lpspi_host_request_select|enum|typedef enum _lpspi_host_request_select
DECL|_lpspi_interrupt_enable|enum|enum _lpspi_interrupt_enable
DECL|_lpspi_master_config|struct|typedef struct _lpspi_master_config
DECL|_lpspi_master_handle|struct|struct _lpspi_master_handle
DECL|_lpspi_master_slave_mode|enum|typedef enum _lpspi_master_slave_mode
DECL|_lpspi_match_config|enum|typedef enum _lpspi_match_config
DECL|_lpspi_pcs_polarity_config|enum|typedef enum _lpspi_pcs_polarity_config
DECL|_lpspi_pcs_polarity|enum|enum _lpspi_pcs_polarity
DECL|_lpspi_pin_config|enum|typedef enum _lpspi_pin_config
DECL|_lpspi_shift_direction|enum|typedef enum _lpspi_shift_direction
DECL|_lpspi_slave_config|struct|typedef struct _lpspi_slave_config
DECL|_lpspi_slave_handle|struct|struct _lpspi_slave_handle
DECL|_lpspi_status|enum|enum _lpspi_status
DECL|_lpspi_transfer_config_flag_for_master|enum|enum _lpspi_transfer_config_flag_for_master
DECL|_lpspi_transfer_config_flag_for_slave|enum|enum _lpspi_transfer_config_flag_for_slave
DECL|_lpspi_transfer_state|enum|enum _lpspi_transfer_state
DECL|_lpspi_transfer_width|enum|typedef enum _lpspi_transfer_width
DECL|_lpspi_transfer|struct|typedef struct _lpspi_transfer
DECL|_lpspi_which_pcs_config|enum|typedef enum _lpspi_which_pcs_config
DECL|baudRate|member|uint32_t baudRate; /*!< Baud Rate for LPSPI. */
DECL|betweenTransferDelayInNanoSec|member|betweenTransferDelayInNanoSec; /*!< After the SCK delay time with nanoseconds, setting to 0 sets the minimum
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< Bits per frame, minimum 8, maximum 4096.*/
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< Bits per frame, minimum 8, maximum 4096.*/
DECL|bytesEachRead|member|volatile uint8_t bytesEachRead; /*!< Bytes for each read RDR. */
DECL|bytesEachRead|member|volatile uint8_t bytesEachRead; /*!< Bytes for each read RDR. */
DECL|bytesEachWrite|member|volatile uint8_t bytesEachWrite; /*!< Bytes for each write TDR. */
DECL|bytesEachWrite|member|volatile uint8_t bytesEachWrite; /*!< Bytes for each write TDR. */
DECL|callback|member|lpspi_master_transfer_callback_t callback; /*!< Completion callback. */
DECL|callback|member|lpspi_slave_transfer_callback_t callback; /*!< Completion callback. */
DECL|configFlags|member|configFlags; /*!< Transfer transfer configuration flags. Set from _lpspi_transfer_config_flag_for_master if the
DECL|cpha|member|lpspi_clock_phase_t cpha; /*!< Clock phase. */
DECL|cpha|member|lpspi_clock_phase_t cpha; /*!< Clock phase. */
DECL|cpol|member|lpspi_clock_polarity_t cpol; /*!< Clock polarity. */
DECL|cpol|member|lpspi_clock_polarity_t cpol; /*!< Clock polarity. */
DECL|dataOutConfig|member|lpspi_data_out_config_t dataOutConfig; /*!< Configures if the output data is tristated
DECL|dataOutConfig|member|lpspi_data_out_config_t dataOutConfig; /*!< Configures if the output data is tristated
DECL|dataSize|member|volatile size_t dataSize; /*!< Transfer bytes. */
DECL|direction|member|lpspi_shift_direction_t direction; /*!< MSB or LSB data shift direction. */
DECL|direction|member|lpspi_shift_direction_t direction; /*!< MSB or LSB data shift direction. */
DECL|errorCount|member|volatile uint32_t errorCount; /*!< Error count for slave transfer.*/
DECL|fifoSize|member|volatile uint8_t fifoSize; /*!< FIFO dataSize. */
DECL|fifoSize|member|volatile uint8_t fifoSize; /*!< FIFO dataSize. */
DECL|isByteSwap|member|volatile bool isByteSwap; /*!< A flag that whether should byte swap. */
DECL|isByteSwap|member|volatile bool isByteSwap; /*!< A flag that whether should byte swap. */
DECL|isPcsContinuous|member|volatile bool isPcsContinuous; /*!< Is PCS continuous in transfer. */
DECL|kLPSI_1stWordAndM1EqualsM0andM1|enumerator|kLPSI_1stWordAndM1EqualsM0andM1 = 0x6U, /*!< LPSPI Match Enabled. */
DECL|kLPSI_1stWordEqualsM0and2ndWordEqualsM1|enumerator|kLPSI_1stWordEqualsM0and2ndWordEqualsM1 = 0x4U, /*!< LPSPI Match Enabled. */
DECL|kLPSI_1stWordEqualsM0orM1|enumerator|kLPSI_1stWordEqualsM0orM1 = 0x2U, /*!< LPSPI Match Enabled. */
DECL|kLPSI_AnyWordAndM1EqualsM0andM1|enumerator|kLPSI_AnyWordAndM1EqualsM0andM1 = 0x7U, /*!< LPSPI Match Enabled. */
DECL|kLPSI_AnyWordEqualsM0andNxtWordEqualsM1|enumerator|kLPSI_AnyWordEqualsM0andNxtWordEqualsM1 = 0x5U, /*!< LPSPI Match Enabled. */
DECL|kLPSI_AnyWordEqualsM0orM1|enumerator|kLPSI_AnyWordEqualsM0orM1 = 0x3U, /*!< LPSPI Match Enabled. */
DECL|kLPSI_MatchDisabled|enumerator|kLPSI_MatchDisabled = 0x0U, /*!< LPSPI Match Disabled. */
DECL|kLPSPI_AllInterruptEnable|enumerator|kLPSPI_AllInterruptEnable =
DECL|kLPSPI_AllStatusFlag|enumerator|kLPSPI_AllStatusFlag = (LPSPI_SR_TDF_MASK | LPSPI_SR_RDF_MASK | LPSPI_SR_WCF_MASK | LPSPI_SR_FCF_MASK |
DECL|kLPSPI_BetweenTransfer|enumerator|kLPSPI_BetweenTransfer /*!< Delay between transfers. */
DECL|kLPSPI_Busy|enumerator|kLPSPI_Busy, /*!< Transfer queue is not finished. */
DECL|kLPSPI_ClockPhaseFirstEdge|enumerator|kLPSPI_ClockPhaseFirstEdge = 0U, /*!< CPHA=0. Data is captured on the leading edge of the SCK and changed on the
DECL|kLPSPI_ClockPhaseSecondEdge|enumerator|kLPSPI_ClockPhaseSecondEdge = 1U /*!< CPHA=1. Data is changed on the leading edge of the SCK and captured on the
DECL|kLPSPI_ClockPolarityActiveHigh|enumerator|kLPSPI_ClockPolarityActiveHigh = 0U, /*!< CPOL=0. Active-high LPSPI clock (idles low)*/
DECL|kLPSPI_ClockPolarityActiveLow|enumerator|kLPSPI_ClockPolarityActiveLow = 1U /*!< CPOL=1. Active-low LPSPI clock (idles high)*/
DECL|kLPSPI_DataMatchFlag|enumerator|kLPSPI_DataMatchFlag = LPSPI_SR_DMF_MASK, /*!< Data Match flag */
DECL|kLPSPI_DataMatchInterruptEnable|enumerator|kLPSPI_DataMatchInterruptEnable = LPSPI_IER_DMIE_MASK, /*!< Data Match interrupt enable */
DECL|kLPSPI_Error|enumerator|kLPSPI_Error /*!< Transfer error. */
DECL|kLPSPI_FourBitXfer|enumerator|kLPSPI_FourBitXfer = 2U /*!< 4-bits shift out on SDO/SDI/PCS[3:2] and in on SDO/SDI/PCS[3:2] */
DECL|kLPSPI_FrameCompleteFlag|enumerator|kLPSPI_FrameCompleteFlag = LPSPI_SR_FCF_MASK, /*!< Frame Complete flag */
DECL|kLPSPI_FrameCompleteInterruptEnable|enumerator|kLPSPI_FrameCompleteInterruptEnable = LPSPI_IER_FCIE_MASK, /*!< Frame complete interrupt enable */
DECL|kLPSPI_HostReqExtPin|enumerator|kLPSPI_HostReqExtPin = 0U, /*!< Host Request is an ext pin. */
DECL|kLPSPI_HostReqInternalTrigger|enumerator|kLPSPI_HostReqInternalTrigger = 1U /*!< Host Request is an internal trigger. */
DECL|kLPSPI_Idle|enumerator|kLPSPI_Idle = 0x0U, /*!< Nothing in the transmitter/receiver. */
DECL|kLPSPI_LastSckToPcs|enumerator|kLPSPI_LastSckToPcs, /*!< Last SCK edge to PCS delay. */
DECL|kLPSPI_LsbFirst|enumerator|kLPSPI_LsbFirst = 1U /*!< Data transfers start with least significant bit.*/
DECL|kLPSPI_MasterByteSwap|enumerator|kLPSPI_MasterByteSwap =
DECL|kLPSPI_MasterPcs0|enumerator|kLPSPI_MasterPcs0 = 0U << LPSPI_MASTER_PCS_SHIFT, /*!< LPSPI master transfer use PCS0 signal */
DECL|kLPSPI_MasterPcs1|enumerator|kLPSPI_MasterPcs1 = 1U << LPSPI_MASTER_PCS_SHIFT, /*!< LPSPI master transfer use PCS1 signal */
DECL|kLPSPI_MasterPcs2|enumerator|kLPSPI_MasterPcs2 = 2U << LPSPI_MASTER_PCS_SHIFT, /*!< LPSPI master transfer use PCS2 signal */
DECL|kLPSPI_MasterPcs3|enumerator|kLPSPI_MasterPcs3 = 3U << LPSPI_MASTER_PCS_SHIFT, /*!< LPSPI master transfer use PCS3 signal */
DECL|kLPSPI_MasterPcsContinuous|enumerator|kLPSPI_MasterPcsContinuous = 1U << 20, /*!< Is PCS signal continuous */
DECL|kLPSPI_Master|enumerator|kLPSPI_Master = 1U, /*!< LPSPI peripheral operates in master mode.*/
DECL|kLPSPI_ModuleBusyFlag|enumerator|kLPSPI_ModuleBusyFlag = LPSPI_SR_MBF_MASK, /*!< Module Busy flag */
DECL|kLPSPI_MsbFirst|enumerator|kLPSPI_MsbFirst = 0U, /*!< Data transfers start with most significant bit.*/
DECL|kLPSPI_Pcs0ActiveLow|enumerator|kLPSPI_Pcs0ActiveLow = 1U << 0, /*!< Pcs0 Active Low (idles high). */
DECL|kLPSPI_Pcs0|enumerator|kLPSPI_Pcs0 = 0U, /*!< PCS[0] */
DECL|kLPSPI_Pcs1ActiveLow|enumerator|kLPSPI_Pcs1ActiveLow = 1U << 1, /*!< Pcs1 Active Low (idles high). */
DECL|kLPSPI_Pcs1|enumerator|kLPSPI_Pcs1 = 1U, /*!< PCS[1] */
DECL|kLPSPI_Pcs2ActiveLow|enumerator|kLPSPI_Pcs2ActiveLow = 1U << 2, /*!< Pcs2 Active Low (idles high). */
DECL|kLPSPI_Pcs2|enumerator|kLPSPI_Pcs2 = 2U, /*!< PCS[2] */
DECL|kLPSPI_Pcs3ActiveLow|enumerator|kLPSPI_Pcs3ActiveLow = 1U << 3, /*!< Pcs3 Active Low (idles high). */
DECL|kLPSPI_Pcs3|enumerator|kLPSPI_Pcs3 = 3U /*!< PCS[3] */
DECL|kLPSPI_PcsActiveHigh|enumerator|kLPSPI_PcsActiveHigh = 1U, /*!< PCS Active High (idles low) */
DECL|kLPSPI_PcsActiveLow|enumerator|kLPSPI_PcsActiveLow = 0U /*!< PCS Active Low (idles high) */
DECL|kLPSPI_PcsAllActiveLow|enumerator|kLPSPI_PcsAllActiveLow = 0xFU /*!< Pcs0 to Pcs5 Active Low (idles high). */
DECL|kLPSPI_PcsToSck|enumerator|kLPSPI_PcsToSck = 1U, /*!< PCS-to-SCK delay. */
DECL|kLPSPI_ReceiveErrorFlag|enumerator|kLPSPI_ReceiveErrorFlag = LPSPI_SR_REF_MASK, /*!< Receive Error flag (FIFO overrun) */
DECL|kLPSPI_ReceiveErrorInterruptEnable|enumerator|kLPSPI_ReceiveErrorInterruptEnable = LPSPI_IER_REIE_MASK, /*!< Receive Error interrupt enable (FIFO overrun) */
DECL|kLPSPI_RxDataReadyFlag|enumerator|kLPSPI_RxDataReadyFlag = LPSPI_SR_RDF_MASK, /*!< Receive data flag */
DECL|kLPSPI_RxDmaEnable|enumerator|kLPSPI_RxDmaEnable = LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */
DECL|kLPSPI_RxInterruptEnable|enumerator|kLPSPI_RxInterruptEnable = LPSPI_IER_RDIE_MASK, /*!< Receive data interrupt enable */
DECL|kLPSPI_SdiInSdiOut|enumerator|kLPSPI_SdiInSdiOut = 1U, /*!< LPSPI SDI input, SDI output. */
DECL|kLPSPI_SdiInSdoOut|enumerator|kLPSPI_SdiInSdoOut = 0U, /*!< LPSPI SDI input, SDO output. */
DECL|kLPSPI_SdoInSdiOut|enumerator|kLPSPI_SdoInSdiOut = 3U /*!< LPSPI SDO input, SDI output. */
DECL|kLPSPI_SdoInSdoOut|enumerator|kLPSPI_SdoInSdoOut = 2U, /*!< LPSPI SDO input, SDO output. */
DECL|kLPSPI_SingleBitXfer|enumerator|kLPSPI_SingleBitXfer = 0U, /*!< 1-bit shift at a time, data out on SDO, in on SDI (normal mode) */
DECL|kLPSPI_SlaveByteSwap|enumerator|kLPSPI_SlaveByteSwap =
DECL|kLPSPI_SlavePcs0|enumerator|kLPSPI_SlavePcs0 = 0U << LPSPI_SLAVE_PCS_SHIFT, /*!< LPSPI slave transfer use PCS0 signal */
DECL|kLPSPI_SlavePcs1|enumerator|kLPSPI_SlavePcs1 = 1U << LPSPI_SLAVE_PCS_SHIFT, /*!< LPSPI slave transfer use PCS1 signal */
DECL|kLPSPI_SlavePcs2|enumerator|kLPSPI_SlavePcs2 = 2U << LPSPI_SLAVE_PCS_SHIFT, /*!< LPSPI slave transfer use PCS2 signal */
DECL|kLPSPI_SlavePcs3|enumerator|kLPSPI_SlavePcs3 = 3U << LPSPI_SLAVE_PCS_SHIFT, /*!< LPSPI slave transfer use PCS3 signal */
DECL|kLPSPI_Slave|enumerator|kLPSPI_Slave = 0U /*!< LPSPI peripheral operates in slave mode.*/
DECL|kLPSPI_TransferCompleteFlag|enumerator|kLPSPI_TransferCompleteFlag = LPSPI_SR_TCF_MASK, /*!< Transfer Complete flag */
DECL|kLPSPI_TransferCompleteInterruptEnable|enumerator|kLPSPI_TransferCompleteInterruptEnable = LPSPI_IER_TCIE_MASK, /*!< Transfer complete interrupt enable */
DECL|kLPSPI_TransmitErrorFlag|enumerator|kLPSPI_TransmitErrorFlag = LPSPI_SR_TEF_MASK, /*!< Transmit Error flag (FIFO underrun) */
DECL|kLPSPI_TransmitErrorInterruptEnable|enumerator|kLPSPI_TransmitErrorInterruptEnable = LPSPI_IER_TEIE_MASK, /*!< Transmit error interrupt enable(FIFO underrun)*/
DECL|kLPSPI_TwoBitXfer|enumerator|kLPSPI_TwoBitXfer = 1U, /*!< 2-bits shift out on SDO/SDI and in on SDO/SDI */
DECL|kLPSPI_TxDataRequestFlag|enumerator|kLPSPI_TxDataRequestFlag = LPSPI_SR_TDF_MASK, /*!< Transmit data flag */
DECL|kLPSPI_TxDmaEnable|enumerator|kLPSPI_TxDmaEnable = LPSPI_DER_TDDE_MASK, /*!< Transmit data DMA enable */
DECL|kLPSPI_TxInterruptEnable|enumerator|kLPSPI_TxInterruptEnable = LPSPI_IER_TDIE_MASK, /*!< Transmit data interrupt enable */
DECL|kLPSPI_WordCompleteFlag|enumerator|kLPSPI_WordCompleteFlag = LPSPI_SR_WCF_MASK, /*!< Word Complete flag */
DECL|kLPSPI_WordCompleteInterruptEnable|enumerator|kLPSPI_WordCompleteInterruptEnable = LPSPI_IER_WCIE_MASK, /*!< Word complete interrupt enable */
DECL|kLpspiDataOutRetained|enumerator|kLpspiDataOutRetained = 0U, /*!< Data out retains last value when chip select is de-asserted */
DECL|kLpspiDataOutTristate|enumerator|kLpspiDataOutTristate = 1U /*!< Data out is tristated when chip select is de-asserted */
DECL|kStatus_LPSPI_Busy|enumerator|kStatus_LPSPI_Busy = MAKE_STATUS(kStatusGroup_LPSPI, 0), /*!< LPSPI transfer is busy.*/
DECL|kStatus_LPSPI_Error|enumerator|kStatus_LPSPI_Error = MAKE_STATUS(kStatusGroup_LPSPI, 1), /*!< LPSPI driver error. */
DECL|kStatus_LPSPI_Idle|enumerator|kStatus_LPSPI_Idle = MAKE_STATUS(kStatusGroup_LPSPI, 2), /*!< LPSPI is idle.*/
DECL|kStatus_LPSPI_OutOfRange|enumerator|kStatus_LPSPI_OutOfRange = MAKE_STATUS(kStatusGroup_LPSPI, 3) /*!< LPSPI transfer out Of range. */
DECL|lastSckToPcsDelayInNanoSec|member|uint32_t lastSckToPcsDelayInNanoSec; /*!< Last SCK to PCS delay time in nanoseconds, setting to 0 sets the minimum
DECL|lpspi_clock_phase_t|typedef|} lpspi_clock_phase_t;
DECL|lpspi_clock_polarity_t|typedef|} lpspi_clock_polarity_t;
DECL|lpspi_data_out_config_t|typedef|} lpspi_data_out_config_t;
DECL|lpspi_delay_type_t|typedef|} lpspi_delay_type_t;
DECL|lpspi_host_request_select_t|typedef|} lpspi_host_request_select_t;
DECL|lpspi_master_config_t|typedef|} lpspi_master_config_t;
DECL|lpspi_master_handle_t|typedef|typedef struct _lpspi_master_handle lpspi_master_handle_t;
DECL|lpspi_master_slave_mode_t|typedef|} lpspi_master_slave_mode_t;
DECL|lpspi_master_transfer_callback_t|typedef|typedef void (*lpspi_master_transfer_callback_t)(LPSPI_Type *base,
DECL|lpspi_match_config_t|typedef|} lpspi_match_config_t;
DECL|lpspi_pcs_polarity_config_t|typedef|} lpspi_pcs_polarity_config_t;
DECL|lpspi_pin_config_t|typedef|} lpspi_pin_config_t;
DECL|lpspi_shift_direction_t|typedef|} lpspi_shift_direction_t;
DECL|lpspi_slave_config_t|typedef|} lpspi_slave_config_t;
DECL|lpspi_slave_handle_t|typedef|typedef struct _lpspi_slave_handle lpspi_slave_handle_t;
DECL|lpspi_slave_transfer_callback_t|typedef|typedef void (*lpspi_slave_transfer_callback_t)(LPSPI_Type *base,
DECL|lpspi_transfer_t|typedef|} lpspi_transfer_t;
DECL|lpspi_transfer_width_t|typedef|} lpspi_transfer_width_t;
DECL|lpspi_which_pcs_t|typedef|} lpspi_which_pcs_t;
DECL|pcsActiveHighOrLow|member|lpspi_pcs_polarity_config_t pcsActiveHighOrLow; /*!< Desired PCS active high or low */
DECL|pcsActiveHighOrLow|member|lpspi_pcs_polarity_config_t pcsActiveHighOrLow; /*!< Desired PCS active high or low */
DECL|pcsToSckDelayInNanoSec|member|uint32_t pcsToSckDelayInNanoSec; /*!< PCS to SCK delay time in nanoseconds, setting to 0 sets the minimum delay.
DECL|pinCfg|member|lpspi_pin_config_t pinCfg; /*!< Configures which pins are used for input and output data
DECL|pinCfg|member|lpspi_pin_config_t pinCfg; /*!< Configures which pins are used for input and output data
DECL|readRegRemainingTimes|member|volatile uint32_t readRegRemainingTimes; /*!< Read RDR register remaining times. */
DECL|readRegRemainingTimes|member|volatile uint32_t readRegRemainingTimes; /*!< Read RDR register remaining times. */
DECL|rxData|member|uint8_t *rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|rxRemainingByteCount|member|volatile size_t rxRemainingByteCount; /*!< Number of bytes remaining to receive.*/
DECL|rxRemainingByteCount|member|volatile size_t rxRemainingByteCount; /*!< Number of bytes remaining to receive.*/
DECL|rxWatermark|member|volatile uint8_t rxWatermark; /*!< Rx watermark. */
DECL|rxWatermark|member|volatile uint8_t rxWatermark; /*!< Rx watermark. */
DECL|state|member|volatile uint8_t state; /*!< LPSPI transfer state , _lpspi_transfer_state.*/
DECL|state|member|volatile uint8_t state; /*!< LPSPI transfer state , _lpspi_transfer_state.*/
DECL|totalByteCount|member|uint32_t totalByteCount; /*!< Number of transfer bytes*/
DECL|totalByteCount|member|uint32_t totalByteCount; /*!< Number of transfer bytes*/
DECL|txBuffIfNull|member|uint32_t txBuffIfNull; /*!< Used if the txData is NULL. */
DECL|txData|member|uint8_t *txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txRemainingByteCount|member|volatile size_t txRemainingByteCount; /*!< Number of bytes remaining to send.*/
DECL|txRemainingByteCount|member|volatile size_t txRemainingByteCount; /*!< Number of bytes remaining to send.*/
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|whichPcs|member|lpspi_which_pcs_t whichPcs; /*!< Desired Peripheral Chip Select (PCS). */
DECL|whichPcs|member|lpspi_which_pcs_t whichPcs; /*!< Desired Peripheral Chip Select (pcs) */
DECL|writeRegRemainingTimes|member|volatile uint32_t writeRegRemainingTimes; /*!< Write TDR register remaining times. */
DECL|writeRegRemainingTimes|member|volatile uint32_t writeRegRemainingTimes; /*!< Write TDR register remaining times. */
DECL|writeTcrInIsr|member|volatile bool writeTcrInIsr; /*!< A flag that whether should write TCR in ISR. */
