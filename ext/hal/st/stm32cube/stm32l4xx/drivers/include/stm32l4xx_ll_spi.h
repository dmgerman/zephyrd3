DECL|BaudRate|member|uint32_t BaudRate; /*!< Specifies the BaudRate prescaler value which will be used to configure the transmit and receive SCK clock.
DECL|BitOrder|member|uint32_t BitOrder; /*!< Specifies whether data transfers start from MSB or LSB bit.
DECL|CRCCalculation|member|uint32_t CRCCalculation; /*!< Specifies if the CRC calculation is enabled or not.
DECL|CRCPoly|member|uint32_t CRCPoly; /*!< Specifies the polynomial used for the CRC calculation.
DECL|ClockPhase|member|uint32_t ClockPhase; /*!< Specifies the clock active edge for the bit capture.
DECL|ClockPolarity|member|uint32_t ClockPolarity; /*!< Specifies the serial clock steady state.
DECL|DataWidth|member|uint32_t DataWidth; /*!< Specifies the SPI data width.
DECL|LL_SPI_BAUDRATEPRESCALER_DIV128|macro|LL_SPI_BAUDRATEPRESCALER_DIV128
DECL|LL_SPI_BAUDRATEPRESCALER_DIV16|macro|LL_SPI_BAUDRATEPRESCALER_DIV16
DECL|LL_SPI_BAUDRATEPRESCALER_DIV256|macro|LL_SPI_BAUDRATEPRESCALER_DIV256
DECL|LL_SPI_BAUDRATEPRESCALER_DIV2|macro|LL_SPI_BAUDRATEPRESCALER_DIV2
DECL|LL_SPI_BAUDRATEPRESCALER_DIV32|macro|LL_SPI_BAUDRATEPRESCALER_DIV32
DECL|LL_SPI_BAUDRATEPRESCALER_DIV4|macro|LL_SPI_BAUDRATEPRESCALER_DIV4
DECL|LL_SPI_BAUDRATEPRESCALER_DIV64|macro|LL_SPI_BAUDRATEPRESCALER_DIV64
DECL|LL_SPI_BAUDRATEPRESCALER_DIV8|macro|LL_SPI_BAUDRATEPRESCALER_DIV8
DECL|LL_SPI_CR2_ERRIE|macro|LL_SPI_CR2_ERRIE
DECL|LL_SPI_CR2_RXNEIE|macro|LL_SPI_CR2_RXNEIE
DECL|LL_SPI_CR2_TXEIE|macro|LL_SPI_CR2_TXEIE
DECL|LL_SPI_CRCCALCULATION_DISABLE|macro|LL_SPI_CRCCALCULATION_DISABLE
DECL|LL_SPI_CRCCALCULATION_ENABLE|macro|LL_SPI_CRCCALCULATION_ENABLE
DECL|LL_SPI_CRC_16BIT|macro|LL_SPI_CRC_16BIT
DECL|LL_SPI_CRC_8BIT|macro|LL_SPI_CRC_8BIT
DECL|LL_SPI_ClearFlag_CRCERR|function|__STATIC_INLINE void LL_SPI_ClearFlag_CRCERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_ClearFlag_FRE|function|__STATIC_INLINE void LL_SPI_ClearFlag_FRE(SPI_TypeDef *SPIx)
DECL|LL_SPI_ClearFlag_MODF|function|__STATIC_INLINE void LL_SPI_ClearFlag_MODF(SPI_TypeDef *SPIx)
DECL|LL_SPI_ClearFlag_OVR|function|__STATIC_INLINE void LL_SPI_ClearFlag_OVR(SPI_TypeDef *SPIx)
DECL|LL_SPI_DATAWIDTH_10BIT|macro|LL_SPI_DATAWIDTH_10BIT
DECL|LL_SPI_DATAWIDTH_11BIT|macro|LL_SPI_DATAWIDTH_11BIT
DECL|LL_SPI_DATAWIDTH_12BIT|macro|LL_SPI_DATAWIDTH_12BIT
DECL|LL_SPI_DATAWIDTH_13BIT|macro|LL_SPI_DATAWIDTH_13BIT
DECL|LL_SPI_DATAWIDTH_14BIT|macro|LL_SPI_DATAWIDTH_14BIT
DECL|LL_SPI_DATAWIDTH_15BIT|macro|LL_SPI_DATAWIDTH_15BIT
DECL|LL_SPI_DATAWIDTH_16BIT|macro|LL_SPI_DATAWIDTH_16BIT
DECL|LL_SPI_DATAWIDTH_4BIT|macro|LL_SPI_DATAWIDTH_4BIT
DECL|LL_SPI_DATAWIDTH_5BIT|macro|LL_SPI_DATAWIDTH_5BIT
DECL|LL_SPI_DATAWIDTH_6BIT|macro|LL_SPI_DATAWIDTH_6BIT
DECL|LL_SPI_DATAWIDTH_7BIT|macro|LL_SPI_DATAWIDTH_7BIT
DECL|LL_SPI_DATAWIDTH_8BIT|macro|LL_SPI_DATAWIDTH_8BIT
DECL|LL_SPI_DATAWIDTH_9BIT|macro|LL_SPI_DATAWIDTH_9BIT
DECL|LL_SPI_DMA_GetRegAddr|function|__STATIC_INLINE uint32_t LL_SPI_DMA_GetRegAddr(SPI_TypeDef *SPIx)
DECL|LL_SPI_DMA_PARITY_EVEN|macro|LL_SPI_DMA_PARITY_EVEN
DECL|LL_SPI_DMA_PARITY_ODD|macro|LL_SPI_DMA_PARITY_ODD
DECL|LL_SPI_DisableCRC|function|__STATIC_INLINE void LL_SPI_DisableCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableDMAReq_RX|function|__STATIC_INLINE void LL_SPI_DisableDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableDMAReq_TX|function|__STATIC_INLINE void LL_SPI_DisableDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableIT_ERR|function|__STATIC_INLINE void LL_SPI_DisableIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableIT_RXNE|function|__STATIC_INLINE void LL_SPI_DisableIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableIT_TXE|function|__STATIC_INLINE void LL_SPI_DisableIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableNSSPulseMgt|function|__STATIC_INLINE void LL_SPI_DisableNSSPulseMgt(SPI_TypeDef *SPIx)
DECL|LL_SPI_Disable|function|__STATIC_INLINE void LL_SPI_Disable(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableCRC|function|__STATIC_INLINE void LL_SPI_EnableCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableDMAReq_RX|function|__STATIC_INLINE void LL_SPI_EnableDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableDMAReq_TX|function|__STATIC_INLINE void LL_SPI_EnableDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableIT_ERR|function|__STATIC_INLINE void LL_SPI_EnableIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableIT_RXNE|function|__STATIC_INLINE void LL_SPI_EnableIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableIT_TXE|function|__STATIC_INLINE void LL_SPI_EnableIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableNSSPulseMgt|function|__STATIC_INLINE void LL_SPI_EnableNSSPulseMgt(SPI_TypeDef *SPIx)
DECL|LL_SPI_Enable|function|__STATIC_INLINE void LL_SPI_Enable(SPI_TypeDef *SPIx)
DECL|LL_SPI_FULL_DUPLEX|macro|LL_SPI_FULL_DUPLEX
DECL|LL_SPI_GetBaudRatePrescaler|function|__STATIC_INLINE uint32_t LL_SPI_GetBaudRatePrescaler(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetCRCPolynomial|function|__STATIC_INLINE uint32_t LL_SPI_GetCRCPolynomial(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetCRCWidth|function|__STATIC_INLINE uint32_t LL_SPI_GetCRCWidth(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetClockPhase|function|__STATIC_INLINE uint32_t LL_SPI_GetClockPhase(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetClockPolarity|function|__STATIC_INLINE uint32_t LL_SPI_GetClockPolarity(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetDMAParity_RX|function|__STATIC_INLINE uint32_t LL_SPI_GetDMAParity_RX(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetDMAParity_TX|function|__STATIC_INLINE uint32_t LL_SPI_GetDMAParity_TX(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetDataWidth|function|__STATIC_INLINE uint32_t LL_SPI_GetDataWidth(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetMode|function|__STATIC_INLINE uint32_t LL_SPI_GetMode(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetNSSMode|function|__STATIC_INLINE uint32_t LL_SPI_GetNSSMode(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetRxCRC|function|__STATIC_INLINE uint32_t LL_SPI_GetRxCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetRxFIFOLevel|function|__STATIC_INLINE uint32_t LL_SPI_GetRxFIFOLevel(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetRxFIFOThreshold|function|__STATIC_INLINE uint32_t LL_SPI_GetRxFIFOThreshold(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetStandard|function|__STATIC_INLINE uint32_t LL_SPI_GetStandard(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTransferBitOrder|function|__STATIC_INLINE uint32_t LL_SPI_GetTransferBitOrder(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTransferDirection|function|__STATIC_INLINE uint32_t LL_SPI_GetTransferDirection(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTxCRC|function|__STATIC_INLINE uint32_t LL_SPI_GetTxCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTxFIFOLevel|function|__STATIC_INLINE uint32_t LL_SPI_GetTxFIFOLevel(SPI_TypeDef *SPIx)
DECL|LL_SPI_HALF_DUPLEX_RX|macro|LL_SPI_HALF_DUPLEX_RX
DECL|LL_SPI_HALF_DUPLEX_TX|macro|LL_SPI_HALF_DUPLEX_TX
DECL|LL_SPI_InitTypeDef|typedef|} LL_SPI_InitTypeDef;
DECL|LL_SPI_IsActiveFlag_BSY|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_BSY(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsActiveFlag_CRCERR|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_CRCERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsActiveFlag_FRE|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_FRE(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsActiveFlag_MODF|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_MODF(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsActiveFlag_OVR|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_OVR(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsActiveFlag_RXNE|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_RXNE(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsActiveFlag_TXE|function|__STATIC_INLINE uint32_t LL_SPI_IsActiveFlag_TXE(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledCRC|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledDMAReq_RX|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledDMAReq_TX|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledIT_ERR|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledIT_RXNE|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledIT_TXE|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabledNSSPulse|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabledNSSPulse(SPI_TypeDef *SPIx)
DECL|LL_SPI_IsEnabled|function|__STATIC_INLINE uint32_t LL_SPI_IsEnabled(SPI_TypeDef *SPIx)
DECL|LL_SPI_LSB_FIRST|macro|LL_SPI_LSB_FIRST
DECL|LL_SPI_MODE_MASTER|macro|LL_SPI_MODE_MASTER
DECL|LL_SPI_MODE_SLAVE|macro|LL_SPI_MODE_SLAVE
DECL|LL_SPI_MSB_FIRST|macro|LL_SPI_MSB_FIRST
DECL|LL_SPI_NSS_HARD_INPUT|macro|LL_SPI_NSS_HARD_INPUT
DECL|LL_SPI_NSS_HARD_OUTPUT|macro|LL_SPI_NSS_HARD_OUTPUT
DECL|LL_SPI_NSS_SOFT|macro|LL_SPI_NSS_SOFT
DECL|LL_SPI_PHASE_1EDGE|macro|LL_SPI_PHASE_1EDGE
DECL|LL_SPI_PHASE_2EDGE|macro|LL_SPI_PHASE_2EDGE
DECL|LL_SPI_POLARITY_HIGH|macro|LL_SPI_POLARITY_HIGH
DECL|LL_SPI_POLARITY_LOW|macro|LL_SPI_POLARITY_LOW
DECL|LL_SPI_PROTOCOL_MOTOROLA|macro|LL_SPI_PROTOCOL_MOTOROLA
DECL|LL_SPI_PROTOCOL_TI|macro|LL_SPI_PROTOCOL_TI
DECL|LL_SPI_RX_FIFO_EMPTY|macro|LL_SPI_RX_FIFO_EMPTY
DECL|LL_SPI_RX_FIFO_FULL|macro|LL_SPI_RX_FIFO_FULL
DECL|LL_SPI_RX_FIFO_HALF_FULL|macro|LL_SPI_RX_FIFO_HALF_FULL
DECL|LL_SPI_RX_FIFO_QUARTER_FULL|macro|LL_SPI_RX_FIFO_QUARTER_FULL
DECL|LL_SPI_RX_FIFO_TH_HALF|macro|LL_SPI_RX_FIFO_TH_HALF
DECL|LL_SPI_RX_FIFO_TH_QUARTER|macro|LL_SPI_RX_FIFO_TH_QUARTER
DECL|LL_SPI_ReadReg|macro|LL_SPI_ReadReg
DECL|LL_SPI_ReceiveData16|function|__STATIC_INLINE uint16_t LL_SPI_ReceiveData16(SPI_TypeDef *SPIx)
DECL|LL_SPI_ReceiveData8|function|__STATIC_INLINE uint8_t LL_SPI_ReceiveData8(SPI_TypeDef *SPIx)
DECL|LL_SPI_SIMPLEX_RX|macro|LL_SPI_SIMPLEX_RX
DECL|LL_SPI_SR_BSY|macro|LL_SPI_SR_BSY
DECL|LL_SPI_SR_CRCERR|macro|LL_SPI_SR_CRCERR
DECL|LL_SPI_SR_FRE|macro|LL_SPI_SR_FRE
DECL|LL_SPI_SR_MODF|macro|LL_SPI_SR_MODF
DECL|LL_SPI_SR_OVR|macro|LL_SPI_SR_OVR
DECL|LL_SPI_SR_RXNE|macro|LL_SPI_SR_RXNE
DECL|LL_SPI_SR_TXE|macro|LL_SPI_SR_TXE
DECL|LL_SPI_SR_UDR|macro|LL_SPI_SR_UDR
DECL|LL_SPI_SetBaudRatePrescaler|function|__STATIC_INLINE void LL_SPI_SetBaudRatePrescaler(SPI_TypeDef *SPIx, uint32_t BaudRate)
DECL|LL_SPI_SetCRCNext|function|__STATIC_INLINE void LL_SPI_SetCRCNext(SPI_TypeDef *SPIx)
DECL|LL_SPI_SetCRCPolynomial|function|__STATIC_INLINE void LL_SPI_SetCRCPolynomial(SPI_TypeDef *SPIx, uint32_t CRCPoly)
DECL|LL_SPI_SetCRCWidth|function|__STATIC_INLINE void LL_SPI_SetCRCWidth(SPI_TypeDef *SPIx, uint32_t CRCLength)
DECL|LL_SPI_SetClockPhase|function|__STATIC_INLINE void LL_SPI_SetClockPhase(SPI_TypeDef *SPIx, uint32_t ClockPhase)
DECL|LL_SPI_SetClockPolarity|function|__STATIC_INLINE void LL_SPI_SetClockPolarity(SPI_TypeDef *SPIx, uint32_t ClockPolarity)
DECL|LL_SPI_SetDMAParity_RX|function|__STATIC_INLINE void LL_SPI_SetDMAParity_RX(SPI_TypeDef *SPIx, uint32_t Parity)
DECL|LL_SPI_SetDMAParity_TX|function|__STATIC_INLINE void LL_SPI_SetDMAParity_TX(SPI_TypeDef *SPIx, uint32_t Parity)
DECL|LL_SPI_SetDataWidth|function|__STATIC_INLINE void LL_SPI_SetDataWidth(SPI_TypeDef *SPIx, uint32_t DataWidth)
DECL|LL_SPI_SetMode|function|__STATIC_INLINE void LL_SPI_SetMode(SPI_TypeDef *SPIx, uint32_t Mode)
DECL|LL_SPI_SetNSSMode|function|__STATIC_INLINE void LL_SPI_SetNSSMode(SPI_TypeDef *SPIx, uint32_t NSS)
DECL|LL_SPI_SetRxFIFOThreshold|function|__STATIC_INLINE void LL_SPI_SetRxFIFOThreshold(SPI_TypeDef *SPIx, uint32_t Threshold)
DECL|LL_SPI_SetStandard|function|__STATIC_INLINE void LL_SPI_SetStandard(SPI_TypeDef *SPIx, uint32_t Standard)
DECL|LL_SPI_SetTransferBitOrder|function|__STATIC_INLINE void LL_SPI_SetTransferBitOrder(SPI_TypeDef *SPIx, uint32_t BitOrder)
DECL|LL_SPI_SetTransferDirection|function|__STATIC_INLINE void LL_SPI_SetTransferDirection(SPI_TypeDef *SPIx, uint32_t TransferDirection)
DECL|LL_SPI_TX_FIFO_EMPTY|macro|LL_SPI_TX_FIFO_EMPTY
DECL|LL_SPI_TX_FIFO_FULL|macro|LL_SPI_TX_FIFO_FULL
DECL|LL_SPI_TX_FIFO_HALF_FULL|macro|LL_SPI_TX_FIFO_HALF_FULL
DECL|LL_SPI_TX_FIFO_QUARTER_FULL|macro|LL_SPI_TX_FIFO_QUARTER_FULL
DECL|LL_SPI_TransmitData16|function|__STATIC_INLINE void LL_SPI_TransmitData16(SPI_TypeDef *SPIx, uint16_t TxData)
DECL|LL_SPI_TransmitData8|function|__STATIC_INLINE void LL_SPI_TransmitData8(SPI_TypeDef *SPIx, uint8_t TxData)
DECL|LL_SPI_WriteReg|macro|LL_SPI_WriteReg
DECL|Mode|member|uint32_t Mode; /*!< Specifies the SPI mode (Master/Slave).
DECL|NSS|member|uint32_t NSS; /*!< Specifies whether the NSS signal is managed by hardware (NSS pin) or by software using the SSI bit.
DECL|TransferDirection|member|uint32_t TransferDirection; /*!< Specifies the SPI unidirectional or bidirectional data mode.
DECL|__STM32L4xx_LL_SPI_H|macro|__STM32L4xx_LL_SPI_H
