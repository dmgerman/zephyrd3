DECL|NVSRAM_close|function|void NVSRAM_close(NVS_Handle handle)
DECL|NVSRAM_control|function|int_fast16_t NVSRAM_control(NVS_Handle handle, uint_fast16_t cmd, uintptr_t arg)
DECL|NVSRAM_erase|function|int_fast16_t NVSRAM_erase(NVS_Handle handle, size_t offset, size_t size)
DECL|NVSRAM_fxnTable|variable|NVSRAM_fxnTable
DECL|NVSRAM_getAttrs|function|void NVSRAM_getAttrs(NVS_Handle handle, NVS_Attrs *attrs)
DECL|NVSRAM_init|function|void NVSRAM_init()
DECL|NVSRAM_lock|function|int_fast16_t NVSRAM_lock(NVS_Handle handle, uint32_t timeout)
DECL|NVSRAM_open|function|NVS_Handle NVSRAM_open(uint_least8_t index, NVS_Params *params)
DECL|NVSRAM_read|function|int_fast16_t NVSRAM_read(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize)
DECL|NVSRAM_unlock|function|void NVSRAM_unlock(NVS_Handle handle)
DECL|NVSRAM_write|function|int_fast16_t NVSRAM_write(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize, uint_fast16_t flags)
DECL|checkEraseRange|function|static int_fast16_t checkEraseRange(NVS_Handle handle, size_t offset, size_t size)
DECL|doErase|function|static int_fast16_t doErase(NVS_Handle handle, size_t offset, size_t size)
DECL|writeSem|variable|writeSem
