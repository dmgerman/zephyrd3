DECL|UART_clearInterruptFlag|function|void UART_clearInterruptFlag(uint32_t moduleInstance, uint_fast8_t mask)
DECL|UART_disableInterrupt|function|void UART_disableInterrupt(uint32_t moduleInstance, uint_fast8_t mask)
DECL|UART_disableModule|function|void UART_disableModule(uint32_t moduleInstance)
DECL|UART_enableInterrupt|function|void UART_enableInterrupt(uint32_t moduleInstance, uint_fast8_t mask)
DECL|UART_enableModule|function|void UART_enableModule(uint32_t moduleInstance)
DECL|UART_getEnabledInterruptStatus|function|uint_fast8_t UART_getEnabledInterruptStatus(uint32_t moduleInstance)
DECL|UART_getInterruptStatus|function|uint_fast8_t UART_getInterruptStatus(uint32_t moduleInstance, uint8_t mask)
DECL|UART_getReceiveBufferAddressForDMA|function|uint32_t UART_getReceiveBufferAddressForDMA(uint32_t moduleInstance)
DECL|UART_getTransmitBufferAddressForDMA|function|uint32_t UART_getTransmitBufferAddressForDMA(uint32_t moduleInstance)
DECL|UART_initModule|function|bool UART_initModule(uint32_t moduleInstance, const eUSCI_UART_Config *config)
DECL|UART_queryStatusFlags|function|uint_fast8_t UART_queryStatusFlags(uint32_t moduleInstance, uint_fast8_t mask)
DECL|UART_receiveData|function|uint8_t UART_receiveData(uint32_t moduleInstance)
DECL|UART_registerInterrupt|function|void UART_registerInterrupt(uint32_t moduleInstance, void (*intHandler)(void))
DECL|UART_resetDormant|function|void UART_resetDormant(uint32_t moduleInstance)
DECL|UART_selectDeglitchTime|function|void UART_selectDeglitchTime(uint32_t moduleInstance, uint32_t deglitchTime)
DECL|UART_setDormant|function|void UART_setDormant(uint32_t moduleInstance)
DECL|UART_transmitAddress|function|void UART_transmitAddress(uint32_t moduleInstance, uint_fast8_t transmitAddress)
DECL|UART_transmitBreak|function|void UART_transmitBreak(uint32_t moduleInstance)
DECL|UART_transmitData|function|void UART_transmitData(uint32_t moduleInstance, uint_fast8_t transmitData)
DECL|UART_unregisterInterrupt|function|void UART_unregisterInterrupt(uint32_t moduleInstance)
