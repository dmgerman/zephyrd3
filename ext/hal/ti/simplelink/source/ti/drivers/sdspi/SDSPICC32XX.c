DECL|CMD0|macro|CMD0
DECL|CMD10|macro|CMD10
DECL|CMD12|macro|CMD12
DECL|CMD16|macro|CMD16
DECL|CMD17|macro|CMD17
DECL|CMD18|macro|CMD18
DECL|CMD1|macro|CMD1
DECL|CMD23|macro|CMD23
DECL|CMD24|macro|CMD24
DECL|CMD25|macro|CMD25
DECL|CMD41|macro|CMD41
DECL|CMD55|macro|CMD55
DECL|CMD58|macro|CMD58
DECL|CMD8|macro|CMD8
DECL|CMD9|macro|CMD9
DECL|DRIVE_NOT_MOUNTED|macro|DRIVE_NOT_MOUNTED
DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|PinConfigGPIOPinIndex|macro|PinConfigGPIOPinIndex
DECL|PinConfigGPIOPort|macro|PinConfigGPIOPort
DECL|PinConfigPinMode|macro|PinConfigPinMode
DECL|PinConfigPin|macro|PinConfigPin
DECL|SDSPICC32XX_close|function|void SDSPICC32XX_close(SDSPI_Handle handle)
DECL|SDSPICC32XX_control|function|int_fast16_t SDSPICC32XX_control(SDSPI_Handle handle, uint_fast16_t cmd, void *arg)
DECL|SDSPICC32XX_diskIOctrl|function|DRESULT SDSPICC32XX_diskIOctrl(BYTE drv, BYTE ctrl, void *buf)
DECL|SDSPICC32XX_diskInitialize|function|DSTATUS SDSPICC32XX_diskInitialize(BYTE drv)
DECL|SDSPICC32XX_diskRead|function|DRESULT SDSPICC32XX_diskRead(BYTE drv, BYTE *buf, DWORD sector, UINT count)
DECL|SDSPICC32XX_diskStatus|function|DSTATUS SDSPICC32XX_diskStatus(BYTE drv)
DECL|SDSPICC32XX_diskWrite|function|DRESULT SDSPICC32XX_diskWrite(BYTE drv, const BYTE *buf, DWORD sector, UINT count)
DECL|SDSPICC32XX_fxnTable|variable|SDSPICC32XX_fxnTable
DECL|SDSPICC32XX_init|function|void SDSPICC32XX_init(SDSPI_Handle handle)
DECL|SDSPICC32XX_open|function|SDSPI_Handle SDSPICC32XX_open(SDSPI_Handle handle, uint_least8_t drv, SDSPI_Params *params)
DECL|SD_SECTOR_SIZE|macro|SD_SECTOR_SIZE
DECL|START_BLOCK_TOKEN|macro|START_BLOCK_TOKEN
DECL|START_MULTIBLOCK_TOKEN|macro|START_MULTIBLOCK_TOKEN
DECL|STOP_MULTIBLOCK_TOKEN|macro|STOP_MULTIBLOCK_TOKEN
DECL|getPowerMgrId|function|static unsigned int getPowerMgrId(uint32_t baseAddr)
DECL|gpioBaseAddresses|variable|gpioBaseAddresses
DECL|gpioPinIndexes|variable|gpioPinIndexes
DECL|initHw|function|static void initHw(SDSPI_Handle handle)
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|rcvrDatablock|function|static uint32_t rcvrDatablock(SDSPICC32XX_HWAttrsV1 const *hwAttrs, uint8_t *buf, uint32_t btr)
DECL|releaseSPIBus|function|static inline void releaseSPIBus(SDSPICC32XX_HWAttrsV1 const *hwAttrs)
DECL|rxSPI|function|static inline uint8_t rxSPI(SDSPICC32XX_HWAttrsV1 const *hwAttrs)
DECL|sdspiHandles|variable|sdspiHandles
DECL|sendCmd|function|static uint8_t sendCmd(SDSPICC32XX_HWAttrsV1 const *hwAttrs, uint8_t cmd, uint32_t arg)
DECL|sendInitialClockTrain|function|static void sendInitialClockTrain(SDSPICC32XX_HWAttrsV1 const *hwAttrs)
DECL|takeSPIBus|function|static inline void takeSPIBus(SDSPICC32XX_HWAttrsV1 const *hwAttrs)
DECL|txSPI|function|static inline void txSPI(SDSPICC32XX_HWAttrsV1 const *hwAttrs, uint8_t dat)
DECL|uSClockPeriod|variable|uSClockPeriod
DECL|waitReady|function|static uint8_t waitReady(SDSPICC32XX_HWAttrsV1 const *hwAttrs)
DECL|xmitDatablock|function|static bool xmitDatablock(SDSPICC32XX_HWAttrsV1 const *hwAttrs, const uint8_t *buf, uint8_t token)
