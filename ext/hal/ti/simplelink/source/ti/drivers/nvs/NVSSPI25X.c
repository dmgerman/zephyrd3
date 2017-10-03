DECL|MAX_SPI_INDEX|macro|MAX_SPI_INDEX
DECL|NVSSPI25X_close|function|void NVSSPI25X_close(NVS_Handle handle)
DECL|NVSSPI25X_control|function|int_fast16_t NVSSPI25X_control(NVS_Handle handle, uint_fast16_t cmd, uintptr_t arg)
DECL|NVSSPI25X_erase|function|int_fast16_t NVSSPI25X_erase(NVS_Handle handle, size_t offset, size_t size)
DECL|NVSSPI25X_fxnTable|variable|NVSSPI25X_fxnTable
DECL|NVSSPI25X_getAttrs|function|void NVSSPI25X_getAttrs(NVS_Handle handle, NVS_Attrs *attrs)
DECL|NVSSPI25X_init|function|void NVSSPI25X_init()
DECL|NVSSPI25X_lock|function|int_fast16_t NVSSPI25X_lock(NVS_Handle handle, uint32_t timeout)
DECL|NVSSPI25X_open|function|NVS_Handle NVSSPI25X_open(uint_least8_t index, NVS_Params *params)
DECL|NVSSPI25X_read|function|int_fast16_t NVSSPI25X_read(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize)
DECL|NVSSPI25X_unlock|function|void NVSSPI25X_unlock(NVS_Handle handle)
DECL|NVSSPI25X_write|function|int_fast16_t NVSSPI25X_write(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize, uint_fast16_t flags)
DECL|SPIFLASH_DP|macro|SPIFLASH_DP
DECL|SPIFLASH_MASS_ERASE|macro|SPIFLASH_MASS_ERASE
DECL|SPIFLASH_PROGRAM_PAGE_SIZE|macro|SPIFLASH_PROGRAM_PAGE_SIZE
DECL|SPIFLASH_RDP|macro|SPIFLASH_RDP
DECL|SPIFLASH_READ_STATUS|macro|SPIFLASH_READ_STATUS
DECL|SPIFLASH_READ|macro|SPIFLASH_READ
DECL|SPIFLASH_SECTOR_ERASE|macro|SPIFLASH_SECTOR_ERASE
DECL|SPIFLASH_STATUS_BIT_BUSY|macro|SPIFLASH_STATUS_BIT_BUSY
DECL|SPIFLASH_SUBSECTOR_ERASE|macro|SPIFLASH_SUBSECTOR_ERASE
DECL|SPIFLASH_WRITE_ENABLE|macro|SPIFLASH_WRITE_ENABLE
DECL|SPIFLASH_WRITE|macro|SPIFLASH_WRITE
DECL|checkEraseRange|function|static int_fast16_t checkEraseRange(NVS_Handle handle, size_t offset, size_t size)
DECL|doErase|function|static int_fast16_t doErase(NVS_Handle handle, size_t offset, size_t size)
DECL|doRead|function|static int_fast16_t doRead(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize)
DECL|doWriteVerify|function|static int_fast16_t doWriteVerify(NVS_Handle handle, size_t offset, void *src, size_t srcBufSize, void *dst, size_t dstBufSize, bool preFlag)
DECL|extFlashDeselect|function|static void extFlashDeselect(void)
DECL|extFlashMassErase|function|static int_fast16_t extFlashMassErase(void)
DECL|extFlashPowerDown|function|static int_fast16_t extFlashPowerDown(void)
DECL|extFlashPowerStandby|function|static int_fast16_t extFlashPowerStandby(void)
DECL|extFlashSelect|function|static void extFlashSelect(void)
DECL|extFlashSpiRead|function|static int_fast16_t extFlashSpiRead(uint8_t *buf, size_t len)
DECL|extFlashSpiWrite|function|static int_fast16_t extFlashSpiWrite(const uint8_t *buf, size_t len)
DECL|extFlashWaitReady|function|static int_fast16_t extFlashWaitReady(void)
DECL|extFlashWriteEnable|function|static int_fast16_t extFlashWriteEnable(void)
DECL|spiCsnGpioIndex|variable|spiCsnGpioIndex
DECL|spiHandleUsers|variable|spiHandleUsers
DECL|spiHandles|variable|spiHandles
DECL|spiHandle|variable|spiHandle
DECL|writeSem|variable|writeSem
