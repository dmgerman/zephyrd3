DECL|SPI_Params_init|function|void SPI_Params_init(SPI_Params *params)
DECL|SPI_close|function|void SPI_close(SPI_Handle handle)
DECL|SPI_control|function|int_fast16_t SPI_control(SPI_Handle handle, uint_fast16_t cmd, void *controlArg)
DECL|SPI_defaultParams|variable|SPI_defaultParams
DECL|SPI_init|function|void SPI_init(void)
DECL|SPI_open|function|SPI_Handle SPI_open(uint_least8_t index, SPI_Params *params)
DECL|SPI_transferCancel|function|void SPI_transferCancel(SPI_Handle handle)
DECL|SPI_transfer|function|bool SPI_transfer(SPI_Handle handle, SPI_Transaction *transaction)
DECL|isInitialized|variable|isInitialized
