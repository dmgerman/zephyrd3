DECL|I2S_Params_init|function|void I2S_Params_init(I2S_Params *params)
DECL|I2S_close|function|void I2S_close(I2S_Handle handle)
DECL|I2S_control|function|int_fast16_t I2S_control(I2S_Handle handle, uint_fast16_t cmd, void *arg)
DECL|I2S_defaultParams|variable|I2S_defaultParams
DECL|I2S_init|function|void I2S_init(void)
DECL|I2S_open|function|I2S_Handle I2S_open(uint_least8_t index, I2S_Params *params)
DECL|I2S_readIssue|function|int_fast16_t I2S_readIssue(I2S_Handle handle, I2S_BufDesc *desc)
DECL|I2S_readReclaim|function|size_t I2S_readReclaim(I2S_Handle handle, I2S_BufDesc **pDesc)
DECL|I2S_read|function|int_fast16_t I2S_read(I2S_Handle handle, I2S_BufDesc *desc)
DECL|I2S_writeIssue|function|int_fast16_t I2S_writeIssue(I2S_Handle handle, I2S_BufDesc *desc)
DECL|I2S_writeReclaim|function|size_t I2S_writeReclaim(I2S_Handle handle, I2S_BufDesc **pDesc)
DECL|I2S_write|function|int_fast16_t I2S_write(I2S_Handle handle, I2S_BufDesc *desc)
DECL|isInitialized|variable|isInitialized
