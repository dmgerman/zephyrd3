DECL|SDSPIBaseAddrType|typedef|typedef unsigned long SDSPIBaseAddrType;
DECL|SDSPICC32XX_CardType|enum|typedef enum SDSPICC32XX_CardType {
DECL|SDSPICC32XX_CardType|typedef|} SDSPICC32XX_CardType;
DECL|SDSPICC32XX_GPIO0|macro|SDSPICC32XX_GPIO0
DECL|SDSPICC32XX_GPIO10|macro|SDSPICC32XX_GPIO10
DECL|SDSPICC32XX_GPIO11|macro|SDSPICC32XX_GPIO11
DECL|SDSPICC32XX_GPIO12|macro|SDSPICC32XX_GPIO12
DECL|SDSPICC32XX_GPIO13|macro|SDSPICC32XX_GPIO13
DECL|SDSPICC32XX_GPIO14|macro|SDSPICC32XX_GPIO14
DECL|SDSPICC32XX_GPIO15|macro|SDSPICC32XX_GPIO15
DECL|SDSPICC32XX_GPIO16|macro|SDSPICC32XX_GPIO16
DECL|SDSPICC32XX_GPIO17|macro|SDSPICC32XX_GPIO17
DECL|SDSPICC32XX_GPIO1|macro|SDSPICC32XX_GPIO1
DECL|SDSPICC32XX_GPIO22|macro|SDSPICC32XX_GPIO22
DECL|SDSPICC32XX_GPIO23|macro|SDSPICC32XX_GPIO23
DECL|SDSPICC32XX_GPIO24|macro|SDSPICC32XX_GPIO24
DECL|SDSPICC32XX_GPIO25|macro|SDSPICC32XX_GPIO25
DECL|SDSPICC32XX_GPIO28|macro|SDSPICC32XX_GPIO28
DECL|SDSPICC32XX_GPIO29|macro|SDSPICC32XX_GPIO29
DECL|SDSPICC32XX_GPIO2|macro|SDSPICC32XX_GPIO2
DECL|SDSPICC32XX_GPIO30|macro|SDSPICC32XX_GPIO30
DECL|SDSPICC32XX_GPIO31|macro|SDSPICC32XX_GPIO31
DECL|SDSPICC32XX_GPIO3|macro|SDSPICC32XX_GPIO3
DECL|SDSPICC32XX_GPIO4|macro|SDSPICC32XX_GPIO4
DECL|SDSPICC32XX_GPIO5|macro|SDSPICC32XX_GPIO5
DECL|SDSPICC32XX_GPIO6|macro|SDSPICC32XX_GPIO6
DECL|SDSPICC32XX_GPIO7|macro|SDSPICC32XX_GPIO7
DECL|SDSPICC32XX_GPIO8|macro|SDSPICC32XX_GPIO8
DECL|SDSPICC32XX_GPIO9|macro|SDSPICC32XX_GPIO9
DECL|SDSPICC32XX_GPIONONE|macro|SDSPICC32XX_GPIONONE
DECL|SDSPICC32XX_HWAttrsV1|struct|typedef struct SDSPICC32XX_HWAttrsV1 {
DECL|SDSPICC32XX_HWAttrsV1|typedef|} SDSPICC32XX_HWAttrsV1;
DECL|SDSPICC32XX_Handle|typedef|} SDSPICC32XX_Object, *SDSPICC32XX_Handle;
DECL|SDSPICC32XX_MMC|enumerator|SDSPICC32XX_MMC = 1, /*!< Multi-media Memory Card (MMC) */
DECL|SDSPICC32XX_NOCARD|enumerator|SDSPICC32XX_NOCARD = 0, /*!< Unrecognized Card */
DECL|SDSPICC32XX_Object|struct|typedef struct SDSPICC32XX_Object {
DECL|SDSPICC32XX_Object|typedef|} SDSPICC32XX_Object, *SDSPICC32XX_Handle;
DECL|SDSPICC32XX_PIN_05_CLK|macro|SDSPICC32XX_PIN_05_CLK
DECL|SDSPICC32XX_PIN_06_MISO|macro|SDSPICC32XX_PIN_06_MISO
DECL|SDSPICC32XX_PIN_07_MOSI|macro|SDSPICC32XX_PIN_07_MOSI
DECL|SDSPICC32XX_PIN_08_CS|macro|SDSPICC32XX_PIN_08_CS
DECL|SDSPICC32XX_PIN_45_CLK|macro|SDSPICC32XX_PIN_45_CLK
DECL|SDSPICC32XX_PIN_50_CS|macro|SDSPICC32XX_PIN_50_CS
DECL|SDSPICC32XX_PIN_52_MOSI|macro|SDSPICC32XX_PIN_52_MOSI
DECL|SDSPICC32XX_PIN_53_MISO|macro|SDSPICC32XX_PIN_53_MISO
DECL|SDSPICC32XX_PIN_62_GPIO|macro|SDSPICC32XX_PIN_62_GPIO
DECL|SDSPICC32XX_SDHC|enumerator|SDSPICC32XX_SDHC = 3 /*!< High Capacity SDCard (SDHC) */
DECL|SDSPICC32XX_SDSC|enumerator|SDSPICC32XX_SDSC = 2, /*!< Standard SDCard (SDSC) */
DECL|SDSPIDataType|typedef|typedef unsigned long SDSPIDataType;
DECL|baseAddr|member|uint32_t baseAddr;
DECL|bitRate|member|uint32_t bitRate; /* SPI bus bit rate (Hz) */
DECL|cardType|member|SDSPICC32XX_CardType cardType; /* SDCard Card Command Class (CCC) */
DECL|clkPin|member|uint32_t clkPin;
DECL|csPin|member|uint32_t csPin;
DECL|diskState|member|DSTATUS diskState; /* Disk status */
DECL|driveNumber|member|uint32_t driveNumber; /* Drive number used by FatFs */
DECL|filesystem|member|FATFS filesystem; /* FATFS data object */
DECL|gpioCsPowerMgrId|member|uint_fast16_t gpioCsPowerMgrId; /* Determined from base address */
DECL|misoPin|member|uint32_t misoPin;
DECL|mosiPin|member|uint32_t mosiPin;
DECL|postNotify|member|Power_NotifyObj postNotify; /* LPDS wake-up notify object */
DECL|spiPRCM|member|uint32_t spiPRCM;
DECL|spiPowerMgrId|member|uint_fast16_t spiPowerMgrId; /* Determined from base address */
DECL|ti_drivers_sdspi_SDSPICC32XX__include|macro|ti_drivers_sdspi_SDSPICC32XX__include
