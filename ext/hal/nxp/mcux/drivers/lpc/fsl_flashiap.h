DECL|FSL_FLASHIAP_DRIVER_VERSION|macro|FSL_FLASHIAP_DRIVER_VERSION
DECL|IAP_ENTRY_T|typedef|typedef void (*IAP_ENTRY_T)(uint32_t cmd[5], uint32_t stat[4]);
DECL|_FSL_FLASHIAP_H_|macro|_FSL_FLASHIAP_H_
DECL|_flashiap_commands|enum|enum _flashiap_commands
DECL|_flashiap_status|enum|enum _flashiap_status
DECL|iap_entry|function|static inline void iap_entry(uint32_t *cmd_param, uint32_t *status_result)
DECL|kIapCmd_FLASHIAP_BlankCheckSector|enumerator|kIapCmd_FLASHIAP_BlankCheckSector = 53U, /*!< Blank check sector */
DECL|kIapCmd_FLASHIAP_Compare|enumerator|kIapCmd_FLASHIAP_Compare = 56U, /*!< Compare */
DECL|kIapCmd_FLASHIAP_CopyRamToFlash|enumerator|kIapCmd_FLASHIAP_CopyRamToFlash = 51U, /*!< Copy RAM to flash */
DECL|kIapCmd_FLASHIAP_ErasePage|enumerator|kIapCmd_FLASHIAP_ErasePage = 59U, /*!< Erase Page */
DECL|kIapCmd_FLASHIAP_EraseSector|enumerator|kIapCmd_FLASHIAP_EraseSector = 52U, /*!< Erase Sector */
DECL|kIapCmd_FLASHIAP_PrepareSectorforWrite|enumerator|kIapCmd_FLASHIAP_PrepareSectorforWrite = 50U, /*!< Prepare Sector for write */
DECL|kIapCmd_FLASHIAP_ReadMisr|enumerator|kIapCmd_FLASHIAP_ReadMisr = 70U, /*!< Read Misr */
DECL|kIapCmd_FLASHIAP_ReadPartId|enumerator|kIapCmd_FLASHIAP_ReadPartId = 54U, /*!< Read part id */
DECL|kIapCmd_FLASHIAP_ReadUid|enumerator|kIapCmd_FLASHIAP_ReadUid = 58U, /*!< Read Uid isp */
DECL|kIapCmd_FLASHIAP_Read_BootromVersion|enumerator|kIapCmd_FLASHIAP_Read_BootromVersion = 55U, /*!< Read bootrom version */
DECL|kIapCmd_FLASHIAP_ReinvokeI2cSpiISP|enumerator|kIapCmd_FLASHIAP_ReinvokeI2cSpiISP = 71U /*!< Reinvoke I2C/SPI isp */
DECL|kIapCmd_FLASHIAP_ReinvokeISP|enumerator|kIapCmd_FLASHIAP_ReinvokeISP = 57U, /*!< Reinvoke ISP */
DECL|kStatus_FLASHIAP_AddrError|enumerator|kStatus_FLASHIAP_AddrError = MAKE_STATUS(kStatusGroup_FLASHIAP, 13U), /*!< Address is not on word boundary */
DECL|kStatus_FLASHIAP_AddrNotMapped|enumerator|kStatus_FLASHIAP_AddrNotMapped =
DECL|kStatus_FLASHIAP_Busy|enumerator|kStatus_FLASHIAP_Busy =
DECL|kStatus_FLASHIAP_CompareError|enumerator|kStatus_FLASHIAP_CompareError =
DECL|kStatus_FLASHIAP_CountError|enumerator|kStatus_FLASHIAP_CountError =
DECL|kStatus_FLASHIAP_DstAddrError|enumerator|kStatus_FLASHIAP_DstAddrError =
DECL|kStatus_FLASHIAP_DstAddrNotMapped|enumerator|kStatus_FLASHIAP_DstAddrNotMapped =
DECL|kStatus_FLASHIAP_InvalidCommand|enumerator|kStatus_FLASHIAP_InvalidCommand = MAKE_STATUS(kStatusGroup_FLASHIAP, 1U), /*!< Invalid command */
DECL|kStatus_FLASHIAP_InvalidSector|enumerator|kStatus_FLASHIAP_InvalidSector =
DECL|kStatus_FLASHIAP_NoClock|enumerator|kStatus_FLASHIAP_NoClock =
DECL|kStatus_FLASHIAP_NoPower|enumerator|kStatus_FLASHIAP_NoPower = MAKE_STATUS(kStatusGroup_FLASHIAP, 24U), /*!< Flash memory block is powered down */
DECL|kStatus_FLASHIAP_NotPrepared|enumerator|kStatus_FLASHIAP_NotPrepared =
DECL|kStatus_FLASHIAP_ParamError|enumerator|kStatus_FLASHIAP_ParamError =
DECL|kStatus_FLASHIAP_SectorNotblank|enumerator|kStatus_FLASHIAP_SectorNotblank = MAKE_STATUS(kStatusGroup_FLASHIAP, 8U), /*!< One or more sectors are not blank */
DECL|kStatus_FLASHIAP_SrcAddrError|enumerator|kStatus_FLASHIAP_SrcAddrError =
DECL|kStatus_FLASHIAP_SrcAddrNotMapped|enumerator|kStatus_FLASHIAP_SrcAddrNotMapped =
DECL|kStatus_FLASHIAP_Success|enumerator|kStatus_FLASHIAP_Success = kStatus_Success, /*!< Api is executed successfully */
