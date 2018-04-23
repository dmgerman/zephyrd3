DECL|FCS_SIZE|macro|FCS_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dataInit|function|static void dataInit(void)
DECL|otPlatRadioAddSrcMatchExtEntry|function|otError otPlatRadioAddSrcMatchExtEntry(otInstance *aInstance, const otExtAddress *aExtAddress)
DECL|otPlatRadioAddSrcMatchShortEntry|function|otError otPlatRadioAddSrcMatchShortEntry(otInstance *aInstance, const u16_t aShortAddress)
DECL|otPlatRadioClearSrcMatchExtEntries|function|void otPlatRadioClearSrcMatchExtEntries(otInstance *aInstance)
DECL|otPlatRadioClearSrcMatchExtEntry|function|otError otPlatRadioClearSrcMatchExtEntry(otInstance *aInstance, const otExtAddress *aExtAddress)
DECL|otPlatRadioClearSrcMatchShortEntries|function|void otPlatRadioClearSrcMatchShortEntries(otInstance *aInstance)
DECL|otPlatRadioClearSrcMatchShortEntry|function|otError otPlatRadioClearSrcMatchShortEntry(otInstance *aInstance, const u16_t aShortAddress)
DECL|otPlatRadioDisable|function|otError otPlatRadioDisable(otInstance *aInstance)
DECL|otPlatRadioEnableSrcMatch|function|void otPlatRadioEnableSrcMatch(otInstance *aInstance, bool aEnable)
DECL|otPlatRadioEnable|function|otError otPlatRadioEnable(otInstance *aInstance)
DECL|otPlatRadioEnergyScan|function|otError otPlatRadioEnergyScan(otInstance *aInstance, u8_t aScanChannel, u16_t aScanDuration)
DECL|otPlatRadioGetCaps|function|otRadioCaps otPlatRadioGetCaps(otInstance *aInstance)
DECL|otPlatRadioGetPromiscuous|function|bool otPlatRadioGetPromiscuous(otInstance *aInstance)
DECL|otPlatRadioGetReceiveSensitivity|function|int8_t otPlatRadioGetReceiveSensitivity(otInstance *aInstance)
DECL|otPlatRadioGetRssi|function|int8_t otPlatRadioGetRssi(otInstance *aInstance)
DECL|otPlatRadioGetTransmitBuffer|function|otRadioFrame *otPlatRadioGetTransmitBuffer(otInstance *aInstance)
DECL|otPlatRadioGetTransmitPower|function|otError otPlatRadioGetTransmitPower(otInstance *aInstance, int8_t *aPower)
DECL|otPlatRadioIsEnabled|function|bool otPlatRadioIsEnabled(otInstance *aInstance)
DECL|otPlatRadioReceive|function|otError otPlatRadioReceive(otInstance *aInstance, u8_t aChannel)
DECL|otPlatRadioSetExtendedAddress|function|void otPlatRadioSetExtendedAddress(otInstance *aInstance, const otExtAddress *aExtAddress)
DECL|otPlatRadioSetPanId|function|void otPlatRadioSetPanId(otInstance *aInstance, u16_t aPanId)
DECL|otPlatRadioSetPromiscuous|function|void otPlatRadioSetPromiscuous(otInstance *aInstance, bool aEnable)
DECL|otPlatRadioSetShortAddress|function|void otPlatRadioSetShortAddress(otInstance *aInstance, u16_t aShortAddress)
DECL|otPlatRadioSetTransmitPower|function|otError otPlatRadioSetTransmitPower(otInstance *aInstance, int8_t aPower)
DECL|otPlatRadioSleep|function|otError otPlatRadioSleep(otInstance *aInstance)
DECL|otPlatRadioTransmit|function|otError otPlatRadioTransmit(otInstance *aInstance, otRadioFrame *aPacket)
DECL|platformRadioInit|function|void platformRadioInit(void)
DECL|platformRadioProcess|function|void platformRadioProcess(otInstance *aInstance)
DECL|radio_api|variable|radio_api
DECL|radio_dev|variable|radio_dev
DECL|sState|variable|sState
DECL|sTransmitFrame|variable|sTransmitFrame
DECL|tx_payload|variable|tx_payload
DECL|tx_pkt|variable|tx_pkt
DECL|tx_power|variable|tx_power
