DECL|SPICSDisable|function|void SPICSDisable(unsigned long ulBase)
DECL|SPICSEnable|function|void SPICSEnable(unsigned long ulBase)
DECL|SPIConfigSetExpClk|function|SPIConfigSetExpClk(unsigned long ulBase,unsigned long ulSPIClk, unsigned long ulBitRate, unsigned long ulMode, unsigned long ulSubMode, unsigned long ulConfig)
DECL|SPIDataGetNonBlocking|function|SPIDataGetNonBlocking(unsigned long ulBase, unsigned long *pulData)
DECL|SPIDataGet|function|SPIDataGet(unsigned long ulBase, unsigned long *pulData)
DECL|SPIDataPutNonBlocking|function|SPIDataPutNonBlocking(unsigned long ulBase, unsigned long ulData)
DECL|SPIDataPut|function|SPIDataPut(unsigned long ulBase, unsigned long ulData)
DECL|SPIDisable|function|SPIDisable(unsigned long ulBase)
DECL|SPIDmaDisable|function|SPIDmaDisable(unsigned long ulBase, unsigned long ulFlags)
DECL|SPIDmaEnable|function|SPIDmaEnable(unsigned long ulBase, unsigned long ulFlags)
DECL|SPIDmaMaskGet|function|SPIDmaMaskGet(unsigned long ulBase)
DECL|SPIEnable|function|SPIEnable(unsigned long ulBase)
DECL|SPIFIFODisable|function|SPIFIFODisable(unsigned long ulBase, unsigned long ulFlags)
DECL|SPIFIFOEnable|function|SPIFIFOEnable(unsigned long ulBase, unsigned long ulFlags)
DECL|SPIFIFOLevelGet|function|SPIFIFOLevelGet(unsigned long ulBase, unsigned long *pulTxLevel, unsigned long *pulRxLevel)
DECL|SPIFIFOLevelSet|function|void SPIFIFOLevelSet(unsigned long ulBase, unsigned long ulTxLevel, unsigned long ulRxLevel)
DECL|SPIIntClear|function|SPIIntClear(unsigned long ulBase, unsigned long ulIntFlags)
DECL|SPIIntDisable|function|SPIIntDisable(unsigned long ulBase, unsigned long ulIntFlags)
DECL|SPIIntEnable|function|SPIIntEnable(unsigned long ulBase, unsigned long ulIntFlags)
DECL|SPIIntNumberGet|function|SPIIntNumberGet(unsigned long ulBase)
DECL|SPIIntRegister|function|SPIIntRegister(unsigned long ulBase, void(*pfnHandler)(void))
DECL|SPIIntStatus|function|SPIIntStatus(unsigned long ulBase, tBoolean bMasked)
DECL|SPIIntUnregister|function|SPIIntUnregister(unsigned long ulBase)
DECL|SPIReset|function|SPIReset(unsigned long ulBase)
DECL|SPITransfer16|function|static long SPITransfer16(unsigned long ulBase, unsigned short *usDout, unsigned short *usDin, unsigned long ulCount, unsigned long ulFlags)
DECL|SPITransfer32|function|static long SPITransfer32(unsigned long ulBase, unsigned long *ulDout, unsigned long *ulDin, unsigned long ulCount, unsigned long ulFlags)
DECL|SPITransfer8|function|static long SPITransfer8(unsigned long ulBase, unsigned char *ucDout, unsigned char *ucDin, unsigned long ulCount, unsigned long ulFlags)
DECL|SPITransfer|function|long SPITransfer(unsigned long ulBase, unsigned char *ucDout, unsigned char *ucDin, unsigned long ulCount, unsigned long ulFlags)
DECL|SPIWordCountSet|function|SPIWordCountSet(unsigned long ulBase, unsigned long ulWordCount)
DECL|g_ppulSPIIntMap|variable|g_ppulSPIIntMap
DECL|g_ulSPIDmaMaskMap|variable|g_ulSPIDmaMaskMap
