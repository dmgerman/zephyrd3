DECL|FSL_SPI_DRIVER_VERSION|macro|FSL_SPI_DRIVER_VERSION
DECL|SPI_ClearInterrupt|function|static inline void SPI_ClearInterrupt(SPI_Type *base, uint32_t mask)
DECL|SPI_DUMMYDATA|macro|SPI_DUMMYDATA
DECL|SPI_EnableDMA|function|static inline void SPI_EnableDMA(SPI_Type *base, uint32_t mask, bool enable)
DECL|SPI_Enable|function|static inline void SPI_Enable(SPI_Type *base, bool enable)
DECL|SPI_GetDataRegisterAddress|function|static inline uint32_t SPI_GetDataRegisterAddress(SPI_Type *base)
DECL|SPI_SetMatchData|function|static inline void SPI_SetMatchData(SPI_Type *base, uint32_t matchData)
DECL|SPI_SlaveTransferAbort|function|static inline void SPI_SlaveTransferAbort(SPI_Type *base, spi_slave_handle_t *handle)
DECL|SPI_SlaveTransferGetCount|function|static inline status_t SPI_SlaveTransferGetCount(SPI_Type *base, spi_slave_handle_t *handle, size_t *count)
DECL|SPI_SlaveTransferNonBlocking|function|static inline status_t SPI_SlaveTransferNonBlocking(SPI_Type *base, spi_slave_handle_t *handle, spi_transfer_t *xfer)
DECL|_FSL_SPI_H_|macro|_FSL_SPI_H_
DECL|_spi_clock_phase|enum|typedef enum _spi_clock_phase
DECL|_spi_clock_polarity|enum|typedef enum _spi_clock_polarity
DECL|_spi_data_bitcount_mode|enum|typedef enum _spi_data_bitcount_mode
DECL|_spi_dma_enable_t|enum|enum _spi_dma_enable_t
DECL|_spi_flags|enum|enum _spi_flags
DECL|_spi_interrupt_enable|enum|enum _spi_interrupt_enable
DECL|_spi_master_config|struct|typedef struct _spi_master_config
DECL|_spi_master_handle|struct|struct _spi_master_handle
DECL|_spi_pin_mode|enum|typedef enum _spi_pin_mode
DECL|_spi_rxfifo_watermark|enum|typedef enum _spi_rxfifo_watermark
DECL|_spi_shift_direction|enum|typedef enum _spi_shift_direction
DECL|_spi_slave_config|struct|typedef struct _spi_slave_config
DECL|_spi_ss_output_mode|enum|typedef enum _spi_ss_output_mode
DECL|_spi_status|enum|enum _spi_status
DECL|_spi_transfer|struct|typedef struct _spi_transfer
DECL|_spi_txfifo_watermark|enum|typedef enum _spi_txfifo_watermark
DECL|_spi_w1c_interrupt|enum|typedef enum _spi_w1c_interrupt
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Baud Rate for SPI in Hz */
DECL|bytePerFrame|member|uint8_t bytePerFrame; /*!< SPI mode, 2bytes or 1byte in a frame */
DECL|callback|member|spi_master_callback_t callback; /*!< SPI callback */
DECL|dataMode|member|spi_data_bitcount_mode_t dataMode; /*!< 8bit or 16bit mode */
DECL|dataMode|member|spi_data_bitcount_mode_t dataMode; /*!< 8bit or 16bit mode */
DECL|dataSize|member|size_t dataSize; /*!< Transfer bytes */
DECL|direction|member|spi_shift_direction_t direction; /*!< MSB or LSB */
DECL|direction|member|spi_shift_direction_t direction; /*!< MSB or LSB */
DECL|enableMaster|member|bool enableMaster; /*!< Enable SPI at initialization time */
DECL|enableSlave|member|bool enableSlave; /*!< Enable SPI at initialization time */
DECL|enableStopInWaitMode|member|bool enableStopInWaitMode; /*!< SPI stop in wait mode */
DECL|enableStopInWaitMode|member|bool enableStopInWaitMode; /*!< SPI stop in wait mode */
DECL|flags|member|uint32_t flags; /*!< SPI control flag, useless to SPI.*/
DECL|kSPI_16BitMode|enumerator|kSPI_16BitMode /*!< 16-bit data transmission mode*/
DECL|kSPI_8BitMode|enumerator|kSPI_8BitMode = 0x0U, /*!< 8-bit data transmission mode*/
DECL|kSPI_ClockPhaseFirstEdge|enumerator|kSPI_ClockPhaseFirstEdge = 0x0U, /*!< First edge on SPSCK occurs at the middle of the first
DECL|kSPI_ClockPhaseSecondEdge|enumerator|kSPI_ClockPhaseSecondEdge /*!< First edge on SPSCK occurs at the start of the
DECL|kSPI_ClockPolarityActiveHigh|enumerator|kSPI_ClockPolarityActiveHigh = 0x0U, /*!< Active-high SPI clock (idles low). */
DECL|kSPI_ClockPolarityActiveLow|enumerator|kSPI_ClockPolarityActiveLow /*!< Active-low SPI clock (idles high). */
DECL|kSPI_DmaAllEnable|enumerator|kSPI_DmaAllEnable = (SPI_C2_TXDMAE_MASK | SPI_C2_RXDMAE_MASK) /*!< All DMA request source*/
DECL|kSPI_LsbFirst|enumerator|kSPI_LsbFirst /*!< Data transfers start with least significant bit. */
DECL|kSPI_MatchFlag|enumerator|kSPI_MatchFlag = SPI_S_SPMF_MASK, /*!< Match flag */
DECL|kSPI_MatchInterruptEnable|enumerator|kSPI_MatchInterruptEnable = 0x4U, /*!< Match interrupt */
DECL|kSPI_ModeFaultFlag|enumerator|kSPI_ModeFaultFlag = SPI_S_MODF_MASK, /*!< Mode fault flag */
DECL|kSPI_MsbFirst|enumerator|kSPI_MsbFirst = 0x0U, /*!< Data transfers start with most significant bit. */
DECL|kSPI_PinModeInput|enumerator|kSPI_PinModeInput = 0x1U, /*!< Bidirectional mode. Master: MOSI pin is input;
DECL|kSPI_PinModeNormal|enumerator|kSPI_PinModeNormal = 0x0U, /*!< Pins operate in normal, single-direction mode.*/
DECL|kSPI_PinModeOutput|enumerator|kSPI_PinModeOutput = 0x3U /*!< Bidirectional mode. Master: MOSI pin is output;
DECL|kSPI_RxBufferFullFlag|enumerator|kSPI_RxBufferFullFlag = SPI_S_SPRF_MASK, /*!< Read buffer full flag */
DECL|kSPI_RxDmaEnable|enumerator|kSPI_RxDmaEnable = SPI_C2_RXDMAE_MASK, /*!< Rx DMA request source */
DECL|kSPI_RxFifoEmptyFlag|enumerator|kSPI_RxFifoEmptyFlag = SPI_S_RFIFOEF_MASK, /*!< Rx FIFO empty */
DECL|kSPI_RxFifoError|enumerator|kSPI_RxFifoError = SPI_CI_RXFERR_MASK << 8U, /*!< Rx FIFO error */
DECL|kSPI_RxFifoFullClearInterrupt|enumerator|kSPI_RxFifoFullClearInterrupt = SPI_CI_SPRFCI_MASK, /*!< Receive FIFO full interrupt */
DECL|kSPI_RxFifoNearFullFlag|enumerator|kSPI_RxFifoNearFullFlag = SPI_S_RNFULLF_MASK, /*!< Rx FIFO near full */
DECL|kSPI_RxFifoNearFullInterruptEnable|enumerator|kSPI_RxFifoNearFullInterruptEnable = 0x8U, /*!< Receive FIFO nearly full interrupt */
DECL|kSPI_RxFifoOneHalfFull|enumerator|kSPI_RxFifoOneHalfFull = 1 /*!< SPI rx watermark at 1/2 FIFO size */
DECL|kSPI_RxFifoThreeFourthsFull|enumerator|kSPI_RxFifoThreeFourthsFull = 0, /*!< SPI rx watermark at 3/4 FIFO size */
DECL|kSPI_RxFullAndModfInterruptEnable|enumerator|kSPI_RxFullAndModfInterruptEnable = 0x1U, /*!< Receive buffer full (SPRF) and mode fault (MODF) interrupt */
DECL|kSPI_RxNearFullClearInterrupt|enumerator|kSPI_RxNearFullClearInterrupt = SPI_CI_RNFULLFCI_MASK, /*!< Receive FIFO nearly full interrupt */
DECL|kSPI_RxOverflow|enumerator|kSPI_RxOverflow = SPI_CI_RXFOF_MASK << 8U /*!< Rx FIFO Overflow */
DECL|kSPI_SlaveSelectAsGpio|enumerator|kSPI_SlaveSelectAsGpio = 0x0U, /*!< Slave select pin configured as GPIO. */
DECL|kSPI_SlaveSelectAutomaticOutput|enumerator|kSPI_SlaveSelectAutomaticOutput = 0x3U /*!< Slave select pin configured for automatic SPI output. */
DECL|kSPI_SlaveSelectFaultInput|enumerator|kSPI_SlaveSelectFaultInput = 0x2U, /*!< Slave select pin configured for fault detection. */
DECL|kSPI_TxBufferEmptyFlag|enumerator|kSPI_TxBufferEmptyFlag = SPI_S_SPTEF_MASK, /*!< Transmit buffer empty flag */
DECL|kSPI_TxDmaEnable|enumerator|kSPI_TxDmaEnable = SPI_C2_TXDMAE_MASK, /*!< Tx DMA request source */
DECL|kSPI_TxEmptyInterruptEnable|enumerator|kSPI_TxEmptyInterruptEnable = 0x2U, /*!< Transmit buffer empty interrupt */
DECL|kSPI_TxFifoEmptyClearInterrupt|enumerator|kSPI_TxFifoEmptyClearInterrupt = SPI_CI_SPTEFCI_MASK, /*!< Transmit FIFO empty interrupt */
DECL|kSPI_TxFifoError|enumerator|kSPI_TxFifoError = SPI_CI_TXFERR_MASK << 8U, /*!< Tx FIFO error */
DECL|kSPI_TxFifoFullFlag|enumerator|kSPI_TxFifoFullFlag = SPI_S_TXFULLF_MASK, /*!< Tx FIFO full */
DECL|kSPI_TxFifoNearEmptyFlag|enumerator|kSPI_TxFifoNearEmptyFlag = SPI_S_TNEAREF_MASK, /*!< Tx FIFO near empty */
DECL|kSPI_TxFifoNearEmptyInterruptEnable|enumerator|kSPI_TxFifoNearEmptyInterruptEnable = 0x10U, /*!< Transmit FIFO nearly empty interrupt */
DECL|kSPI_TxFifoOneFourthEmpty|enumerator|kSPI_TxFifoOneFourthEmpty = 0, /*!< SPI tx watermark at 1/4 FIFO size */
DECL|kSPI_TxFifoOneHalfEmpty|enumerator|kSPI_TxFifoOneHalfEmpty = 1 /*!< SPI tx watermark at 1/2 FIFO size */
DECL|kSPI_TxNearEmptyClearInterrupt|enumerator|kSPI_TxNearEmptyClearInterrupt = SPI_CI_TNEAREFCI_MASK /*!< Transmit FIFO nearly empty interrupt */
DECL|kSPI_TxOverflow|enumerator|kSPI_TxOverflow = SPI_CI_TXFOF_MASK << 8U, /*!< Tx FIFO Overflow */
DECL|kStatus_SPI_Busy|enumerator|kStatus_SPI_Busy = MAKE_STATUS(kStatusGroup_SPI, 0), /*!< SPI bus is busy */
DECL|kStatus_SPI_Error|enumerator|kStatus_SPI_Error = MAKE_STATUS(kStatusGroup_SPI, 2) /*!< SPI error */
DECL|kStatus_SPI_Idle|enumerator|kStatus_SPI_Idle = MAKE_STATUS(kStatusGroup_SPI, 1), /*!< SPI is idle */
DECL|outputMode|member|spi_ss_output_mode_t outputMode; /*!< SS pin setting */
DECL|phase|member|spi_clock_phase_t phase; /*!< Clock phase */
DECL|phase|member|spi_clock_phase_t phase; /*!< Clock phase */
DECL|pinMode|member|spi_pin_mode_t pinMode; /*!< SPI pin mode select */
DECL|polarity|member|spi_clock_polarity_t polarity; /*!< Clock polarity */
DECL|polarity|member|spi_clock_polarity_t polarity; /*!< Clock polarity */
DECL|rxData|member|uint8_t *rxData; /*!< Receive buffer */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer */
DECL|rxRemainingBytes|member|volatile size_t rxRemainingBytes; /*!< Receive data remaining in bytes */
DECL|rxWatermark|member|spi_rxfifo_watermark_t rxWatermark; /*!< Rx watermark settings */
DECL|rxWatermark|member|spi_rxfifo_watermark_t rxWatermark; /*!< Rx watermark settings */
DECL|spi_clock_phase_t|typedef|} spi_clock_phase_t;
DECL|spi_clock_polarity_t|typedef|} spi_clock_polarity_t;
DECL|spi_data_bitcount_mode_t|typedef|} spi_data_bitcount_mode_t;
DECL|spi_master_callback_t|typedef|typedef void (*spi_master_callback_t)(SPI_Type *base, spi_master_handle_t *handle, status_t status, void *userData);
DECL|spi_master_config_t|typedef|} spi_master_config_t;
DECL|spi_master_handle_t|typedef|typedef struct _spi_master_handle spi_master_handle_t;
DECL|spi_pin_mode_t|typedef|} spi_pin_mode_t;
DECL|spi_rxfifo_watermark_t|typedef|} spi_rxfifo_watermark_t;
DECL|spi_shift_direction_t|typedef|} spi_shift_direction_t;
DECL|spi_slave_callback_t|typedef|typedef void (*spi_slave_callback_t)(SPI_Type *base, spi_slave_handle_t *handle, status_t status, void *userData);
DECL|spi_slave_config_t|typedef|} spi_slave_config_t;
DECL|spi_slave_handle_t|typedef|typedef spi_master_handle_t spi_slave_handle_t;
DECL|spi_ss_output_mode_t|typedef|} spi_ss_output_mode_t;
DECL|spi_transfer_t|typedef|} spi_transfer_t;
DECL|spi_txfifo_watermark_t|typedef|} spi_txfifo_watermark_t;
DECL|spi_w1c_interrupt_t|typedef|} spi_w1c_interrupt_t;
DECL|state|member|volatile uint32_t state; /*!< SPI internal state */
DECL|transferSize|member|size_t transferSize; /*!< Bytes to be transferred */
DECL|txData|member|uint8_t *txData; /*!< Send buffer */
DECL|txData|member|uint8_t *volatile txData; /*!< Transfer buffer */
DECL|txRemainingBytes|member|volatile size_t txRemainingBytes; /*!< Send data remaining in bytes */
DECL|txWatermark|member|spi_txfifo_watermark_t txWatermark; /*!< Tx watermark settings */
DECL|txWatermark|member|spi_txfifo_watermark_t txWatermark; /*!< Tx watermark settings */
DECL|userData|member|void *userData; /*!< Callback parameter */
DECL|watermark|member|uint8_t watermark; /*!< Watermark value for SPI transfer */
