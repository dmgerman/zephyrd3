DECL|GPIO_PORT_TO_BASE|variable|GPIO_PORT_TO_BASE
DECL|GPIO_PORT_TO_INT|variable|GPIO_PORT_TO_INT
DECL|GPIO_clearInterruptFlag|function|void GPIO_clearInterruptFlag(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_disableInterrupt|function|void GPIO_disableInterrupt(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_enableInterrupt|function|void GPIO_enableInterrupt(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_getEnabledInterruptStatus|function|uint_fast16_t GPIO_getEnabledInterruptStatus(uint_fast8_t selectedPort)
DECL|GPIO_getInputPinValue|function|uint8_t GPIO_getInputPinValue(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_getInterruptStatus|function|uint_fast16_t GPIO_getInterruptStatus(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_interruptEdgeSelect|function|void GPIO_interruptEdgeSelect(uint_fast8_t selectedPort, uint_fast16_t selectedPins, uint_fast8_t edgeSelect)
DECL|GPIO_registerInterrupt|function|void GPIO_registerInterrupt(uint_fast8_t selectedPort, void (*intHandler)(void))
DECL|GPIO_setAsInputPinWithPullDownResistor|function|void GPIO_setAsInputPinWithPullDownResistor(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_setAsInputPinWithPullUpResistor|function|void GPIO_setAsInputPinWithPullUpResistor(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_setAsInputPin|function|void GPIO_setAsInputPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_setAsOutputPin|function|void GPIO_setAsOutputPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_setAsPeripheralModuleFunctionInputPin|function|void GPIO_setAsPeripheralModuleFunctionInputPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins, uint_fast8_t mode)
DECL|GPIO_setAsPeripheralModuleFunctionOutputPin|function|void GPIO_setAsPeripheralModuleFunctionOutputPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins, uint_fast8_t mode)
DECL|GPIO_setDriveStrengthHigh|function|void GPIO_setDriveStrengthHigh(uint_fast8_t selectedPort, uint_fast8_t selectedPins)
DECL|GPIO_setDriveStrengthLow|function|void GPIO_setDriveStrengthLow(uint_fast8_t selectedPort, uint_fast8_t selectedPins)
DECL|GPIO_setOutputHighOnPin|function|void GPIO_setOutputHighOnPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_setOutputLowOnPin|function|void GPIO_setOutputLowOnPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_toggleOutputOnPin|function|void GPIO_toggleOutputOnPin(uint_fast8_t selectedPort, uint_fast16_t selectedPins)
DECL|GPIO_unregisterInterrupt|function|void GPIO_unregisterInterrupt(uint_fast8_t selectedPort)
