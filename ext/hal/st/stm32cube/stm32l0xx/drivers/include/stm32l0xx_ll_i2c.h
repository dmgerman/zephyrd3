DECL|AnalogFilter|member|uint32_t AnalogFilter; /*!< Enables or disables analog noise filter.
DECL|DigitalFilter|member|uint32_t DigitalFilter; /*!< Configures the digital noise filter.
DECL|I2C_POSITION_CR1_DNF|macro|I2C_POSITION_CR1_DNF
DECL|I2C_POSITION_CR2_NBYTES|macro|I2C_POSITION_CR2_NBYTES
DECL|I2C_POSITION_ISR_ADDCODE|macro|I2C_POSITION_ISR_ADDCODE
DECL|I2C_POSITION_TIMEOUTR_TIMEOUTB|macro|I2C_POSITION_TIMEOUTR_TIMEOUTB
DECL|I2C_POSITION_TIMINGR_PRESC|macro|I2C_POSITION_TIMINGR_PRESC
DECL|I2C_POSITION_TIMINGR_SCLDEL|macro|I2C_POSITION_TIMINGR_SCLDEL
DECL|I2C_POSITION_TIMINGR_SCLH|macro|I2C_POSITION_TIMINGR_SCLH
DECL|I2C_POSITION_TIMINGR_SCLL|macro|I2C_POSITION_TIMINGR_SCLL
DECL|I2C_POSITION_TIMINGR_SDADEL|macro|I2C_POSITION_TIMINGR_SDADEL
DECL|LL_I2C_ACK|macro|LL_I2C_ACK
DECL|LL_I2C_ADDRESSING_MODE_10BIT|macro|LL_I2C_ADDRESSING_MODE_10BIT
DECL|LL_I2C_ADDRESSING_MODE_7BIT|macro|LL_I2C_ADDRESSING_MODE_7BIT
DECL|LL_I2C_ADDRSLAVE_10BIT|macro|LL_I2C_ADDRSLAVE_10BIT
DECL|LL_I2C_ADDRSLAVE_7BIT|macro|LL_I2C_ADDRSLAVE_7BIT
DECL|LL_I2C_ANALOGFILTER_DISABLE|macro|LL_I2C_ANALOGFILTER_DISABLE
DECL|LL_I2C_ANALOGFILTER_ENABLE|macro|LL_I2C_ANALOGFILTER_ENABLE
DECL|LL_I2C_AcknowledgeNextData|function|__STATIC_INLINE void LL_I2C_AcknowledgeNextData(I2C_TypeDef *I2Cx, uint32_t TypeAcknowledge)
DECL|LL_I2C_CR1_ADDRIE|macro|LL_I2C_CR1_ADDRIE
DECL|LL_I2C_CR1_ERRIE|macro|LL_I2C_CR1_ERRIE
DECL|LL_I2C_CR1_NACKIE|macro|LL_I2C_CR1_NACKIE
DECL|LL_I2C_CR1_RXIE|macro|LL_I2C_CR1_RXIE
DECL|LL_I2C_CR1_STOPIE|macro|LL_I2C_CR1_STOPIE
DECL|LL_I2C_CR1_TCIE|macro|LL_I2C_CR1_TCIE
DECL|LL_I2C_CR1_TXIE|macro|LL_I2C_CR1_TXIE
DECL|LL_I2C_ClearFlag_ADDR|function|__STATIC_INLINE void LL_I2C_ClearFlag_ADDR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearFlag_ARLO|function|__STATIC_INLINE void LL_I2C_ClearFlag_ARLO(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearFlag_BERR|function|__STATIC_INLINE void LL_I2C_ClearFlag_BERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearFlag_NACK|function|__STATIC_INLINE void LL_I2C_ClearFlag_NACK(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearFlag_OVR|function|__STATIC_INLINE void LL_I2C_ClearFlag_OVR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearFlag_STOP|function|__STATIC_INLINE void LL_I2C_ClearFlag_STOP(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearFlag_TXE|function|__STATIC_INLINE void LL_I2C_ClearFlag_TXE(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearSMBusFlag_ALERT|function|__STATIC_INLINE void LL_I2C_ClearSMBusFlag_ALERT(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearSMBusFlag_PECERR|function|__STATIC_INLINE void LL_I2C_ClearSMBusFlag_PECERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ClearSMBusFlag_TIMEOUT|function|__STATIC_INLINE void LL_I2C_ClearSMBusFlag_TIMEOUT(I2C_TypeDef *I2Cx)
DECL|LL_I2C_ConfigFilters|function|__STATIC_INLINE void LL_I2C_ConfigFilters(I2C_TypeDef *I2Cx, uint32_t AnalogFilter, uint32_t DigitalFilter)
DECL|LL_I2C_ConfigSMBusTimeout|function|__STATIC_INLINE void LL_I2C_ConfigSMBusTimeout(I2C_TypeDef *I2Cx, uint32_t TimeoutA, uint32_t TimeoutAMode, uint32_t TimeoutB)
DECL|LL_I2C_DIRECTION_READ|macro|LL_I2C_DIRECTION_READ
DECL|LL_I2C_DIRECTION_WRITE|macro|LL_I2C_DIRECTION_WRITE
DECL|LL_I2C_DMA_GetRegAddr|function|__STATIC_INLINE uint32_t LL_I2C_DMA_GetRegAddr(I2C_TypeDef *I2Cx, uint32_t Direction)
DECL|LL_I2C_DMA_REG_DATA_RECEIVE|macro|LL_I2C_DMA_REG_DATA_RECEIVE
DECL|LL_I2C_DMA_REG_DATA_TRANSMIT|macro|LL_I2C_DMA_REG_DATA_TRANSMIT
DECL|LL_I2C_DisableAnalogFilter|function|__STATIC_INLINE void LL_I2C_DisableAnalogFilter(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableAuto10BitRead|function|__STATIC_INLINE void LL_I2C_DisableAuto10BitRead(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableAutoEndMode|function|__STATIC_INLINE void LL_I2C_DisableAutoEndMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableClockStretching|function|__STATIC_INLINE void LL_I2C_DisableClockStretching(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableDMAReq_RX|function|__STATIC_INLINE void LL_I2C_DisableDMAReq_RX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableDMAReq_TX|function|__STATIC_INLINE void LL_I2C_DisableDMAReq_TX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableGeneralCall|function|__STATIC_INLINE void LL_I2C_DisableGeneralCall(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_ADDR|function|__STATIC_INLINE void LL_I2C_DisableIT_ADDR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_ERR|function|__STATIC_INLINE void LL_I2C_DisableIT_ERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_NACK|function|__STATIC_INLINE void LL_I2C_DisableIT_NACK(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_RX|function|__STATIC_INLINE void LL_I2C_DisableIT_RX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_STOP|function|__STATIC_INLINE void LL_I2C_DisableIT_STOP(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_TC|function|__STATIC_INLINE void LL_I2C_DisableIT_TC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableIT_TX|function|__STATIC_INLINE void LL_I2C_DisableIT_TX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableOwnAddress1|function|__STATIC_INLINE void LL_I2C_DisableOwnAddress1(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableOwnAddress2|function|__STATIC_INLINE void LL_I2C_DisableOwnAddress2(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableReloadMode|function|__STATIC_INLINE void LL_I2C_DisableReloadMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableSMBusAlert|function|__STATIC_INLINE void LL_I2C_DisableSMBusAlert(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableSMBusPEC|function|__STATIC_INLINE void LL_I2C_DisableSMBusPEC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableSMBusTimeout|function|__STATIC_INLINE void LL_I2C_DisableSMBusTimeout(I2C_TypeDef *I2Cx, uint32_t ClockTimeout)
DECL|LL_I2C_DisableSlaveByteControl|function|__STATIC_INLINE void LL_I2C_DisableSlaveByteControl(I2C_TypeDef *I2Cx)
DECL|LL_I2C_DisableWakeUpFromStop|function|__STATIC_INLINE void LL_I2C_DisableWakeUpFromStop(I2C_TypeDef *I2Cx)
DECL|LL_I2C_Disable|function|__STATIC_INLINE void LL_I2C_Disable(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableAnalogFilter|function|__STATIC_INLINE void LL_I2C_EnableAnalogFilter(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableAuto10BitRead|function|__STATIC_INLINE void LL_I2C_EnableAuto10BitRead(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableAutoEndMode|function|__STATIC_INLINE void LL_I2C_EnableAutoEndMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableClockStretching|function|__STATIC_INLINE void LL_I2C_EnableClockStretching(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableDMAReq_RX|function|__STATIC_INLINE void LL_I2C_EnableDMAReq_RX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableDMAReq_TX|function|__STATIC_INLINE void LL_I2C_EnableDMAReq_TX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableGeneralCall|function|__STATIC_INLINE void LL_I2C_EnableGeneralCall(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_ADDR|function|__STATIC_INLINE void LL_I2C_EnableIT_ADDR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_ERR|function|__STATIC_INLINE void LL_I2C_EnableIT_ERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_NACK|function|__STATIC_INLINE void LL_I2C_EnableIT_NACK(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_RX|function|__STATIC_INLINE void LL_I2C_EnableIT_RX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_STOP|function|__STATIC_INLINE void LL_I2C_EnableIT_STOP(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_TC|function|__STATIC_INLINE void LL_I2C_EnableIT_TC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableIT_TX|function|__STATIC_INLINE void LL_I2C_EnableIT_TX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableOwnAddress1|function|__STATIC_INLINE void LL_I2C_EnableOwnAddress1(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableOwnAddress2|function|__STATIC_INLINE void LL_I2C_EnableOwnAddress2(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableReloadMode|function|__STATIC_INLINE void LL_I2C_EnableReloadMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableSMBusAlert|function|__STATIC_INLINE void LL_I2C_EnableSMBusAlert(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableSMBusPECCompare|function|__STATIC_INLINE void LL_I2C_EnableSMBusPECCompare(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableSMBusPEC|function|__STATIC_INLINE void LL_I2C_EnableSMBusPEC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableSMBusTimeout|function|__STATIC_INLINE void LL_I2C_EnableSMBusTimeout(I2C_TypeDef *I2Cx, uint32_t ClockTimeout)
DECL|LL_I2C_EnableSlaveByteControl|function|__STATIC_INLINE void LL_I2C_EnableSlaveByteControl(I2C_TypeDef *I2Cx)
DECL|LL_I2C_EnableWakeUpFromStop|function|__STATIC_INLINE void LL_I2C_EnableWakeUpFromStop(I2C_TypeDef *I2Cx)
DECL|LL_I2C_Enable|function|__STATIC_INLINE void LL_I2C_Enable(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GENERATE_NOSTARTSTOP|macro|LL_I2C_GENERATE_NOSTARTSTOP
DECL|LL_I2C_GENERATE_RESTART_10BIT_READ|macro|LL_I2C_GENERATE_RESTART_10BIT_READ
DECL|LL_I2C_GENERATE_RESTART_10BIT_WRITE|macro|LL_I2C_GENERATE_RESTART_10BIT_WRITE
DECL|LL_I2C_GENERATE_RESTART_7BIT_READ|macro|LL_I2C_GENERATE_RESTART_7BIT_READ
DECL|LL_I2C_GENERATE_RESTART_7BIT_WRITE|macro|LL_I2C_GENERATE_RESTART_7BIT_WRITE
DECL|LL_I2C_GENERATE_START_READ|macro|LL_I2C_GENERATE_START_READ
DECL|LL_I2C_GENERATE_START_WRITE|macro|LL_I2C_GENERATE_START_WRITE
DECL|LL_I2C_GENERATE_STOP|macro|LL_I2C_GENERATE_STOP
DECL|LL_I2C_GenerateStartCondition|function|__STATIC_INLINE void LL_I2C_GenerateStartCondition(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GenerateStopCondition|function|__STATIC_INLINE void LL_I2C_GenerateStopCondition(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetAddressMatchCode|function|__STATIC_INLINE uint32_t LL_I2C_GetAddressMatchCode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetClockHighPeriod|function|__STATIC_INLINE uint32_t LL_I2C_GetClockHighPeriod(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetClockLowPeriod|function|__STATIC_INLINE uint32_t LL_I2C_GetClockLowPeriod(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetDataHoldTime|function|__STATIC_INLINE uint32_t LL_I2C_GetDataHoldTime(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetDataSetupTime|function|__STATIC_INLINE uint32_t LL_I2C_GetDataSetupTime(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetDigitalFilter|function|__STATIC_INLINE uint32_t LL_I2C_GetDigitalFilter(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetMasterAddressingMode|function|__STATIC_INLINE uint32_t LL_I2C_GetMasterAddressingMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetMode|function|__STATIC_INLINE uint32_t LL_I2C_GetMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetSMBusPEC|function|__STATIC_INLINE uint32_t LL_I2C_GetSMBusPEC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetSMBusTimeoutAMode|function|__STATIC_INLINE uint32_t LL_I2C_GetSMBusTimeoutAMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetSMBusTimeoutA|function|__STATIC_INLINE uint32_t LL_I2C_GetSMBusTimeoutA(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetSMBusTimeoutB|function|__STATIC_INLINE uint32_t LL_I2C_GetSMBusTimeoutB(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetSlaveAddr|function|__STATIC_INLINE uint32_t LL_I2C_GetSlaveAddr(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetTimingPrescaler|function|__STATIC_INLINE uint32_t LL_I2C_GetTimingPrescaler(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetTransferDirection|function|__STATIC_INLINE uint32_t LL_I2C_GetTransferDirection(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetTransferRequest|function|__STATIC_INLINE uint32_t LL_I2C_GetTransferRequest(I2C_TypeDef *I2Cx)
DECL|LL_I2C_GetTransferSize|function|__STATIC_INLINE uint32_t LL_I2C_GetTransferSize(I2C_TypeDef *I2Cx)
DECL|LL_I2C_HandleTransfer|function|__STATIC_INLINE void LL_I2C_HandleTransfer(I2C_TypeDef *I2Cx, uint32_t SlaveAddr, uint32_t SlaveAddrSize, uint32_t TransferSize, uint32_t EndMode, uint32_t Request)
DECL|LL_I2C_ICR_ADDRCF|macro|LL_I2C_ICR_ADDRCF
DECL|LL_I2C_ICR_ALERTCF|macro|LL_I2C_ICR_ALERTCF
DECL|LL_I2C_ICR_ARLOCF|macro|LL_I2C_ICR_ARLOCF
DECL|LL_I2C_ICR_BERRCF|macro|LL_I2C_ICR_BERRCF
DECL|LL_I2C_ICR_NACKCF|macro|LL_I2C_ICR_NACKCF
DECL|LL_I2C_ICR_OVRCF|macro|LL_I2C_ICR_OVRCF
DECL|LL_I2C_ICR_PECCF|macro|LL_I2C_ICR_PECCF
DECL|LL_I2C_ICR_STOPCF|macro|LL_I2C_ICR_STOPCF
DECL|LL_I2C_ICR_TIMOUTCF|macro|LL_I2C_ICR_TIMOUTCF
DECL|LL_I2C_ISR_ADDR|macro|LL_I2C_ISR_ADDR
DECL|LL_I2C_ISR_ALERT|macro|LL_I2C_ISR_ALERT
DECL|LL_I2C_ISR_ARLO|macro|LL_I2C_ISR_ARLO
DECL|LL_I2C_ISR_BERR|macro|LL_I2C_ISR_BERR
DECL|LL_I2C_ISR_BUSY|macro|LL_I2C_ISR_BUSY
DECL|LL_I2C_ISR_NACKF|macro|LL_I2C_ISR_NACKF
DECL|LL_I2C_ISR_OVR|macro|LL_I2C_ISR_OVR
DECL|LL_I2C_ISR_PECERR|macro|LL_I2C_ISR_PECERR
DECL|LL_I2C_ISR_RXNE|macro|LL_I2C_ISR_RXNE
DECL|LL_I2C_ISR_STOPF|macro|LL_I2C_ISR_STOPF
DECL|LL_I2C_ISR_TCR|macro|LL_I2C_ISR_TCR
DECL|LL_I2C_ISR_TC|macro|LL_I2C_ISR_TC
DECL|LL_I2C_ISR_TIMEOUT|macro|LL_I2C_ISR_TIMEOUT
DECL|LL_I2C_ISR_TXE|macro|LL_I2C_ISR_TXE
DECL|LL_I2C_ISR_TXIS|macro|LL_I2C_ISR_TXIS
DECL|LL_I2C_InitTypeDef|typedef|} LL_I2C_InitTypeDef;
DECL|LL_I2C_IsActiveFlag_ADDR|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_ADDR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_ARLO|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_ARLO(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_BERR|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_BERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_BUSY|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_BUSY(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_NACK|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_NACK(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_OVR|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_OVR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_RXNE|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_RXNE(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_STOP|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_STOP(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_TCR|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_TCR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_TC|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_TC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_TXE|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_TXE(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveFlag_TXIS|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveFlag_TXIS(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveSMBusFlag_ALERT|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveSMBusFlag_ALERT(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveSMBusFlag_PECERR|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveSMBusFlag_PECERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsActiveSMBusFlag_TIMEOUT|function|__STATIC_INLINE uint32_t LL_I2C_IsActiveSMBusFlag_TIMEOUT(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledAnalogFilter|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledAnalogFilter(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledAuto10BitRead|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledAuto10BitRead(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledAutoEndMode|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledAutoEndMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledClockStretching|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledClockStretching(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledDMAReq_RX|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledDMAReq_RX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledDMAReq_TX|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledDMAReq_TX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledGeneralCall|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledGeneralCall(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_ADDR|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_ADDR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_ERR|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_ERR(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_NACK|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_NACK(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_RX|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_RX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_STOP|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_STOP(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_TC|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_TC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledIT_TX|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledIT_TX(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledOwnAddress1|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledOwnAddress1(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledOwnAddress2|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledOwnAddress2(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledReloadMode|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledReloadMode(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledSMBusAlert|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledSMBusAlert(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledSMBusPECCompare|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledSMBusPECCompare(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledSMBusPEC|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledSMBusPEC(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledSMBusTimeout|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledSMBusTimeout(I2C_TypeDef *I2Cx, uint32_t ClockTimeout)
DECL|LL_I2C_IsEnabledSlaveByteControl|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledSlaveByteControl(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabledWakeUpFromStop|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabledWakeUpFromStop(I2C_TypeDef *I2Cx)
DECL|LL_I2C_IsEnabled|function|__STATIC_INLINE uint32_t LL_I2C_IsEnabled(I2C_TypeDef *I2Cx)
DECL|LL_I2C_MODE_AUTOEND|macro|LL_I2C_MODE_AUTOEND
DECL|LL_I2C_MODE_I2C|macro|LL_I2C_MODE_I2C
DECL|LL_I2C_MODE_RELOAD|macro|LL_I2C_MODE_RELOAD
DECL|LL_I2C_MODE_SMBUS_AUTOEND_NO_PEC|macro|LL_I2C_MODE_SMBUS_AUTOEND_NO_PEC
DECL|LL_I2C_MODE_SMBUS_AUTOEND_WITH_PEC|macro|LL_I2C_MODE_SMBUS_AUTOEND_WITH_PEC
DECL|LL_I2C_MODE_SMBUS_DEVICE_ARP|macro|LL_I2C_MODE_SMBUS_DEVICE_ARP
DECL|LL_I2C_MODE_SMBUS_DEVICE|macro|LL_I2C_MODE_SMBUS_DEVICE
DECL|LL_I2C_MODE_SMBUS_HOST|macro|LL_I2C_MODE_SMBUS_HOST
DECL|LL_I2C_MODE_SMBUS_RELOAD|macro|LL_I2C_MODE_SMBUS_RELOAD
DECL|LL_I2C_MODE_SMBUS_SOFTEND_NO_PEC|macro|LL_I2C_MODE_SMBUS_SOFTEND_NO_PEC
DECL|LL_I2C_MODE_SMBUS_SOFTEND_WITH_PEC|macro|LL_I2C_MODE_SMBUS_SOFTEND_WITH_PEC
DECL|LL_I2C_MODE_SOFTEND|macro|LL_I2C_MODE_SOFTEND
DECL|LL_I2C_NACK|macro|LL_I2C_NACK
DECL|LL_I2C_OWNADDRESS1_10BIT|macro|LL_I2C_OWNADDRESS1_10BIT
DECL|LL_I2C_OWNADDRESS1_7BIT|macro|LL_I2C_OWNADDRESS1_7BIT
DECL|LL_I2C_OWNADDRESS2_MASK01|macro|LL_I2C_OWNADDRESS2_MASK01
DECL|LL_I2C_OWNADDRESS2_MASK02|macro|LL_I2C_OWNADDRESS2_MASK02
DECL|LL_I2C_OWNADDRESS2_MASK03|macro|LL_I2C_OWNADDRESS2_MASK03
DECL|LL_I2C_OWNADDRESS2_MASK04|macro|LL_I2C_OWNADDRESS2_MASK04
DECL|LL_I2C_OWNADDRESS2_MASK05|macro|LL_I2C_OWNADDRESS2_MASK05
DECL|LL_I2C_OWNADDRESS2_MASK06|macro|LL_I2C_OWNADDRESS2_MASK06
DECL|LL_I2C_OWNADDRESS2_MASK07|macro|LL_I2C_OWNADDRESS2_MASK07
DECL|LL_I2C_OWNADDRESS2_NOMASK|macro|LL_I2C_OWNADDRESS2_NOMASK
DECL|LL_I2C_REQUEST_READ|macro|LL_I2C_REQUEST_READ
DECL|LL_I2C_REQUEST_WRITE|macro|LL_I2C_REQUEST_WRITE
DECL|LL_I2C_ReadReg|macro|LL_I2C_ReadReg
DECL|LL_I2C_ReceiveData8|function|__STATIC_INLINE uint8_t LL_I2C_ReceiveData8(I2C_TypeDef *I2Cx)
DECL|LL_I2C_SMBUS_ALL_TIMEOUT|macro|LL_I2C_SMBUS_ALL_TIMEOUT
DECL|LL_I2C_SMBUS_TIMEOUTA_MODE_SCL_LOW|macro|LL_I2C_SMBUS_TIMEOUTA_MODE_SCL_LOW
DECL|LL_I2C_SMBUS_TIMEOUTA_MODE_SDA_SCL_HIGH|macro|LL_I2C_SMBUS_TIMEOUTA_MODE_SDA_SCL_HIGH
DECL|LL_I2C_SMBUS_TIMEOUTA|macro|LL_I2C_SMBUS_TIMEOUTA
DECL|LL_I2C_SMBUS_TIMEOUTB|macro|LL_I2C_SMBUS_TIMEOUTB
DECL|LL_I2C_SetDigitalFilter|function|__STATIC_INLINE void LL_I2C_SetDigitalFilter(I2C_TypeDef *I2Cx, uint32_t DigitalFilter)
DECL|LL_I2C_SetMasterAddressingMode|function|__STATIC_INLINE void LL_I2C_SetMasterAddressingMode(I2C_TypeDef *I2Cx, uint32_t AddressingMode)
DECL|LL_I2C_SetMode|function|__STATIC_INLINE void LL_I2C_SetMode(I2C_TypeDef *I2Cx, uint32_t PeripheralMode)
DECL|LL_I2C_SetOwnAddress1|function|__STATIC_INLINE void LL_I2C_SetOwnAddress1(I2C_TypeDef *I2Cx, uint32_t OwnAddress1, uint32_t OwnAddrSize)
DECL|LL_I2C_SetOwnAddress2|function|__STATIC_INLINE void LL_I2C_SetOwnAddress2(I2C_TypeDef *I2Cx, uint32_t OwnAddress2, uint32_t OwnAddrMask)
DECL|LL_I2C_SetSMBusTimeoutAMode|function|__STATIC_INLINE void LL_I2C_SetSMBusTimeoutAMode(I2C_TypeDef *I2Cx, uint32_t TimeoutAMode)
DECL|LL_I2C_SetSMBusTimeoutA|function|__STATIC_INLINE void LL_I2C_SetSMBusTimeoutA(I2C_TypeDef *I2Cx, uint32_t TimeoutA)
DECL|LL_I2C_SetSMBusTimeoutB|function|__STATIC_INLINE void LL_I2C_SetSMBusTimeoutB(I2C_TypeDef *I2Cx, uint32_t TimeoutB)
DECL|LL_I2C_SetSlaveAddr|function|__STATIC_INLINE void LL_I2C_SetSlaveAddr(I2C_TypeDef *I2Cx, uint32_t SlaveAddr)
DECL|LL_I2C_SetTiming|function|__STATIC_INLINE void LL_I2C_SetTiming(I2C_TypeDef *I2Cx, uint32_t Timing)
DECL|LL_I2C_SetTransferRequest|function|__STATIC_INLINE void LL_I2C_SetTransferRequest(I2C_TypeDef *I2Cx, uint32_t TransferRequest)
DECL|LL_I2C_SetTransferSize|function|__STATIC_INLINE void LL_I2C_SetTransferSize(I2C_TypeDef *I2Cx, uint32_t TransferSize)
DECL|LL_I2C_TransmitData8|function|__STATIC_INLINE void LL_I2C_TransmitData8(I2C_TypeDef *I2Cx, uint8_t Data)
DECL|LL_I2C_WriteReg|macro|LL_I2C_WriteReg
DECL|OwnAddrSize|member|uint32_t OwnAddrSize; /*!< Specifies the device own address 1 size (7-bit or 10-bit).
DECL|OwnAddress1|member|uint32_t OwnAddress1; /*!< Specifies the device own address 1.
DECL|PeripheralMode|member|uint32_t PeripheralMode; /*!< Specifies the peripheral mode.
DECL|Timing|member|uint32_t Timing; /*!< Specifies the SDA setup, hold time and the SCL high, low period values.
DECL|TypeAcknowledge|member|uint32_t TypeAcknowledge; /*!< Specifies the ACKnowledge or Non ACKnowledge condition after the address receive match code or next received byte.
DECL|__LL_I2C_CONVERT_TIMINGS|macro|__LL_I2C_CONVERT_TIMINGS
DECL|__STM32L0xx_LL_I2C_H|macro|__STM32L0xx_LL_I2C_H
