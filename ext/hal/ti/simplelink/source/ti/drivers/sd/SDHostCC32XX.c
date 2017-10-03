DECL|CHECKSUM|macro|CHECKSUM
DECL|CMDERROR|macro|CMDERROR
DECL|CMD_ALL_SEND_CID|macro|CMD_ALL_SEND_CID
DECL|CMD_APP_CMD|macro|CMD_APP_CMD
DECL|CMD_DESELECT_CARD|macro|CMD_DESELECT_CARD
DECL|CMD_GO_IDLE_STATE|macro|CMD_GO_IDLE_STATE
DECL|CMD_READ_MULTI_BLK|macro|CMD_READ_MULTI_BLK
DECL|CMD_READ_SINGLE_BLK|macro|CMD_READ_SINGLE_BLK
DECL|CMD_SD_SEND_OP_COND|macro|CMD_SD_SEND_OP_COND
DECL|CMD_SELECT_CARD|macro|CMD_SELECT_CARD
DECL|CMD_SEND_CSD|macro|CMD_SEND_CSD
DECL|CMD_SEND_IF_COND|macro|CMD_SEND_IF_COND
DECL|CMD_SEND_OP_COND|macro|CMD_SEND_OP_COND
DECL|CMD_SEND_REL_ADDR|macro|CMD_SEND_REL_ADDR
DECL|CMD_SET_BLK_CNT|macro|CMD_SET_BLK_CNT
DECL|CMD_STOP_TRANS|macro|CMD_STOP_TRANS
DECL|CMD_WRITE_MULTI_BLK|macro|CMD_WRITE_MULTI_BLK
DECL|CMD_WRITE_SINGLE_BLK|macro|CMD_WRITE_SINGLE_BLK
DECL|DATAERROR|macro|DATAERROR
DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|HIGHCAPSUPPORT|macro|HIGHCAPSUPPORT
DECL|NULLARG|macro|NULLARG
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|PinConfigPinMode|macro|PinConfigPinMode
DECL|PinConfigPin|macro|PinConfigPin
DECL|SDHostCC32XX_close|function|void SDHostCC32XX_close(SD_Handle handle)
DECL|SDHostCC32XX_control|function|int_fast16_t SDHostCC32XX_control(SD_Handle handle, uint_fast32_t cmd, void *arg)
DECL|SDHostCC32XX_getNumSectors|function|uint_fast32_t SDHostCC32XX_getNumSectors(SD_Handle handle)
DECL|SDHostCC32XX_getSectorSize|function|uint_fast32_t SDHostCC32XX_getSectorSize(SD_Handle handle)
DECL|SDHostCC32XX_initialize|function|int_fast16_t SDHostCC32XX_initialize(SD_Handle handle)
DECL|SDHostCC32XX_init|function|void SDHostCC32XX_init(SD_Handle handle)
DECL|SDHostCC32XX_open|function|SD_Handle SDHostCC32XX_open(SD_Handle handle, SD_Params *params)
DECL|SDHostCC32XX_read|function|int_fast16_t SDHostCC32XX_read(SD_Handle handle, void *buf, int_fast32_t sector, uint_fast32_t secCount)
DECL|SDHostCC32XX_write|function|int_fast16_t SDHostCC32XX_write(SD_Handle handle, const void *buf, int_fast32_t sector, uint_fast32_t secCount)
DECL|SECTORSIZE|macro|SECTORSIZE
DECL|SUPPLYVOLTAGE|macro|SUPPLYVOLTAGE
DECL|UDMAREAD|macro|UDMAREAD
DECL|UDMAWRITE|macro|UDMAWRITE
DECL|VOLTAGEWINDOW|macro|VOLTAGEWINDOW
DECL|configDMAChannel|function|static void configDMAChannel(SD_Handle handle, uint_fast32_t channelSel, uint_fast32_t operation)
DECL|deSelectCard|function|static int_fast32_t deSelectCard(SD_Handle handle)
DECL|getPowerMgrId|function|static uint_fast32_t getPowerMgrId(uint_fast32_t baseAddr)
DECL|hwiIntFxn|function|static void hwiIntFxn(uintptr_t handle)
DECL|initHw|function|static void initHw(SD_Handle handle)
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|sdHostCC32XX_fxnTable|variable|sdHostCC32XX_fxnTable
DECL|selectCard|function|static int_fast32_t selectCard(SD_Handle handle)
DECL|send_cmd|function|static int_fast32_t send_cmd(SD_Handle handle, uint_fast32_t cmd, uint_fast32_t arg)
