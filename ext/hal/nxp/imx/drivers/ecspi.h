DECL|ECSPI_ClearStatusFlag|function|static inline void ECSPI_ClearStatusFlag(ECSPI_Type* base, uint32_t flags)
DECL|ECSPI_Disable|function|static inline void ECSPI_Disable(ECSPI_Type* base)
DECL|ECSPI_Enable|function|static inline void ECSPI_Enable(ECSPI_Type* base)
DECL|ECSPI_GetRxfifoCounter|function|static inline uint32_t ECSPI_GetRxfifoCounter(ECSPI_Type* base)
DECL|ECSPI_GetStatusFlag|function|static inline uint32_t ECSPI_GetStatusFlag(ECSPI_Type* base, uint32_t flags)
DECL|ECSPI_GetTxfifoCounter|function|static inline uint32_t ECSPI_GetTxfifoCounter(ECSPI_Type* base)
DECL|ECSPI_InsertWaitState|function|static inline void ECSPI_InsertWaitState(ECSPI_Type* base, uint32_t number)
DECL|ECSPI_ReceiveData|function|static inline uint32_t ECSPI_ReceiveData(ECSPI_Type* base)
DECL|ECSPI_SendData|function|static inline void ECSPI_SendData(ECSPI_Type* base, uint32_t data)
DECL|ECSPI_SetBurstLength|function|static inline void ECSPI_SetBurstLength(ECSPI_Type* base, uint32_t length)
DECL|ECSPI_SetDMABurstLength|function|static inline void ECSPI_SetDMABurstLength(ECSPI_Type* base, uint32_t length)
DECL|ECSPI_SetDataInactiveState|function|static inline void ECSPI_SetDataInactiveState(ECSPI_Type* base, uint32_t channel, uint32_t state)
DECL|ECSPI_SetDelay|function|static inline void ECSPI_SetDelay(ECSPI_Type* base, uint32_t delay)
DECL|ECSPI_SetSCLKInactiveState|function|static inline void ECSPI_SetSCLKInactiveState(ECSPI_Type* base, uint32_t channel, uint32_t state)
DECL|ECSPI_SetSPIDataReady|function|static inline void ECSPI_SetSPIDataReady(ECSPI_Type* base, uint32_t spidataready)
DECL|ECSPI_SetSSMultipleBurst|function|static inline void ECSPI_SetSSMultipleBurst(ECSPI_Type* base, uint32_t channel, bool ssMultiBurst)
DECL|ECSPI_SetSSPolarity|function|static inline void ECSPI_SetSSPolarity(ECSPI_Type* base, uint32_t channel, uint32_t polarity)
DECL|ECSPI_StartBurst|function|static inline void ECSPI_StartBurst(ECSPI_Type* base)
DECL|__ECSPI_H__|macro|__ECSPI_H__
DECL|_ecspi_channel_select|enum|enum _ecspi_channel_select
DECL|_ecspi_clock_phase|enum|enum _ecspi_clock_phase
DECL|_ecspi_clock_polarity|enum|enum _ecspi_clock_polarity
DECL|_ecspi_data_ready|enum|enum _ecspi_data_ready
DECL|_ecspi_dataline_inactivestate|enum|enum _ecspi_dataline_inactivestate
DECL|_ecspi_dma_source|enum|enum _ecspi_dma_source
DECL|_ecspi_fifothreshold|enum|enum _ecspi_fifothreshold
DECL|_ecspi_init_config|struct|typedef struct _ecspi_init_config
DECL|_ecspi_master_slave_mode|enum|enum _ecspi_master_slave_mode
DECL|_ecspi_sampleperiod_clocksource|enum|enum _ecspi_sampleperiod_clocksource
DECL|_ecspi_sclk_inactivestate|enum|enum _ecspi_sclk_inactivestate
DECL|_ecspi_ss_polarity|enum|enum _ecspi_ss_polarity
DECL|_ecspi_status_flag|enum|enum _ecspi_status_flag
DECL|baudRate|member|uint32_t baudRate; /*!< Specifies desired eCSPI baud rate.*/
DECL|burstLength|member|uint32_t burstLength; /*!< Specifies the length of a burst to be transferred.*/
DECL|channelSelect|member|uint32_t channelSelect; /*!< Specifies the channel select.*/
DECL|clockPhase|member|uint32_t clockPhase; /*!< Specifies the clock phase.*/
DECL|clockPolarity|member|uint32_t clockPolarity; /*!< Specifies the clock polarity.*/
DECL|clockRate|member|uint32_t clockRate; /*!< Specifies ECSPII module clock freq.*/
DECL|ecspiAutoStart|member|bool ecspiAutoStart; /*!< Specifies the start mode.*/
DECL|ecspiClockPhaseFirstEdge|enumerator|ecspiClockPhaseFirstEdge = 0U, /*!< Data is captured on the leading edge of the SCK and
DECL|ecspiClockPhaseSecondEdge|enumerator|ecspiClockPhaseSecondEdge = 1U, /*!< Data is changed on the leading edge of the SCK and
DECL|ecspiClockPolarityActiveHigh|enumerator|ecspiClockPolarityActiveHigh = 0U, /*!< Active-high eCSPI clock (idles low).*/
DECL|ecspiClockPolarityActiveLow|enumerator|ecspiClockPolarityActiveLow = 1U, /*!< Active-low eCSPI clock (idles high).*/
DECL|ecspiDataLineStayHigh|enumerator|ecspiDataLineStayHigh = 0U, /*!< Data line inactive state stay high.*/
DECL|ecspiDataLineStayLow|enumerator|ecspiDataLineStayLow = 1U, /*!< Data line inactive state stay low.*/
DECL|ecspiDmaRxfifoRequest|enumerator|ecspiDmaRxfifoRequest = 23U, /*!< RXFIFO DMA Request.*/
DECL|ecspiDmaRxfifoTail|enumerator|ecspiDmaRxfifoTail = 31U, /*!< RXFIFO TAIL DMA Request.*/
DECL|ecspiDmaTxfifoEmpty|enumerator|ecspiDmaTxfifoEmpty = 7U, /*!< TXFIFO Empty DMA Request.*/
DECL|ecspiFlagRxfifoDataRequest|enumerator|ecspiFlagRxfifoDataRequest = 1U << 4, /*!< RXFIFO Data Request Flag.*/
DECL|ecspiFlagRxfifoFull|enumerator|ecspiFlagRxfifoFull = 1U << 5, /*!< RXFIFO Full Flag.*/
DECL|ecspiFlagRxfifoOverflow|enumerator|ecspiFlagRxfifoOverflow = 1U << 6, /*!< RXFIFO Overflow Flag.*/
DECL|ecspiFlagRxfifoReady|enumerator|ecspiFlagRxfifoReady = 1U << 3, /*!< RXFIFO Ready Flag.*/
DECL|ecspiFlagTxfifoDataRequest|enumerator|ecspiFlagTxfifoDataRequest = 1U << 1, /*!< TXFIFO Data Request Flag.*/
DECL|ecspiFlagTxfifoEmpty|enumerator|ecspiFlagTxfifoEmpty = 1U << 0, /*!< TXFIFO Empty Flag.*/
DECL|ecspiFlagTxfifoFull|enumerator|ecspiFlagTxfifoFull = 1U << 2, /*!< TXFIFO Full Flag.*/
DECL|ecspiFlagTxfifoTc|enumerator|ecspiFlagTxfifoTc = 1U << 7, /*!< TXFIFO Transform Completed Flag.*/
DECL|ecspiLowFreq32K|enumerator|ecspiLowFreq32K = 1U, /*!< Sample period counter clock from from LFRC (32.768 KHz).*/
DECL|ecspiMasterMode|enumerator|ecspiMasterMode = 1U, /*!< Set Master Mode.*/
DECL|ecspiRdyFallEdgeTrig|enumerator|ecspiRdyFallEdgeTrig = 1U, /*!< Burst is triggered by the falling edge of the SPI_RDY signal (edge-triggered).*/
DECL|ecspiRdyLowLevelTrig|enumerator|ecspiRdyLowLevelTrig = 2U, /*!< Burst is triggered by a low level of the SPI_RDY signal (level-triggered).*/
DECL|ecspiRdyNoCare|enumerator|ecspiRdyNoCare = 0U, /*!< The SPI_RDY signal is ignored.*/
DECL|ecspiRdyReserved|enumerator|ecspiRdyReserved = 3U, /*!< Reserved.*/
DECL|ecspiRxfifoThreshold|enumerator|ecspiRxfifoThreshold = 16U, /*!< defines the FIFO threshold that triggers a RX DMA/INT request.*/
DECL|ecspiSSPolarityActiveHigh|enumerator|ecspiSSPolarityActiveHigh = 1U, /*!< Active-high, eCSPI SS signal.*/
DECL|ecspiSSPolarityActiveLow|enumerator|ecspiSSPolarityActiveLow = 0U, /*!< Active-low, eCSPI SS signal.*/
DECL|ecspiSclkStayHigh|enumerator|ecspiSclkStayHigh = 1U, /*!< SCLK line inactive state stay high.*/
DECL|ecspiSclkStayLow|enumerator|ecspiSclkStayLow = 0U, /*!< SCLK inactive state stay low.*/
DECL|ecspiSclk|enumerator|ecspiSclk = 0U, /*!< Sample period counter clock from SCLK.*/
DECL|ecspiSelectChannel0|enumerator|ecspiSelectChannel0 = 0U, /*!< Select Channel 0. Chip Select 0 (SS0) is asserted.*/
DECL|ecspiSelectChannel1|enumerator|ecspiSelectChannel1 = 1U, /*!< Select Channel 1. Chip Select 1 (SS1) is asserted.*/
DECL|ecspiSelectChannel2|enumerator|ecspiSelectChannel2 = 2U, /*!< Select Channel 2. Chip Select 2 (SS2) is asserted.*/
DECL|ecspiSelectChannel3|enumerator|ecspiSelectChannel3 = 3U, /*!< Select Channel 3. Chip Select 3 (SS3) is asserted.*/
DECL|ecspiSlaveMode|enumerator|ecspiSlaveMode = 0U, /*!< Set Slave Mode.*/
DECL|ecspiTxfifoThreshold|enumerator|ecspiTxfifoThreshold = 0U, /*!< Defines the FIFO threshold that triggers a TX DMA/INT request.*/
DECL|ecspi_init_config_t|typedef|} ecspi_init_config_t;
DECL|mode|member|uint32_t mode; /*!< Specifies the mode.*/
