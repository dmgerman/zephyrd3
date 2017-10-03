DECL|DRIVE_NOT_MOUNTED|macro|DRIVE_NOT_MOUNTED
DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|SDFatFS_close|function|void SDFatFS_close(SDFatFS_Handle handle)
DECL|SDFatFS_diskIOctrl|function|DRESULT SDFatFS_diskIOctrl(BYTE drive, BYTE ctrl, void *buffer)
DECL|SDFatFS_diskInitialize|function|DSTATUS SDFatFS_diskInitialize(BYTE drive)
DECL|SDFatFS_diskRead|function|DRESULT SDFatFS_diskRead(BYTE drive, BYTE *buffer, DWORD sector, UINT secCount)
DECL|SDFatFS_diskStatus|function|DSTATUS SDFatFS_diskStatus(BYTE drive)
DECL|SDFatFS_diskWrite|function|DRESULT SDFatFS_diskWrite(BYTE drive, const BYTE *buffer, DWORD sector, UINT secCount)
DECL|SDFatFS_init|function|void SDFatFS_init(void)
DECL|SDFatFS_open|function|SDFatFS_Handle SDFatFS_open(uint_least8_t idx, uint_least8_t drive)
DECL|isInitialized|variable|isInitialized
DECL|sdFatFSHandles|variable|sdFatFSHandles
