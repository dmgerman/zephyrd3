DECL|AU_SIZE|member|__IO uint8_t AU_SIZE; /*!< Carries information about the card's allocation unit size */
DECL|CID_CRC|member|__IO uint8_t CID_CRC; /*!< CID CRC */
DECL|CID|member|uint32_t CID[4]; /*!< SD card identification number table */
DECL|CSDStruct|member|__IO uint8_t CSDStruct; /*!< CSD structure */
DECL|CSD_CRC|member|__IO uint8_t CSD_CRC; /*!< CSD CRC */
DECL|CSD|member|uint32_t CSD[4]; /*!< SD card specific data table */
DECL|CardBlockSize|member|uint32_t CardBlockSize; /*!< Card block size */
DECL|CardCapacity|member|uint64_t CardCapacity; /*!< Card capacity */
DECL|CardComdClasses|member|__IO uint16_t CardComdClasses; /*!< Card command classes */
DECL|CardType|member|uint32_t CardType; /*!< SD card type */
DECL|CardType|member|uint8_t CardType; /*!< SD card type */
DECL|ContentProtectAppli|member|__IO uint8_t ContentProtectAppli; /*!< Content protection application */
DECL|CopyFlag|member|__IO uint8_t CopyFlag; /*!< Copy flag (OTP) */
DECL|DAT_BUS_WIDTH|member|__IO uint8_t DAT_BUS_WIDTH; /*!< Shows the currently defined data bus width */
DECL|DSRImpl|member|__IO uint8_t DSRImpl; /*!< DSR implemented */
DECL|DeviceSizeMul|member|__IO uint8_t DeviceSizeMul; /*!< Device size multiplier */
DECL|DeviceSize|member|__IO uint32_t DeviceSize; /*!< Device Size */
DECL|DmaTransferCplt|member|__IO uint32_t DmaTransferCplt; /*!< SD DMA transfer complete flag */
DECL|ECC|member|__IO uint8_t ECC; /*!< ECC code */
DECL|ERASE_OFFSET|member|__IO uint8_t ERASE_OFFSET; /*!< Carries information about the erase offset */
DECL|ERASE_SIZE|member|__IO uint16_t ERASE_SIZE; /*!< Determines the number of AUs to be erased in one operation */
DECL|ERASE_TIMEOUT|member|__IO uint8_t ERASE_TIMEOUT; /*!< Determines the timeout for any number of AU erase */
DECL|EraseGrMul|member|__IO uint8_t EraseGrMul; /*!< Erase group size multiplier */
DECL|EraseGrSize|member|__IO uint8_t EraseGrSize; /*!< Erase group size */
DECL|FileFormatGrouop|member|__IO uint8_t FileFormatGrouop; /*!< File format group */
DECL|FileFormat|member|__IO uint8_t FileFormat; /*!< File format */
DECL|HAL_SD_CIDTypedef|typedef|}HAL_SD_CIDTypedef;
DECL|HAL_SD_CSDTypedef|typedef|}HAL_SD_CSDTypedef;
DECL|HAL_SD_CardInfoTypedef|typedef|}HAL_SD_CardInfoTypedef;
DECL|HAL_SD_CardStateTypedef|typedef|}HAL_SD_CardStateTypedef;
DECL|HAL_SD_CardStatusTypedef|typedef|}HAL_SD_CardStatusTypedef;
DECL|HAL_SD_ErrorTypedef|typedef|}HAL_SD_ErrorTypedef;
DECL|HAL_SD_OperationTypedef|typedef|}HAL_SD_OperationTypedef;
DECL|HAL_SD_TransferStateTypedef|typedef|}HAL_SD_TransferStateTypedef;
DECL|HIGH_CAPACITY_MMC_CARD|macro|HIGH_CAPACITY_MMC_CARD
DECL|HIGH_CAPACITY_SD_CARD|macro|HIGH_CAPACITY_SD_CARD
DECL|HIGH_SPEED_MULTIMEDIA_CARD|macro|HIGH_SPEED_MULTIMEDIA_CARD
DECL|Init|member|SD_InitTypeDef Init; /*!< SD required parameters */
DECL|Instance|member|SD_TypeDef *Instance; /*!< SDMMC register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< SD locking object */
DECL|MULTIMEDIA_CARD|macro|MULTIMEDIA_CARD
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
DECL|PERFORMANCE_MOVE|member|__IO uint8_t PERFORMANCE_MOVE; /*!< Carries information about the card's performance move */
DECL|PartBlockRead|member|__IO uint8_t PartBlockRead; /*!< Partial blocks for read allowed */
DECL|PermWrProtect|member|__IO uint8_t PermWrProtect; /*!< Permanent write protection */
DECL|ProdName1|member|__IO uint32_t ProdName1; /*!< Product Name part1 */
DECL|ProdName2|member|__IO uint8_t ProdName2; /*!< Product Name part2 */
DECL|ProdRev|member|__IO uint8_t ProdRev; /*!< Product Revision */
DECL|ProdSN|member|__IO uint32_t ProdSN; /*!< Product Serial Number */
DECL|RCA|member|uint16_t RCA; /*!< SD relative card address */
DECL|RCA|member|uint32_t RCA; /*!< SD relative card address */
DECL|RdBlockLen|member|__IO uint8_t RdBlockLen; /*!< Max. read data block length */
DECL|RdBlockMisalign|member|__IO uint8_t RdBlockMisalign; /*!< Read block misalignment */
DECL|Reserved1|member|__IO uint8_t Reserved1; /*!< Reserved */
DECL|Reserved1|member|__IO uint8_t Reserved1; /*!< Reserved1 */
DECL|Reserved2|member|__IO uint8_t Reserved2; /*!< Always 1 */
DECL|Reserved2|member|__IO uint8_t Reserved2; /*!< Reserved */
DECL|Reserved3|member|__IO uint8_t Reserved3; /*!< Reserved */
DECL|Reserved4|member|__IO uint8_t Reserved4; /*!< Always 1 */
DECL|SD_ADDR_MISALIGNED|enumerator|SD_ADDR_MISALIGNED = (9), /*!< Misaligned address */
DECL|SD_ADDR_OUT_OF_RANGE|enumerator|SD_ADDR_OUT_OF_RANGE = (28),
DECL|SD_AKE_SEQ_ERROR|enumerator|SD_AKE_SEQ_ERROR = (26), /*!< Error in sequence of authentication. */
DECL|SD_BAD_ERASE_PARAM|enumerator|SD_BAD_ERASE_PARAM = (12), /*!< An invalid selection for erase groups */
DECL|SD_BLOCK_LEN_ERR|enumerator|SD_BLOCK_LEN_ERR = (10), /*!< Transferred block length is not allowed for the card or the number of transferred bytes does not match the block length */
DECL|SD_CARD_DISCONNECTED|enumerator|SD_CARD_DISCONNECTED = ((uint32_t)0x00000008U), /*!< Card is disconnected */
DECL|SD_CARD_ECC_DISABLED|enumerator|SD_CARD_ECC_DISABLED = (24), /*!< Command has been executed without using internal ECC */
DECL|SD_CARD_ECC_FAILED|enumerator|SD_CARD_ECC_FAILED = (17), /*!< Card internal ECC was applied but failed to correct the data */
DECL|SD_CARD_ERROR|enumerator|SD_CARD_ERROR = ((uint32_t)0x000000FFU) /*!< Card is in error state */
DECL|SD_CARD_IDENTIFICATION|enumerator|SD_CARD_IDENTIFICATION = ((uint32_t)0x00000002U), /*!< Card is in identification state */
DECL|SD_CARD_PROGRAMMING|enumerator|SD_CARD_PROGRAMMING = ((uint32_t)0x00000007U), /*!< Card is in programming state */
DECL|SD_CARD_READY|enumerator|SD_CARD_READY = ((uint32_t)0x00000001U), /*!< Card state is ready */
DECL|SD_CARD_RECEIVING|enumerator|SD_CARD_RECEIVING = ((uint32_t)0x00000006U), /*!< Card is receiving operation information */
DECL|SD_CARD_SENDING|enumerator|SD_CARD_SENDING = ((uint32_t)0x00000005U), /*!< Card is sending an operation */
DECL|SD_CARD_STANDBY|enumerator|SD_CARD_STANDBY = ((uint32_t)0x00000003U), /*!< Card is in standby state */
DECL|SD_CARD_TRANSFER|enumerator|SD_CARD_TRANSFER = ((uint32_t)0x00000004U), /*!< Card is in transfer state */
DECL|SD_CARD_TYPE|member|__IO uint16_t SD_CARD_TYPE; /*!< Carries information about card type */
DECL|SD_CC_ERROR|enumerator|SD_CC_ERROR = (18), /*!< Internal card controller error */
DECL|SD_CID_CSD_OVERWRITE|enumerator|SD_CID_CSD_OVERWRITE = (22), /*!< CID/CSD overwrite error */
DECL|SD_CMD_ALL_SEND_CID|macro|SD_CMD_ALL_SEND_CID
DECL|SD_CMD_APP_CMD|macro|SD_CMD_APP_CMD
DECL|SD_CMD_APP_SD_SET_BUSWIDTH|macro|SD_CMD_APP_SD_SET_BUSWIDTH
DECL|SD_CMD_CLR_WRITE_PROT|macro|SD_CMD_CLR_WRITE_PROT
DECL|SD_CMD_CRC_FAIL|enumerator|SD_CMD_CRC_FAIL = (1), /*!< Command response received (but CRC check failed) */
DECL|SD_CMD_ERASE_GRP_END|macro|SD_CMD_ERASE_GRP_END
DECL|SD_CMD_ERASE_GRP_START|macro|SD_CMD_ERASE_GRP_START
DECL|SD_CMD_ERASE|macro|SD_CMD_ERASE
DECL|SD_CMD_FAST_IO|macro|SD_CMD_FAST_IO
DECL|SD_CMD_GEN_CMD|macro|SD_CMD_GEN_CMD
DECL|SD_CMD_GO_IDLE_STATE|macro|SD_CMD_GO_IDLE_STATE
DECL|SD_CMD_GO_INACTIVE_STATE|macro|SD_CMD_GO_INACTIVE_STATE
DECL|SD_CMD_GO_IRQ_STATE|macro|SD_CMD_GO_IRQ_STATE
DECL|SD_CMD_HS_BUSTEST_READ|macro|SD_CMD_HS_BUSTEST_READ
DECL|SD_CMD_HS_BUSTEST_WRITE|macro|SD_CMD_HS_BUSTEST_WRITE
DECL|SD_CMD_HS_SEND_EXT_CSD|macro|SD_CMD_HS_SEND_EXT_CSD
DECL|SD_CMD_HS_SWITCH|macro|SD_CMD_HS_SWITCH
DECL|SD_CMD_LOCK_UNLOCK|macro|SD_CMD_LOCK_UNLOCK
DECL|SD_CMD_NO_CMD|macro|SD_CMD_NO_CMD
DECL|SD_CMD_OUT_OF_RANGE|enumerator|SD_CMD_OUT_OF_RANGE = (8), /*!< Command's argument was out of range. */
DECL|SD_CMD_PROG_CID|macro|SD_CMD_PROG_CID
DECL|SD_CMD_PROG_CSD|macro|SD_CMD_PROG_CSD
DECL|SD_CMD_READ_DAT_UNTIL_STOP|macro|SD_CMD_READ_DAT_UNTIL_STOP
DECL|SD_CMD_READ_MULT_BLOCK|macro|SD_CMD_READ_MULT_BLOCK
DECL|SD_CMD_READ_SINGLE_BLOCK|macro|SD_CMD_READ_SINGLE_BLOCK
DECL|SD_CMD_RSP_TIMEOUT|enumerator|SD_CMD_RSP_TIMEOUT = (3), /*!< Command response timeout */
DECL|SD_CMD_SDMMC_RW_DIRECT|macro|SD_CMD_SDMMC_RW_DIRECT
DECL|SD_CMD_SDMMC_RW_EXTENDED|macro|SD_CMD_SDMMC_RW_EXTENDED
DECL|SD_CMD_SDMMC_SEN_OP_COND|macro|SD_CMD_SDMMC_SEN_OP_COND
DECL|SD_CMD_SD_APP_CHANGE_SECURE_AREA|macro|SD_CMD_SD_APP_CHANGE_SECURE_AREA
DECL|SD_CMD_SD_APP_GET_CER_RES1|macro|SD_CMD_SD_APP_GET_CER_RES1
DECL|SD_CMD_SD_APP_GET_CER_RN2|macro|SD_CMD_SD_APP_GET_CER_RN2
DECL|SD_CMD_SD_APP_GET_MID|macro|SD_CMD_SD_APP_GET_MID
DECL|SD_CMD_SD_APP_GET_MKB|macro|SD_CMD_SD_APP_GET_MKB
DECL|SD_CMD_SD_APP_OP_COND|macro|SD_CMD_SD_APP_OP_COND
DECL|SD_CMD_SD_APP_SECURE_ERASE|macro|SD_CMD_SD_APP_SECURE_ERASE
DECL|SD_CMD_SD_APP_SECURE_READ_MULTIPLE_BLOCK|macro|SD_CMD_SD_APP_SECURE_READ_MULTIPLE_BLOCK
DECL|SD_CMD_SD_APP_SECURE_WRITE_MKB|macro|SD_CMD_SD_APP_SECURE_WRITE_MKB
DECL|SD_CMD_SD_APP_SECURE_WRITE_MULTIPLE_BLOCK|macro|SD_CMD_SD_APP_SECURE_WRITE_MULTIPLE_BLOCK
DECL|SD_CMD_SD_APP_SEND_NUM_WRITE_BLOCKS|macro|SD_CMD_SD_APP_SEND_NUM_WRITE_BLOCKS
DECL|SD_CMD_SD_APP_SEND_SCR|macro|SD_CMD_SD_APP_SEND_SCR
DECL|SD_CMD_SD_APP_SET_CER_RES2|macro|SD_CMD_SD_APP_SET_CER_RES2
DECL|SD_CMD_SD_APP_SET_CER_RN1|macro|SD_CMD_SD_APP_SET_CER_RN1
DECL|SD_CMD_SD_APP_SET_CLR_CARD_DETECT|macro|SD_CMD_SD_APP_SET_CLR_CARD_DETECT
DECL|SD_CMD_SD_APP_STATUS|macro|SD_CMD_SD_APP_STATUS
DECL|SD_CMD_SD_ERASE_GRP_END|macro|SD_CMD_SD_ERASE_GRP_END
DECL|SD_CMD_SD_ERASE_GRP_START|macro|SD_CMD_SD_ERASE_GRP_START
DECL|SD_CMD_SEL_DESEL_CARD|macro|SD_CMD_SEL_DESEL_CARD
DECL|SD_CMD_SEND_CID|macro|SD_CMD_SEND_CID
DECL|SD_CMD_SEND_CSD|macro|SD_CMD_SEND_CSD
DECL|SD_CMD_SEND_OP_COND|macro|SD_CMD_SEND_OP_COND
DECL|SD_CMD_SEND_STATUS|macro|SD_CMD_SEND_STATUS
DECL|SD_CMD_SEND_WRITE_PROT|macro|SD_CMD_SEND_WRITE_PROT
DECL|SD_CMD_SET_BLOCKLEN|macro|SD_CMD_SET_BLOCKLEN
DECL|SD_CMD_SET_BLOCK_COUNT|macro|SD_CMD_SET_BLOCK_COUNT
DECL|SD_CMD_SET_DSR|macro|SD_CMD_SET_DSR
DECL|SD_CMD_SET_REL_ADDR|macro|SD_CMD_SET_REL_ADDR
DECL|SD_CMD_SET_WRITE_PROT|macro|SD_CMD_SET_WRITE_PROT
DECL|SD_CMD_STOP_TRANSMISSION|macro|SD_CMD_STOP_TRANSMISSION
DECL|SD_CMD_WRITE_DAT_UNTIL_STOP|macro|SD_CMD_WRITE_DAT_UNTIL_STOP
DECL|SD_CMD_WRITE_MULT_BLOCK|macro|SD_CMD_WRITE_MULT_BLOCK
DECL|SD_CMD_WRITE_SINGLE_BLOCK|macro|SD_CMD_WRITE_SINGLE_BLOCK
DECL|SD_COM_CRC_FAILED|enumerator|SD_COM_CRC_FAILED = (15), /*!< CRC check of the previous command failed */
DECL|SD_DATA_CRC_FAIL|enumerator|SD_DATA_CRC_FAIL = (2), /*!< Data block sent/received (CRC check failed) */
DECL|SD_DATA_TIMEOUT|enumerator|SD_DATA_TIMEOUT = (4), /*!< Data timeout */
DECL|SD_ERASE_RESET|enumerator|SD_ERASE_RESET = (25), /*!< Erase sequence was cleared before executing because an out of erase sequence command was received */
DECL|SD_ERASE_SEQ_ERR|enumerator|SD_ERASE_SEQ_ERR = (11), /*!< An error in the sequence of erase command occurs. */
DECL|SD_ERROR|enumerator|SD_ERROR = (41),
DECL|SD_GENERAL_UNKNOWN_ERROR|enumerator|SD_GENERAL_UNKNOWN_ERROR = (19), /*!< General or unknown error */
DECL|SD_HandleTypeDef|typedef|}SD_HandleTypeDef;
DECL|SD_ILLEGAL_CMD|enumerator|SD_ILLEGAL_CMD = (16), /*!< Command is not legal for the card state */
DECL|SD_INTERNAL_ERROR|enumerator|SD_INTERNAL_ERROR = (34),
DECL|SD_INVALID_PARAMETER|enumerator|SD_INVALID_PARAMETER = (38),
DECL|SD_INVALID_VOLTRANGE|enumerator|SD_INVALID_VOLTRANGE = (27),
DECL|SD_InitTypeDef|macro|SD_InitTypeDef
DECL|SD_LOCK_UNLOCK_FAILED|enumerator|SD_LOCK_UNLOCK_FAILED = (14), /*!< Sequence or password error has been detected in unlock command or if there was an attempt to access a locked card */
DECL|SD_NOT_CONFIGURED|enumerator|SD_NOT_CONFIGURED = (35),
DECL|SD_OK|enumerator|SD_OK = (0)
DECL|SD_READ_MULTIPLE_BLOCK|enumerator|SD_READ_MULTIPLE_BLOCK = 1U, /*!< Read multiple blocks operation */
DECL|SD_READ_SINGLE_BLOCK|enumerator|SD_READ_SINGLE_BLOCK = 0U, /*!< Read single block operation */
DECL|SD_REQUEST_NOT_APPLICABLE|enumerator|SD_REQUEST_NOT_APPLICABLE = (37),
DECL|SD_REQUEST_PENDING|enumerator|SD_REQUEST_PENDING = (36),
DECL|SD_RX_OVERRUN|enumerator|SD_RX_OVERRUN = (6), /*!< Receive FIFO overrun */
DECL|SD_SDMMC_DISABLED|enumerator|SD_SDMMC_DISABLED = (30),
DECL|SD_SDMMC_FUNCTION_BUSY|enumerator|SD_SDMMC_FUNCTION_BUSY = (31),
DECL|SD_SDMMC_FUNCTION_FAILED|enumerator|SD_SDMMC_FUNCTION_FAILED = (32),
DECL|SD_SDMMC_UNKNOWN_FUNCTION|enumerator|SD_SDMMC_UNKNOWN_FUNCTION = (33),
DECL|SD_START_BIT_ERR|enumerator|SD_START_BIT_ERR = (7), /*!< Start bit not detected on all data signals in wide bus mode */
DECL|SD_STREAM_READ_UNDERRUN|enumerator|SD_STREAM_READ_UNDERRUN = (20), /*!< The card could not sustain data transfer in stream read operation. */
DECL|SD_STREAM_WRITE_OVERRUN|enumerator|SD_STREAM_WRITE_OVERRUN = (21), /*!< The card could not sustain data programming in stream mode */
DECL|SD_SWITCH_ERROR|enumerator|SD_SWITCH_ERROR = (29),
DECL|SD_TRANSFER_BUSY|enumerator|SD_TRANSFER_BUSY = 1, /*!< Transfer is occurring */
DECL|SD_TRANSFER_ERROR|enumerator|SD_TRANSFER_ERROR = 2 /*!< Transfer failed */
DECL|SD_TRANSFER_OK|enumerator|SD_TRANSFER_OK = 0, /*!< Transfer success */
DECL|SD_TX_UNDERRUN|enumerator|SD_TX_UNDERRUN = (5), /*!< Transmit FIFO underrun */
DECL|SD_TypeDef|macro|SD_TypeDef
DECL|SD_UNSUPPORTED_FEATURE|enumerator|SD_UNSUPPORTED_FEATURE = (39),
DECL|SD_UNSUPPORTED_HW|enumerator|SD_UNSUPPORTED_HW = (40),
DECL|SD_WP_ERASE_SKIP|enumerator|SD_WP_ERASE_SKIP = (23), /*!< Only partial address space was erased */
DECL|SD_WRITE_MULTIPLE_BLOCK|enumerator|SD_WRITE_MULTIPLE_BLOCK = 3U /*!< Write multiple blocks operation */
DECL|SD_WRITE_PROT_VIOLATION|enumerator|SD_WRITE_PROT_VIOLATION = (13), /*!< Attempt to program a write protect block */
DECL|SD_WRITE_SINGLE_BLOCK|enumerator|SD_WRITE_SINGLE_BLOCK = 2U, /*!< Write single block operation */
DECL|SD_cid|member|HAL_SD_CIDTypedef SD_cid; /*!< SD card identification number register */
DECL|SD_csd|member|HAL_SD_CSDTypedef SD_csd; /*!< SD card specific data register */
DECL|SECURED_MODE|member|__IO uint8_t SECURED_MODE; /*!< Card is in secured mode of operation */
DECL|SECURE_DIGITAL_IO_CARD|macro|SECURE_DIGITAL_IO_CARD
DECL|SECURE_DIGITAL_IO_COMBO_CARD|macro|SECURE_DIGITAL_IO_COMBO_CARD
DECL|SIZE_OF_PROTECTED_AREA|member|__IO uint32_t SIZE_OF_PROTECTED_AREA; /*!< Carries information about the capacity of protected area */
DECL|SPEED_CLASS|member|__IO uint8_t SPEED_CLASS; /*!< Carries information about the speed class of the card */
DECL|STD_CAPACITY_SD_CARD_V1_1|macro|STD_CAPACITY_SD_CARD_V1_1
DECL|STD_CAPACITY_SD_CARD_V2_0|macro|STD_CAPACITY_SD_CARD_V2_0
DECL|SdOperation|member|__IO uint32_t SdOperation; /*!< SD transfer operation (read/write) */
DECL|SdTransferCplt|member|__IO uint32_t SdTransferCplt; /*!< SD transfer complete flag in non blocking mode */
DECL|SdTransferErr|member|__IO uint32_t SdTransferErr; /*!< SD transfer error flag in non blocking mode */
DECL|SysSpecVersion|member|__IO uint8_t SysSpecVersion; /*!< System specification version */
DECL|TAAC|member|__IO uint8_t TAAC; /*!< Data read access time 1 */
DECL|TempWrProtect|member|__IO uint8_t TempWrProtect; /*!< Temporary write protection */
DECL|WrBlockMisalign|member|__IO uint8_t WrBlockMisalign; /*!< Write block misalignment */
DECL|WrProtectGrEnable|member|__IO uint8_t WrProtectGrEnable; /*!< Write protect group enable */
DECL|WrProtectGrSize|member|__IO uint8_t WrProtectGrSize; /*!< Write protect group size */
DECL|WrSpeedFact|member|__IO uint8_t WrSpeedFact; /*!< Write speed factor */
DECL|WriteBlockPaPartial|member|__IO uint8_t WriteBlockPaPartial; /*!< Partial blocks for write allowed */
DECL|__HAL_SD_SDMMC_CLEAR_FLAG|macro|__HAL_SD_SDMMC_CLEAR_FLAG
DECL|__HAL_SD_SDMMC_CLEAR_IT|macro|__HAL_SD_SDMMC_CLEAR_IT
DECL|__HAL_SD_SDMMC_DISABLE_IT|macro|__HAL_SD_SDMMC_DISABLE_IT
DECL|__HAL_SD_SDMMC_DISABLE|macro|__HAL_SD_SDMMC_DISABLE
DECL|__HAL_SD_SDMMC_DMA_DISABLE|macro|__HAL_SD_SDMMC_DMA_DISABLE
DECL|__HAL_SD_SDMMC_DMA_ENABLE|macro|__HAL_SD_SDMMC_DMA_ENABLE
DECL|__HAL_SD_SDMMC_ENABLE_IT|macro|__HAL_SD_SDMMC_ENABLE_IT
DECL|__HAL_SD_SDMMC_ENABLE|macro|__HAL_SD_SDMMC_ENABLE
DECL|__HAL_SD_SDMMC_GET_FLAG|macro|__HAL_SD_SDMMC_GET_FLAG
DECL|__HAL_SD_SDMMC_GET_IT|macro|__HAL_SD_SDMMC_GET_IT
DECL|__STM32F7xx_HAL_SD_H|macro|__STM32F7xx_HAL_SD_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< SD Rx DMA handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< SD Tx DMA handle parameters */
