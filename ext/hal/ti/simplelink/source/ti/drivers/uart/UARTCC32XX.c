DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|UARTCC32XX_close|function|void UARTCC32XX_close(UART_Handle handle)
DECL|UARTCC32XX_control|function|int_fast16_t UARTCC32XX_control(UART_Handle handle, uint_fast16_t cmd, void *arg)
DECL|UARTCC32XX_fxnTable|variable|UARTCC32XX_fxnTable
DECL|UARTCC32XX_hwiIntFxn|function|static void UARTCC32XX_hwiIntFxn(uintptr_t arg)
DECL|UARTCC32XX_init|function|void UARTCC32XX_init(UART_Handle handle)
DECL|UARTCC32XX_open|function|UART_Handle UARTCC32XX_open(UART_Handle handle, UART_Params *params)
DECL|UARTCC32XX_readCancel|function|void UARTCC32XX_readCancel(UART_Handle handle)
DECL|UARTCC32XX_readPolling|function|int_fast32_t UARTCC32XX_readPolling(UART_Handle handle, void *buf, size_t size)
DECL|UARTCC32XX_read|function|int_fast32_t UARTCC32XX_read(UART_Handle handle, void *buffer, size_t size)
DECL|UARTCC32XX_writeCancel|function|void UARTCC32XX_writeCancel(UART_Handle handle)
DECL|UARTCC32XX_writePolling|function|int_fast32_t UARTCC32XX_writePolling(UART_Handle handle, const void *buf, size_t size)
DECL|UARTCC32XX_write|function|int_fast32_t UARTCC32XX_write(UART_Handle handle, const void *buffer, size_t size)
DECL|dataLength|variable|dataLength
DECL|errorCallback|function|static void errorCallback(UART_Handle handle, uintptr_t error)
DECL|getPowerMgrId|function|static unsigned int getPowerMgrId(unsigned int baseAddr)
DECL|initHw|function|static void initHw(UART_Handle handle)
DECL|isFlowControlEnabled|function|static inline bool isFlowControlEnabled(UARTCC32XX_HWAttrsV1 const *hwAttrs) {
DECL|parityType|variable|parityType
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|readBlockingTimeout|function|static void readBlockingTimeout(uintptr_t arg)
DECL|readIsrBinaryBlocking|function|static bool readIsrBinaryBlocking(UART_Handle handle)
DECL|readIsrBinaryCallback|function|static bool readIsrBinaryCallback(UART_Handle handle)
DECL|readIsrTextBlocking|function|static bool readIsrTextBlocking(UART_Handle handle)
DECL|readIsrTextCallback|function|static bool readIsrTextCallback(UART_Handle handle)
DECL|readSemCallback|function|static void readSemCallback(UART_Handle handle, void *buffer, size_t count)
DECL|readTaskBlocking|function|static int readTaskBlocking(UART_Handle handle)
DECL|readTaskCallback|function|static int readTaskCallback(UART_Handle handle)
DECL|releasePowerConstraint|function|static void releasePowerConstraint(UART_Handle handle)
DECL|staticFxnTable|variable|staticFxnTable
DECL|stopBits|variable|stopBits
DECL|writeData|function|static void writeData(UART_Handle handle, bool inISR)
DECL|writeSemCallback|function|static void writeSemCallback(UART_Handle handle, void *buffer, size_t count)
