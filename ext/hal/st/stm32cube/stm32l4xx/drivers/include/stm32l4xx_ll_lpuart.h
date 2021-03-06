DECL|BaudRate|member|uint32_t BaudRate; /*!< This field defines expected LPUART communication baud rate.
DECL|DataWidth|member|uint32_t DataWidth; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|HardwareFlowControl|member|uint32_t HardwareFlowControl; /*!< Specifies whether the hardware flow control mode is enabled or disabled.
DECL|LL_LPUART_ADDRESS_DETECT_4B|macro|LL_LPUART_ADDRESS_DETECT_4B
DECL|LL_LPUART_ADDRESS_DETECT_7B|macro|LL_LPUART_ADDRESS_DETECT_7B
DECL|LL_LPUART_BINARY_LOGIC_NEGATIVE|macro|LL_LPUART_BINARY_LOGIC_NEGATIVE
DECL|LL_LPUART_BINARY_LOGIC_POSITIVE|macro|LL_LPUART_BINARY_LOGIC_POSITIVE
DECL|LL_LPUART_BITORDER_LSBFIRST|macro|LL_LPUART_BITORDER_LSBFIRST
DECL|LL_LPUART_BITORDER_MSBFIRST|macro|LL_LPUART_BITORDER_MSBFIRST
DECL|LL_LPUART_CR1_CMIE|macro|LL_LPUART_CR1_CMIE
DECL|LL_LPUART_CR1_IDLEIE|macro|LL_LPUART_CR1_IDLEIE
DECL|LL_LPUART_CR1_PEIE|macro|LL_LPUART_CR1_PEIE
DECL|LL_LPUART_CR1_RXFFIE|macro|LL_LPUART_CR1_RXFFIE
DECL|LL_LPUART_CR1_RXNEIE_RXFNEIE|macro|LL_LPUART_CR1_RXNEIE_RXFNEIE
DECL|LL_LPUART_CR1_RXNEIE|macro|LL_LPUART_CR1_RXNEIE
DECL|LL_LPUART_CR1_TCIE|macro|LL_LPUART_CR1_TCIE
DECL|LL_LPUART_CR1_TXEIE_TXFNFIE|macro|LL_LPUART_CR1_TXEIE_TXFNFIE
DECL|LL_LPUART_CR1_TXEIE|macro|LL_LPUART_CR1_TXEIE
DECL|LL_LPUART_CR1_TXFEIE|macro|LL_LPUART_CR1_TXFEIE
DECL|LL_LPUART_CR3_CTSIE|macro|LL_LPUART_CR3_CTSIE
DECL|LL_LPUART_CR3_EIE|macro|LL_LPUART_CR3_EIE
DECL|LL_LPUART_CR3_RXFTIE|macro|LL_LPUART_CR3_RXFTIE
DECL|LL_LPUART_CR3_TXFTIE|macro|LL_LPUART_CR3_TXFTIE
DECL|LL_LPUART_CR3_WUFIE|macro|LL_LPUART_CR3_WUFIE
DECL|LL_LPUART_ClearFlag_CM|function|__STATIC_INLINE void LL_LPUART_ClearFlag_CM(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_FE|function|__STATIC_INLINE void LL_LPUART_ClearFlag_FE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_IDLE|function|__STATIC_INLINE void LL_LPUART_ClearFlag_IDLE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_NE|function|__STATIC_INLINE void LL_LPUART_ClearFlag_NE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_ORE|function|__STATIC_INLINE void LL_LPUART_ClearFlag_ORE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_PE|function|__STATIC_INLINE void LL_LPUART_ClearFlag_PE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_TC|function|__STATIC_INLINE void LL_LPUART_ClearFlag_TC(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_TXFE|function|__STATIC_INLINE void LL_LPUART_ClearFlag_TXFE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_WKUP|function|__STATIC_INLINE void LL_LPUART_ClearFlag_WKUP(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ClearFlag_nCTS|function|__STATIC_INLINE void LL_LPUART_ClearFlag_nCTS(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ConfigCharacter|function|__STATIC_INLINE void LL_LPUART_ConfigCharacter(USART_TypeDef *LPUARTx, uint32_t DataWidth, uint32_t Parity, uint32_t StopBits)
DECL|LL_LPUART_ConfigFIFOsThreshold|function|__STATIC_INLINE void LL_LPUART_ConfigFIFOsThreshold(USART_TypeDef *LPUARTx, uint32_t TXThreshold, uint32_t RXThreshold)
DECL|LL_LPUART_ConfigNodeAddress|function|__STATIC_INLINE void LL_LPUART_ConfigNodeAddress(USART_TypeDef *LPUARTx, uint32_t AddressLen, uint32_t NodeAddress)
DECL|LL_LPUART_DATAWIDTH_7B|macro|LL_LPUART_DATAWIDTH_7B
DECL|LL_LPUART_DATAWIDTH_8B|macro|LL_LPUART_DATAWIDTH_8B
DECL|LL_LPUART_DATAWIDTH_9B|macro|LL_LPUART_DATAWIDTH_9B
DECL|LL_LPUART_DE_POLARITY_HIGH|macro|LL_LPUART_DE_POLARITY_HIGH
DECL|LL_LPUART_DE_POLARITY_LOW|macro|LL_LPUART_DE_POLARITY_LOW
DECL|LL_LPUART_DIRECTION_NONE|macro|LL_LPUART_DIRECTION_NONE
DECL|LL_LPUART_DIRECTION_RX|macro|LL_LPUART_DIRECTION_RX
DECL|LL_LPUART_DIRECTION_TX_RX|macro|LL_LPUART_DIRECTION_TX_RX
DECL|LL_LPUART_DIRECTION_TX|macro|LL_LPUART_DIRECTION_TX
DECL|LL_LPUART_DMA_GetRegAddr|function|__STATIC_INLINE uint32_t LL_LPUART_DMA_GetRegAddr(USART_TypeDef *LPUARTx, uint32_t Direction)
DECL|LL_LPUART_DMA_REG_DATA_RECEIVE|macro|LL_LPUART_DMA_REG_DATA_RECEIVE
DECL|LL_LPUART_DMA_REG_DATA_TRANSMIT|macro|LL_LPUART_DMA_REG_DATA_TRANSMIT
DECL|LL_LPUART_DisableCTSHWFlowCtrl|function|__STATIC_INLINE void LL_LPUART_DisableCTSHWFlowCtrl(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableClockInStopMode|function|__STATIC_INLINE void LL_LPUART_DisableClockInStopMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableDEMode|function|__STATIC_INLINE void LL_LPUART_DisableDEMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableDMADeactOnRxErr|function|__STATIC_INLINE void LL_LPUART_DisableDMADeactOnRxErr(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableDMAReq_RX|function|__STATIC_INLINE void LL_LPUART_DisableDMAReq_RX(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableDMAReq_TX|function|__STATIC_INLINE void LL_LPUART_DisableDMAReq_TX(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableDirectionRx|function|__STATIC_INLINE void LL_LPUART_DisableDirectionRx(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableDirectionTx|function|__STATIC_INLINE void LL_LPUART_DisableDirectionTx(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableFIFO|function|__STATIC_INLINE void LL_LPUART_DisableFIFO(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableHalfDuplex|function|__STATIC_INLINE void LL_LPUART_DisableHalfDuplex(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_CM|function|__STATIC_INLINE void LL_LPUART_DisableIT_CM(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_CTS|function|__STATIC_INLINE void LL_LPUART_DisableIT_CTS(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_ERROR|function|__STATIC_INLINE void LL_LPUART_DisableIT_ERROR(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_IDLE|function|__STATIC_INLINE void LL_LPUART_DisableIT_IDLE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_PE|function|__STATIC_INLINE void LL_LPUART_DisableIT_PE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_RXFF|function|__STATIC_INLINE void LL_LPUART_DisableIT_RXFF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_RXFT|function|__STATIC_INLINE void LL_LPUART_DisableIT_RXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_RXNE_RXFNE|function|__STATIC_INLINE void LL_LPUART_DisableIT_RXNE_RXFNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_RXNE|function|__STATIC_INLINE void LL_LPUART_DisableIT_RXNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_RXNE|macro|LL_LPUART_DisableIT_RXNE
DECL|LL_LPUART_DisableIT_TC|function|__STATIC_INLINE void LL_LPUART_DisableIT_TC(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_TXE_TXFNF|function|__STATIC_INLINE void LL_LPUART_DisableIT_TXE_TXFNF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_TXE|function|__STATIC_INLINE void LL_LPUART_DisableIT_TXE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_TXE|macro|LL_LPUART_DisableIT_TXE
DECL|LL_LPUART_DisableIT_TXFE|function|__STATIC_INLINE void LL_LPUART_DisableIT_TXFE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_TXFT|function|__STATIC_INLINE void LL_LPUART_DisableIT_TXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableIT_WKUP|function|__STATIC_INLINE void LL_LPUART_DisableIT_WKUP(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableInStopMode|function|__STATIC_INLINE void LL_LPUART_DisableInStopMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableMuteMode|function|__STATIC_INLINE void LL_LPUART_DisableMuteMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableOverrunDetect|function|__STATIC_INLINE void LL_LPUART_DisableOverrunDetect(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_DisableRTSHWFlowCtrl|function|__STATIC_INLINE void LL_LPUART_DisableRTSHWFlowCtrl(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_Disable|function|__STATIC_INLINE void LL_LPUART_Disable(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableCTSHWFlowCtrl|function|__STATIC_INLINE void LL_LPUART_EnableCTSHWFlowCtrl(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableClockInStopMode|function|__STATIC_INLINE void LL_LPUART_EnableClockInStopMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableDEMode|function|__STATIC_INLINE void LL_LPUART_EnableDEMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableDMADeactOnRxErr|function|__STATIC_INLINE void LL_LPUART_EnableDMADeactOnRxErr(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableDMAReq_RX|function|__STATIC_INLINE void LL_LPUART_EnableDMAReq_RX(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableDMAReq_TX|function|__STATIC_INLINE void LL_LPUART_EnableDMAReq_TX(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableDirectionRx|function|__STATIC_INLINE void LL_LPUART_EnableDirectionRx(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableDirectionTx|function|__STATIC_INLINE void LL_LPUART_EnableDirectionTx(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableFIFO|function|__STATIC_INLINE void LL_LPUART_EnableFIFO(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableHalfDuplex|function|__STATIC_INLINE void LL_LPUART_EnableHalfDuplex(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_CM|function|__STATIC_INLINE void LL_LPUART_EnableIT_CM(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_CTS|function|__STATIC_INLINE void LL_LPUART_EnableIT_CTS(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_ERROR|function|__STATIC_INLINE void LL_LPUART_EnableIT_ERROR(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_IDLE|function|__STATIC_INLINE void LL_LPUART_EnableIT_IDLE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_PE|function|__STATIC_INLINE void LL_LPUART_EnableIT_PE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_RXFF|function|__STATIC_INLINE void LL_LPUART_EnableIT_RXFF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_RXFT|function|__STATIC_INLINE void LL_LPUART_EnableIT_RXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_RXNE_RXFNE|function|__STATIC_INLINE void LL_LPUART_EnableIT_RXNE_RXFNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_RXNE|function|__STATIC_INLINE void LL_LPUART_EnableIT_RXNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_RXNE|macro|LL_LPUART_EnableIT_RXNE
DECL|LL_LPUART_EnableIT_TC|function|__STATIC_INLINE void LL_LPUART_EnableIT_TC(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_TXE_TXFNF|function|__STATIC_INLINE void LL_LPUART_EnableIT_TXE_TXFNF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_TXE|function|__STATIC_INLINE void LL_LPUART_EnableIT_TXE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_TXE|macro|LL_LPUART_EnableIT_TXE
DECL|LL_LPUART_EnableIT_TXFE|function|__STATIC_INLINE void LL_LPUART_EnableIT_TXFE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_TXFT|function|__STATIC_INLINE void LL_LPUART_EnableIT_TXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableIT_WKUP|function|__STATIC_INLINE void LL_LPUART_EnableIT_WKUP(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableInStopMode|function|__STATIC_INLINE void LL_LPUART_EnableInStopMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableMuteMode|function|__STATIC_INLINE void LL_LPUART_EnableMuteMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableOverrunDetect|function|__STATIC_INLINE void LL_LPUART_EnableOverrunDetect(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_EnableRTSHWFlowCtrl|function|__STATIC_INLINE void LL_LPUART_EnableRTSHWFlowCtrl(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_Enable|function|__STATIC_INLINE void LL_LPUART_Enable(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_FIFOTHRESHOLD_1_2|macro|LL_LPUART_FIFOTHRESHOLD_1_2
DECL|LL_LPUART_FIFOTHRESHOLD_1_4|macro|LL_LPUART_FIFOTHRESHOLD_1_4
DECL|LL_LPUART_FIFOTHRESHOLD_1_8|macro|LL_LPUART_FIFOTHRESHOLD_1_8
DECL|LL_LPUART_FIFOTHRESHOLD_3_4|macro|LL_LPUART_FIFOTHRESHOLD_3_4
DECL|LL_LPUART_FIFOTHRESHOLD_7_8|macro|LL_LPUART_FIFOTHRESHOLD_7_8
DECL|LL_LPUART_FIFOTHRESHOLD_8_8|macro|LL_LPUART_FIFOTHRESHOLD_8_8
DECL|LL_LPUART_GetBaudRate|function|__STATIC_INLINE uint32_t LL_LPUART_GetBaudRate(USART_TypeDef *LPUARTx, uint32_t PeriphClk, uint32_t PrescalerValue)
DECL|LL_LPUART_GetBinaryDataLogic|function|__STATIC_INLINE uint32_t LL_LPUART_GetBinaryDataLogic(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetDEAssertionTime|function|__STATIC_INLINE uint32_t LL_LPUART_GetDEAssertionTime(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetDEDeassertionTime|function|__STATIC_INLINE uint32_t LL_LPUART_GetDEDeassertionTime(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetDESignalPolarity|function|__STATIC_INLINE uint32_t LL_LPUART_GetDESignalPolarity(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetDataWidth|function|__STATIC_INLINE uint32_t LL_LPUART_GetDataWidth(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetHWFlowCtrl|function|__STATIC_INLINE uint32_t LL_LPUART_GetHWFlowCtrl(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetNodeAddressLen|function|__STATIC_INLINE uint32_t LL_LPUART_GetNodeAddressLen(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetNodeAddress|function|__STATIC_INLINE uint32_t LL_LPUART_GetNodeAddress(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetParity|function|__STATIC_INLINE uint32_t LL_LPUART_GetParity(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetPrescaler|function|__STATIC_INLINE uint32_t LL_LPUART_GetPrescaler(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetRXFIFOThreshold|function|__STATIC_INLINE uint32_t LL_LPUART_GetRXFIFOThreshold(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetRXPinLevel|function|__STATIC_INLINE uint32_t LL_LPUART_GetRXPinLevel(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetStopBitsLength|function|__STATIC_INLINE uint32_t LL_LPUART_GetStopBitsLength(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetTXFIFOThreshold|function|__STATIC_INLINE uint32_t LL_LPUART_GetTXFIFOThreshold(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetTXPinLevel|function|__STATIC_INLINE uint32_t LL_LPUART_GetTXPinLevel(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetTXRXSwap|function|__STATIC_INLINE uint32_t LL_LPUART_GetTXRXSwap(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetTransferBitOrder|function|__STATIC_INLINE uint32_t LL_LPUART_GetTransferBitOrder(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetTransferDirection|function|__STATIC_INLINE uint32_t LL_LPUART_GetTransferDirection(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetWKUPType|function|__STATIC_INLINE uint32_t LL_LPUART_GetWKUPType(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_GetWakeUpMethod|function|__STATIC_INLINE uint32_t LL_LPUART_GetWakeUpMethod(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_HWCONTROL_CTS|macro|LL_LPUART_HWCONTROL_CTS
DECL|LL_LPUART_HWCONTROL_NONE|macro|LL_LPUART_HWCONTROL_NONE
DECL|LL_LPUART_HWCONTROL_RTS_CTS|macro|LL_LPUART_HWCONTROL_RTS_CTS
DECL|LL_LPUART_HWCONTROL_RTS|macro|LL_LPUART_HWCONTROL_RTS
DECL|LL_LPUART_ICR_CMCF|macro|LL_LPUART_ICR_CMCF
DECL|LL_LPUART_ICR_CTSCF|macro|LL_LPUART_ICR_CTSCF
DECL|LL_LPUART_ICR_FECF|macro|LL_LPUART_ICR_FECF
DECL|LL_LPUART_ICR_IDLECF|macro|LL_LPUART_ICR_IDLECF
DECL|LL_LPUART_ICR_NCF|macro|LL_LPUART_ICR_NCF
DECL|LL_LPUART_ICR_ORECF|macro|LL_LPUART_ICR_ORECF
DECL|LL_LPUART_ICR_PECF|macro|LL_LPUART_ICR_PECF
DECL|LL_LPUART_ICR_TCCF|macro|LL_LPUART_ICR_TCCF
DECL|LL_LPUART_ICR_TXFECF|macro|LL_LPUART_ICR_TXFECF
DECL|LL_LPUART_ICR_WUCF|macro|LL_LPUART_ICR_WUCF
DECL|LL_LPUART_ISR_BUSY|macro|LL_LPUART_ISR_BUSY
DECL|LL_LPUART_ISR_CMF|macro|LL_LPUART_ISR_CMF
DECL|LL_LPUART_ISR_CTSIF|macro|LL_LPUART_ISR_CTSIF
DECL|LL_LPUART_ISR_CTS|macro|LL_LPUART_ISR_CTS
DECL|LL_LPUART_ISR_FE|macro|LL_LPUART_ISR_FE
DECL|LL_LPUART_ISR_IDLE|macro|LL_LPUART_ISR_IDLE
DECL|LL_LPUART_ISR_NE|macro|LL_LPUART_ISR_NE
DECL|LL_LPUART_ISR_ORE|macro|LL_LPUART_ISR_ORE
DECL|LL_LPUART_ISR_PE|macro|LL_LPUART_ISR_PE
DECL|LL_LPUART_ISR_REACK|macro|LL_LPUART_ISR_REACK
DECL|LL_LPUART_ISR_RWU|macro|LL_LPUART_ISR_RWU
DECL|LL_LPUART_ISR_RXFF|macro|LL_LPUART_ISR_RXFF
DECL|LL_LPUART_ISR_RXFT|macro|LL_LPUART_ISR_RXFT
DECL|LL_LPUART_ISR_RXNE_RXFNE|macro|LL_LPUART_ISR_RXNE_RXFNE
DECL|LL_LPUART_ISR_RXNE|macro|LL_LPUART_ISR_RXNE
DECL|LL_LPUART_ISR_SBKF|macro|LL_LPUART_ISR_SBKF
DECL|LL_LPUART_ISR_TC|macro|LL_LPUART_ISR_TC
DECL|LL_LPUART_ISR_TEACK|macro|LL_LPUART_ISR_TEACK
DECL|LL_LPUART_ISR_TXE_TXFNF|macro|LL_LPUART_ISR_TXE_TXFNF
DECL|LL_LPUART_ISR_TXE|macro|LL_LPUART_ISR_TXE
DECL|LL_LPUART_ISR_TXFE|macro|LL_LPUART_ISR_TXFE
DECL|LL_LPUART_ISR_TXFT|macro|LL_LPUART_ISR_TXFT
DECL|LL_LPUART_ISR_WUF|macro|LL_LPUART_ISR_WUF
DECL|LL_LPUART_InitTypeDef|typedef|} LL_LPUART_InitTypeDef;
DECL|LL_LPUART_IsActiveFlag_BUSY|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_BUSY(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_CM|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_CM(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_CTS|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_CTS(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_FE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_FE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_IDLE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_IDLE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_NE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_NE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_ORE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_ORE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_PE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_PE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_REACK|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_REACK(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_RWU|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_RWU(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_RXFF|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_RXFF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_RXFT|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_RXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_RXNE_RXFNE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_RXNE_RXFNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_RXNE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_RXNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_RXNE|macro|LL_LPUART_IsActiveFlag_RXNE
DECL|LL_LPUART_IsActiveFlag_SBK|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_SBK(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_TC|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_TC(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_TEACK|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_TEACK(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_TXE_TXFNF|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_TXE_TXFNF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_TXE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_TXE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_TXE|macro|LL_LPUART_IsActiveFlag_TXE
DECL|LL_LPUART_IsActiveFlag_TXFE|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_TXFE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_TXFT|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_TXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_WKUP|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_WKUP(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsActiveFlag_nCTS|function|__STATIC_INLINE uint32_t LL_LPUART_IsActiveFlag_nCTS(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsClockEnabledInStopMode|function|__STATIC_INLINE uint32_t LL_LPUART_IsClockEnabledInStopMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledDEMode|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledDEMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledDMADeactOnRxErr|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledDMADeactOnRxErr(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledDMAReq_RX|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledDMAReq_RX(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledDMAReq_TX|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledDMAReq_TX(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledFIFO|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledFIFO(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledHalfDuplex|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledHalfDuplex(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_CM|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_CM(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_CTS|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_CTS(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_ERROR|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_ERROR(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_IDLE|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_IDLE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_PE|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_PE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_RXFF|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_RXFF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_RXFT|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_RXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_RXNE_RXFNE|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_RXNE_RXFNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_RXNE|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_RXNE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_RXNE|macro|LL_LPUART_IsEnabledIT_RXNE
DECL|LL_LPUART_IsEnabledIT_TC|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_TC(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_TXE_TXFNF|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_TXE_TXFNF(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_TXE|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_TXE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_TXE|macro|LL_LPUART_IsEnabledIT_TXE
DECL|LL_LPUART_IsEnabledIT_TXFE|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_TXFE(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_TXFT|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_TXFT(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledIT_WKUP|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledIT_WKUP(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledInStopMode|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledInStopMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledMuteMode|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledMuteMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabledOverrunDetect|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabledOverrunDetect(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_IsEnabled|function|__STATIC_INLINE uint32_t LL_LPUART_IsEnabled(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_PARITY_EVEN|macro|LL_LPUART_PARITY_EVEN
DECL|LL_LPUART_PARITY_NONE|macro|LL_LPUART_PARITY_NONE
DECL|LL_LPUART_PARITY_ODD|macro|LL_LPUART_PARITY_ODD
DECL|LL_LPUART_PRESCALER_DIV10|macro|LL_LPUART_PRESCALER_DIV10
DECL|LL_LPUART_PRESCALER_DIV128|macro|LL_LPUART_PRESCALER_DIV128
DECL|LL_LPUART_PRESCALER_DIV12|macro|LL_LPUART_PRESCALER_DIV12
DECL|LL_LPUART_PRESCALER_DIV16|macro|LL_LPUART_PRESCALER_DIV16
DECL|LL_LPUART_PRESCALER_DIV1|macro|LL_LPUART_PRESCALER_DIV1
DECL|LL_LPUART_PRESCALER_DIV256|macro|LL_LPUART_PRESCALER_DIV256
DECL|LL_LPUART_PRESCALER_DIV2|macro|LL_LPUART_PRESCALER_DIV2
DECL|LL_LPUART_PRESCALER_DIV32|macro|LL_LPUART_PRESCALER_DIV32
DECL|LL_LPUART_PRESCALER_DIV4|macro|LL_LPUART_PRESCALER_DIV4
DECL|LL_LPUART_PRESCALER_DIV64|macro|LL_LPUART_PRESCALER_DIV64
DECL|LL_LPUART_PRESCALER_DIV6|macro|LL_LPUART_PRESCALER_DIV6
DECL|LL_LPUART_PRESCALER_DIV8|macro|LL_LPUART_PRESCALER_DIV8
DECL|LL_LPUART_RXPIN_LEVEL_INVERTED|macro|LL_LPUART_RXPIN_LEVEL_INVERTED
DECL|LL_LPUART_RXPIN_LEVEL_STANDARD|macro|LL_LPUART_RXPIN_LEVEL_STANDARD
DECL|LL_LPUART_ReadReg|macro|LL_LPUART_ReadReg
DECL|LL_LPUART_ReceiveData8|function|__STATIC_INLINE uint8_t LL_LPUART_ReceiveData8(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_ReceiveData9|function|__STATIC_INLINE uint16_t LL_LPUART_ReceiveData9(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_RequestBreakSending|function|__STATIC_INLINE void LL_LPUART_RequestBreakSending(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_RequestEnterMuteMode|function|__STATIC_INLINE void LL_LPUART_RequestEnterMuteMode(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_RequestRxDataFlush|function|__STATIC_INLINE void LL_LPUART_RequestRxDataFlush(USART_TypeDef *LPUARTx)
DECL|LL_LPUART_STOPBITS_1|macro|LL_LPUART_STOPBITS_1
DECL|LL_LPUART_STOPBITS_2|macro|LL_LPUART_STOPBITS_2
DECL|LL_LPUART_SetBaudRate|function|__STATIC_INLINE void LL_LPUART_SetBaudRate(USART_TypeDef *LPUARTx, uint32_t PeriphClk, uint32_t PrescalerValue, uint32_t BaudRate)
DECL|LL_LPUART_SetBinaryDataLogic|function|__STATIC_INLINE void LL_LPUART_SetBinaryDataLogic(USART_TypeDef *LPUARTx, uint32_t DataLogic)
DECL|LL_LPUART_SetDEAssertionTime|function|__STATIC_INLINE void LL_LPUART_SetDEAssertionTime(USART_TypeDef *LPUARTx, uint32_t Time)
DECL|LL_LPUART_SetDEDeassertionTime|function|__STATIC_INLINE void LL_LPUART_SetDEDeassertionTime(USART_TypeDef *LPUARTx, uint32_t Time)
DECL|LL_LPUART_SetDESignalPolarity|function|__STATIC_INLINE void LL_LPUART_SetDESignalPolarity(USART_TypeDef *LPUARTx, uint32_t Polarity)
DECL|LL_LPUART_SetDataWidth|function|__STATIC_INLINE void LL_LPUART_SetDataWidth(USART_TypeDef *LPUARTx, uint32_t DataWidth)
DECL|LL_LPUART_SetHWFlowCtrl|function|__STATIC_INLINE void LL_LPUART_SetHWFlowCtrl(USART_TypeDef *LPUARTx, uint32_t HardwareFlowControl)
DECL|LL_LPUART_SetParity|function|__STATIC_INLINE void LL_LPUART_SetParity(USART_TypeDef *LPUARTx, uint32_t Parity)
DECL|LL_LPUART_SetPrescaler|function|__STATIC_INLINE void LL_LPUART_SetPrescaler(USART_TypeDef *LPUARTx, uint32_t PrescalerValue)
DECL|LL_LPUART_SetRXFIFOThreshold|function|__STATIC_INLINE void LL_LPUART_SetRXFIFOThreshold(USART_TypeDef *LPUARTx, uint32_t Threshold)
DECL|LL_LPUART_SetRXPinLevel|function|__STATIC_INLINE void LL_LPUART_SetRXPinLevel(USART_TypeDef *LPUARTx, uint32_t PinInvMethod)
DECL|LL_LPUART_SetStopBitsLength|function|__STATIC_INLINE void LL_LPUART_SetStopBitsLength(USART_TypeDef *LPUARTx, uint32_t StopBits)
DECL|LL_LPUART_SetTXFIFOThreshold|function|__STATIC_INLINE void LL_LPUART_SetTXFIFOThreshold(USART_TypeDef *LPUARTx, uint32_t Threshold)
DECL|LL_LPUART_SetTXPinLevel|function|__STATIC_INLINE void LL_LPUART_SetTXPinLevel(USART_TypeDef *LPUARTx, uint32_t PinInvMethod)
DECL|LL_LPUART_SetTXRXSwap|function|__STATIC_INLINE void LL_LPUART_SetTXRXSwap(USART_TypeDef *LPUARTx, uint32_t SwapConfig)
DECL|LL_LPUART_SetTransferBitOrder|function|__STATIC_INLINE void LL_LPUART_SetTransferBitOrder(USART_TypeDef *LPUARTx, uint32_t BitOrder)
DECL|LL_LPUART_SetTransferDirection|function|__STATIC_INLINE void LL_LPUART_SetTransferDirection(USART_TypeDef *LPUARTx, uint32_t TransferDirection)
DECL|LL_LPUART_SetWKUPType|function|__STATIC_INLINE void LL_LPUART_SetWKUPType(USART_TypeDef *LPUARTx, uint32_t Type)
DECL|LL_LPUART_SetWakeUpMethod|function|__STATIC_INLINE void LL_LPUART_SetWakeUpMethod(USART_TypeDef *LPUARTx, uint32_t Method)
DECL|LL_LPUART_TXPIN_LEVEL_INVERTED|macro|LL_LPUART_TXPIN_LEVEL_INVERTED
DECL|LL_LPUART_TXPIN_LEVEL_STANDARD|macro|LL_LPUART_TXPIN_LEVEL_STANDARD
DECL|LL_LPUART_TXRX_STANDARD|macro|LL_LPUART_TXRX_STANDARD
DECL|LL_LPUART_TXRX_SWAPPED|macro|LL_LPUART_TXRX_SWAPPED
DECL|LL_LPUART_TransmitData8|function|__STATIC_INLINE void LL_LPUART_TransmitData8(USART_TypeDef *LPUARTx, uint8_t Value)
DECL|LL_LPUART_TransmitData9|function|__STATIC_INLINE void LL_LPUART_TransmitData9(USART_TypeDef *LPUARTx, uint16_t Value)
DECL|LL_LPUART_WAKEUP_ADDRESSMARK|macro|LL_LPUART_WAKEUP_ADDRESSMARK
DECL|LL_LPUART_WAKEUP_IDLELINE|macro|LL_LPUART_WAKEUP_IDLELINE
DECL|LL_LPUART_WAKEUP_ON_ADDRESS|macro|LL_LPUART_WAKEUP_ON_ADDRESS
DECL|LL_LPUART_WAKEUP_ON_RXNE|macro|LL_LPUART_WAKEUP_ON_RXNE
DECL|LL_LPUART_WAKEUP_ON_STARTBIT|macro|LL_LPUART_WAKEUP_ON_STARTBIT
DECL|LL_LPUART_WriteReg|macro|LL_LPUART_WriteReg
DECL|LPUART_BRR_MASK|macro|LPUART_BRR_MASK
DECL|LPUART_BRR_MIN_VALUE|macro|LPUART_BRR_MIN_VALUE
DECL|LPUART_LPUARTDIV_FREQ_MUL|macro|LPUART_LPUARTDIV_FREQ_MUL
DECL|LPUART_PRESCALER_TAB|variable|LPUART_PRESCALER_TAB
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|PrescalerValue|member|uint32_t PrescalerValue; /*!< Specifies the Prescaler to compute the communication baud rate.
DECL|StopBits|member|uint32_t StopBits; /*!< Specifies the number of stop bits transmitted.
DECL|TransferDirection|member|uint32_t TransferDirection; /*!< Specifies whether the Receive and/or Transmit mode is enabled or disabled.
DECL|__LL_LPUART_DIV|macro|__LL_LPUART_DIV
DECL|__LL_LPUART_DIV|macro|__LL_LPUART_DIV
DECL|__STM32L4xx_LL_LPUART_H|macro|__STM32L4xx_LL_LPUART_H
