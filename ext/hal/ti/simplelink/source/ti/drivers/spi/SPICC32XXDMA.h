DECL|SPICC32XXDMA_HWAttrsV1|struct|typedef struct SPICC32XXDMA_HWAttrsV1 {
DECL|SPICC32XXDMA_HWAttrsV1|typedef|} SPICC32XXDMA_HWAttrsV1;
DECL|SPICC32XXDMA_Handle|typedef|} SPICC32XXDMA_Object, *SPICC32XXDMA_Handle;
DECL|SPICC32XXDMA_Object|struct|typedef struct SPICC32XXDMA_Object {
DECL|SPICC32XXDMA_Object|typedef|} SPICC32XXDMA_Object, *SPICC32XXDMA_Handle;
DECL|SPICC32XXDMA_PIN_05_CLK|macro|SPICC32XXDMA_PIN_05_CLK
DECL|SPICC32XXDMA_PIN_06_MISO|macro|SPICC32XXDMA_PIN_06_MISO
DECL|SPICC32XXDMA_PIN_07_MOSI|macro|SPICC32XXDMA_PIN_07_MOSI
DECL|SPICC32XXDMA_PIN_08_CS|macro|SPICC32XXDMA_PIN_08_CS
DECL|SPICC32XXDMA_PIN_45_CLK|macro|SPICC32XXDMA_PIN_45_CLK
DECL|SPICC32XXDMA_PIN_50_CS|macro|SPICC32XXDMA_PIN_50_CS
DECL|SPICC32XXDMA_PIN_52_MOSI|macro|SPICC32XXDMA_PIN_52_MOSI
DECL|SPICC32XXDMA_PIN_53_MISO|macro|SPICC32XXDMA_PIN_53_MISO
DECL|SPICC32XXDMA_PIN_NO_CONFIG|macro|SPICC32XXDMA_PIN_NO_CONFIG
DECL|amtDataXferred|member|size_t amtDataXferred;
DECL|baseAddr|member|uint32_t baseAddr;
DECL|bitRate|member|uint32_t bitRate;
DECL|cancelInProgress|member|bool cancelInProgress;
DECL|clkPin|member|uint16_t clkPin;
DECL|csControl|member|uint32_t csControl;
DECL|csPin|member|uint16_t csPin;
DECL|csPolarity|member|uint32_t csPolarity;
DECL|currentXferAmt|member|size_t currentXferAmt;
DECL|dataSize|member|uint32_t dataSize;
DECL|defaultTxBufValue|member|uint32_t defaultTxBufValue;
DECL|dmaHandle|member|UDMACC32XX_Handle dmaHandle;
DECL|frameFormat|member|SPI_FrameFormat frameFormat;
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|intNum|member|uint32_t intNum;
DECL|intPriority|member|uint32_t intPriority;
DECL|isOpen|member|bool isOpen;
DECL|minDmaTransferSize|member|uint32_t minDmaTransferSize;
DECL|misoPin|member|uint16_t misoPin;
DECL|mosiPin|member|uint16_t mosiPin;
DECL|notifyObj|member|Power_NotifyObj notifyObj;
DECL|pinMode|member|uint32_t pinMode;
DECL|rxChannelIndex|member|uint32_t rxChannelIndex;
DECL|rxFifoTrigger|member|uint8_t rxFifoTrigger;
DECL|scratchBufPtr|member|uint32_t *scratchBufPtr;
DECL|spiMode|member|SPI_Mode spiMode;
DECL|spiPRCM|member|uint32_t spiPRCM;
DECL|ti_drivers_spi_SPICC32XXDMA__include|macro|ti_drivers_spi_SPICC32XXDMA__include
DECL|transaction|member|SPI_Transaction *transaction;
DECL|transferCallbackFxn|member|SPI_CallbackFxn transferCallbackFxn;
DECL|transferComplete|member|SemaphoreP_Handle transferComplete;
DECL|transferMode|member|SPI_TransferMode transferMode;
DECL|transferTimeout|member|uint32_t transferTimeout;
DECL|turboMode|member|uint32_t turboMode;
DECL|txChannelIndex|member|uint32_t txChannelIndex;
DECL|txFifoTrigger|member|uint8_t txFifoTrigger;
