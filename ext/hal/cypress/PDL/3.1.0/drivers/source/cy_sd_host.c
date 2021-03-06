DECL|Cy_SD_Host_AbortTransfer|function|cy_en_sd_host_status_t Cy_SD_Host_AbortTransfer(SDHC_Type *base, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_DeInit|function|cy_en_sd_host_status_t Cy_SD_Host_DeInit(SDHC_Type *base)
DECL|Cy_SD_Host_Disable|function|cy_en_sd_host_status_t Cy_SD_Host_Disable(SDHC_Type *base)
DECL|Cy_SD_Host_Enable|function|cy_en_sd_host_status_t Cy_SD_Host_Enable(SDHC_Type *base)
DECL|Cy_SD_Host_Erase|function|cy_en_sd_host_status_t Cy_SD_Host_Erase(SDHC_Type *base, uint32_t startAddr, uint32_t endAddr, cy_en_sd_host_erase_type_t eraseType, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_ErrorReset|function|static void Cy_SD_Host_ErrorReset(SDHC_Type *base)
DECL|Cy_SD_Host_GetCardStatus|function|uint32_t Cy_SD_Host_GetCardStatus(SDHC_Type *base, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_GetCid|function|cy_en_sd_host_status_t Cy_SD_Host_GetCid(SDHC_Type *base, uint32_t *cid)
DECL|Cy_SD_Host_GetCsd|function|cy_en_sd_host_status_t Cy_SD_Host_GetCsd(SDHC_Type *base, uint32_t *csd, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_GetExtCsd|function|cy_en_sd_host_status_t Cy_SD_Host_GetExtCsd(SDHC_Type *base, uint32_t *extCsd, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_GetOcr|function|uint32_t Cy_SD_Host_GetOcr(SDHC_Type *base, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_GetPresentState|function|uint32_t Cy_SD_Host_GetPresentState(SDHC_Type const *base)
DECL|Cy_SD_Host_GetRca|function|uint32_t Cy_SD_Host_GetRca(SDHC_Type *base)
DECL|Cy_SD_Host_GetResponse|function|cy_en_sd_host_status_t Cy_SD_Host_GetResponse(SDHC_Type const *base, uint32_t *responsePtr, bool largeResponse)
DECL|Cy_SD_Host_GetScr|function|cy_en_sd_host_status_t Cy_SD_Host_GetScr(SDHC_Type *base, uint32_t *scr, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_GetSdStatus|function|cy_en_sd_host_status_t Cy_SD_Host_GetSdStatus(SDHC_Type *base, uint32_t *sdStatus, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_InitCard|function|cy_en_sd_host_status_t Cy_SD_Host_InitCard(SDHC_Type *base, cy_stc_sd_host_sd_card_config_t *config, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_InitDataTransfer|function|cy_en_sd_host_status_t Cy_SD_Host_InitDataTransfer(SDHC_Type *base, cy_stc_sd_host_data_config_t const *dataConfig, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_Init|function|cy_en_sd_host_status_t Cy_SD_Host_Init(SDHC_Type *base, const cy_stc_sd_host_init_config_t *config, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_IoOcr|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_IoOcr(SDHC_Type *base, bool lowVoltageSignaling, uint32_t *s18A, uint32_t *sdio, bool *mp,
DECL|Cy_SD_Host_MmcOpsSendOpCond|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_MmcOpsSendOpCond(SDHC_Type *base, uint32_t *ocr, uint32_t cmdArgument, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_NormalReset|function|static void Cy_SD_Host_NormalReset(SDHC_Type *base)
DECL|Cy_SD_Host_OpsGoIdle|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsGoIdle(SDHC_Type *base)
DECL|Cy_SD_Host_OpsProgramCsd|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_OpsProgramCsd(SDHC_Type *base, uint32_t csd, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_OpsSdSendOpCond|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsSdSendOpCond(SDHC_Type *base, uint32_t *ocr, uint32_t cmdArgument, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_OpsSdioSendOpCond|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsSdioSendOpCond(SDHC_Type *base, uint32_t *ocr, uint32_t cmdArgument)
DECL|Cy_SD_Host_OpsSelectCard|function|cy_en_sd_host_status_t Cy_SD_Host_OpsSelectCard(SDHC_Type *base, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_OpsSendAppCmd|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsSendAppCmd(SDHC_Type *base, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_OpsSendIfCond|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_OpsSendIfCond(SDHC_Type *base, uint32_t cmdArgument, bool noResponse)
DECL|Cy_SD_Host_OpsSendIoRwDirectCmd|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsSendIoRwDirectCmd(SDHC_Type *base, uint32_t rwFlag, uint32_t functionNumber, uint32_t rawFlag, uint32_t registerAaddress,
DECL|Cy_SD_Host_OpsSetBlockCount|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_OpsSetBlockCount(SDHC_Type *base, bool reliableWrite, uint32_t blockNum)
DECL|Cy_SD_Host_OpsSetSdBusWidth|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_OpsSetSdBusWidth(SDHC_Type *base, uint32_t cmdArgument, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_OpsSwitchFunc|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsSwitchFunc(SDHC_Type *base, uint32_t cmdArgument)
DECL|Cy_SD_Host_OpsVoltageSwitch|function|static cy_en_sd_host_status_t Cy_SD_Host_OpsVoltageSwitch(SDHC_Type *base, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_PollBufferReadReady|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_PollBufferReadReady(SDHC_Type *base)
DECL|Cy_SD_Host_PollBufferWriteReady|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_PollBufferWriteReady(SDHC_Type *base)
DECL|Cy_SD_Host_PollCmdComplete|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_PollCmdComplete(SDHC_Type *base)
DECL|Cy_SD_Host_PollCmdLineFree|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_PollCmdLineFree(SDHC_Type const *base)
DECL|Cy_SD_Host_PollDataLineFree|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_PollDataLineFree(SDHC_Type const *base)
DECL|Cy_SD_Host_PollTransferComplete|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_PollTransferComplete(SDHC_Type *base)
DECL|Cy_SD_Host_Read|function|cy_en_sd_host_status_t Cy_SD_Host_Read(SDHC_Type *base, cy_stc_sd_host_write_read_config_t *config, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_SdCardChangeClock|function|cy_en_sd_host_status_t Cy_SD_Host_SdCardChangeClock(SDHC_Type *base, uint32_t frequency)
DECL|Cy_SD_Host_SdOcr|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_SdOcr(SDHC_Type *base, bool lowVoltageSignaling, uint32_t *s18A, bool *mp, bool f8,
DECL|Cy_SD_Host_SelBusVoltage|function|cy_en_sd_host_status_t Cy_SD_Host_SelBusVoltage(SDHC_Type *base, bool enable18VSignal, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_SendCommand|function|cy_en_sd_host_status_t Cy_SD_Host_SendCommand(SDHC_Type *base, cy_stc_sd_host_cmd_config_t const *config)
DECL|Cy_SD_Host_SetBusSpeedMode|function|cy_en_sd_host_status_t Cy_SD_Host_SetBusSpeedMode(SDHC_Type *base, cy_en_sd_host_bus_speed_mode_t speedMode, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_SetBusWidth|function|cy_en_sd_host_status_t Cy_SD_Host_SetBusWidth(SDHC_Type *base, cy_en_sd_host_bus_width_t width, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_SetHostBusWidth|function|cy_en_sd_host_status_t Cy_SD_Host_SetHostBusWidth(SDHC_Type *base, cy_en_sd_host_bus_width_t width)
DECL|Cy_SD_Host_SetHostSpeedMode|function|cy_en_sd_host_status_t Cy_SD_Host_SetHostSpeedMode(SDHC_Type *base, cy_en_sd_host_bus_speed_mode_t speedMode)
DECL|Cy_SD_Host_SetSdClkDiv|function|cy_en_sd_host_status_t Cy_SD_Host_SetSdClkDiv(SDHC_Type *base, uint16_t clkDiv)
DECL|Cy_SD_Host_SoftwareReset|function|void Cy_SD_Host_SoftwareReset(SDHC_Type *base, cy_en_sd_host_reset_t reset)
DECL|Cy_SD_Host_VoltageCheck|function|__STATIC_INLINE bool Cy_SD_Host_VoltageCheck(SDHC_Type *base)
DECL|Cy_SD_Host_WriteProtect|function|cy_en_sd_host_status_t Cy_SD_Host_WriteProtect(SDHC_Type *base, bool permenantWriteProtect, cy_stc_sd_host_context_t *context)
DECL|Cy_SD_Host_Write|function|cy_en_sd_host_status_t Cy_SD_Host_Write(SDHC_Type *base, cy_stc_sd_host_write_read_config_t *config, cy_stc_sd_host_context_t const *context)
DECL|Cy_SD_Host_eMMC_InitCard|function|__STATIC_INLINE cy_en_sd_host_status_t Cy_SD_Host_eMMC_InitCard(SDHC_Type *base, cy_stc_sd_host_sd_card_config_t *config, cy_stc_sd_host_context_t *context)
DECL|SdcmdRxData|function|static cy_en_sd_host_status_t SdcmdRxData(SDHC_Type *base, cy_stc_sd_host_data_config_t *pcmd)
