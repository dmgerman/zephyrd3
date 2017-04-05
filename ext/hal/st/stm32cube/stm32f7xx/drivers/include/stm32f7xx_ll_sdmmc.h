DECL|Argument|member|uint32_t Argument; /*!< Specifies the SDMMC command argument which is sent
DECL|BusWide|member|uint32_t BusWide; /*!< Specifies the SDMMC bus width.
DECL|CLKCR_CLEAR_MASK|macro|CLKCR_CLEAR_MASK
DECL|CMD_CLEAR_MASK|macro|CMD_CLEAR_MASK
DECL|CPSM|member|uint32_t CPSM; /*!< Specifies whether SDMMC Command path state machine (CPSM)
DECL|ClockBypass|member|uint32_t ClockBypass; /*!< Specifies whether the SDMMC Clock divider bypass is
DECL|ClockDiv|member|uint32_t ClockDiv; /*!< Specifies the clock frequency of the SDMMC controller.
DECL|ClockEdge|member|uint32_t ClockEdge; /*!< Specifies the clock transition on which the bit capture is made.
DECL|ClockPowerSave|member|uint32_t ClockPowerSave; /*!< Specifies whether SDMMC Clock output is enabled or
DECL|CmdIndex|member|uint32_t CmdIndex; /*!< Specifies the SDMMC command index. It must be Min_Data = 0 and
DECL|DCTRL_CLEAR_MASK|macro|DCTRL_CLEAR_MASK
DECL|DPSM|member|uint32_t DPSM; /*!< Specifies whether SDMMC Data path state machine (DPSM)
DECL|DataBlockSize|member|uint32_t DataBlockSize; /*!< Specifies the data block size for block transfer.
DECL|DataLength|member|uint32_t DataLength; /*!< Specifies the number of data bytes to be transferred. */
DECL|DataTimeOut|member|uint32_t DataTimeOut; /*!< Specifies the data timeout period in card bus clock periods. */
DECL|HardwareFlowControl|member|uint32_t HardwareFlowControl; /*!< Specifies whether the SDMMC hardware flow control is enabled or disabled.
DECL|IS_SDMMC_BLOCK_SIZE|macro|IS_SDMMC_BLOCK_SIZE
DECL|IS_SDMMC_BUS_WIDE|macro|IS_SDMMC_BUS_WIDE
DECL|IS_SDMMC_CLKDIV|macro|IS_SDMMC_CLKDIV
DECL|IS_SDMMC_CLOCK_BYPASS|macro|IS_SDMMC_CLOCK_BYPASS
DECL|IS_SDMMC_CLOCK_EDGE|macro|IS_SDMMC_CLOCK_EDGE
DECL|IS_SDMMC_CLOCK_POWER_SAVE|macro|IS_SDMMC_CLOCK_POWER_SAVE
DECL|IS_SDMMC_CMD_INDEX|macro|IS_SDMMC_CMD_INDEX
DECL|IS_SDMMC_CPSM|macro|IS_SDMMC_CPSM
DECL|IS_SDMMC_DATA_LENGTH|macro|IS_SDMMC_DATA_LENGTH
DECL|IS_SDMMC_DPSM|macro|IS_SDMMC_DPSM
DECL|IS_SDMMC_HARDWARE_FLOW_CONTROL|macro|IS_SDMMC_HARDWARE_FLOW_CONTROL
DECL|IS_SDMMC_READWAIT_MODE|macro|IS_SDMMC_READWAIT_MODE
DECL|IS_SDMMC_RESPONSE|macro|IS_SDMMC_RESPONSE
DECL|IS_SDMMC_RESP|macro|IS_SDMMC_RESP
DECL|IS_SDMMC_TRANSFER_DIR|macro|IS_SDMMC_TRANSFER_DIR
DECL|IS_SDMMC_TRANSFER_MODE|macro|IS_SDMMC_TRANSFER_MODE
DECL|IS_SDMMC_WAIT|macro|IS_SDMMC_WAIT
DECL|Response|member|uint32_t Response; /*!< Specifies the SDMMC response type.
DECL|SDMMC_0TO7BITS|macro|SDMMC_0TO7BITS
DECL|SDMMC_16TO23BITS|macro|SDMMC_16TO23BITS
DECL|SDMMC_24TO31BITS|macro|SDMMC_24TO31BITS
DECL|SDMMC_8TO15BITS|macro|SDMMC_8TO15BITS
DECL|SDMMC_ALLZERO|macro|SDMMC_ALLZERO
DECL|SDMMC_BUS_WIDE_1B|macro|SDMMC_BUS_WIDE_1B
DECL|SDMMC_BUS_WIDE_4B|macro|SDMMC_BUS_WIDE_4B
DECL|SDMMC_BUS_WIDE_8B|macro|SDMMC_BUS_WIDE_8B
DECL|SDMMC_CARD_LOCKED|macro|SDMMC_CARD_LOCKED
DECL|SDMMC_CCCC_ERASE|macro|SDMMC_CCCC_ERASE
DECL|SDMMC_CHECK_PATTERN|macro|SDMMC_CHECK_PATTERN
DECL|SDMMC_CLOCK_BYPASS_DISABLE|macro|SDMMC_CLOCK_BYPASS_DISABLE
DECL|SDMMC_CLOCK_BYPASS_ENABLE|macro|SDMMC_CLOCK_BYPASS_ENABLE
DECL|SDMMC_CLOCK_EDGE_FALLING|macro|SDMMC_CLOCK_EDGE_FALLING
DECL|SDMMC_CLOCK_EDGE_RISING|macro|SDMMC_CLOCK_EDGE_RISING
DECL|SDMMC_CLOCK_POWER_SAVE_DISABLE|macro|SDMMC_CLOCK_POWER_SAVE_DISABLE
DECL|SDMMC_CLOCK_POWER_SAVE_ENABLE|macro|SDMMC_CLOCK_POWER_SAVE_ENABLE
DECL|SDMMC_CMDTIMEOUT|macro|SDMMC_CMDTIMEOUT
DECL|SDMMC_CMD_ALL_SEND_CID|macro|SDMMC_CMD_ALL_SEND_CID
DECL|SDMMC_CMD_APP_CMD|macro|SDMMC_CMD_APP_CMD
DECL|SDMMC_CMD_APP_SD_SET_BUSWIDTH|macro|SDMMC_CMD_APP_SD_SET_BUSWIDTH
DECL|SDMMC_CMD_CLR_WRITE_PROT|macro|SDMMC_CMD_CLR_WRITE_PROT
DECL|SDMMC_CMD_ERASE_GRP_END|macro|SDMMC_CMD_ERASE_GRP_END
DECL|SDMMC_CMD_ERASE_GRP_START|macro|SDMMC_CMD_ERASE_GRP_START
DECL|SDMMC_CMD_ERASE|macro|SDMMC_CMD_ERASE
DECL|SDMMC_CMD_FAST_IO|macro|SDMMC_CMD_FAST_IO
DECL|SDMMC_CMD_GEN_CMD|macro|SDMMC_CMD_GEN_CMD
DECL|SDMMC_CMD_GO_IDLE_STATE|macro|SDMMC_CMD_GO_IDLE_STATE
DECL|SDMMC_CMD_GO_INACTIVE_STATE|macro|SDMMC_CMD_GO_INACTIVE_STATE
DECL|SDMMC_CMD_GO_IRQ_STATE|macro|SDMMC_CMD_GO_IRQ_STATE
DECL|SDMMC_CMD_HS_BUSTEST_READ|macro|SDMMC_CMD_HS_BUSTEST_READ
DECL|SDMMC_CMD_HS_BUSTEST_WRITE|macro|SDMMC_CMD_HS_BUSTEST_WRITE
DECL|SDMMC_CMD_HS_SEND_EXT_CSD|macro|SDMMC_CMD_HS_SEND_EXT_CSD
DECL|SDMMC_CMD_HS_SWITCH|macro|SDMMC_CMD_HS_SWITCH
DECL|SDMMC_CMD_LOCK_UNLOCK|macro|SDMMC_CMD_LOCK_UNLOCK
DECL|SDMMC_CMD_NO_CMD|macro|SDMMC_CMD_NO_CMD
DECL|SDMMC_CMD_PROG_CID|macro|SDMMC_CMD_PROG_CID
DECL|SDMMC_CMD_PROG_CSD|macro|SDMMC_CMD_PROG_CSD
DECL|SDMMC_CMD_READ_DAT_UNTIL_STOP|macro|SDMMC_CMD_READ_DAT_UNTIL_STOP
DECL|SDMMC_CMD_READ_MULT_BLOCK|macro|SDMMC_CMD_READ_MULT_BLOCK
DECL|SDMMC_CMD_READ_SINGLE_BLOCK|macro|SDMMC_CMD_READ_SINGLE_BLOCK
DECL|SDMMC_CMD_SDMMC_RW_DIRECT|macro|SDMMC_CMD_SDMMC_RW_DIRECT
DECL|SDMMC_CMD_SDMMC_RW_EXTENDED|macro|SDMMC_CMD_SDMMC_RW_EXTENDED
DECL|SDMMC_CMD_SDMMC_SEN_OP_COND|macro|SDMMC_CMD_SDMMC_SEN_OP_COND
DECL|SDMMC_CMD_SD_APP_CHANGE_SECURE_AREA|macro|SDMMC_CMD_SD_APP_CHANGE_SECURE_AREA
DECL|SDMMC_CMD_SD_APP_GET_CER_RES1|macro|SDMMC_CMD_SD_APP_GET_CER_RES1
DECL|SDMMC_CMD_SD_APP_GET_CER_RN2|macro|SDMMC_CMD_SD_APP_GET_CER_RN2
DECL|SDMMC_CMD_SD_APP_GET_MID|macro|SDMMC_CMD_SD_APP_GET_MID
DECL|SDMMC_CMD_SD_APP_GET_MKB|macro|SDMMC_CMD_SD_APP_GET_MKB
DECL|SDMMC_CMD_SD_APP_OP_COND|macro|SDMMC_CMD_SD_APP_OP_COND
DECL|SDMMC_CMD_SD_APP_SECURE_ERASE|macro|SDMMC_CMD_SD_APP_SECURE_ERASE
DECL|SDMMC_CMD_SD_APP_SECURE_READ_MULTIPLE_BLOCK|macro|SDMMC_CMD_SD_APP_SECURE_READ_MULTIPLE_BLOCK
DECL|SDMMC_CMD_SD_APP_SECURE_WRITE_MKB|macro|SDMMC_CMD_SD_APP_SECURE_WRITE_MKB
DECL|SDMMC_CMD_SD_APP_SECURE_WRITE_MULTIPLE_BLOCK|macro|SDMMC_CMD_SD_APP_SECURE_WRITE_MULTIPLE_BLOCK
DECL|SDMMC_CMD_SD_APP_SEND_NUM_WRITE_BLOCKS|macro|SDMMC_CMD_SD_APP_SEND_NUM_WRITE_BLOCKS
DECL|SDMMC_CMD_SD_APP_SEND_SCR|macro|SDMMC_CMD_SD_APP_SEND_SCR
DECL|SDMMC_CMD_SD_APP_SET_CER_RES2|macro|SDMMC_CMD_SD_APP_SET_CER_RES2
DECL|SDMMC_CMD_SD_APP_SET_CER_RN1|macro|SDMMC_CMD_SD_APP_SET_CER_RN1
DECL|SDMMC_CMD_SD_APP_SET_CLR_CARD_DETECT|macro|SDMMC_CMD_SD_APP_SET_CLR_CARD_DETECT
DECL|SDMMC_CMD_SD_APP_STATUS|macro|SDMMC_CMD_SD_APP_STATUS
DECL|SDMMC_CMD_SD_ERASE_GRP_END|macro|SDMMC_CMD_SD_ERASE_GRP_END
DECL|SDMMC_CMD_SD_ERASE_GRP_START|macro|SDMMC_CMD_SD_ERASE_GRP_START
DECL|SDMMC_CMD_SEL_DESEL_CARD|macro|SDMMC_CMD_SEL_DESEL_CARD
DECL|SDMMC_CMD_SEND_CID|macro|SDMMC_CMD_SEND_CID
DECL|SDMMC_CMD_SEND_CSD|macro|SDMMC_CMD_SEND_CSD
DECL|SDMMC_CMD_SEND_OP_COND|macro|SDMMC_CMD_SEND_OP_COND
DECL|SDMMC_CMD_SEND_STATUS|macro|SDMMC_CMD_SEND_STATUS
DECL|SDMMC_CMD_SEND_WRITE_PROT|macro|SDMMC_CMD_SEND_WRITE_PROT
DECL|SDMMC_CMD_SET_BLOCKLEN|macro|SDMMC_CMD_SET_BLOCKLEN
DECL|SDMMC_CMD_SET_BLOCK_COUNT|macro|SDMMC_CMD_SET_BLOCK_COUNT
DECL|SDMMC_CMD_SET_DSR|macro|SDMMC_CMD_SET_DSR
DECL|SDMMC_CMD_SET_REL_ADDR|macro|SDMMC_CMD_SET_REL_ADDR
DECL|SDMMC_CMD_SET_WRITE_PROT|macro|SDMMC_CMD_SET_WRITE_PROT
DECL|SDMMC_CMD_STOP_TRANSMISSION|macro|SDMMC_CMD_STOP_TRANSMISSION
DECL|SDMMC_CMD_WRITE_DAT_UNTIL_STOP|macro|SDMMC_CMD_WRITE_DAT_UNTIL_STOP
DECL|SDMMC_CMD_WRITE_MULT_BLOCK|macro|SDMMC_CMD_WRITE_MULT_BLOCK
DECL|SDMMC_CMD_WRITE_SINGLE_BLOCK|macro|SDMMC_CMD_WRITE_SINGLE_BLOCK
DECL|SDMMC_CPSM_DISABLE|macro|SDMMC_CPSM_DISABLE
DECL|SDMMC_CPSM_ENABLE|macro|SDMMC_CPSM_ENABLE
DECL|SDMMC_CmdInitTypeDef|typedef|}SDMMC_CmdInitTypeDef;
DECL|SDMMC_DATABLOCK_SIZE_1024B|macro|SDMMC_DATABLOCK_SIZE_1024B
DECL|SDMMC_DATABLOCK_SIZE_128B|macro|SDMMC_DATABLOCK_SIZE_128B
DECL|SDMMC_DATABLOCK_SIZE_16384B|macro|SDMMC_DATABLOCK_SIZE_16384B
DECL|SDMMC_DATABLOCK_SIZE_16B|macro|SDMMC_DATABLOCK_SIZE_16B
DECL|SDMMC_DATABLOCK_SIZE_1B|macro|SDMMC_DATABLOCK_SIZE_1B
DECL|SDMMC_DATABLOCK_SIZE_2048B|macro|SDMMC_DATABLOCK_SIZE_2048B
DECL|SDMMC_DATABLOCK_SIZE_256B|macro|SDMMC_DATABLOCK_SIZE_256B
DECL|SDMMC_DATABLOCK_SIZE_2B|macro|SDMMC_DATABLOCK_SIZE_2B
DECL|SDMMC_DATABLOCK_SIZE_32B|macro|SDMMC_DATABLOCK_SIZE_32B
DECL|SDMMC_DATABLOCK_SIZE_4096B|macro|SDMMC_DATABLOCK_SIZE_4096B
DECL|SDMMC_DATABLOCK_SIZE_4B|macro|SDMMC_DATABLOCK_SIZE_4B
DECL|SDMMC_DATABLOCK_SIZE_512B|macro|SDMMC_DATABLOCK_SIZE_512B
DECL|SDMMC_DATABLOCK_SIZE_64B|macro|SDMMC_DATABLOCK_SIZE_64B
DECL|SDMMC_DATABLOCK_SIZE_8192B|macro|SDMMC_DATABLOCK_SIZE_8192B
DECL|SDMMC_DATABLOCK_SIZE_8B|macro|SDMMC_DATABLOCK_SIZE_8B
DECL|SDMMC_DATATIMEOUT|macro|SDMMC_DATATIMEOUT
DECL|SDMMC_DPSM_DISABLE|macro|SDMMC_DPSM_DISABLE
DECL|SDMMC_DPSM_ENABLE|macro|SDMMC_DPSM_ENABLE
DECL|SDMMC_DataInitTypeDef|typedef|}SDMMC_DataInitTypeDef;
DECL|SDMMC_ERROR_ADDR_MISALIGNED|macro|SDMMC_ERROR_ADDR_MISALIGNED
DECL|SDMMC_ERROR_ADDR_OUT_OF_RANGE|macro|SDMMC_ERROR_ADDR_OUT_OF_RANGE
DECL|SDMMC_ERROR_AKE_SEQ_ERR|macro|SDMMC_ERROR_AKE_SEQ_ERR
DECL|SDMMC_ERROR_BAD_ERASE_PARAM|macro|SDMMC_ERROR_BAD_ERASE_PARAM
DECL|SDMMC_ERROR_BLOCK_LEN_ERR|macro|SDMMC_ERROR_BLOCK_LEN_ERR
DECL|SDMMC_ERROR_BUSY|macro|SDMMC_ERROR_BUSY
DECL|SDMMC_ERROR_CARD_ECC_DISABLED|macro|SDMMC_ERROR_CARD_ECC_DISABLED
DECL|SDMMC_ERROR_CARD_ECC_FAILED|macro|SDMMC_ERROR_CARD_ECC_FAILED
DECL|SDMMC_ERROR_CC_ERR|macro|SDMMC_ERROR_CC_ERR
DECL|SDMMC_ERROR_CID_CSD_OVERWRITE|macro|SDMMC_ERROR_CID_CSD_OVERWRITE
DECL|SDMMC_ERROR_CMD_CRC_FAIL|macro|SDMMC_ERROR_CMD_CRC_FAIL
DECL|SDMMC_ERROR_CMD_RSP_TIMEOUT|macro|SDMMC_ERROR_CMD_RSP_TIMEOUT
DECL|SDMMC_ERROR_COM_CRC_FAILED|macro|SDMMC_ERROR_COM_CRC_FAILED
DECL|SDMMC_ERROR_DATA_CRC_FAIL|macro|SDMMC_ERROR_DATA_CRC_FAIL
DECL|SDMMC_ERROR_DATA_TIMEOUT|macro|SDMMC_ERROR_DATA_TIMEOUT
DECL|SDMMC_ERROR_DMA|macro|SDMMC_ERROR_DMA
DECL|SDMMC_ERROR_ERASE_RESET|macro|SDMMC_ERROR_ERASE_RESET
DECL|SDMMC_ERROR_ERASE_SEQ_ERR|macro|SDMMC_ERROR_ERASE_SEQ_ERR
DECL|SDMMC_ERROR_GENERAL_UNKNOWN_ERR|macro|SDMMC_ERROR_GENERAL_UNKNOWN_ERR
DECL|SDMMC_ERROR_ILLEGAL_CMD|macro|SDMMC_ERROR_ILLEGAL_CMD
DECL|SDMMC_ERROR_INVALID_PARAMETER|macro|SDMMC_ERROR_INVALID_PARAMETER
DECL|SDMMC_ERROR_INVALID_VOLTRANGE|macro|SDMMC_ERROR_INVALID_VOLTRANGE
DECL|SDMMC_ERROR_LOCK_UNLOCK_FAILED|macro|SDMMC_ERROR_LOCK_UNLOCK_FAILED
DECL|SDMMC_ERROR_NONE|macro|SDMMC_ERROR_NONE
DECL|SDMMC_ERROR_REQUEST_NOT_APPLICABLE|macro|SDMMC_ERROR_REQUEST_NOT_APPLICABLE
DECL|SDMMC_ERROR_RX_OVERRUN|macro|SDMMC_ERROR_RX_OVERRUN
DECL|SDMMC_ERROR_STREAM_READ_UNDERRUN|macro|SDMMC_ERROR_STREAM_READ_UNDERRUN
DECL|SDMMC_ERROR_STREAM_WRITE_OVERRUN|macro|SDMMC_ERROR_STREAM_WRITE_OVERRUN
DECL|SDMMC_ERROR_TIMEOUT|macro|SDMMC_ERROR_TIMEOUT
DECL|SDMMC_ERROR_TX_UNDERRUN|macro|SDMMC_ERROR_TX_UNDERRUN
DECL|SDMMC_ERROR_UNSUPPORTED_FEATURE|macro|SDMMC_ERROR_UNSUPPORTED_FEATURE
DECL|SDMMC_ERROR_WP_ERASE_SKIP|macro|SDMMC_ERROR_WP_ERASE_SKIP
DECL|SDMMC_ERROR_WRITE_PROT_VIOLATION|macro|SDMMC_ERROR_WRITE_PROT_VIOLATION
DECL|SDMMC_FLAG_CCRCFAIL|macro|SDMMC_FLAG_CCRCFAIL
DECL|SDMMC_FLAG_CMDACT|macro|SDMMC_FLAG_CMDACT
DECL|SDMMC_FLAG_CMDREND|macro|SDMMC_FLAG_CMDREND
DECL|SDMMC_FLAG_CMDSENT|macro|SDMMC_FLAG_CMDSENT
DECL|SDMMC_FLAG_CTIMEOUT|macro|SDMMC_FLAG_CTIMEOUT
DECL|SDMMC_FLAG_DATAEND|macro|SDMMC_FLAG_DATAEND
DECL|SDMMC_FLAG_DBCKEND|macro|SDMMC_FLAG_DBCKEND
DECL|SDMMC_FLAG_DCRCFAIL|macro|SDMMC_FLAG_DCRCFAIL
DECL|SDMMC_FLAG_DTIMEOUT|macro|SDMMC_FLAG_DTIMEOUT
DECL|SDMMC_FLAG_RXACT|macro|SDMMC_FLAG_RXACT
DECL|SDMMC_FLAG_RXDAVL|macro|SDMMC_FLAG_RXDAVL
DECL|SDMMC_FLAG_RXFIFOE|macro|SDMMC_FLAG_RXFIFOE
DECL|SDMMC_FLAG_RXFIFOF|macro|SDMMC_FLAG_RXFIFOF
DECL|SDMMC_FLAG_RXFIFOHF|macro|SDMMC_FLAG_RXFIFOHF
DECL|SDMMC_FLAG_RXOVERR|macro|SDMMC_FLAG_RXOVERR
DECL|SDMMC_FLAG_SDIOIT|macro|SDMMC_FLAG_SDIOIT
DECL|SDMMC_FLAG_TXACT|macro|SDMMC_FLAG_TXACT
DECL|SDMMC_FLAG_TXDAVL|macro|SDMMC_FLAG_TXDAVL
DECL|SDMMC_FLAG_TXFIFOE|macro|SDMMC_FLAG_TXFIFOE
DECL|SDMMC_FLAG_TXFIFOF|macro|SDMMC_FLAG_TXFIFOF
DECL|SDMMC_FLAG_TXFIFOHE|macro|SDMMC_FLAG_TXFIFOHE
DECL|SDMMC_FLAG_TXUNDERR|macro|SDMMC_FLAG_TXUNDERR
DECL|SDMMC_HALFFIFOBYTES|macro|SDMMC_HALFFIFOBYTES
DECL|SDMMC_HALFFIFO|macro|SDMMC_HALFFIFO
DECL|SDMMC_HARDWARE_FLOW_CONTROL_DISABLE|macro|SDMMC_HARDWARE_FLOW_CONTROL_DISABLE
DECL|SDMMC_HARDWARE_FLOW_CONTROL_ENABLE|macro|SDMMC_HARDWARE_FLOW_CONTROL_ENABLE
DECL|SDMMC_HIGH_CAPACITY|macro|SDMMC_HIGH_CAPACITY
DECL|SDMMC_INIT_CLK_DIV|macro|SDMMC_INIT_CLK_DIV
DECL|SDMMC_IT_CCRCFAIL|macro|SDMMC_IT_CCRCFAIL
DECL|SDMMC_IT_CMDACT|macro|SDMMC_IT_CMDACT
DECL|SDMMC_IT_CMDREND|macro|SDMMC_IT_CMDREND
DECL|SDMMC_IT_CMDSENT|macro|SDMMC_IT_CMDSENT
DECL|SDMMC_IT_CTIMEOUT|macro|SDMMC_IT_CTIMEOUT
DECL|SDMMC_IT_DATAEND|macro|SDMMC_IT_DATAEND
DECL|SDMMC_IT_DBCKEND|macro|SDMMC_IT_DBCKEND
DECL|SDMMC_IT_DCRCFAIL|macro|SDMMC_IT_DCRCFAIL
DECL|SDMMC_IT_DTIMEOUT|macro|SDMMC_IT_DTIMEOUT
DECL|SDMMC_IT_RXACT|macro|SDMMC_IT_RXACT
DECL|SDMMC_IT_RXDAVL|macro|SDMMC_IT_RXDAVL
DECL|SDMMC_IT_RXFIFOE|macro|SDMMC_IT_RXFIFOE
DECL|SDMMC_IT_RXFIFOF|macro|SDMMC_IT_RXFIFOF
DECL|SDMMC_IT_RXFIFOHF|macro|SDMMC_IT_RXFIFOHF
DECL|SDMMC_IT_RXOVERR|macro|SDMMC_IT_RXOVERR
DECL|SDMMC_IT_SDIOIT|macro|SDMMC_IT_SDIOIT
DECL|SDMMC_IT_TXACT|macro|SDMMC_IT_TXACT
DECL|SDMMC_IT_TXDAVL|macro|SDMMC_IT_TXDAVL
DECL|SDMMC_IT_TXFIFOE|macro|SDMMC_IT_TXFIFOE
DECL|SDMMC_IT_TXFIFOF|macro|SDMMC_IT_TXFIFOF
DECL|SDMMC_IT_TXFIFOHE|macro|SDMMC_IT_TXFIFOHE
DECL|SDMMC_IT_TXUNDERR|macro|SDMMC_IT_TXUNDERR
DECL|SDMMC_InitTypeDef|typedef|}SDMMC_InitTypeDef;
DECL|SDMMC_MAXERASETIMEOUT|macro|SDMMC_MAXERASETIMEOUT
DECL|SDMMC_MAX_DATA_LENGTH|macro|SDMMC_MAX_DATA_LENGTH
DECL|SDMMC_MAX_TRIAL|macro|SDMMC_MAX_TRIAL
DECL|SDMMC_MAX_VOLT_TRIAL|macro|SDMMC_MAX_VOLT_TRIAL
DECL|SDMMC_OCR_ADDR_MISALIGNED|macro|SDMMC_OCR_ADDR_MISALIGNED
DECL|SDMMC_OCR_ADDR_OUT_OF_RANGE|macro|SDMMC_OCR_ADDR_OUT_OF_RANGE
DECL|SDMMC_OCR_AKE_SEQ_ERROR|macro|SDMMC_OCR_AKE_SEQ_ERROR
DECL|SDMMC_OCR_BAD_ERASE_PARAM|macro|SDMMC_OCR_BAD_ERASE_PARAM
DECL|SDMMC_OCR_BLOCK_LEN_ERR|macro|SDMMC_OCR_BLOCK_LEN_ERR
DECL|SDMMC_OCR_CARD_ECC_DISABLED|macro|SDMMC_OCR_CARD_ECC_DISABLED
DECL|SDMMC_OCR_CARD_ECC_FAILED|macro|SDMMC_OCR_CARD_ECC_FAILED
DECL|SDMMC_OCR_CC_ERROR|macro|SDMMC_OCR_CC_ERROR
DECL|SDMMC_OCR_CID_CSD_OVERWRITE|macro|SDMMC_OCR_CID_CSD_OVERWRITE
DECL|SDMMC_OCR_COM_CRC_FAILED|macro|SDMMC_OCR_COM_CRC_FAILED
DECL|SDMMC_OCR_ERASE_RESET|macro|SDMMC_OCR_ERASE_RESET
DECL|SDMMC_OCR_ERASE_SEQ_ERR|macro|SDMMC_OCR_ERASE_SEQ_ERR
DECL|SDMMC_OCR_ERRORBITS|macro|SDMMC_OCR_ERRORBITS
DECL|SDMMC_OCR_GENERAL_UNKNOWN_ERROR|macro|SDMMC_OCR_GENERAL_UNKNOWN_ERROR
DECL|SDMMC_OCR_ILLEGAL_CMD|macro|SDMMC_OCR_ILLEGAL_CMD
DECL|SDMMC_OCR_LOCK_UNLOCK_FAILED|macro|SDMMC_OCR_LOCK_UNLOCK_FAILED
DECL|SDMMC_OCR_STREAM_READ_UNDERRUN|macro|SDMMC_OCR_STREAM_READ_UNDERRUN
DECL|SDMMC_OCR_STREAM_WRITE_OVERRUN|macro|SDMMC_OCR_STREAM_WRITE_OVERRUN
DECL|SDMMC_OCR_WP_ERASE_SKIP|macro|SDMMC_OCR_WP_ERASE_SKIP
DECL|SDMMC_OCR_WRITE_PROT_VIOLATION|macro|SDMMC_OCR_WRITE_PROT_VIOLATION
DECL|SDMMC_R6_COM_CRC_FAILED|macro|SDMMC_R6_COM_CRC_FAILED
DECL|SDMMC_R6_GENERAL_UNKNOWN_ERROR|macro|SDMMC_R6_GENERAL_UNKNOWN_ERROR
DECL|SDMMC_R6_ILLEGAL_CMD|macro|SDMMC_R6_ILLEGAL_CMD
DECL|SDMMC_READ_WAIT_MODE_CLK|macro|SDMMC_READ_WAIT_MODE_CLK
DECL|SDMMC_READ_WAIT_MODE_DATA2|macro|SDMMC_READ_WAIT_MODE_DATA2
DECL|SDMMC_RESP1|macro|SDMMC_RESP1
DECL|SDMMC_RESP2|macro|SDMMC_RESP2
DECL|SDMMC_RESP3|macro|SDMMC_RESP3
DECL|SDMMC_RESP4|macro|SDMMC_RESP4
DECL|SDMMC_RESPONSE_LONG|macro|SDMMC_RESPONSE_LONG
DECL|SDMMC_RESPONSE_NO|macro|SDMMC_RESPONSE_NO
DECL|SDMMC_RESPONSE_SHORT|macro|SDMMC_RESPONSE_SHORT
DECL|SDMMC_SINGLE_BUS_SUPPORT|macro|SDMMC_SINGLE_BUS_SUPPORT
DECL|SDMMC_STATIC_FLAGS|macro|SDMMC_STATIC_FLAGS
DECL|SDMMC_STD_CAPACITY|macro|SDMMC_STD_CAPACITY
DECL|SDMMC_TRANSFER_CLK_DIV|macro|SDMMC_TRANSFER_CLK_DIV
DECL|SDMMC_TRANSFER_DIR_TO_CARD|macro|SDMMC_TRANSFER_DIR_TO_CARD
DECL|SDMMC_TRANSFER_DIR_TO_SDMMC|macro|SDMMC_TRANSFER_DIR_TO_SDMMC
DECL|SDMMC_TRANSFER_MODE_BLOCK|macro|SDMMC_TRANSFER_MODE_BLOCK
DECL|SDMMC_TRANSFER_MODE_STREAM|macro|SDMMC_TRANSFER_MODE_STREAM
DECL|SDMMC_VOLTAGE_WINDOW_SD|macro|SDMMC_VOLTAGE_WINDOW_SD
DECL|SDMMC_WAIT_IT|macro|SDMMC_WAIT_IT
DECL|SDMMC_WAIT_NO|macro|SDMMC_WAIT_NO
DECL|SDMMC_WAIT_PEND|macro|SDMMC_WAIT_PEND
DECL|SDMMC_WIDE_BUS_SUPPORT|macro|SDMMC_WIDE_BUS_SUPPORT
DECL|TransferDir|member|uint32_t TransferDir; /*!< Specifies the data transfer direction, whether the transfer
DECL|TransferMode|member|uint32_t TransferMode; /*!< Specifies whether data transfer is in stream or block mode.
DECL|WaitForInterrupt|member|uint32_t WaitForInterrupt; /*!< Specifies whether SDMMC wait for interrupt request is
DECL|__SDMMC_CLEAR_FLAG|macro|__SDMMC_CLEAR_FLAG
DECL|__SDMMC_CLEAR_IT|macro|__SDMMC_CLEAR_IT
DECL|__SDMMC_DISABLE_IT|macro|__SDMMC_DISABLE_IT
DECL|__SDMMC_DISABLE|macro|__SDMMC_DISABLE
DECL|__SDMMC_DMA_DISABLE|macro|__SDMMC_DMA_DISABLE
DECL|__SDMMC_DMA_ENABLE|macro|__SDMMC_DMA_ENABLE
DECL|__SDMMC_ENABLE_IT|macro|__SDMMC_ENABLE_IT
DECL|__SDMMC_ENABLE|macro|__SDMMC_ENABLE
DECL|__SDMMC_GET_FLAG|macro|__SDMMC_GET_FLAG
DECL|__SDMMC_GET_IT|macro|__SDMMC_GET_IT
DECL|__SDMMC_OPERATION_DISABLE|macro|__SDMMC_OPERATION_DISABLE
DECL|__SDMMC_OPERATION_ENABLE|macro|__SDMMC_OPERATION_ENABLE
DECL|__SDMMC_START_READWAIT_DISABLE|macro|__SDMMC_START_READWAIT_DISABLE
DECL|__SDMMC_START_READWAIT_ENABLE|macro|__SDMMC_START_READWAIT_ENABLE
DECL|__SDMMC_STOP_READWAIT_DISABLE|macro|__SDMMC_STOP_READWAIT_DISABLE
DECL|__SDMMC_STOP_READWAIT_ENABLE|macro|__SDMMC_STOP_READWAIT_ENABLE
DECL|__SDMMC_SUSPEND_CMD_DISABLE|macro|__SDMMC_SUSPEND_CMD_DISABLE
DECL|__SDMMC_SUSPEND_CMD_ENABLE|macro|__SDMMC_SUSPEND_CMD_ENABLE
DECL|__STM32F7xx_LL_SDMMC_H|macro|__STM32F7xx_LL_SDMMC_H
