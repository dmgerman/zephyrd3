DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|SPICC32XXDMA_close|function|void SPICC32XXDMA_close(SPI_Handle handle)
DECL|SPICC32XXDMA_control|function|int_fast16_t SPICC32XXDMA_control(SPI_Handle handle, uint_fast16_t cmd, void *arg)
DECL|SPICC32XXDMA_fxnTable|variable|SPICC32XXDMA_fxnTable
DECL|SPICC32XXDMA_init|function|void SPICC32XXDMA_init(SPI_Handle handle)
DECL|SPICC32XXDMA_open|function|SPI_Handle SPICC32XXDMA_open(SPI_Handle handle, SPI_Params *params)
DECL|SPICC32XXDMA_transferCancel|function|void SPICC32XXDMA_transferCancel(SPI_Handle handle)
DECL|SPICC32XXDMA_transfer|function|bool SPICC32XXDMA_transfer(SPI_Handle handle, SPI_Transaction *transaction)
DECL|configDMA|function|static void configDMA(SPI_Handle handle, SPI_Transaction *transaction)
DECL|dmaNullConfig|variable|dmaNullConfig
DECL|dmaRxConfig|variable|dmaRxConfig
DECL|dmaTxConfig|variable|dmaTxConfig
DECL|frameFormat|variable|frameFormat
DECL|getPowerMgrId|function|static unsigned int getPowerMgrId(SPIBaseAddrType baseAddr)
DECL|initHw|function|static void initHw(SPI_Handle handle)
DECL|mode|variable|mode
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|spiHwiFxn|function|static void spiHwiFxn(uintptr_t arg)
DECL|spiPollingTransfer16|function|static void spiPollingTransfer16(uint32_t baseAddr, void *rx, void *tx, uint8_t rxInc, uint8_t txInc, size_t count)
DECL|spiPollingTransfer32|function|static void spiPollingTransfer32(uint32_t baseAddr, void *rx, void *tx, uint8_t rxInc, uint8_t txInc, size_t count)
DECL|spiPollingTransfer8|function|static void spiPollingTransfer8(uint32_t baseAddr, void *rx, void *tx, uint8_t rxInc, uint8_t txInc, size_t count)
DECL|spiPollingTransfer|function|static inline void spiPollingTransfer(SPICC32XXDMA_Object *object, SPICC32XXDMA_HWAttrsV1 const *hwAttrs, SPI_Transaction *transaction)
DECL|transferCallback|function|static void transferCallback(SPI_Handle handle, SPI_Transaction *transaction)
