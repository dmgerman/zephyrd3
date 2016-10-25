DECL|GPIOBaseValid|function|GPIOBaseValid(unsigned long ulPort)
DECL|GPIODMATriggerDisable|function|GPIODMATriggerDisable(unsigned long ulPort)
DECL|GPIODMATriggerEnable|function|GPIODMATriggerEnable(unsigned long ulPort)
DECL|GPIODirModeGet|function|GPIODirModeGet(unsigned long ulPort, unsigned char ucPin)
DECL|GPIODirModeSet|function|GPIODirModeSet(unsigned long ulPort, unsigned char ucPins, unsigned long ulPinIO)
DECL|GPIOGetIntNumber|function|GPIOGetIntNumber(unsigned long ulPort)
DECL|GPIOIntClear|function|GPIOIntClear(unsigned long ulPort, unsigned long ulIntFlags)
DECL|GPIOIntDisable|function|GPIOIntDisable(unsigned long ulPort, unsigned long ulIntFlags)
DECL|GPIOIntEnable|function|GPIOIntEnable(unsigned long ulPort, unsigned long ulIntFlags)
DECL|GPIOIntRegister|function|GPIOIntRegister(unsigned long ulPort, void (*pfnIntHandler)(void))
DECL|GPIOIntStatus|function|GPIOIntStatus(unsigned long ulPort, tBoolean bMasked)
DECL|GPIOIntTypeGet|function|GPIOIntTypeGet(unsigned long ulPort, unsigned char ucPin)
DECL|GPIOIntTypeSet|function|GPIOIntTypeSet(unsigned long ulPort, unsigned char ucPins, unsigned long ulIntType)
DECL|GPIOIntUnregister|function|GPIOIntUnregister(unsigned long ulPort)
DECL|GPIOPinRead|function|GPIOPinRead(unsigned long ulPort, unsigned char ucPins)
DECL|GPIOPinWrite|function|GPIOPinWrite(unsigned long ulPort, unsigned char ucPins, unsigned char ucVal)
