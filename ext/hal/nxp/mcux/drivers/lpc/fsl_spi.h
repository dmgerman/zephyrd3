DECL|FSL_SPI_DRIVER_VERSION|macro|FSL_SPI_DRIVER_VERSION
DECL|SPI_ASSERTNUM_SSEL|macro|SPI_ASSERTNUM_SSEL
DECL|SPI_CTRLMASK|macro|SPI_CTRLMASK
DECL|SPI_DATA|macro|SPI_DATA
DECL|SPI_DEASSERTNUM_SSEL|macro|SPI_DEASSERTNUM_SSEL
DECL|SPI_DEASSERT_ALL|macro|SPI_DEASSERT_ALL
DECL|SPI_DUMMYDATA|macro|SPI_DUMMYDATA
DECL|SPI_DisableInterrupts|function|static inline void SPI_DisableInterrupts(SPI_Type *base, uint32_t irqs)
DECL|SPI_EnableInterrupts|function|static inline void SPI_EnableInterrupts(SPI_Type *base, uint32_t irqs)
DECL|SPI_Enable|function|static inline void SPI_Enable(SPI_Type *base, bool enable)
DECL|SPI_FIFOTRIG_RXLVL_GET|macro|SPI_FIFOTRIG_RXLVL_GET
DECL|SPI_FIFOTRIG_TXLVL_GET|macro|SPI_FIFOTRIG_TXLVL_GET
DECL|SPI_FIFOWR_FLAGS_MASK|macro|SPI_FIFOWR_FLAGS_MASK
DECL|SPI_GetStatusFlags|function|static inline uint32_t SPI_GetStatusFlags(SPI_Type *base)
DECL|SPI_ReadData|function|static inline uint32_t SPI_ReadData(SPI_Type *base)
DECL|SPI_SlaveTransferAbort|function|static inline void SPI_SlaveTransferAbort(SPI_Type *base, spi_slave_handle_t *handle)
DECL|SPI_SlaveTransferCreateHandle|function|static inline status_t SPI_SlaveTransferCreateHandle(SPI_Type *base, spi_slave_handle_t *handle, spi_slave_callback_t callback, void *userData)
DECL|SPI_SlaveTransferGetCount|function|static inline status_t SPI_SlaveTransferGetCount(SPI_Type *base, spi_slave_handle_t *handle, size_t *count)
DECL|SPI_SlaveTransferHandleIRQ|function|static inline void SPI_SlaveTransferHandleIRQ(SPI_Type *base, spi_slave_handle_t *handle)
DECL|SPI_SlaveTransferNonBlocking|function|static inline status_t SPI_SlaveTransferNonBlocking(SPI_Type *base, spi_slave_handle_t *handle, spi_transfer_t *xfer)
DECL|_FSL_SPI_H_|macro|_FSL_SPI_H_
DECL|_spi_clock_phase|enum|typedef enum _spi_clock_phase {
DECL|_spi_clock_polarity|enum|typedef enum _spi_clock_polarity {
DECL|_spi_config|struct|typedef struct _spi_config
DECL|_spi_data_width|enum|typedef enum _spi_data_width {
DECL|_spi_interrupt_enable|enum|enum _spi_interrupt_enable
DECL|_spi_master_config|struct|typedef struct _spi_master_config
DECL|_spi_master_handle|struct|struct _spi_master_handle
DECL|_spi_rxfifo_watermark|enum|typedef enum _spi_rxfifo_watermark {
DECL|_spi_shift_direction|enum|typedef enum _spi_shift_direction {
DECL|_spi_slave_config|struct|typedef struct _spi_slave_config
DECL|_spi_ssel|enum|typedef enum _spi_ssel {
DECL|_spi_statusflags|enum|enum _spi_statusflags
DECL|_spi_status|enum|enum _spi_status
DECL|_spi_transfer|struct|typedef struct _spi_transfer
DECL|_spi_txfifo_watermark|enum|typedef enum _spi_txfifo_watermark {
DECL|_spi_xfer_option|enum|typedef enum _spi_xfer_option {
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Baud Rate for SPI in Hz */
DECL|callback|member|spi_master_callback_t callback; /*!< SPI callback */
DECL|configFlags|member|uint32_t configFlags; /*!< Additional option to control transfer */
DECL|configFlags|member|uint32_t configFlags; /*!< Additional option to control transfer */
DECL|dataSize|member|size_t dataSize; /*!< Transfer bytes */
DECL|dataWidth|member|spi_data_width_t dataWidth;
DECL|dataWidth|member|spi_data_width_t dataWidth; /*!< Width of the data */
DECL|dataWidth|member|spi_data_width_t dataWidth; /*!< Width of the data */
DECL|dataWidth|member|uint8_t dataWidth; /*!< Width of the data [Valid values: 1 to 16] */
DECL|direction|member|spi_shift_direction_t direction; /*!< MSB or LSB */
DECL|direction|member|spi_shift_direction_t direction; /*!< MSB or LSB */
DECL|enableLoopback|member|bool enableLoopback; /*!< Enable loopback for test purpose */
DECL|enableMaster|member|bool enableMaster; /*!< Enable SPI at initialization time */
DECL|enableSlave|member|bool enableSlave; /*!< Enable SPI at initialization time */
DECL|kSPI_ClockPhaseFirstEdge|enumerator|kSPI_ClockPhaseFirstEdge = 0x0U, /*!< First edge on SCK occurs at the middle of the first
DECL|kSPI_ClockPhaseSecondEdge|enumerator|kSPI_ClockPhaseSecondEdge /*!< First edge on SCK occurs at the start of the
DECL|kSPI_ClockPolarityActiveHigh|enumerator|kSPI_ClockPolarityActiveHigh = 0x0U, /*!< Active-high SPI clock (idles low). */
DECL|kSPI_ClockPolarityActiveLow|enumerator|kSPI_ClockPolarityActiveLow /*!< Active-low SPI clock (idles high). */
DECL|kSPI_Data10Bits|enumerator|kSPI_Data10Bits = 9, /*!< 10 bits data width */
DECL|kSPI_Data11Bits|enumerator|kSPI_Data11Bits = 10, /*!< 11 bits data width */
DECL|kSPI_Data12Bits|enumerator|kSPI_Data12Bits = 11, /*!< 12 bits data width */
DECL|kSPI_Data13Bits|enumerator|kSPI_Data13Bits = 12, /*!< 13 bits data width */
DECL|kSPI_Data14Bits|enumerator|kSPI_Data14Bits = 13, /*!< 14 bits data width */
DECL|kSPI_Data15Bits|enumerator|kSPI_Data15Bits = 14, /*!< 15 bits data width */
DECL|kSPI_Data16Bits|enumerator|kSPI_Data16Bits = 15, /*!< 16 bits data width */
DECL|kSPI_Data4Bits|enumerator|kSPI_Data4Bits = 3, /*!< 4 bits data width */
DECL|kSPI_Data5Bits|enumerator|kSPI_Data5Bits = 4, /*!< 5 bits data width */
DECL|kSPI_Data6Bits|enumerator|kSPI_Data6Bits = 5, /*!< 6 bits data width */
DECL|kSPI_Data7Bits|enumerator|kSPI_Data7Bits = 6, /*!< 7 bits data width */
DECL|kSPI_Data8Bits|enumerator|kSPI_Data8Bits = 7, /*!< 8 bits data width */
DECL|kSPI_Data9Bits|enumerator|kSPI_Data9Bits = 8, /*!< 9 bits data width */
DECL|kSPI_FrameAssert|enumerator|kSPI_FrameAssert = (SPI_FIFOWR_EOT_MASK), /*!< When transfer ends, assert chip select */
DECL|kSPI_FrameDelay|enumerator|kSPI_FrameDelay = (SPI_FIFOWR_EOF_MASK), /*!< Delay chip select */
DECL|kSPI_LsbFirst|enumerator|kSPI_LsbFirst = 1U /*!< Data transfers start with least significant bit. */
DECL|kSPI_MsbFirst|enumerator|kSPI_MsbFirst = 0U, /*!< Data transfers start with most significant bit. */
DECL|kSPI_RxFifo1|enumerator|kSPI_RxFifo1 = 0, /*!< SPI rx watermark at 1 item */
DECL|kSPI_RxFifo2|enumerator|kSPI_RxFifo2 = 1, /*!< SPI rx watermark at 2 items */
DECL|kSPI_RxFifo3|enumerator|kSPI_RxFifo3 = 2, /*!< SPI rx watermark at 3 items */
DECL|kSPI_RxFifo4|enumerator|kSPI_RxFifo4 = 3, /*!< SPI rx watermark at 4 items */
DECL|kSPI_RxFifo5|enumerator|kSPI_RxFifo5 = 4, /*!< SPI rx watermark at 5 items */
DECL|kSPI_RxFifo6|enumerator|kSPI_RxFifo6 = 5, /*!< SPI rx watermark at 6 items */
DECL|kSPI_RxFifo7|enumerator|kSPI_RxFifo7 = 6, /*!< SPI rx watermark at 7 items */
DECL|kSPI_RxFifo8|enumerator|kSPI_RxFifo8 = 7, /*!< SPI rx watermark at 8 items */
DECL|kSPI_RxFullFlag|enumerator|kSPI_RxFullFlag = SPI_FIFOSTAT_RXFULL_MASK, /*!< rxFIFO is full */
DECL|kSPI_RxLvlIrq|enumerator|kSPI_RxLvlIrq = SPI_FIFOINTENSET_RXLVL_MASK, /*!< Rx level interrupt */
DECL|kSPI_RxNotEmptyFlag|enumerator|kSPI_RxNotEmptyFlag = SPI_FIFOSTAT_RXNOTEMPTY_MASK, /*!< rxFIFO is not empty */
DECL|kSPI_Ssel0|enumerator|kSPI_Ssel0 = 0, /*!< Slave select 0 */
DECL|kSPI_Ssel1|enumerator|kSPI_Ssel1 = 1, /*!< Slave select 1 */
DECL|kSPI_Ssel2|enumerator|kSPI_Ssel2 = 2, /*!< Slave select 2 */
DECL|kSPI_Ssel3|enumerator|kSPI_Ssel3 = 3, /*!< Slave select 3 */
DECL|kSPI_TxEmptyFlag|enumerator|kSPI_TxEmptyFlag = SPI_FIFOSTAT_TXEMPTY_MASK, /*!< txFifo is empty */
DECL|kSPI_TxFifo0|enumerator|kSPI_TxFifo0 = 0, /*!< SPI tx watermark is empty */
DECL|kSPI_TxFifo1|enumerator|kSPI_TxFifo1 = 1, /*!< SPI tx watermark at 1 item */
DECL|kSPI_TxFifo2|enumerator|kSPI_TxFifo2 = 2, /*!< SPI tx watermark at 2 items */
DECL|kSPI_TxFifo3|enumerator|kSPI_TxFifo3 = 3, /*!< SPI tx watermark at 3 items */
DECL|kSPI_TxFifo4|enumerator|kSPI_TxFifo4 = 4, /*!< SPI tx watermark at 4 items */
DECL|kSPI_TxFifo5|enumerator|kSPI_TxFifo5 = 5, /*!< SPI tx watermark at 5 items */
DECL|kSPI_TxFifo6|enumerator|kSPI_TxFifo6 = 6, /*!< SPI tx watermark at 6 items */
DECL|kSPI_TxFifo7|enumerator|kSPI_TxFifo7 = 7, /*!< SPI tx watermark at 7 items */
DECL|kSPI_TxLvlIrq|enumerator|kSPI_TxLvlIrq = SPI_FIFOINTENSET_TXLVL_MASK, /*!< Tx level interrupt */
DECL|kSPI_TxNotFullFlag|enumerator|kSPI_TxNotFullFlag = SPI_FIFOSTAT_TXNOTFULL_MASK, /*!< txFifo is not full */
DECL|kStatus_SPI_BaudrateNotSupport|enumerator|kStatus_SPI_BaudrateNotSupport =
DECL|kStatus_SPI_Busy|enumerator|kStatus_SPI_Busy = MAKE_STATUS(kStatusGroup_LPC_SPI, 0), /*!< SPI bus is busy */
DECL|kStatus_SPI_Error|enumerator|kStatus_SPI_Error = MAKE_STATUS(kStatusGroup_LPC_SPI, 2), /*!< SPI error */
DECL|kStatus_SPI_Idle|enumerator|kStatus_SPI_Idle = MAKE_STATUS(kStatusGroup_LPC_SPI, 1), /*!< SPI is idle */
DECL|phase|member|spi_clock_phase_t phase; /*!< Clock phase */
DECL|phase|member|spi_clock_phase_t phase; /*!< Clock phase */
DECL|polarity|member|spi_clock_polarity_t polarity; /*!< Clock polarity */
DECL|polarity|member|spi_clock_polarity_t polarity; /*!< Clock polarity */
DECL|rxData|member|uint8_t *rxData; /*!< Receive buffer */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer */
DECL|rxRemainingBytes|member|volatile size_t rxRemainingBytes; /*!< Number of data to be received [in bytes] */
DECL|rxWatermark|member|spi_rxfifo_watermark_t rxWatermark; /*!< rxFIFO watermark */
DECL|rxWatermark|member|spi_rxfifo_watermark_t rxWatermark; /*!< rxFIFO watermark */
DECL|rxWatermark|member|spi_rxfifo_watermark_t rxWatermark; /*!< rxFIFO watermark */
DECL|spi_clock_phase_t|typedef|} spi_clock_phase_t;
DECL|spi_clock_polarity_t|typedef|} spi_clock_polarity_t;
DECL|spi_config_t|typedef|} spi_config_t;
DECL|spi_data_width_t|typedef|} spi_data_width_t;
DECL|spi_master_callback_t|typedef|typedef void (*spi_master_callback_t)(SPI_Type *base, spi_master_handle_t *handle, status_t status, void *userData);
DECL|spi_master_config_t|typedef|} spi_master_config_t;
DECL|spi_master_handle_t|typedef|typedef struct _spi_master_handle spi_master_handle_t;
DECL|spi_rxfifo_watermark_t|typedef|} spi_rxfifo_watermark_t;
DECL|spi_shift_direction_t|typedef|} spi_shift_direction_t;
DECL|spi_slave_callback_t|typedef|typedef void (*spi_slave_callback_t)(SPI_Type *base, spi_slave_handle_t *handle, status_t status, void *userData);
DECL|spi_slave_config_t|typedef|} spi_slave_config_t;
DECL|spi_slave_handle_t|typedef|typedef spi_master_handle_t spi_slave_handle_t;
DECL|spi_ssel_t|typedef|} spi_ssel_t;
DECL|spi_transfer_t|typedef|} spi_transfer_t;
DECL|spi_txfifo_watermark_t|typedef|} spi_txfifo_watermark_t;
DECL|spi_xfer_option_t|typedef|} spi_xfer_option_t;
DECL|sselNum|member|spi_ssel_t sselNum;
DECL|sselNum|member|spi_ssel_t sselNum; /*!< Slave select number */
DECL|sselNum|member|uint8_t sselNum; /*!< Slave select number to be asserted when transferring data [Valid values: 0 to 3] */
DECL|state|member|volatile uint32_t state; /*!< SPI internal state */
DECL|toReceiveCount|member|volatile size_t toReceiveCount; /*!< Receive data remaining in bytes */
DECL|totalByteCount|member|size_t totalByteCount; /*!< A number of transfer bytes */
DECL|txData|member|uint8_t *txData; /*!< Send buffer */
DECL|txData|member|uint8_t *volatile txData; /*!< Transfer buffer */
DECL|txRemainingBytes|member|volatile size_t txRemainingBytes; /*!< Number of data to be transmitted [in bytes] */
DECL|txWatermark|member|spi_txfifo_watermark_t txWatermark; /*!< txFIFO watermark */
DECL|txWatermark|member|spi_txfifo_watermark_t txWatermark; /*!< txFIFO watermark */
DECL|txWatermark|member|spi_txfifo_watermark_t txWatermark; /*!< txFIFO watermark */
DECL|userData|member|void *userData; /*!< Callback parameter */
