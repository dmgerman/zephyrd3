DECL|AudioFreq|member|uint32_t AudioFreq; /*!< Specifies the frequency selected for the I2S communication.
DECL|BaudRate|member|uint32_t BaudRate; /*!< Specifies the BaudRate prescaler value which will be used to configure the transmit and receive SCK clock.
DECL|BitOrder|member|uint32_t BitOrder; /*!< Specifies whether data transfers start from MSB or LSB bit.
DECL|CRCCalculation|member|uint32_t CRCCalculation; /*!< Specifies if the CRC calculation is enabled or not.
DECL|CRCPoly|member|uint32_t CRCPoly; /*!< Specifies the polynomial used for the CRC calculation.
DECL|ClockPhase|member|uint32_t ClockPhase; /*!< Specifies the clock active edge for the bit capture.
DECL|ClockPolarity|member|uint32_t ClockPolarity; /*!< Specifies the idle state of the I2S clock.
DECL|ClockPolarity|member|uint32_t ClockPolarity; /*!< Specifies the serial clock steady state.
DECL|DataFormat|member|uint32_t DataFormat; /*!< Specifies the data format for the I2S communication.
DECL|DataWidth|member|uint32_t DataWidth; /*!< Specifies the SPI data width.
DECL|LL_I2S_AUDIOFREQ_11K|macro|LL_I2S_AUDIOFREQ_11K
DECL|LL_I2S_AUDIOFREQ_16K|macro|LL_I2S_AUDIOFREQ_16K
DECL|LL_I2S_AUDIOFREQ_192K|macro|LL_I2S_AUDIOFREQ_192K
DECL|LL_I2S_AUDIOFREQ_22K|macro|LL_I2S_AUDIOFREQ_22K
DECL|LL_I2S_AUDIOFREQ_32K|macro|LL_I2S_AUDIOFREQ_32K
DECL|LL_I2S_AUDIOFREQ_44K|macro|LL_I2S_AUDIOFREQ_44K
DECL|LL_I2S_AUDIOFREQ_48K|macro|LL_I2S_AUDIOFREQ_48K
DECL|LL_I2S_AUDIOFREQ_8K|macro|LL_I2S_AUDIOFREQ_8K
DECL|LL_I2S_AUDIOFREQ_96K|macro|LL_I2S_AUDIOFREQ_96K
DECL|LL_I2S_AUDIOFREQ_DEFAULT|macro|LL_I2S_AUDIOFREQ_DEFAULT
DECL|LL_I2S_CR2_ERRIE|macro|LL_I2S_CR2_ERRIE
DECL|LL_I2S_CR2_RXNEIE|macro|LL_I2S_CR2_RXNEIE
DECL|LL_I2S_CR2_TXEIE|macro|LL_I2S_CR2_TXEIE
DECL|LL_I2S_ClearFlag_FRE|function|__STATIC_INLINE void LL_I2S_ClearFlag_FRE(SPI_TypeDef *SPIx)
DECL|LL_I2S_ClearFlag_OVR|function|__STATIC_INLINE void LL_I2S_ClearFlag_OVR(SPI_TypeDef *SPIx)
DECL|LL_I2S_ClearFlag_UDR|function|__STATIC_INLINE void LL_I2S_ClearFlag_UDR(SPI_TypeDef *SPIx)
DECL|LL_I2S_DATAFORMAT_16B_EXTENDED|macro|LL_I2S_DATAFORMAT_16B_EXTENDED
DECL|LL_I2S_DATAFORMAT_16B|macro|LL_I2S_DATAFORMAT_16B
DECL|LL_I2S_DATAFORMAT_24B|macro|LL_I2S_DATAFORMAT_24B
DECL|LL_I2S_DATAFORMAT_32B|macro|LL_I2S_DATAFORMAT_32B
DECL|LL_I2S_DisableDMAReq_RX|function|__STATIC_INLINE void LL_I2S_DisableDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_I2S_DisableDMAReq_TX|function|__STATIC_INLINE void LL_I2S_DisableDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_I2S_DisableIT_ERR|function|__STATIC_INLINE void LL_I2S_DisableIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_I2S_DisableIT_RXNE|function|__STATIC_INLINE void LL_I2S_DisableIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_I2S_DisableIT_TXE|function|__STATIC_INLINE void LL_I2S_DisableIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_I2S_DisableMasterClock|function|__STATIC_INLINE void LL_I2S_DisableMasterClock(SPI_TypeDef *SPIx)
DECL|LL_I2S_Disable|function|__STATIC_INLINE void LL_I2S_Disable(SPI_TypeDef *SPIx)
DECL|LL_I2S_EnableDMAReq_RX|function|__STATIC_INLINE void LL_I2S_EnableDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_I2S_EnableDMAReq_TX|function|__STATIC_INLINE void LL_I2S_EnableDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_I2S_EnableIT_ERR|function|__STATIC_INLINE void LL_I2S_EnableIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_I2S_EnableIT_RXNE|function|__STATIC_INLINE void LL_I2S_EnableIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_I2S_EnableIT_TXE|function|__STATIC_INLINE void LL_I2S_EnableIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_I2S_EnableMasterClock|function|__STATIC_INLINE void LL_I2S_EnableMasterClock(SPI_TypeDef *SPIx)
DECL|LL_I2S_Enable|function|__STATIC_INLINE void LL_I2S_Enable(SPI_TypeDef *SPIx)
DECL|LL_I2S_GetClockPolarity|function|__STATIC_INLINE uint32_t LL_I2S_GetClockPolarity(SPI_TypeDef *SPIx)
DECL|LL_I2S_GetDataFormat|function|__STATIC_INLINE uint32_t LL_I2S_GetDataFormat(SPI_TypeDef *SPIx)
DECL|LL_I2S_GetPrescalerLinear|function|__STATIC_INLINE uint32_t LL_I2S_GetPrescalerLinear(SPI_TypeDef *SPIx)
DECL|LL_I2S_GetPrescalerParity|function|__STATIC_INLINE uint32_t LL_I2S_GetPrescalerParity(SPI_TypeDef *SPIx)
DECL|LL_I2S_GetStandard|function|__STATIC_INLINE uint32_t LL_I2S_GetStandard(SPI_TypeDef *SPIx)
DECL|LL_I2S_GetTransferMode|function|__STATIC_INLINE uint32_t LL_I2S_GetTransferMode(SPI_TypeDef *SPIx)
DECL|LL_I2S_InitTypeDef|typedef|} LL_I2S_InitTypeDef;
DECL|LL_I2S_IsActiveFlag_BSY|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_BSY(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsActiveFlag_CHSIDE|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_CHSIDE(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsActiveFlag_FRE|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_FRE(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsActiveFlag_OVR|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_OVR(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsActiveFlag_RXNE|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_RXNE(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsActiveFlag_TXE|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_TXE(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsActiveFlag_UDR|function|__STATIC_INLINE uint32_t LL_I2S_IsActiveFlag_UDR(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabledDMAReq_RX|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabledDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabledDMAReq_TX|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabledDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabledIT_ERR|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabledIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabledIT_RXNE|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabledIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabledIT_TXE|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabledIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabledMasterClock|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabledMasterClock(SPI_TypeDef *SPIx)
DECL|LL_I2S_IsEnabled|function|__STATIC_INLINE uint32_t LL_I2S_IsEnabled(SPI_TypeDef *SPIx)
DECL|LL_I2S_MCLK_OUTPUT_DISABLE|macro|LL_I2S_MCLK_OUTPUT_DISABLE
DECL|LL_I2S_MCLK_OUTPUT_ENABLE|macro|LL_I2S_MCLK_OUTPUT_ENABLE
DECL|LL_I2S_MODE_MASTER_RX|macro|LL_I2S_MODE_MASTER_RX
DECL|LL_I2S_MODE_MASTER_TX|macro|LL_I2S_MODE_MASTER_TX
DECL|LL_I2S_MODE_SLAVE_RX|macro|LL_I2S_MODE_SLAVE_RX
DECL|LL_I2S_MODE_SLAVE_TX|macro|LL_I2S_MODE_SLAVE_TX
DECL|LL_I2S_POLARITY_HIGH|macro|LL_I2S_POLARITY_HIGH
DECL|LL_I2S_POLARITY_LOW|macro|LL_I2S_POLARITY_LOW
DECL|LL_I2S_PRESCALER_PARITY_EVEN|macro|LL_I2S_PRESCALER_PARITY_EVEN
DECL|LL_I2S_PRESCALER_PARITY_ODD|macro|LL_I2S_PRESCALER_PARITY_ODD
DECL|LL_I2S_ReadReg|macro|LL_I2S_ReadReg
DECL|LL_I2S_ReceiveData16|function|__STATIC_INLINE uint16_t LL_I2S_ReceiveData16(SPI_TypeDef *SPIx)
DECL|LL_I2S_SR_BSY|macro|LL_I2S_SR_BSY
DECL|LL_I2S_SR_FRE|macro|LL_I2S_SR_FRE
DECL|LL_I2S_SR_OVR|macro|LL_I2S_SR_OVR
DECL|LL_I2S_SR_RXNE|macro|LL_I2S_SR_RXNE
DECL|LL_I2S_SR_TXE|macro|LL_I2S_SR_TXE
DECL|LL_I2S_SR_UDR|macro|LL_I2S_SR_UDR
DECL|LL_I2S_STANDARD_LSB|macro|LL_I2S_STANDARD_LSB
DECL|LL_I2S_STANDARD_MSB|macro|LL_I2S_STANDARD_MSB
DECL|LL_I2S_STANDARD_PCM_LONG|macro|LL_I2S_STANDARD_PCM_LONG
DECL|LL_I2S_STANDARD_PCM_SHORT|macro|LL_I2S_STANDARD_PCM_SHORT
DECL|LL_I2S_STANDARD_PHILIPS|macro|LL_I2S_STANDARD_PHILIPS
DECL|LL_I2S_SetClockPolarity|function|__STATIC_INLINE void LL_I2S_SetClockPolarity(SPI_TypeDef *SPIx, uint32_t ClockPolarity)
DECL|LL_I2S_SetDataFormat|function|__STATIC_INLINE void LL_I2S_SetDataFormat(SPI_TypeDef *SPIx, uint32_t DataFormat)
DECL|LL_I2S_SetPrescalerLinear|function|__STATIC_INLINE void LL_I2S_SetPrescalerLinear(SPI_TypeDef *SPIx, uint8_t PrescalerLinear)
DECL|LL_I2S_SetPrescalerParity|function|__STATIC_INLINE void LL_I2S_SetPrescalerParity(SPI_TypeDef *SPIx, uint32_t PrescalerParity)
DECL|LL_I2S_SetStandard|function|__STATIC_INLINE void LL_I2S_SetStandard(SPI_TypeDef *SPIx, uint32_t Standard)
DECL|LL_I2S_SetTransferMode|function|__STATIC_INLINE void LL_I2S_SetTransferMode(SPI_TypeDef *SPIx, uint32_t Mode)
DECL|LL_I2S_TransmitData16|function|__STATIC_INLINE void LL_I2S_TransmitData16(SPI_TypeDef *SPIx, uint16_t TxData)
DECL|LL_I2S_WriteReg|macro|LL_I2S_WriteReg
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
DECL|LL_SPI_ClearFlag_CRCERR|function|__STATIC_INLINE void LL_SPI_ClearFlag_CRCERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_ClearFlag_FRE|function|__STATIC_INLINE void LL_SPI_ClearFlag_FRE(SPI_TypeDef *SPIx)
DECL|LL_SPI_ClearFlag_MODF|function|__STATIC_INLINE void LL_SPI_ClearFlag_MODF(SPI_TypeDef *SPIx)
DECL|LL_SPI_ClearFlag_OVR|function|__STATIC_INLINE void LL_SPI_ClearFlag_OVR(SPI_TypeDef *SPIx)
DECL|LL_SPI_DATAWIDTH_16BIT|macro|LL_SPI_DATAWIDTH_16BIT
DECL|LL_SPI_DATAWIDTH_8BIT|macro|LL_SPI_DATAWIDTH_8BIT
DECL|LL_SPI_DMA_GetRegAddr|function|__STATIC_INLINE uint32_t LL_SPI_DMA_GetRegAddr(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableCRC|function|__STATIC_INLINE void LL_SPI_DisableCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableDMAReq_RX|function|__STATIC_INLINE void LL_SPI_DisableDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableDMAReq_TX|function|__STATIC_INLINE void LL_SPI_DisableDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableIT_ERR|function|__STATIC_INLINE void LL_SPI_DisableIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableIT_RXNE|function|__STATIC_INLINE void LL_SPI_DisableIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_SPI_DisableIT_TXE|function|__STATIC_INLINE void LL_SPI_DisableIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_SPI_Disable|function|__STATIC_INLINE void LL_SPI_Disable(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableCRC|function|__STATIC_INLINE void LL_SPI_EnableCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableDMAReq_RX|function|__STATIC_INLINE void LL_SPI_EnableDMAReq_RX(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableDMAReq_TX|function|__STATIC_INLINE void LL_SPI_EnableDMAReq_TX(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableIT_ERR|function|__STATIC_INLINE void LL_SPI_EnableIT_ERR(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableIT_RXNE|function|__STATIC_INLINE void LL_SPI_EnableIT_RXNE(SPI_TypeDef *SPIx)
DECL|LL_SPI_EnableIT_TXE|function|__STATIC_INLINE void LL_SPI_EnableIT_TXE(SPI_TypeDef *SPIx)
DECL|LL_SPI_Enable|function|__STATIC_INLINE void LL_SPI_Enable(SPI_TypeDef *SPIx)
DECL|LL_SPI_FULL_DUPLEX|macro|LL_SPI_FULL_DUPLEX
DECL|LL_SPI_GetBaudRatePrescaler|function|__STATIC_INLINE uint32_t LL_SPI_GetBaudRatePrescaler(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetCRCPolynomial|function|__STATIC_INLINE uint32_t LL_SPI_GetCRCPolynomial(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetClockPhase|function|__STATIC_INLINE uint32_t LL_SPI_GetClockPhase(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetClockPolarity|function|__STATIC_INLINE uint32_t LL_SPI_GetClockPolarity(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetDataWidth|function|__STATIC_INLINE uint32_t LL_SPI_GetDataWidth(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetMode|function|__STATIC_INLINE uint32_t LL_SPI_GetMode(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetNSSMode|function|__STATIC_INLINE uint32_t LL_SPI_GetNSSMode(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetRxCRC|function|__STATIC_INLINE uint32_t LL_SPI_GetRxCRC(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetStandard|function|__STATIC_INLINE uint32_t LL_SPI_GetStandard(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTransferBitOrder|function|__STATIC_INLINE uint32_t LL_SPI_GetTransferBitOrder(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTransferDirection|function|__STATIC_INLINE uint32_t LL_SPI_GetTransferDirection(SPI_TypeDef *SPIx)
DECL|LL_SPI_GetTxCRC|function|__STATIC_INLINE uint32_t LL_SPI_GetTxCRC(SPI_TypeDef *SPIx)
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
DECL|LL_SPI_SetBaudRatePrescaler|function|__STATIC_INLINE void LL_SPI_SetBaudRatePrescaler(SPI_TypeDef *SPIx, uint32_t BaudRate)
DECL|LL_SPI_SetCRCNext|function|__STATIC_INLINE void LL_SPI_SetCRCNext(SPI_TypeDef *SPIx)
DECL|LL_SPI_SetCRCPolynomial|function|__STATIC_INLINE void LL_SPI_SetCRCPolynomial(SPI_TypeDef *SPIx, uint32_t CRCPoly)
DECL|LL_SPI_SetClockPhase|function|__STATIC_INLINE void LL_SPI_SetClockPhase(SPI_TypeDef *SPIx, uint32_t ClockPhase)
DECL|LL_SPI_SetClockPolarity|function|__STATIC_INLINE void LL_SPI_SetClockPolarity(SPI_TypeDef *SPIx, uint32_t ClockPolarity)
DECL|LL_SPI_SetDataWidth|function|__STATIC_INLINE void LL_SPI_SetDataWidth(SPI_TypeDef *SPIx, uint32_t DataWidth)
DECL|LL_SPI_SetMode|function|__STATIC_INLINE void LL_SPI_SetMode(SPI_TypeDef *SPIx, uint32_t Mode)
DECL|LL_SPI_SetNSSMode|function|__STATIC_INLINE void LL_SPI_SetNSSMode(SPI_TypeDef *SPIx, uint32_t NSS)
DECL|LL_SPI_SetStandard|function|__STATIC_INLINE void LL_SPI_SetStandard(SPI_TypeDef *SPIx, uint32_t Standard)
DECL|LL_SPI_SetTransferBitOrder|function|__STATIC_INLINE void LL_SPI_SetTransferBitOrder(SPI_TypeDef *SPIx, uint32_t BitOrder)
DECL|LL_SPI_SetTransferDirection|function|__STATIC_INLINE void LL_SPI_SetTransferDirection(SPI_TypeDef *SPIx, uint32_t TransferDirection)
DECL|LL_SPI_TransmitData16|function|__STATIC_INLINE void LL_SPI_TransmitData16(SPI_TypeDef *SPIx, uint16_t TxData)
DECL|LL_SPI_TransmitData8|function|__STATIC_INLINE void LL_SPI_TransmitData8(SPI_TypeDef *SPIx, uint8_t TxData)
DECL|LL_SPI_WriteReg|macro|LL_SPI_WriteReg
DECL|MCLKOutput|member|uint32_t MCLKOutput; /*!< Specifies whether the I2S MCLK output is enabled or not.
DECL|Mode|member|uint32_t Mode; /*!< Specifies the I2S operating mode.
DECL|Mode|member|uint32_t Mode; /*!< Specifies the SPI mode (Master/Slave).
DECL|NSS|member|uint32_t NSS; /*!< Specifies whether the NSS signal is managed by hardware (NSS pin) or by software using the SSI bit.
DECL|Standard|member|uint32_t Standard; /*!< Specifies the standard used for the I2S communication.
DECL|TransferDirection|member|uint32_t TransferDirection; /*!< Specifies the SPI unidirectional or bidirectional data mode.
DECL|__STM32F2xx_LL_SPI_H|macro|__STM32F2xx_LL_SPI_H
