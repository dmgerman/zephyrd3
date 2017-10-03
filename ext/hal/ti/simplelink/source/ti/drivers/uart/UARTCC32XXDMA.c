DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|MAXXFERSIZE|macro|MAXXFERSIZE
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|UARTCC32XXDMA_close|function|void UARTCC32XXDMA_close(UART_Handle handle)
DECL|UARTCC32XXDMA_configDMA|function|static void UARTCC32XXDMA_configDMA(UART_Handle handle, bool isWrite)
DECL|UARTCC32XXDMA_control|function|int_fast16_t UARTCC32XXDMA_control(UART_Handle handle, uint_fast16_t cmd, void *arg)
DECL|UARTCC32XXDMA_fxnTable|variable|UARTCC32XXDMA_fxnTable
DECL|UARTCC32XXDMA_hwiIntFxn|function|static void UARTCC32XXDMA_hwiIntFxn(uintptr_t arg)
DECL|UARTCC32XXDMA_init|function|void UARTCC32XXDMA_init(UART_Handle handle)
DECL|UARTCC32XXDMA_open|function|UART_Handle UARTCC32XXDMA_open(UART_Handle handle, UART_Params *params)
DECL|UARTCC32XXDMA_readCancel|function|void UARTCC32XXDMA_readCancel(UART_Handle handle)
DECL|UARTCC32XXDMA_readPolling|function|int_fast32_t UARTCC32XXDMA_readPolling(UART_Handle handle, void *buf, size_t size)
DECL|UARTCC32XXDMA_read|function|int_fast32_t UARTCC32XXDMA_read(UART_Handle handle, void *buffer, size_t size)
DECL|UARTCC32XXDMA_writeCancel|function|void UARTCC32XXDMA_writeCancel(UART_Handle handle)
DECL|UARTCC32XXDMA_writePolling|function|int_fast32_t UARTCC32XXDMA_writePolling(UART_Handle handle, const void *buf, size_t size)
DECL|UARTCC32XXDMA_write|function|int_fast32_t UARTCC32XXDMA_write(UART_Handle handle, const void *buffer, size_t size)
DECL|dataLength|variable|dataLength
DECL|getPowerMgrId|function|static unsigned int getPowerMgrId(unsigned int baseAddr)
DECL|initHw|function|static void initHw(UART_Handle handle)
DECL|isFlowControlEnabled|function|static inline bool isFlowControlEnabled(UARTCC32XXDMA_HWAttrsV1 const *hwAttrs) {
DECL|parityType|variable|parityType
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|readCancel|function|static size_t readCancel(UART_Handle handle)
DECL|readSemCallback|function|static void readSemCallback(UART_Handle handle, void *buffer, size_t count)
DECL|startTxFifoEmptyClk|function|static void startTxFifoEmptyClk(UART_Handle handle, unsigned int numData)
DECL|stopBits|variable|stopBits
DECL|writeCancel|function|static size_t writeCancel(UART_Handle handle)
DECL|writeFinishedDoCallback|function|static void writeFinishedDoCallback(UART_Handle handle)
DECL|writeSemCallback|function|static void writeSemCallback(UART_Handle handle, void *buffer, size_t count)
