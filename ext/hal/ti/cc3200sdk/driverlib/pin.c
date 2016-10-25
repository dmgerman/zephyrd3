DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_MODE_MASK|macro|PAD_MODE_MASK
DECL|PAD_STRENGTH_MASK|macro|PAD_STRENGTH_MASK
DECL|PAD_TYPE_MASK|macro|PAD_TYPE_MASK
DECL|PinConfigGet|function|void PinConfigGet(unsigned long ulPin,unsigned long *pulPinStrength, unsigned long *pulPinType)
DECL|PinConfigSet|function|void PinConfigSet(unsigned long ulPin,unsigned long ulPinStrength,unsigned long ulPinType)
DECL|PinDirModeGet|function|unsigned long PinDirModeGet(unsigned long ulPin)
DECL|PinDirModeSet|function|void PinDirModeSet(unsigned long ulPin, unsigned long ulPinIO)
DECL|PinModeGet|function|unsigned long PinModeGet(unsigned long ulPin)
DECL|PinModeSet|function|void PinModeSet(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeADC|function|void PinTypeADC(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeCamera|function|void PinTypeCamera(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeGPIO|function|void PinTypeGPIO(unsigned long ulPin,unsigned long ulPinMode,tBoolean bOpenDrain)
DECL|PinTypeI2C|function|void PinTypeI2C(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeI2S|function|void PinTypeI2S(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeSDHost|function|void PinTypeSDHost(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeSPI|function|void PinTypeSPI(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeTimer|function|void PinTypeTimer(unsigned long ulPin,unsigned long ulPinMode)
DECL|PinTypeUART|function|void PinTypeUART(unsigned long ulPin,unsigned long ulPinMode)
DECL|g_ulPinToPadMap|variable|g_ulPinToPadMap
