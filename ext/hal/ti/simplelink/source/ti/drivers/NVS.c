DECL|NVS_Params_init|function|void NVS_Params_init(NVS_Params *params)
DECL|NVS_close|function|void NVS_close(NVS_Handle handle)
DECL|NVS_control|function|int_fast16_t NVS_control(NVS_Handle handle, uint_fast16_t cmd, uintptr_t arg)
DECL|NVS_defaultParams|variable|NVS_defaultParams
DECL|NVS_erase|function|int_fast16_t NVS_erase(NVS_Handle handle, size_t offset, size_t size)
DECL|NVS_getAttrs|function|void NVS_getAttrs(NVS_Handle handle, NVS_Attrs *attrs)
DECL|NVS_init|function|void NVS_init(void)
DECL|NVS_open|function|NVS_Handle NVS_open(uint_least8_t index, NVS_Params *params)
DECL|NVS_read|function|int_fast16_t NVS_read(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize)
DECL|NVS_write|function|int_fast16_t NVS_write(NVS_Handle handle, size_t offset, void *buffer, size_t bufferSize, uint_fast16_t flags)
DECL|isInitialized|variable|isInitialized
