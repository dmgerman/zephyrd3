DECL|I2SCC32XXDMA_16bit|enumerator|I2SCC32XXDMA_16bit = 0,
DECL|I2SCC32XXDMA_32bit|enumerator|I2SCC32XXDMA_32bit = 1
DECL|I2SCC32XXDMA_CMD_SET_EMPTYBUF_LEN|macro|I2SCC32XXDMA_CMD_SET_EMPTYBUF_LEN
DECL|I2SCC32XXDMA_CMD_SET_ZEROBUF_LEN|macro|I2SCC32XXDMA_CMD_SET_ZEROBUF_LEN
DECL|I2SCC32XXDMA_DataSize|enum|typedef enum I2SCC32XXDMA_DataSize {
DECL|I2SCC32XXDMA_DataSize|typedef|} I2SCC32XXDMA_DataSize;
DECL|I2SCC32XXDMA_HWAttrsV1|struct|typedef struct I2SCC32XXDMA_HWAttrsV1 {
DECL|I2SCC32XXDMA_HWAttrsV1|typedef|} I2SCC32XXDMA_HWAttrsV1;
DECL|I2SCC32XXDMA_Handle|typedef|} I2SCC32XXDMA_Object, *I2SCC32XXDMA_Handle;
DECL|I2SCC32XXDMA_INDEX_INVALID|macro|I2SCC32XXDMA_INDEX_INVALID
DECL|I2SCC32XXDMA_NUM_SERIAL_PINS|macro|I2SCC32XXDMA_NUM_SERIAL_PINS
DECL|I2SCC32XXDMA_Object|struct|typedef struct I2SCC32XXDMA_Object {
DECL|I2SCC32XXDMA_Object|typedef|} I2SCC32XXDMA_Object, *I2SCC32XXDMA_Handle;
DECL|I2SCC32XXDMA_PIN_02_McAFSX|macro|I2SCC32XXDMA_PIN_02_McAFSX
DECL|I2SCC32XXDMA_PIN_03_McACLK|macro|I2SCC32XXDMA_PIN_03_McACLK
DECL|I2SCC32XXDMA_PIN_15_McAFSX|macro|I2SCC32XXDMA_PIN_15_McAFSX
DECL|I2SCC32XXDMA_PIN_17_McAFSX|macro|I2SCC32XXDMA_PIN_17_McAFSX
DECL|I2SCC32XXDMA_PIN_21_McAFSX|macro|I2SCC32XXDMA_PIN_21_McAFSX
DECL|I2SCC32XXDMA_PIN_45_McAFSX|macro|I2SCC32XXDMA_PIN_45_McAFSX
DECL|I2SCC32XXDMA_PIN_45_McAXR0|macro|I2SCC32XXDMA_PIN_45_McAXR0
DECL|I2SCC32XXDMA_PIN_50_McAXR0|macro|I2SCC32XXDMA_PIN_50_McAXR0
DECL|I2SCC32XXDMA_PIN_50_McAXR1|macro|I2SCC32XXDMA_PIN_50_McAXR1
DECL|I2SCC32XXDMA_PIN_52_McACLK|macro|I2SCC32XXDMA_PIN_52_McACLK
DECL|I2SCC32XXDMA_PIN_52_McAXR0|macro|I2SCC32XXDMA_PIN_52_McAXR0
DECL|I2SCC32XXDMA_PIN_53_McACLK|macro|I2SCC32XXDMA_PIN_53_McACLK
DECL|I2SCC32XXDMA_PIN_53_McAFSX|macro|I2SCC32XXDMA_PIN_53_McAFSX
DECL|I2SCC32XXDMA_PIN_60_McAXR1|macro|I2SCC32XXDMA_PIN_60_McAXR1
DECL|I2SCC32XXDMA_PIN_62_McACLKX|macro|I2SCC32XXDMA_PIN_62_McACLKX
DECL|I2SCC32XXDMA_PIN_63_McAFSX|macro|I2SCC32XXDMA_PIN_63_McAFSX
DECL|I2SCC32XXDMA_PIN_64_McAXR0|macro|I2SCC32XXDMA_PIN_64_McAXR0
DECL|I2SCC32XXDMA_SET_EMPTYBUF_LEN|macro|I2SCC32XXDMA_SET_EMPTYBUF_LEN
DECL|I2SCC32XXDMA_SET_ZEROBUF_LEN|macro|I2SCC32XXDMA_SET_ZEROBUF_LEN
DECL|I2SCC32XXDMA_SerialPinConfig|struct|typedef struct I2SCC32XXDMA_SerialPinConfig {
DECL|I2SCC32XXDMA_SerialPinConfig|typedef|} I2SCC32XXDMA_SerialPinConfig;
DECL|I2SCC32XXDMA_SerialPinParams|struct|typedef struct I2SCC32XXDMA_SerialPinParams {
DECL|I2SCC32XXDMA_SerialPinParams|typedef|} I2SCC32XXDMA_SerialPinParams;
DECL|I2SCC32XXDMA_SerialPinVars|struct|typedef struct I2SCC32XXDMA_SerialPinVars {
DECL|I2SCC32XXDMA_SerialPinVars|typedef|}I2SCC32XXDMA_SerialPinVars;
DECL|baseAddr|member|uint32_t baseAddr;
DECL|clkPin|member|uint16_t clkPin;
DECL|clkxPin|member|uint16_t clkxPin;
DECL|currentReadBufDesc|member|I2S_BufDesc *currentReadBufDesc;
DECL|currentWriteBufDesc|member|I2S_BufDesc *currentWriteBufDesc;
DECL|dmaHandle|member|UDMACC32XX_Handle dmaHandle;
DECL|dmaSize|member|I2SCC32XXDMA_DataSize dmaSize; /* Config DMA word size */
DECL|emptyReadBufLength|member|unsigned long emptyReadBufLength;
DECL|fsxPin|member|uint16_t fsxPin;
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|inActiveConfig|member|I2S_SerInActiveConfig inActiveConfig;
DECL|intNum|member|uint32_t intNum;
DECL|intPriority|member|uint32_t intPriority;
DECL|opened|member|bool opened; /* Has the obj been opened */
DECL|operationMode|member|uint32_t operationMode; /* Mode of operation of I2S */
DECL|pinMode|member|I2S_PinMode pinMode;
DECL|pinNumber|member|unsigned char pinNumber;
DECL|prevReadBufDesc|member|I2S_BufDesc *prevReadBufDesc;
DECL|prevWriteBufDesc|member|I2S_BufDesc *prevWriteBufDesc;
DECL|readActiveQueue|member|List_List readActiveQueue;
DECL|readDoneQueue|member|List_List readDoneQueue;
DECL|readIndex|member|uint16_t readIndex; /* read channel Index */
DECL|readSem|member|SemaphoreP_Handle readSem; /* I2S read semaphore */
DECL|readWriteCallback|member|I2S_Callback readWriteCallback;
DECL|readWriteMode|member|I2S_DataMode readWriteMode;
DECL|readWriteTimeout|member|uint32_t readWriteTimeout;
DECL|rxChannelIndex|member|unsigned long rxChannelIndex;
DECL|serialPinConfig|member|I2SCC32XXDMA_SerialPinConfig serialPinConfig[I2SCC32XXDMA_NUM_SERIAL_PINS];
DECL|serialPinVars|member|I2SCC32XXDMA_SerialPinVars serialPinVars[I2SCC32XXDMA_NUM_SERIAL_PINS];
DECL|ti_drivers_i2s_I2SCC32XXDMA__include|macro|ti_drivers_i2s_I2SCC32XXDMA__include
DECL|txChannelIndex|member|unsigned long txChannelIndex;
DECL|writeActiveQueue|member|List_List writeActiveQueue;
DECL|writeDoneQueue|member|List_List writeDoneQueue;
DECL|writeIndex|member|uint16_t writeIndex; /* write channel Index */
DECL|writeSem|member|SemaphoreP_Handle writeSem; /* I2S write semaphore*/
DECL|xr0Pin|member|uint16_t xr0Pin;
DECL|xr1Pin|member|uint16_t xr1Pin;
DECL|zeroWriteBufLength|member|unsigned long zeroWriteBufLength;
