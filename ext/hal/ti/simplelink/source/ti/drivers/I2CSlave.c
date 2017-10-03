DECL|I2CSlave_Params_init|function|void I2CSlave_Params_init(I2CSlave_Params *params)
DECL|I2CSlave_close|function|void I2CSlave_close(I2CSlave_Handle handle)
DECL|I2CSlave_control|function|int_fast16_t I2CSlave_control(I2CSlave_Handle handle, uint_fast16_t cmd, void *arg)
DECL|I2CSlave_defaultParams|variable|I2CSlave_defaultParams
DECL|I2CSlave_init|function|void I2CSlave_init(void)
DECL|I2CSlave_open|function|I2CSlave_Handle I2CSlave_open(uint_least8_t index, I2CSlave_Params *params)
DECL|I2CSlave_read|function|bool I2CSlave_read(I2CSlave_Handle handle, void *buffer, size_t size)
DECL|I2CSlave_write|function|bool I2CSlave_write(I2CSlave_Handle handle, const void *buffer, size_t size)
DECL|isInitialized|variable|isInitialized
