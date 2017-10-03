DECL|I2C_Params_init|function|void I2C_Params_init(I2C_Params *params)
DECL|I2C_cancel|function|void I2C_cancel(I2C_Handle handle)
DECL|I2C_close|function|void I2C_close(I2C_Handle handle)
DECL|I2C_control|function|int_fast16_t I2C_control(I2C_Handle handle, uint_fast16_t cmd, void *controlArg)
DECL|I2C_defaultParams|variable|I2C_defaultParams
DECL|I2C_init|function|void I2C_init(void)
DECL|I2C_open|function|I2C_Handle I2C_open(uint_least8_t index, I2C_Params *params)
DECL|I2C_transfer|function|bool I2C_transfer(I2C_Handle handle, I2C_Transaction *transaction)
DECL|isInitialized|variable|isInitialized
