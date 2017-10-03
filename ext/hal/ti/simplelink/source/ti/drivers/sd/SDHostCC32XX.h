DECL|SDHostCC32XX_HWAttrsV1|struct|typedef struct SDHostCC32XX_HWAttrsV1 {
DECL|SDHostCC32XX_HWAttrsV1|typedef|} SDHostCC32XX_HWAttrsV1;
DECL|SDHostCC32XX_Object|struct|typedef struct SDHostCC32XX_Object {
DECL|SDHostCC32XX_Object|typedef|} SDHostCC32XX_Object;
DECL|SDHostCC32XX_PIN_01_SDCARD_CLK|macro|SDHostCC32XX_PIN_01_SDCARD_CLK
DECL|SDHostCC32XX_PIN_02_SDCARD_CMD|macro|SDHostCC32XX_PIN_02_SDCARD_CMD
DECL|SDHostCC32XX_PIN_06_SDCARD_DATA|macro|SDHostCC32XX_PIN_06_SDCARD_DATA
DECL|SDHostCC32XX_PIN_07_SDCARD_CLK|macro|SDHostCC32XX_PIN_07_SDCARD_CLK
DECL|SDHostCC32XX_PIN_08_SDCARD_CMD|macro|SDHostCC32XX_PIN_08_SDCARD_CMD
DECL|SDHostCC32XX_PIN_64_SDCARD_DATA|macro|SDHostCC32XX_PIN_64_SDCARD_DATA
DECL|baseAddr|member|uint_fast32_t baseAddr;
DECL|cardType|member|SD_CardType cardType;
DECL|clkPin|member|uint16_t clkPin;
DECL|clkPin|member|uint32_t clkPin;
DECL|clkRate|member|uint_fast32_t clkRate;
DECL|cmdPin|member|uint32_t cmdPin;
DECL|cmdSem|member|SemaphoreP_Handle cmdSem;
DECL|dataPin|member|uint32_t dataPin;
DECL|dmaHandle|member|UDMACC32XX_Handle dmaHandle;
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|intPriority|member|int_fast32_t intPriority;
DECL|isOpen|member|bool isOpen;
DECL|postNotify|member|Power_NotifyObj postNotify;
DECL|powerMgrId|member|unsigned int powerMgrId;
DECL|prevParkCLK|member|PowerCC32XX_ParkState prevParkCLK;
DECL|rca|member|uint_fast32_t rca;
DECL|readBuf|member|uint_fast32_t *readBuf;
DECL|readSecCount|member|volatile uint_fast32_t readSecCount;
DECL|rxChIdx|member|unsigned long rxChIdx;
DECL|stat|member|volatile int_fast8_t stat;
DECL|ti_drivers_sd_SDHostCC32XX__include|macro|ti_drivers_sd_SDHostCC32XX__include
DECL|txChIdx|member|unsigned long txChIdx;
DECL|writeBuf|member|const uint_fast32_t *writeBuf;
DECL|writeSecCount|member|volatile uint_fast32_t writeSecCount;
