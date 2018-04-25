DECL|AllocationUnitSize|member|__IO uint8_t AllocationUnitSize; /*!< Carries information about the card's allocation unit size */
DECL|BLOCKSIZE|macro|BLOCKSIZE
DECL|BlockNbr|member|uint32_t BlockNbr; /*!< Specifies the Card Capacity in blocks */
DECL|BlockSize|member|uint32_t BlockSize; /*!< Specifies one block size in bytes */
DECL|CARD_SDHC_SDXC|macro|CARD_SDHC_SDXC
DECL|CARD_SDSC|macro|CARD_SDSC
DECL|CARD_SECURED|macro|CARD_SECURED
DECL|CARD_V1_X|macro|CARD_V1_X
DECL|CARD_V2_X|macro|CARD_V2_X
DECL|CID_CRC|member|__IO uint8_t CID_CRC; /*!< CID CRC */
DECL|CID|member|uint32_t CID[4]; /*!< SD card identification number table */
DECL|CSDStruct|member|__IO uint8_t CSDStruct; /*!< CSD structure */
DECL|CSD_CRC|member|__IO uint8_t CSD_CRC; /*!< CSD CRC */
DECL|CSD|member|uint32_t CSD[4]; /*!< SD card specific data table */
DECL|CardComdClasses|member|__IO uint16_t CardComdClasses; /*!< Card command classes */
DECL|CardType|member|__IO uint16_t CardType; /*!< Carries information about card type */
DECL|CardType|member|uint32_t CardType; /*!< Specifies the card Type */
DECL|CardVersion|member|uint32_t CardVersion; /*!< Specifies the card version */
DECL|Class|member|uint32_t Class; /*!< Specifies the class of the card class */
DECL|ContentProtectAppli|member|__IO uint8_t ContentProtectAppli; /*!< Content protection application */
DECL|Context|member|__IO uint32_t Context; /*!< SD transfer context */
DECL|CopyFlag|member|__IO uint8_t CopyFlag; /*!< Copy flag (OTP) */
DECL|DSRImpl|member|__IO uint8_t DSRImpl; /*!< DSR implemented */
DECL|DataBusWidth|member|__IO uint8_t DataBusWidth; /*!< Shows the currently defined data bus width */
DECL|DeviceSizeMul|member|__IO uint8_t DeviceSizeMul; /*!< Device size multiplier */
DECL|DeviceSize|member|__IO uint32_t DeviceSize; /*!< Device Size */
DECL|ECC|member|__IO uint8_t ECC; /*!< ECC code */
DECL|EraseGrMul|member|__IO uint8_t EraseGrMul; /*!< Erase group size multiplier */
DECL|EraseGrSize|member|__IO uint8_t EraseGrSize; /*!< Erase group size */
DECL|EraseOffset|member|__IO uint8_t EraseOffset; /*!< Carries information about the erase offset */
DECL|EraseSize|member|__IO uint16_t EraseSize; /*!< Determines the number of AUs to be erased in one operation */
DECL|EraseTimeout|member|__IO uint8_t EraseTimeout; /*!< Determines the timeout for any number of AU erase */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< SD Card Error codes */
DECL|FileFormatGrouop|member|__IO uint8_t FileFormatGrouop; /*!< File format group */
DECL|FileFormat|member|__IO uint8_t FileFormat; /*!< File format */
DECL|HAL_SD_CARD_DISCONNECTED|enumerator|HAL_SD_CARD_DISCONNECTED = 0x00000008U, /*!< Card is disconnected */
DECL|HAL_SD_CARD_ERROR|enumerator|HAL_SD_CARD_ERROR = 0x000000FFU /*!< Card response Error */
DECL|HAL_SD_CARD_IDENTIFICATION|enumerator|HAL_SD_CARD_IDENTIFICATION = 0x00000002U, /*!< Card is in identification state */
DECL|HAL_SD_CARD_PROGRAMMING|enumerator|HAL_SD_CARD_PROGRAMMING = 0x00000007U, /*!< Card is in programming state */
DECL|HAL_SD_CARD_READY|enumerator|HAL_SD_CARD_READY = 0x00000001U, /*!< Card state is ready */
DECL|HAL_SD_CARD_RECEIVING|enumerator|HAL_SD_CARD_RECEIVING = 0x00000006U, /*!< Card is receiving operation information */
DECL|HAL_SD_CARD_SENDING|enumerator|HAL_SD_CARD_SENDING = 0x00000005U, /*!< Card is sending an operation */
DECL|HAL_SD_CARD_STANDBY|enumerator|HAL_SD_CARD_STANDBY = 0x00000003U, /*!< Card is in standby state */
DECL|HAL_SD_CARD_TRANSFER|enumerator|HAL_SD_CARD_TRANSFER = 0x00000004U, /*!< Card is in transfer state */
DECL|HAL_SD_CardCIDTypeDef|typedef|}HAL_SD_CardCIDTypeDef;
DECL|HAL_SD_CardCSDTypeDef|typedef|}HAL_SD_CardCSDTypeDef;
DECL|HAL_SD_CardInfoTypeDef|typedef|}HAL_SD_CardInfoTypeDef;
DECL|HAL_SD_CardStateTypeDef|typedef|}HAL_SD_CardStateTypeDef;
DECL|HAL_SD_CardStatusTypeDef|typedef|}HAL_SD_CardStatusTypeDef;
DECL|HAL_SD_ERROR_ADDR_MISALIGNED|macro|HAL_SD_ERROR_ADDR_MISALIGNED
DECL|HAL_SD_ERROR_ADDR_OUT_OF_RANGE|macro|HAL_SD_ERROR_ADDR_OUT_OF_RANGE
DECL|HAL_SD_ERROR_AKE_SEQ_ERR|macro|HAL_SD_ERROR_AKE_SEQ_ERR
DECL|HAL_SD_ERROR_BAD_ERASE_PARAM|macro|HAL_SD_ERROR_BAD_ERASE_PARAM
DECL|HAL_SD_ERROR_BLOCK_LEN_ERR|macro|HAL_SD_ERROR_BLOCK_LEN_ERR
DECL|HAL_SD_ERROR_BUSY|macro|HAL_SD_ERROR_BUSY
DECL|HAL_SD_ERROR_CARD_ECC_DISABLED|macro|HAL_SD_ERROR_CARD_ECC_DISABLED
DECL|HAL_SD_ERROR_CARD_ECC_FAILED|macro|HAL_SD_ERROR_CARD_ECC_FAILED
DECL|HAL_SD_ERROR_CC_ERR|macro|HAL_SD_ERROR_CC_ERR
DECL|HAL_SD_ERROR_CID_CSD_OVERWRITE|macro|HAL_SD_ERROR_CID_CSD_OVERWRITE
DECL|HAL_SD_ERROR_CMD_CRC_FAIL|macro|HAL_SD_ERROR_CMD_CRC_FAIL
DECL|HAL_SD_ERROR_CMD_RSP_TIMEOUT|macro|HAL_SD_ERROR_CMD_RSP_TIMEOUT
DECL|HAL_SD_ERROR_COM_CRC_FAILED|macro|HAL_SD_ERROR_COM_CRC_FAILED
DECL|HAL_SD_ERROR_DATA_CRC_FAIL|macro|HAL_SD_ERROR_DATA_CRC_FAIL
DECL|HAL_SD_ERROR_DATA_TIMEOUT|macro|HAL_SD_ERROR_DATA_TIMEOUT
DECL|HAL_SD_ERROR_DMA|macro|HAL_SD_ERROR_DMA
DECL|HAL_SD_ERROR_ERASE_RESET|macro|HAL_SD_ERROR_ERASE_RESET
DECL|HAL_SD_ERROR_ERASE_SEQ_ERR|macro|HAL_SD_ERROR_ERASE_SEQ_ERR
DECL|HAL_SD_ERROR_GENERAL_UNKNOWN_ERR|macro|HAL_SD_ERROR_GENERAL_UNKNOWN_ERR
DECL|HAL_SD_ERROR_ILLEGAL_CMD|macro|HAL_SD_ERROR_ILLEGAL_CMD
DECL|HAL_SD_ERROR_INVALID_VOLTRANGE|macro|HAL_SD_ERROR_INVALID_VOLTRANGE
DECL|HAL_SD_ERROR_LOCK_UNLOCK_FAILED|macro|HAL_SD_ERROR_LOCK_UNLOCK_FAILED
DECL|HAL_SD_ERROR_NONE|macro|HAL_SD_ERROR_NONE
DECL|HAL_SD_ERROR_PARAM|macro|HAL_SD_ERROR_PARAM
DECL|HAL_SD_ERROR_REQUEST_NOT_APPLICABLE|macro|HAL_SD_ERROR_REQUEST_NOT_APPLICABLE
DECL|HAL_SD_ERROR_RX_OVERRUN|macro|HAL_SD_ERROR_RX_OVERRUN
DECL|HAL_SD_ERROR_STREAM_READ_UNDERRUN|macro|HAL_SD_ERROR_STREAM_READ_UNDERRUN
DECL|HAL_SD_ERROR_STREAM_WRITE_OVERRUN|macro|HAL_SD_ERROR_STREAM_WRITE_OVERRUN
DECL|HAL_SD_ERROR_TIMEOUT|macro|HAL_SD_ERROR_TIMEOUT
DECL|HAL_SD_ERROR_TX_UNDERRUN|macro|HAL_SD_ERROR_TX_UNDERRUN
DECL|HAL_SD_ERROR_UNSUPPORTED_FEATURE|macro|HAL_SD_ERROR_UNSUPPORTED_FEATURE
DECL|HAL_SD_ERROR_WP_ERASE_SKIP|macro|HAL_SD_ERROR_WP_ERASE_SKIP
DECL|HAL_SD_ERROR_WRITE_PROT_VIOLATION|macro|HAL_SD_ERROR_WRITE_PROT_VIOLATION
DECL|HAL_SD_STATE_BUSY|enumerator|HAL_SD_STATE_BUSY = 0x00000003U, /*!< SD process ongoing */
DECL|HAL_SD_STATE_ERROR|enumerator|HAL_SD_STATE_ERROR = 0x0000000FU /*!< SD is in error state */
DECL|HAL_SD_STATE_PROGRAMMING|enumerator|HAL_SD_STATE_PROGRAMMING = 0x00000004U, /*!< SD Programming State */
DECL|HAL_SD_STATE_READY|enumerator|HAL_SD_STATE_READY = 0x00000001U, /*!< SD initialized and ready for use */
DECL|HAL_SD_STATE_RECEIVING|enumerator|HAL_SD_STATE_RECEIVING = 0x00000005U, /*!< SD Receinving State */
DECL|HAL_SD_STATE_RESET|enumerator|HAL_SD_STATE_RESET = 0x00000000U, /*!< SD not yet initialized or disabled */
DECL|HAL_SD_STATE_TIMEOUT|enumerator|HAL_SD_STATE_TIMEOUT = 0x00000002U, /*!< SD Timeout state */
DECL|HAL_SD_STATE_TRANSFER|enumerator|HAL_SD_STATE_TRANSFER = 0x00000006U, /*!< SD Transfert State */
DECL|HAL_SD_StateTypeDef|typedef|}HAL_SD_StateTypeDef;
DECL|Init|member|SD_InitTypeDef Init; /*!< SD required parameters */
DECL|Instance|member|SD_TypeDef *Instance; /*!< SD registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< SD locking object */
DECL|LogBlockNbr|member|uint32_t LogBlockNbr; /*!< Specifies the Card logical Capacity in blocks */
DECL|LogBlockSize|member|uint32_t LogBlockSize; /*!< Specifies logical block size in bytes */
DECL|ManDeflECC|member|__IO uint8_t ManDeflECC; /*!< Manufacturer default ECC */
DECL|ManufactDate|member|__IO uint16_t ManufactDate; /*!< Manufacturing Date */
DECL|ManufacturerID|member|__IO uint8_t ManufacturerID; /*!< Manufacturer ID */
DECL|MaxBusClkFrec|member|__IO uint8_t MaxBusClkFrec; /*!< Max. bus clock frequency */
DECL|MaxRdCurrentVDDMax|member|__IO uint8_t MaxRdCurrentVDDMax; /*!< Max. read current @ VDD max */
DECL|MaxRdCurrentVDDMin|member|__IO uint8_t MaxRdCurrentVDDMin; /*!< Max. read current @ VDD min */
DECL|MaxWrBlockLen|member|__IO uint8_t MaxWrBlockLen; /*!< Max. write data block length */
DECL|MaxWrCurrentVDDMax|member|__IO uint8_t MaxWrCurrentVDDMax; /*!< Max. write current @ VDD max */
DECL|MaxWrCurrentVDDMin|member|__IO uint8_t MaxWrCurrentVDDMin; /*!< Max. write current @ VDD min */
DECL|NSAC|member|__IO uint8_t NSAC; /*!< Data read access time 2 in CLK cycles */
DECL|OEM_AppliID|member|__IO uint16_t OEM_AppliID; /*!< OEM/Application ID */
DECL|PartBlockRead|member|__IO uint8_t PartBlockRead; /*!< Partial blocks for read allowed */
DECL|PerformanceMove|member|__IO uint8_t PerformanceMove; /*!< Carries information about the card's performance move */
DECL|PermWrProtect|member|__IO uint8_t PermWrProtect; /*!< Permanent write protection */
DECL|ProdName1|member|__IO uint32_t ProdName1; /*!< Product Name part1 */
DECL|ProdName2|member|__IO uint8_t ProdName2; /*!< Product Name part2 */
DECL|ProdRev|member|__IO uint8_t ProdRev; /*!< Product Revision */
DECL|ProdSN|member|__IO uint32_t ProdSN; /*!< Product Serial Number */
DECL|ProtectedAreaSize|member|__IO uint32_t ProtectedAreaSize; /*!< Carries information about the capacity of protected area */
DECL|RdBlockLen|member|__IO uint8_t RdBlockLen; /*!< Max. read data block length */
DECL|RdBlockMisalign|member|__IO uint8_t RdBlockMisalign; /*!< Read block misalignment */
DECL|RelCardAdd|member|uint32_t RelCardAdd; /*!< Specifies the Relative Card Address */
DECL|Reserved1|member|__IO uint8_t Reserved1; /*!< Reserved */
DECL|Reserved1|member|__IO uint8_t Reserved1; /*!< Reserved1 */
DECL|Reserved2|member|__IO uint8_t Reserved2; /*!< Always 1 */
DECL|Reserved2|member|__IO uint8_t Reserved2; /*!< Reserved */
DECL|Reserved3|member|__IO uint8_t Reserved3; /*!< Reserved */
DECL|Reserved4|member|__IO uint8_t Reserved4; /*!< Always 1 */
DECL|RxXferSize|member|uint32_t RxXferSize; /*!< SD Rx Transfer size */
DECL|SD_CONTEXT_DMA|macro|SD_CONTEXT_DMA
DECL|SD_CONTEXT_IT|macro|SD_CONTEXT_IT
DECL|SD_CONTEXT_NONE|macro|SD_CONTEXT_NONE
DECL|SD_CONTEXT_READ_MULTIPLE_BLOCK|macro|SD_CONTEXT_READ_MULTIPLE_BLOCK
DECL|SD_CONTEXT_READ_SINGLE_BLOCK|macro|SD_CONTEXT_READ_SINGLE_BLOCK
DECL|SD_CONTEXT_WRITE_MULTIPLE_BLOCK|macro|SD_CONTEXT_WRITE_MULTIPLE_BLOCK
DECL|SD_CONTEXT_WRITE_SINGLE_BLOCK|macro|SD_CONTEXT_WRITE_SINGLE_BLOCK
DECL|SD_HandleTypeDef|typedef|}SD_HandleTypeDef;
DECL|SD_InitTypeDef|macro|SD_InitTypeDef
DECL|SD_TypeDef|macro|SD_TypeDef
DECL|SdCard|member|HAL_SD_CardInfoTypeDef SdCard; /*!< SD Card information */
DECL|SecuredMode|member|__IO uint8_t SecuredMode; /*!< Card is in secured mode of operation */
DECL|SpeedClass|member|__IO uint8_t SpeedClass; /*!< Carries information about the speed class of the card */
DECL|State|member|__IO HAL_SD_StateTypeDef State; /*!< SD card State */
DECL|SysSpecVersion|member|__IO uint8_t SysSpecVersion; /*!< System specification version */
DECL|TAAC|member|__IO uint8_t TAAC; /*!< Data read access time 1 */
DECL|TempWrProtect|member|__IO uint8_t TempWrProtect; /*!< Temporary write protection */
DECL|TxXferSize|member|uint32_t TxXferSize; /*!< SD Tx Transfer size */
DECL|WrBlockMisalign|member|__IO uint8_t WrBlockMisalign; /*!< Write block misalignment */
DECL|WrProtectGrEnable|member|__IO uint8_t WrProtectGrEnable; /*!< Write protect group enable */
DECL|WrProtectGrSize|member|__IO uint8_t WrProtectGrSize; /*!< Write protect group size */
DECL|WrSpeedFact|member|__IO uint8_t WrSpeedFact; /*!< Write speed factor */
DECL|WriteBlockPaPartial|member|__IO uint8_t WriteBlockPaPartial; /*!< Partial blocks for write allowed */
DECL|__HAL_SD_CLEAR_FLAG|macro|__HAL_SD_CLEAR_FLAG
DECL|__HAL_SD_CLEAR_IT|macro|__HAL_SD_CLEAR_IT
DECL|__HAL_SD_DISABLE_IT|macro|__HAL_SD_DISABLE_IT
DECL|__HAL_SD_DISABLE|macro|__HAL_SD_DISABLE
DECL|__HAL_SD_DMA_DISABLE|macro|__HAL_SD_DMA_DISABLE
DECL|__HAL_SD_DMA_ENABLE|macro|__HAL_SD_DMA_ENABLE
DECL|__HAL_SD_ENABLE_IT|macro|__HAL_SD_ENABLE_IT
DECL|__HAL_SD_ENABLE|macro|__HAL_SD_ENABLE
DECL|__HAL_SD_GET_FLAG|macro|__HAL_SD_GET_FLAG
DECL|__HAL_SD_GET_IT|macro|__HAL_SD_GET_IT
DECL|__STM32F2xx_HAL_SD_H|macro|__STM32F2xx_HAL_SD_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< SD Rx DMA handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< SD Tx DMA handle parameters */
DECL|pRxBuffPtr|member|uint32_t *pRxBuffPtr; /*!< Pointer to SD Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint32_t *pTxBuffPtr; /*!< Pointer to SD Tx transfer Buffer */
