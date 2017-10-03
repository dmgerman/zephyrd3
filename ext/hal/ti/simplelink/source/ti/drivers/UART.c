DECL|UART_Params_init|function|void UART_Params_init(UART_Params *params)
DECL|UART_close|function|void UART_close(UART_Handle handle)
DECL|UART_control|function|int_fast16_t UART_control(UART_Handle handle, uint_fast16_t cmd, void *arg)
DECL|UART_defaultParams|variable|UART_defaultParams
DECL|UART_init|function|void UART_init(void)
DECL|UART_open|function|UART_Handle UART_open(uint_least8_t index, UART_Params *params)
DECL|UART_readCancel|function|void UART_readCancel(UART_Handle handle)
DECL|UART_readPolling|function|int_fast32_t UART_readPolling(UART_Handle handle, void *buffer, size_t size)
DECL|UART_read|function|int_fast32_t UART_read(UART_Handle handle, void *buffer, size_t size)
DECL|UART_writeCancel|function|void UART_writeCancel(UART_Handle handle)
DECL|UART_writePolling|function|int_fast32_t UART_writePolling(UART_Handle handle, const void *buffer, size_t size)
DECL|UART_write|function|int_fast32_t UART_write(UART_Handle handle, const void *buffer, size_t size)
DECL|isInitialized|variable|isInitialized
