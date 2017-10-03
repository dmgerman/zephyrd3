DECL|MAX_DMA_TRANSFER_AMOUNT|macro|MAX_DMA_TRANSFER_AMOUNT
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|SPICC32XXDMA_close|function|void SPICC32XXDMA_close(SPI_Handle handle)
DECL|SPICC32XXDMA_control|function|int_fast16_t SPICC32XXDMA_control(SPI_Handle handle, uint_fast16_t cmd, void *arg)
DECL|SPICC32XXDMA_fxnTable|variable|SPICC32XXDMA_fxnTable
DECL|SPICC32XXDMA_init|function|void SPICC32XXDMA_init(SPI_Handle handle)
DECL|SPICC32XXDMA_open|function|SPI_Handle SPICC32XXDMA_open(SPI_Handle handle, SPI_Params *params)
DECL|SPICC32XXDMA_transferCancel|function|void SPICC32XXDMA_transferCancel(SPI_Handle handle)
DECL|SPICC32XXDMA_transfer|function|bool SPICC32XXDMA_transfer(SPI_Handle handle, SPI_Transaction *transaction)
DECL|blockingTransferCallback|function|static void blockingTransferCallback(SPI_Handle handle, SPI_Transaction *transaction)
DECL|configDMA|function|static void configDMA(SPICC32XXDMA_Object *object, SPICC32XXDMA_HWAttrsV1 const *hwAttrs, SPI_Transaction *transaction)
DECL|dmaNullConfig|variable|dmaNullConfig
DECL|dmaRxConfig|variable|dmaRxConfig
DECL|dmaTxConfig|variable|dmaTxConfig
DECL|getDmaRemainingXfers|function|static inline uint32_t getDmaRemainingXfers(SPICC32XXDMA_HWAttrsV1 const *hwAttrs) {
DECL|getPowerMgrId|function|static uint16_t getPowerMgrId(uint32_t baseAddr)
DECL|initHw|function|static void initHw(SPICC32XXDMA_Object *object, SPICC32XXDMA_HWAttrsV1 const *hwAttrs)
DECL|mode|variable|mode
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|spiHwiFxn|function|static void spiHwiFxn(uintptr_t arg)
DECL|spiPollingTransfer|function|static inline void spiPollingTransfer(SPICC32XXDMA_Object *object, SPICC32XXDMA_HWAttrsV1 const *hwAttrs, SPI_Transaction *transaction)
