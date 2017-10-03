DECL|SD_Params_init|function|void SD_Params_init(SD_Params *params)
DECL|SD_close|function|void SD_close(SD_Handle handle)
DECL|SD_control|function|int_fast16_t SD_control(SD_Handle handle, uint_fast16_t cmd, void *arg)
DECL|SD_defaultParams|variable|SD_defaultParams
DECL|SD_getNumSectors|function|uint_fast32_t SD_getNumSectors(SD_Handle handle)
DECL|SD_getSectorSize|function|uint_fast32_t SD_getSectorSize(SD_Handle handle)
DECL|SD_initialize|function|int_fast16_t SD_initialize(SD_Handle handle)
DECL|SD_init|function|void SD_init(void)
DECL|SD_open|function|SD_Handle SD_open(uint_least8_t index, SD_Params *params)
DECL|SD_read|function|int_fast16_t SD_read(SD_Handle handle, void *buf, int_fast32_t sector, uint_fast32_t secCount)
DECL|SD_write|function|int_fast16_t SD_write(SD_Handle handle, const void *buf, int_fast32_t sector, uint_fast32_t secCount)
DECL|isInitialized|variable|isInitialized
