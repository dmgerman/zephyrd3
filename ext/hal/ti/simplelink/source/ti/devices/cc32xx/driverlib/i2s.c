DECL|I2SConfigSetExpClk|function|void I2SConfigSetExpClk(unsigned long ulBase, unsigned long ulI2SClk, unsigned long ulBitClk, unsigned long ulConfig)
DECL|I2SDataGetNonBlocking|function|long I2SDataGetNonBlocking(unsigned long ulBase, unsigned long ulDataLine, unsigned long *pulData)
DECL|I2SDataGet|function|void I2SDataGet(unsigned long ulBase, unsigned long ulDataLine, unsigned long *pulData)
DECL|I2SDataPutNonBlocking|function|long I2SDataPutNonBlocking(unsigned long ulBase, unsigned long ulDataLine, unsigned long ulData)
DECL|I2SDataPut|function|void I2SDataPut(unsigned long ulBase, unsigned long ulDataLine, unsigned long ulData)
DECL|I2SDisable|function|void I2SDisable(unsigned long ulBase)
DECL|I2SEnable|function|void I2SEnable(unsigned long ulBase, unsigned long ulMode)
DECL|I2SGBLEnable|function|static void I2SGBLEnable(unsigned long ulBase, unsigned long ulFlag)
DECL|I2SIntClear|function|void I2SIntClear(unsigned long ulBase, unsigned long ulStatFlags)
DECL|I2SIntDisable|function|void I2SIntDisable(unsigned long ulBase, unsigned long ulIntFlags)
DECL|I2SIntEnable|function|void I2SIntEnable(unsigned long ulBase, unsigned long ulIntFlags)
DECL|I2SIntRegister|function|void I2SIntRegister(unsigned long ulBase, void (*pfnHandler)(void))
DECL|I2SIntStatus|function|unsigned long I2SIntStatus(unsigned long ulBase)
DECL|I2SIntUnregister|function|void I2SIntUnregister(unsigned long ulBase)
DECL|I2SRxActiveSlotSet|function|void I2SRxActiveSlotSet(unsigned long ulBase, unsigned long ulActSlot)
DECL|I2SRxFIFODisable|function|void I2SRxFIFODisable(unsigned long ulBase)
DECL|I2SRxFIFOEnable|function|void I2SRxFIFOEnable(unsigned long ulBase, unsigned long ulRxLevel, unsigned long ulWordsPerTransfer)
DECL|I2SRxFIFOStatusGet|function|unsigned long I2SRxFIFOStatusGet(unsigned long ulBase)
DECL|I2SSerializerConfig|function|void I2SSerializerConfig(unsigned long ulBase, unsigned long ulDataLine, unsigned long ulSerMode, unsigned long ulInActState)
DECL|I2STxActiveSlotSet|function|void I2STxActiveSlotSet(unsigned long ulBase, unsigned long ulActSlot)
DECL|I2STxFIFODisable|function|void I2STxFIFODisable(unsigned long ulBase)
DECL|I2STxFIFOEnable|function|void I2STxFIFOEnable(unsigned long ulBase, unsigned long ulTxLevel, unsigned long ulWordsPerTransfer)
DECL|I2STxFIFOStatusGet|function|unsigned long I2STxFIFOStatusGet(unsigned long ulBase)
DECL|MCASP_GBL_RCLK|macro|MCASP_GBL_RCLK
DECL|MCASP_GBL_RFSYNC|macro|MCASP_GBL_RFSYNC
DECL|MCASP_GBL_RHCLK|macro|MCASP_GBL_RHCLK
DECL|MCASP_GBL_RSER|macro|MCASP_GBL_RSER
DECL|MCASP_GBL_RSM|macro|MCASP_GBL_RSM
DECL|MCASP_GBL_XCLK|macro|MCASP_GBL_XCLK
DECL|MCASP_GBL_XFSYNC|macro|MCASP_GBL_XFSYNC
DECL|MCASP_GBL_XHCLK|macro|MCASP_GBL_XHCLK
DECL|MCASP_GBL_XSER|macro|MCASP_GBL_XSER
DECL|MCASP_GBL_XSM|macro|MCASP_GBL_XSM
