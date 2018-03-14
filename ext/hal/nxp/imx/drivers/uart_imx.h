DECL|UART_Disable|function|static inline void UART_Disable(UART_Type* base)
DECL|UART_Enable|function|static inline void UART_Enable(UART_Type* base)
DECL|UART_GetStatusFlag|function|static inline bool UART_GetStatusFlag(UART_Type* base, uint32_t flag){
DECL|UART_Getchar|function|static inline uint8_t UART_Getchar(UART_Type* base)
DECL|UART_Putchar|function|static inline void UART_Putchar(UART_Type* base, uint8_t data)
DECL|UART_ReadBaudRateCount|function|static inline uint16_t UART_ReadBaudRateCount(UART_Type* base)
DECL|UART_SetCtsTriggerLevel|function|static inline void UART_SetCtsTriggerLevel(UART_Type* base, uint8_t triggerLevel)
DECL|UART_SetDirMode|function|static inline void UART_SetDirMode(UART_Type* base, uint32_t direction)
DECL|UART_SetDtrIntTriggerEdge|function|static inline void UART_SetDtrIntTriggerEdge(UART_Type* base, uint32_t triggerEdge)
DECL|UART_SetEscapeChar|function|static inline void UART_SetEscapeChar(UART_Type* base, uint8_t escapeChar)
DECL|UART_SetEscapeTimerInterval|function|static inline void UART_SetEscapeTimerInterval(UART_Type* base, uint16_t timerInterval)
DECL|UART_SetRtsIntTriggerEdge|function|static inline void UART_SetRtsIntTriggerEdge(UART_Type* base, uint32_t triggerEdge)
DECL|UART_SetRxFifoWatermark|function|static inline void UART_SetRxFifoWatermark(UART_Type* base, uint8_t watermark)
DECL|UART_SetRxIdleCondition|function|static inline void UART_SetRxIdleCondition(UART_Type* base, uint32_t idleCondition)
DECL|UART_SetSlaveAddress|function|static inline void UART_SetSlaveAddress(UART_Type* base, uint8_t slaveAddress)
DECL|UART_SetTxFifoWatermark|function|static inline void UART_SetTxFifoWatermark(UART_Type* base, uint8_t watermark)
DECL|__UART_IMX_H__|macro|__UART_IMX_H__
DECL|_uart_direction_mode|enum|enum _uart_direction_mode
DECL|_uart_dma|enum|enum _uart_dma
DECL|_uart_dtr_int_trigger_edge|enum|enum _uart_dtr_int_trigger_edge
DECL|_uart_init_config|struct|typedef struct _uart_init_config
DECL|_uart_interrupt|enum|enum _uart_interrupt
DECL|_uart_irda_vote_clock|enum|enum _uart_irda_vote_clock
DECL|_uart_modem_mode|enum|enum _uart_modem_mode
DECL|_uart_partity_mode|enum|enum _uart_partity_mode
DECL|_uart_rts_int_trigger_edge|enum|enum _uart_rts_int_trigger_edge
DECL|_uart_rx_idle_condition|enum|enum _uart_rx_idle_condition
DECL|_uart_status_flag|enum|enum _uart_status_flag
DECL|_uart_stop_bit_num|enum|enum _uart_stop_bit_num
DECL|_uart_word_length|enum|enum _uart_word_length
DECL|baudRate|member|uint32_t baudRate; /*!< Desired UART baud rate. */
DECL|clockRate|member|uint32_t clockRate; /*!< Current UART module clock freq. */
DECL|direction|member|uint32_t direction; /*!< Data transfer direction of this module. */
DECL|parity|member|uint32_t parity; /*!< Parity error check mode of this module. */
DECL|stopBitNum|member|uint32_t stopBitNum; /*!< Number of stop bits in one frame. */
DECL|uartDirectionDisable|enumerator|uartDirectionDisable = 0x0, /*!< Both Tx and Rx are disabled. */
DECL|uartDirectionRx|enumerator|uartDirectionRx = UART_UCR2_RXEN_MASK, /*!< Rx is enabled. */
DECL|uartDirectionTxRx|enumerator|uartDirectionTxRx = UART_UCR2_TXEN_MASK | UART_UCR2_RXEN_MASK, /*!< Both Tx and Rx are enabled. */
DECL|uartDirectionTx|enumerator|uartDirectionTx = UART_UCR2_TXEN_MASK, /*!< Tx is enabled. */
DECL|uartDmaAgingTimer|enumerator|uartDmaAgingTimer = 0x00800002, /*!< Aging DMA Timer Enable. */
DECL|uartDmaIdle|enumerator|uartDmaIdle = 0x008C0006, /*!< DMA IDLE Condition Detected Interrupt Enable. */
DECL|uartDmaRxReady|enumerator|uartDmaRxReady = 0x00800008, /*!< Receive Ready DMA Enable. */
DECL|uartDmaTxReady|enumerator|uartDmaTxReady = 0x00800003, /*!< Transmitter Ready DMA Enable. */
DECL|uartDtrTriggerEdgeBoth|enumerator|uartDtrTriggerEdgeBoth = UART_UCR3_DPEC(2), /*!< DTR pin interrupt triggered on both edge. */
DECL|uartDtrTriggerEdgeFalling|enumerator|uartDtrTriggerEdgeFalling = UART_UCR3_DPEC(1), /*!< DTR pin interrupt triggered on falling edge. */
DECL|uartDtrTriggerEdgeRising|enumerator|uartDtrTriggerEdgeRising = UART_UCR3_DPEC(0), /*!< DTR pin interrupt triggered on rising edge. */
DECL|uartIntAgingTimer|enumerator|uartIntAgingTimer = 0x00840003, /*!< Aging Timer Interrupt Enable. */
DECL|uartIntAutoBaudCnt|enumerator|uartIntAutoBaudCnt = 0x00880000, /*!< Autobaud Counter Interrupt Enable. */
DECL|uartIntAutoBaud|enumerator|uartIntAutoBaud = 0x0080000F, /*!< Automatic baud rate detection Interrupt Enable. */
DECL|uartIntAwake|enumerator|uartIntAwake = 0x00880004, /*!< Asynchronous WAKE Interrupt Enable. */
DECL|uartIntBreakDetect|enumerator|uartIntBreakDetect = 0x008C0002, /*!< BREAK Condition Detected Interrupt Enable. */
DECL|uartIntDcd|enumerator|uartIntDcd = 0x00880009, /*!< Data Carrier Detect Interrupt Enable. */
DECL|uartIntDtrDelta|enumerator|uartIntDtrDelta = 0x00880003, /*!< Data Terminal Ready Delta Interrupt Enable. */
DECL|uartIntDtr|enumerator|uartIntDtr = 0x0088000D, /*!< Data Terminal Ready Interrupt Enable. */
DECL|uartIntEscape|enumerator|uartIntEscape = 0x0084000F, /*!< Escape Sequence Interrupt Enable. */
DECL|uartIntFrameError|enumerator|uartIntFrameError = 0x0088000B, /*!< Frame Error Interrupt Enable. */
DECL|uartIntIdle|enumerator|uartIntIdle = 0x0080000C, /*!< IDLE Interrupt Enable. */
DECL|uartIntIr|enumerator|uartIntIr = 0x008C0008, /*!< Serial Infrared Interrupt Enable. */
DECL|uartIntParityError|enumerator|uartIntParityError = 0x0088000C, /*!< Parity Error Interrupt Enable. */
DECL|uartIntRi|enumerator|uartIntRi = 0x00880008, /*!< Ring Indicator Interrupt Enable. */
DECL|uartIntRs485SlaveAddrMatch|enumerator|uartIntRs485SlaveAddrMatch = 0x00B80003, /*!< RS-485 Slave Address Detected Interrupt Enable. */
DECL|uartIntRtsDelta|enumerator|uartIntRtsDelta = 0x00800005, /*!< RTS Delta Interrupt Enable. */
DECL|uartIntRts|enumerator|uartIntRts = 0x00840004, /*!< Request to Send Interrupt Enable. */
DECL|uartIntRxDataReady|enumerator|uartIntRxDataReady = 0x008C0000, /*!< Receive Data Ready Interrupt Enable. */
DECL|uartIntRxDs|enumerator|uartIntRxDs = 0x00880006, /*!< Receive Status Interrupt Enable. */
DECL|uartIntRxOverrun|enumerator|uartIntRxOverrun = 0x008C0001, /*!< Receiver Overrun Interrupt Enable. */
DECL|uartIntRxReady|enumerator|uartIntRxReady = 0x00800009, /*!< Receiver Ready Interrupt Enable. */
DECL|uartIntTxComplete|enumerator|uartIntTxComplete = 0x008C0003, /*!< TransmitComplete Interrupt Enable. */
DECL|uartIntTxEmpty|enumerator|uartIntTxEmpty = 0x00800006, /*!< Transmitter Empty Interrupt Enable. */
DECL|uartIntTxReady|enumerator|uartIntTxReady = 0x0080000D, /*!< transmitter ready Interrupt Enable. */
DECL|uartIntWake|enumerator|uartIntWake = 0x008C0007, /*!< WAKE Interrupt Enable. */
DECL|uartInttAirWake|enumerator|uartInttAirWake = 0x00880005, /*!< Asynchronous IR WAKE Interrupt Enable. */
DECL|uartIrdaVoteClockReference|enumerator|uartIrdaVoteClockReference = UART_UCR4_IRSC_MASK, /*!< The vote logic uses the UART reference clock. */
DECL|uartIrdaVoteClockSampling|enumerator|uartIrdaVoteClockSampling = 0x0, /*!< The vote logic uses the sampling clock (16x baud rate) for normal operation. */
DECL|uartModemModeDce|enumerator|uartModemModeDce = 0, /*!< UART module works as DCE. */
DECL|uartModemModeDte|enumerator|uartModemModeDte = UART_UFCR_DCEDTE_MASK, /*!< UART module works as DTE. */
DECL|uartParityDisable|enumerator|uartParityDisable = 0x0, /*!< Parity error check disabled. */
DECL|uartParityEven|enumerator|uartParityEven = UART_UCR2_PREN_MASK, /*!< Even error check is selected. */
DECL|uartParityOdd|enumerator|uartParityOdd = UART_UCR2_PREN_MASK | UART_UCR2_PROE_MASK, /*!< Odd error check is selected. */
DECL|uartRtsTriggerEdgeBoth|enumerator|uartRtsTriggerEdgeBoth = UART_UCR2_RTEC(2), /*!< RTS pin interrupt triggered on both edge. */
DECL|uartRtsTriggerEdgeFalling|enumerator|uartRtsTriggerEdgeFalling = UART_UCR2_RTEC(1), /*!< RTS pin interrupt triggered on falling edge. */
DECL|uartRtsTriggerEdgeRising|enumerator|uartRtsTriggerEdgeRising = UART_UCR2_RTEC(0), /*!< RTS pin interrupt triggered on rising edge. */
DECL|uartRxIdleMoreThan16Frames|enumerator|uartRxIdleMoreThan16Frames = UART_UCR1_ICD(2), /*!< Idle for more than 16 frames. */
DECL|uartRxIdleMoreThan32Frames|enumerator|uartRxIdleMoreThan32Frames = UART_UCR1_ICD(3), /*!< Idle for more than 32 frames. */
DECL|uartRxIdleMoreThan4Frames|enumerator|uartRxIdleMoreThan4Frames = UART_UCR1_ICD(0), /*!< Idle for more than 4 frames. */
DECL|uartRxIdleMoreThan8Frames|enumerator|uartRxIdleMoreThan8Frames = UART_UCR1_ICD(1), /*!< Idle for more than 8 frames. */
DECL|uartStatusAgingTimer|enumerator|uartStatusAgingTimer = 0x00940008, /*!< Ageing Timer Interrupt Flag. */
DECL|uartStatusAutoBaudCntStop|enumerator|uartStatusAutoBaudCntStop = 0x0098000B, /*!< Autobaud Counter Stopped Flag. */
DECL|uartStatusAutoBaud|enumerator|uartStatusAutoBaud = 0x0098000F, /*!< Automatic Baud Rate Detect Complete Flag. */
DECL|uartStatusAwake|enumerator|uartStatusAwake = 0x00940004, /*!< Asynchronous WAKE Interrupt Flag. */
DECL|uartStatusBreakDetect|enumerator|uartStatusBreakDetect = 0x00980002, /*!< BREAK Condition Detected Flag. */
DECL|uartStatusDcdDelta|enumerator|uartStatusDcdDelta = 0x00980006, /*!< Data Carrier Detect Delta Flag. */
DECL|uartStatusDcd|enumerator|uartStatusDcd = 0x00980005, /*!< Data Carrier Detect Input Flag. */
DECL|uartStatusDtrDelta|enumerator|uartStatusDtrDelta = 0x00940007, /*!< DTR Delta Flag. */
DECL|uartStatusDtr|enumerator|uartStatusDtr = 0x0098000D, /*!< DTR edge triggered interrupt flag. */
DECL|uartStatusEscape|enumerator|uartStatusEscape = 0x0094000B, /*!< Escape Sequence Interrupt Flag. */
DECL|uartStatusFrameError|enumerator|uartStatusFrameError = 0x0094000A, /*!< Frame Error Interrupt Flag. */
DECL|uartStatusIdle|enumerator|uartStatusIdle = 0x0098000C, /*!< Idle Condition Flag. */
DECL|uartStatusIr|enumerator|uartStatusIr = 0x00980008, /*!< Serial Infrared Interrupt Flag. */
DECL|uartStatusParityError|enumerator|uartStatusParityError = 0x0094000F, /*!< Parity Error Interrupt Flag. */
DECL|uartStatusRiDelta|enumerator|uartStatusRiDelta = 0x0098000A, /*!< Ring Indicator Delta Flag. */
DECL|uartStatusRi|enumerator|uartStatusRi = 0x00980009, /*!< Ring Indicator Input Flag. */
DECL|uartStatusRs485SlaveAddrMatch|enumerator|uartStatusRs485SlaveAddrMatch = 0x00940003, /*!< RS-485 Slave Address Detected Interrupt Flag. */
DECL|uartStatusRtsDelta|enumerator|uartStatusRtsDelta = 0x0094000C, /*!< RTS Delta Flag. */
DECL|uartStatusRtsStatus|enumerator|uartStatusRtsStatus = 0x0094000E, /*!< RTS_B Pin Status Flag. */
DECL|uartStatusRts|enumerator|uartStatusRts = 0x00980004, /*!< RTS Edge Triggered Interrupt Flag. */
DECL|uartStatusRxBreakDetect|enumerator|uartStatusRxBreakDetect = 0x0000000B, /*!< Rx Break Detect Flag. */
DECL|uartStatusRxCharReady|enumerator|uartStatusRxCharReady = 0x0000000F, /*!< Rx Character Ready Flag. */
DECL|uartStatusRxDataReady|enumerator|uartStatusRxDataReady = 0x00980000, /*!< Receive Data Ready Flag. */
DECL|uartStatusRxDs|enumerator|uartStatusRxDs = 0x00940006, /*!< Receiver IDLE Interrupt Flag. */
DECL|uartStatusRxError|enumerator|uartStatusRxError = 0x0000000E, /*!< Rx Error Detect Flag. */
DECL|uartStatusRxFrameError|enumerator|uartStatusRxFrameError = 0x0000000C, /*!< Rx Frame Error Flag. */
DECL|uartStatusRxOverrunError|enumerator|uartStatusRxOverrunError = 0x0000000D, /*!< Rx Overrun Flag. */
DECL|uartStatusRxOverrun|enumerator|uartStatusRxOverrun = 0x00980001, /*!< Overrun Error Flag. */
DECL|uartStatusRxParityError|enumerator|uartStatusRxParityError = 0x0000000A, /*!< Rx Parity Error Flag. */
DECL|uartStatusRxReady|enumerator|uartStatusRxReady = 0x00940009, /*!< Receiver Ready Interrupt/DMA Flag. */
DECL|uartStatusTxComplete|enumerator|uartStatusTxComplete = 0x00980003, /*!< Transmitter Complete Flag. */
DECL|uartStatusTxEmpty|enumerator|uartStatusTxEmpty = 0x0098000E, /*!< Transmit Buffer FIFO Empty. */
DECL|uartStatusTxReady|enumerator|uartStatusTxReady = 0x0094000D, /*!< Transmitter Ready Interrupt/DMA Flag. */
DECL|uartStatusWake|enumerator|uartStatusWake = 0x00980007, /*!< Wake Flag. */
DECL|uartStatustAirWake|enumerator|uartStatustAirWake = 0x00940005, /*!< Asynchronous IR WAKE Interrupt Flag. */
DECL|uartStopBitNumOne|enumerator|uartStopBitNumOne = 0x0, /*!< One bit Stop. */
DECL|uartStopBitNumTwo|enumerator|uartStopBitNumTwo = UART_UCR2_STPB_MASK, /*!< Two bits Stop. */
DECL|uartWordLength7Bits|enumerator|uartWordLength7Bits = 0x0, /*!< One character has 7 bits. */
DECL|uartWordLength8Bits|enumerator|uartWordLength8Bits = UART_UCR2_WS_MASK, /*!< One character has 8 bits. */
DECL|uart_init_config_t|typedef|} uart_init_config_t;
DECL|wordLength|member|uint32_t wordLength; /*!< Data bits in one frame. */
