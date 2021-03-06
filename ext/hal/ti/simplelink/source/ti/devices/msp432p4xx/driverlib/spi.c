DECL|EUSCI_A_SPI_changeClockPhasePolarity|function|void EUSCI_A_SPI_changeClockPhasePolarity(uint32_t baseAddress, uint16_t clockPhase, uint16_t clockPolarity)
DECL|EUSCI_A_SPI_clearInterruptFlag|function|void EUSCI_A_SPI_clearInterruptFlag(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_A_SPI_disableInterrupt|function|void EUSCI_A_SPI_disableInterrupt(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_A_SPI_disable|function|void EUSCI_A_SPI_disable(uint32_t baseAddress)
DECL|EUSCI_A_SPI_enableInterrupt|function|void EUSCI_A_SPI_enableInterrupt(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_A_SPI_enable|function|void EUSCI_A_SPI_enable(uint32_t baseAddress)
DECL|EUSCI_A_SPI_getInterruptStatus|function|uint8_t EUSCI_A_SPI_getInterruptStatus(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_A_SPI_getReceiveBufferAddressForDMA|function|uint32_t EUSCI_A_SPI_getReceiveBufferAddressForDMA(uint32_t baseAddress)
DECL|EUSCI_A_SPI_getTransmitBufferAddressForDMA|function|uint32_t EUSCI_A_SPI_getTransmitBufferAddressForDMA(uint32_t baseAddress)
DECL|EUSCI_A_SPI_isBusy|function|bool EUSCI_A_SPI_isBusy(uint32_t baseAddress)
DECL|EUSCI_A_SPI_masterChangeClock|function|void EUSCI_A_SPI_masterChangeClock(uint32_t baseAddress, uint32_t clockSourceFrequency, uint32_t desiredSpiClock)
DECL|EUSCI_A_SPI_receiveData|function|uint8_t EUSCI_A_SPI_receiveData(uint32_t baseAddress)
DECL|EUSCI_A_SPI_select4PinFunctionality|function|void EUSCI_A_SPI_select4PinFunctionality(uint32_t baseAddress, uint8_t select4PinFunctionality)
DECL|EUSCI_A_SPI_slaveInit|function|bool EUSCI_A_SPI_slaveInit(uint32_t baseAddress, uint16_t msbFirst, uint16_t clockPhase, uint16_t clockPolarity, uint16_t spiMode)
DECL|EUSCI_A_SPI_transmitData|function|void EUSCI_A_SPI_transmitData(uint32_t baseAddress, uint8_t transmitData)
DECL|EUSCI_B_SPI_changeClockPhasePolarity|function|void EUSCI_B_SPI_changeClockPhasePolarity(uint32_t baseAddress, uint16_t clockPhase, uint16_t clockPolarity)
DECL|EUSCI_B_SPI_clearInterruptFlag|function|void EUSCI_B_SPI_clearInterruptFlag(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_B_SPI_disableInterrupt|function|void EUSCI_B_SPI_disableInterrupt(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_B_SPI_disable|function|void EUSCI_B_SPI_disable(uint32_t baseAddress)
DECL|EUSCI_B_SPI_enableInterrupt|function|void EUSCI_B_SPI_enableInterrupt(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_B_SPI_enable|function|void EUSCI_B_SPI_enable(uint32_t baseAddress)
DECL|EUSCI_B_SPI_getInterruptStatus|function|uint8_t EUSCI_B_SPI_getInterruptStatus(uint32_t baseAddress, uint8_t mask)
DECL|EUSCI_B_SPI_getReceiveBufferAddressForDMA|function|uint32_t EUSCI_B_SPI_getReceiveBufferAddressForDMA(uint32_t baseAddress)
DECL|EUSCI_B_SPI_getTransmitBufferAddressForDMA|function|uint32_t EUSCI_B_SPI_getTransmitBufferAddressForDMA(uint32_t baseAddress)
DECL|EUSCI_B_SPI_isBusy|function|bool EUSCI_B_SPI_isBusy(uint32_t baseAddress)
DECL|EUSCI_B_SPI_masterChangeClock|function|void EUSCI_B_SPI_masterChangeClock(uint32_t baseAddress, uint32_t clockSourceFrequency, uint32_t desiredSpiClock)
DECL|EUSCI_B_SPI_receiveData|function|uint8_t EUSCI_B_SPI_receiveData(uint32_t baseAddress)
DECL|EUSCI_B_SPI_select4PinFunctionality|function|void EUSCI_B_SPI_select4PinFunctionality(uint32_t baseAddress, uint8_t select4PinFunctionality)
DECL|EUSCI_B_SPI_slaveInit|function|bool EUSCI_B_SPI_slaveInit(uint32_t baseAddress, uint16_t msbFirst, uint16_t clockPhase, uint16_t clockPolarity, uint16_t spiMode)
DECL|EUSCI_B_SPI_transmitData|function|void EUSCI_B_SPI_transmitData(uint32_t baseAddress, uint8_t transmitData)
DECL|SPI_changeClockPhasePolarity|function|void SPI_changeClockPhasePolarity(uint32_t moduleInstance, uint_fast16_t clockPhase, uint_fast16_t clockPolarity)
DECL|SPI_changeMasterClock|function|void SPI_changeMasterClock(uint32_t moduleInstance, uint32_t clockSourceFrequency, uint32_t desiredSpiClock)
DECL|SPI_clearInterruptFlag|function|void SPI_clearInterruptFlag(uint32_t moduleInstance, uint_fast8_t mask)
DECL|SPI_disableInterrupt|function|void SPI_disableInterrupt(uint32_t moduleInstance, uint_fast8_t mask)
DECL|SPI_disableModule|function|void SPI_disableModule(uint32_t moduleInstance)
DECL|SPI_enableInterrupt|function|void SPI_enableInterrupt(uint32_t moduleInstance, uint_fast8_t mask)
DECL|SPI_enableModule|function|void SPI_enableModule(uint32_t moduleInstance)
DECL|SPI_getEnabledInterruptStatus|function|uint_fast8_t SPI_getEnabledInterruptStatus(uint32_t moduleInstance)
DECL|SPI_getInterruptStatus|function|uint_fast8_t SPI_getInterruptStatus(uint32_t moduleInstance, uint16_t mask)
DECL|SPI_getReceiveBufferAddressForDMA|function|uint32_t SPI_getReceiveBufferAddressForDMA(uint32_t moduleInstance)
DECL|SPI_getTransmitBufferAddressForDMA|function|uint32_t SPI_getTransmitBufferAddressForDMA(uint32_t moduleInstance)
DECL|SPI_initMaster|function|bool SPI_initMaster(uint32_t moduleInstance, const eUSCI_SPI_MasterConfig *config)
DECL|SPI_initSlave|function|bool SPI_initSlave(uint32_t moduleInstance, const eUSCI_SPI_SlaveConfig *config)
DECL|SPI_isBusy|function|uint_fast8_t SPI_isBusy(uint32_t moduleInstance)
DECL|SPI_receiveData|function|uint8_t SPI_receiveData(uint32_t moduleInstance)
DECL|SPI_registerInterrupt|function|void SPI_registerInterrupt(uint32_t moduleInstance, void (*intHandler)(void))
DECL|SPI_selectFourPinFunctionality|function|void SPI_selectFourPinFunctionality(uint32_t moduleInstance, uint_fast8_t select4PinFunctionality)
DECL|SPI_transmitData|function|void SPI_transmitData(uint32_t moduleInstance, uint_fast8_t transmitData)
DECL|SPI_unregisterInterrupt|function|void SPI_unregisterInterrupt(uint32_t moduleInstance)
DECL|is_A_Module|function|static bool is_A_Module(uint32_t module)
