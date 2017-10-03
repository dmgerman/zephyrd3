DECL|NVSSPI25X_CMD_MASS_ERASE|macro|NVSSPI25X_CMD_MASS_ERASE
DECL|NVSSPI25X_HWAttrs|struct|typedef struct NVSSPI25X_HWAttrs {
DECL|NVSSPI25X_HWAttrs|typedef|} NVSSPI25X_HWAttrs;
DECL|NVSSPI25X_Object|struct|typedef struct NVSSPI25X_Object {
DECL|NVSSPI25X_Object|typedef|} NVSSPI25X_Object;
DECL|opened|member|bool opened; /* Has this region been opened */
DECL|regionBaseOffset|member|size_t regionBaseOffset; /*!< Offset from base of SPI flash */
DECL|regionSize|member|size_t regionSize; /*!< The size of the region in bytes */
DECL|sectorBaseMask|member|size_t sectorBaseMask;
DECL|sectorSize|member|size_t sectorSize; /*!< Erase sector size */
DECL|spiBitRate|member|uint32_t spiBitRate; /*!< SPI bit rate in Hz */
DECL|spiCsnGpioIndex|member|uint16_t spiCsnGpioIndex; /*!< SPI chip select GPIO index from Board file */
DECL|spiHandle|member|SPI_Handle *spiHandle; /*!< ptr to SPI handle if provided by user. */
DECL|spiHandle|member|SPI_Handle spiHandle;
DECL|spiIndex|member|uint16_t spiIndex; /*!< SPI instance index from Board file */
DECL|ti_drivers_nvs_NVSSPI25X__include|macro|ti_drivers_nvs_NVSSPI25X__include
DECL|verifyBufSize|member|size_t verifyBufSize; /*!< Write Pre/Post verify buffer size */
DECL|verifyBuf|member|uint8_t *verifyBuf; /*!< Write Pre/Post verify buffer */
