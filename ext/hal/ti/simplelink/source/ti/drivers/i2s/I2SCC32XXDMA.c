DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|I2SCC32XXDMA_Params_init|function|void I2SCC32XXDMA_Params_init(I2SCC32XXDMA_SerialPinParams *params)
DECL|I2SCC32XXDMA_close|function|void I2SCC32XXDMA_close(I2S_Handle handle)
DECL|I2SCC32XXDMA_configDMA|function|static void I2SCC32XXDMA_configDMA(I2S_Handle handle, I2S_BufDesc *desc, bool isWrite)
DECL|I2SCC32XXDMA_control|function|int_fast16_t I2SCC32XXDMA_control(I2S_Handle handle, uint_fast16_t cmd, void *arg)
DECL|I2SCC32XXDMA_emptyBufDesc|variable|I2SCC32XXDMA_emptyBufDesc
DECL|I2SCC32XXDMA_emptyBuffer|variable|I2SCC32XXDMA_emptyBuffer
DECL|I2SCC32XXDMA_fxnTable|variable|I2SCC32XXDMA_fxnTable
DECL|I2SCC32XXDMA_hwiIntFxn|function|static void I2SCC32XXDMA_hwiIntFxn(uintptr_t arg)
DECL|I2SCC32XXDMA_init|function|void I2SCC32XXDMA_init(I2S_Handle handle)
DECL|I2SCC32XXDMA_open|function|I2S_Handle I2SCC32XXDMA_open(I2S_Handle handle, I2S_Params *params)
DECL|I2SCC32XXDMA_readIssue|function|int_fast16_t I2SCC32XXDMA_readIssue(I2S_Handle handle, I2S_BufDesc *desc)
DECL|I2SCC32XXDMA_readReclaim|function|size_t I2SCC32XXDMA_readReclaim(I2S_Handle handle, I2S_BufDesc **desc)
DECL|I2SCC32XXDMA_writeIssue|function|int_fast16_t I2SCC32XXDMA_writeIssue(I2S_Handle handle, I2S_BufDesc *desc)
DECL|I2SCC32XXDMA_writeReclaim|function|size_t I2SCC32XXDMA_writeReclaim(I2S_Handle handle, I2S_BufDesc **desc)
DECL|I2SCC32XXDMA_zeroBufDesc|variable|I2SCC32XXDMA_zeroBufDesc
DECL|I2SCC32XXDMA_zeroBuffer|variable|I2SCC32XXDMA_zeroBuffer
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|PinConfigPinMode|macro|PinConfigPinMode
DECL|PinConfigPin|macro|PinConfigPin
DECL|dmaRxConfig|variable|dmaRxConfig
DECL|dmaTxConfig|variable|dmaTxConfig
DECL|readIssueCallback|function|static void readIssueCallback(I2S_Handle handle, I2S_BufDesc *desc)
DECL|writeIssueCallback|function|static void writeIssueCallback(I2S_Handle handle, I2S_BufDesc *desc)
