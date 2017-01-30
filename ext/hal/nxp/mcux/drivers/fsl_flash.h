DECL|DFlashBlockBase|member|uint32_t DFlashBlockBase; /*!< For FlexNVM device, this is the base address of D-Flash memory (FlexNVM memory);
DECL|DFlashTotalSize|member|uint32_t DFlashTotalSize; /*!< For FlexNVM device, this is total size of the FlexNVM memory;
DECL|EEpromTotalSize|member|uint32_t EEpromTotalSize; /*!< For FlexNVM device, this is the size in byte of EEPROM area which was partitioned
DECL|FLASH_DRIVER_IS_EXPORTED|macro|FLASH_DRIVER_IS_EXPORTED
DECL|FLASH_DRIVER_IS_EXPORTED|macro|FLASH_DRIVER_IS_EXPORTED
DECL|FLASH_DRIVER_IS_FLASH_RESIDENT|macro|FLASH_DRIVER_IS_FLASH_RESIDENT
DECL|FLASH_DRIVER_IS_FLASH_RESIDENT|macro|FLASH_DRIVER_IS_FLASH_RESIDENT
DECL|FLASH_SSD_CONFIG_ENABLE_FLEXNVM_SUPPORT|macro|FLASH_SSD_CONFIG_ENABLE_FLEXNVM_SUPPORT
DECL|FLASH_SSD_IS_FLEXNVM_ENABLED|macro|FLASH_SSD_IS_FLEXNVM_ENABLED
DECL|FOUR_CHAR_CODE|macro|FOUR_CHAR_CODE
DECL|FSL_FLASH_DRIVER_VERSION|macro|FSL_FLASH_DRIVER_VERSION
DECL|FlexRAMBlockBase|member|uint32_t FlexRAMBlockBase; /*!< For FlexNVM device, this is the base address of FlexRAM
DECL|FlexRAMTotalSize|member|uint32_t FlexRAMTotalSize; /*!< For FlexNVM device, this is the size of FlexRAM
DECL|MAKE_STATUS|macro|MAKE_STATUS
DECL|MAKE_VERSION|macro|MAKE_VERSION
DECL|PFlashAccessSegmentCount|member|uint32_t PFlashAccessSegmentCount; /*!< Number of PFlash access segments. */
DECL|PFlashAccessSegmentSize|member|uint32_t PFlashAccessSegmentSize; /*!< Size in bytes of a access segment of PFlash. */
DECL|PFlashBlockBase|member|uint32_t PFlashBlockBase; /*!< Base address of the first PFlash block */
DECL|PFlashBlockCount|member|uint32_t PFlashBlockCount; /*!< Number of PFlash blocks. */
DECL|PFlashCallback|member|flash_callback_t PFlashCallback; /*!< Callback function for flash API. */
DECL|PFlashSectorSize|member|uint32_t PFlashSectorSize; /*!< Size in bytes of a sector of PFlash. */
DECL|PFlashTotalSize|member|uint32_t PFlashTotalSize; /*!< Size of all combined PFlash block. */
DECL|_FSL_FLASH_H_|macro|_FSL_FLASH_H_
DECL|_flash_config|struct|typedef struct _flash_config
DECL|_flash_driver_api_keys|enum|enum _flash_driver_api_keys
DECL|_flash_driver_version_constants|enum|enum _flash_driver_version_constants
DECL|_flash_execute_in_ram_function_config|struct|typedef struct _flash_execute_in_ram_function_config
DECL|_flash_execute_in_ram_function_constants|enum|enum _flash_execute_in_ram_function_constants
DECL|_flash_execute_only_access_state|enum|typedef enum _flash_execute_only_access_state
DECL|_flash_flexram_function_option|enum|typedef enum _flash_flexram_function_option
DECL|_flash_margin_value|enum|typedef enum _flash_margin_value
DECL|_flash_operation_config|struct|typedef struct _flash_operation_config
DECL|_flash_partition_flexram_load_option|enum|typedef enum _flash_partition_flexram_load_option
DECL|_flash_property_tag|enum|typedef enum _flash_property_tag
DECL|_flash_protection_state|enum|typedef enum _flash_protection_state
DECL|_flash_read_resource_option|enum|typedef enum _flash_read_resource_option
DECL|_flash_read_resource_range|enum|enum _flash_read_resource_range
DECL|_flash_security_state|enum|typedef enum _flash_security_state
DECL|_flash_status|enum|enum _flash_status
DECL|_flash_swap_block_status|enum|typedef enum _flash_swap_block_status
DECL|_flash_swap_control_option|enum|typedef enum _flash_swap_control_option
DECL|_flash_swap_function_option|enum|typedef enum _flash_swap_function_option
DECL|_flash_swap_ifr_field_config|struct|typedef struct _flash_swap_ifr_field_config
DECL|_flash_swap_state_config|struct|typedef struct _flash_swap_state_config
DECL|_flash_swap_state|enum|typedef enum _flash_swap_state
DECL|activeBlockSize|member|uint32_t activeBlockSize; /*!< Block size of current flash type.*/
DECL|activeFunctionCount|member|uint32_t activeFunctionCount; /*!< Number of available execute-in-ram functions.*/
DECL|activeSectorSize|member|uint32_t activeSectorSize; /*!< Sector size of current flash type.*/
DECL|blockWriteUnitSize|member|uint32_t blockWriteUnitSize; /*!< write unit size.*/
DECL|checkCmdAddressAligment|member|uint32_t checkCmdAddressAligment; /*!< Program check command address alignment.*/
DECL|convertedAddress|member|uint32_t convertedAddress; /*!< Converted address for current flash type.*/
DECL|currentSwapBlockStatus|member|flash_swap_block_status_t currentSwapBlockStatus; /*!< Current swap block status.*/
DECL|flashCacheClearCommand|member|uint8_t *flashCacheClearCommand; /*!< execute-in-ram function: flash_cache_clear_command.*/
DECL|flashExecuteInRamFunctionInfo|member|uint32_t *flashExecuteInRamFunctionInfo; /*!< Info struct of flash execute-in-ram function. */
DECL|flashRunCommand|member|uint8_t *flashRunCommand; /*!< execute-in-ram function: flash_run_command.*/
DECL|flashSwapState|member|flash_swap_state_t flashSwapState; /*!< Current swap system status.*/
DECL|flash_callback_t|typedef|typedef void (*flash_callback_t)(void);
DECL|flash_config_t|typedef|} flash_config_t;
DECL|flash_execute_in_ram_function_config_t|typedef|} flash_execute_in_ram_function_config_t;
DECL|flash_execute_only_access_state_t|typedef|} flash_execute_only_access_state_t;
DECL|flash_flexram_function_option_t|typedef|} flash_flexram_function_option_t;
DECL|flash_margin_value_t|typedef|} flash_margin_value_t;
DECL|flash_operation_config_t|typedef|} flash_operation_config_t;
DECL|flash_partition_flexram_load_option_t|typedef|} flash_partition_flexram_load_option_t;
DECL|flash_property_tag_t|typedef|} flash_property_tag_t;
DECL|flash_protection_state_t|typedef|} flash_protection_state_t;
DECL|flash_read_resource_option_t|typedef|} flash_read_resource_option_t;
DECL|flash_security_state_t|typedef|} flash_security_state_t;
DECL|flash_swap_block_status_t|typedef|} flash_swap_block_status_t;
DECL|flash_swap_control_option_t|typedef|} flash_swap_control_option_t;
DECL|flash_swap_function_option_t|typedef|} flash_swap_function_option_t;
DECL|flash_swap_ifr_field_config_t|typedef|} flash_swap_ifr_field_config_t;
DECL|flash_swap_state_config_t|typedef|} flash_swap_state_config_t;
DECL|flash_swap_state_t|typedef|} flash_swap_state_t;
DECL|kFLASH_AccessStateExecuteOnly|enumerator|kFLASH_AccessStateExecuteOnly, /*!< Flash region is execute only.*/
DECL|kFLASH_AccessStateMixed|enumerator|kFLASH_AccessStateMixed /*!< Flash is mixed with unLimited and execute only region.*/
DECL|kFLASH_AccessStateUnLimited|enumerator|kFLASH_AccessStateUnLimited, /*!< Flash region is unLimited.*/
DECL|kFLASH_ApiEraseKey|enumerator|kFLASH_ApiEraseKey = FOUR_CHAR_CODE('k', 'f', 'e', 'k') /*!< Key value used to validate all flash erase APIs.*/
DECL|kFLASH_DriverVersionBugfix|enumerator|kFLASH_DriverVersionBugfix = 0 /*!< Bugfix for flash driver version.*/
DECL|kFLASH_DriverVersionMajor|enumerator|kFLASH_DriverVersionMajor = 2, /*!< Major flash driver version.*/
DECL|kFLASH_DriverVersionMinor|enumerator|kFLASH_DriverVersionMinor = 1, /*!< Minor flash driver version.*/
DECL|kFLASH_DriverVersionName|enumerator|kFLASH_DriverVersionName = 'F', /*!< Flash driver version name.*/
DECL|kFLASH_ExecuteInRamFunctionMaxSize|enumerator|kFLASH_ExecuteInRamFunctionMaxSize = 64U, /*!< Max size of execute-in-ram function.*/
DECL|kFLASH_ExecuteInRamFunctionTotalNum|enumerator|kFLASH_ExecuteInRamFunctionTotalNum = 2U /*!< Total number of execute-in-ram functions.*/
DECL|kFLASH_FlexramFunctionOptionAvailableAsRam|enumerator|kFLASH_FlexramFunctionOptionAvailableAsRam = 0xFFU, /*!< Option used to make FlexRAM available as RAM */
DECL|kFLASH_FlexramFunctionOptionAvailableForEeprom|enumerator|kFLASH_FlexramFunctionOptionAvailableForEeprom = 0x00U /*!< Option used to make FlexRAM available for EEPROM */
DECL|kFLASH_MarginValueFactory|enumerator|kFLASH_MarginValueFactory, /*!< Apply the 'Factory' margin to the normal read-1 level.*/
DECL|kFLASH_MarginValueInvalid|enumerator|kFLASH_MarginValueInvalid /*!< Not real margin level, Used to determine the range of valid margin level. */
DECL|kFLASH_MarginValueNormal|enumerator|kFLASH_MarginValueNormal, /*!< Use the 'normal' read level for 1s.*/
DECL|kFLASH_MarginValueUser|enumerator|kFLASH_MarginValueUser, /*!< Apply the 'User' margin to the normal read-1 level.*/
DECL|kFLASH_PartitionFlexramLoadOptionLoadedWithValidEepromData|enumerator|kFLASH_PartitionFlexramLoadOptionLoadedWithValidEepromData =
DECL|kFLASH_PartitionFlexramLoadOptionNotLoaded|enumerator|kFLASH_PartitionFlexramLoadOptionNotLoaded = 0x01U /*!< FlexRAM is not loaded during reset sequence.*/
DECL|kFLASH_PropertyDflashBlockBaseAddr|enumerator|kFLASH_PropertyDflashBlockBaseAddr = 0x14U, /*!< Eeprom total size property.*/
DECL|kFLASH_PropertyDflashBlockCount|enumerator|kFLASH_PropertyDflashBlockCount = 0x13U, /*!< Dflash block base address property.*/
DECL|kFLASH_PropertyDflashBlockSize|enumerator|kFLASH_PropertyDflashBlockSize = 0x12U, /*!< Dflash block count property.*/
DECL|kFLASH_PropertyDflashSectorSize|enumerator|kFLASH_PropertyDflashSectorSize = 0x10U, /*!< Dflash sector size property.*/
DECL|kFLASH_PropertyDflashTotalSize|enumerator|kFLASH_PropertyDflashTotalSize = 0x11U, /*!< Dflash total size property.*/
DECL|kFLASH_PropertyEepromTotalSize|enumerator|kFLASH_PropertyEepromTotalSize = 0x15U
DECL|kFLASH_PropertyFlexRamBlockBaseAddr|enumerator|kFLASH_PropertyFlexRamBlockBaseAddr = 0x08U, /*!< FlexRam block base address property.*/
DECL|kFLASH_PropertyFlexRamTotalSize|enumerator|kFLASH_PropertyFlexRamTotalSize = 0x09U, /*!< FlexRam total size property.*/
DECL|kFLASH_PropertyPflashAccessSegmentCount|enumerator|kFLASH_PropertyPflashAccessSegmentCount = 0x07U, /*!< Pflash access segment count property.*/
DECL|kFLASH_PropertyPflashAccessSegmentSize|enumerator|kFLASH_PropertyPflashAccessSegmentSize = 0x06U, /*!< Pflash access segment size property.*/
DECL|kFLASH_PropertyPflashBlockBaseAddr|enumerator|kFLASH_PropertyPflashBlockBaseAddr = 0x04U, /*!< Pflash block base address property.*/
DECL|kFLASH_PropertyPflashBlockCount|enumerator|kFLASH_PropertyPflashBlockCount = 0x03U, /*!< Pflash block count property.*/
DECL|kFLASH_PropertyPflashBlockSize|enumerator|kFLASH_PropertyPflashBlockSize = 0x02U, /*!< Pflash block size property.*/
DECL|kFLASH_PropertyPflashFacSupport|enumerator|kFLASH_PropertyPflashFacSupport = 0x05U, /*!< Pflash fac support property.*/
DECL|kFLASH_PropertyPflashSectorSize|enumerator|kFLASH_PropertyPflashSectorSize = 0x00U, /*!< Pflash sector size property.*/
DECL|kFLASH_PropertyPflashTotalSize|enumerator|kFLASH_PropertyPflashTotalSize = 0x01U, /*!< Pflash total size property.*/
DECL|kFLASH_ProtectionStateMixed|enumerator|kFLASH_ProtectionStateMixed /*!< Flash is mixed with protected and unprotected region.*/
DECL|kFLASH_ProtectionStateProtected|enumerator|kFLASH_ProtectionStateProtected, /*!< Flash region is protected.*/
DECL|kFLASH_ProtectionStateUnprotected|enumerator|kFLASH_ProtectionStateUnprotected, /*!< Flash region is not protected.*/
DECL|kFLASH_ResourceOptionFlashIfr|enumerator|kFLASH_ResourceOptionFlashIfr =
DECL|kFLASH_ResourceOptionVersionId|enumerator|kFLASH_ResourceOptionVersionId = 0x01U /*!< Select code for Version ID*/
DECL|kFLASH_ResourceRangeDflashIfrEnd|enumerator|kFLASH_ResourceRangeDflashIfrEnd = 0x8003FFU, /*!< Dflash IFR end address.*/
DECL|kFLASH_ResourceRangeDflashIfrStart|enumerator|kFLASH_ResourceRangeDflashIfrStart = 0x800000U, /*!< Dflash IFR start address.*/
DECL|kFLASH_ResourceRangePflashIfrSizeInBytes|enumerator|kFLASH_ResourceRangePflashIfrSizeInBytes = 1024U, /*!< Pflash IFR size in byte.*/
DECL|kFLASH_ResourceRangePflashSwapIfrEnd|enumerator|kFLASH_ResourceRangePflashSwapIfrEnd = 0x403FFU, /*!< Pflash swap IFR end address.*/
DECL|kFLASH_ResourceRangePflashSwapIfrStart|enumerator|kFLASH_ResourceRangePflashSwapIfrStart = 0x40000U, /*!< Pflash swap IFR start address.*/
DECL|kFLASH_ResourceRangeVersionIdEnd|enumerator|kFLASH_ResourceRangeVersionIdEnd = 0x0FU, /*!< Version ID IFR end address.*/
DECL|kFLASH_ResourceRangeVersionIdSizeInBytes|enumerator|kFLASH_ResourceRangeVersionIdSizeInBytes = 8U, /*!< Version ID IFR size in byte.*/
DECL|kFLASH_ResourceRangeVersionIdStart|enumerator|kFLASH_ResourceRangeVersionIdStart = 0x08U, /*!< Version ID IFR start address.*/
DECL|kFLASH_SecurityStateBackdoorDisabled|enumerator|kFLASH_SecurityStateBackdoorDisabled /*!< Flash backdoor is disabled.*/
DECL|kFLASH_SecurityStateBackdoorEnabled|enumerator|kFLASH_SecurityStateBackdoorEnabled, /*!< Flash backdoor is enabled.*/
DECL|kFLASH_SecurityStateNotSecure|enumerator|kFLASH_SecurityStateNotSecure, /*!< Flash is not secure.*/
DECL|kFLASH_SwapBlockStatusLowerHalfProgramBlocksAtZero|enumerator|kFLASH_SwapBlockStatusLowerHalfProgramBlocksAtZero =
DECL|kFLASH_SwapBlockStatusUpperHalfProgramBlocksAtZero|enumerator|kFLASH_SwapBlockStatusUpperHalfProgramBlocksAtZero =
DECL|kFLASH_SwapControlOptionDisableSystem|enumerator|kFLASH_SwapControlOptionDisableSystem = 0x10U /*!< Option used to Disable Swap Status */
DECL|kFLASH_SwapControlOptionIntializeSystem|enumerator|kFLASH_SwapControlOptionIntializeSystem = 0x01U, /*!< Option used to Intialize Swap System */
DECL|kFLASH_SwapControlOptionReportStatus|enumerator|kFLASH_SwapControlOptionReportStatus = 0x08U, /*!< Option used to Report Swap Status */
DECL|kFLASH_SwapControlOptionSetInCompleteState|enumerator|kFLASH_SwapControlOptionSetInCompleteState = 0x04U, /*!< Option used to Set Swap in Complete State */
DECL|kFLASH_SwapControlOptionSetInUpdateState|enumerator|kFLASH_SwapControlOptionSetInUpdateState = 0x02U, /*!< Option used to Set Swap in Update State */
DECL|kFLASH_SwapFunctionOptionDisable|enumerator|kFLASH_SwapFunctionOptionDisable = 0x01U /*!< Option used to Disable Swap function */
DECL|kFLASH_SwapFunctionOptionEnable|enumerator|kFLASH_SwapFunctionOptionEnable = 0x00U, /*!< Option used to enable Swap function */
DECL|kFLASH_SwapStateComplete|enumerator|kFLASH_SwapStateComplete = 0x04U, /*!< Flash swap system is in complete state.*/
DECL|kFLASH_SwapStateDisabled|enumerator|kFLASH_SwapStateDisabled = 0x05U /*!< Flash swap system is in disabled state.*/
DECL|kFLASH_SwapStateReady|enumerator|kFLASH_SwapStateReady = 0x01U, /*!< Flash swap system is in ready state.*/
DECL|kFLASH_SwapStateUninitialized|enumerator|kFLASH_SwapStateUninitialized = 0x00U, /*!< Flash swap system is in uninitialized state.*/
DECL|kFLASH_SwapStateUpdateErased|enumerator|kFLASH_SwapStateUpdateErased = 0x03U, /*!< Flash swap system is in updateErased state.*/
DECL|kFLASH_SwapStateUpdate|enumerator|kFLASH_SwapStateUpdate = 0x02U, /*!< Flash swap system is in update state.*/
DECL|kStatusGroupFlashDriver|macro|kStatusGroupFlashDriver
DECL|kStatusGroupFlashDriver|macro|kStatusGroupFlashDriver
DECL|kStatusGroupFlashDriver|macro|kStatusGroupFlashDriver
DECL|kStatusGroupGeneric|macro|kStatusGroupGeneric
DECL|kStatusGroupGeneric|macro|kStatusGroupGeneric
DECL|kStatusGroupGeneric|macro|kStatusGroupGeneric
DECL|kStatus_FLASH_AccessError|enumerator|kStatus_FLASH_AccessError =
DECL|kStatus_FLASH_AddressError|enumerator|kStatus_FLASH_AddressError = MAKE_STATUS(kStatusGroupFlashDriver, 2), /*!< Address is out of range */
DECL|kStatus_FLASH_AlignmentError|enumerator|kStatus_FLASH_AlignmentError =
DECL|kStatus_FLASH_CommandFailure|enumerator|kStatus_FLASH_CommandFailure =
DECL|kStatus_FLASH_CommandNotSupported|enumerator|kStatus_FLASH_CommandNotSupported = MAKE_STATUS(kStatusGroupFlashDriver, 15), /*!< Flash api is not supported.*/
DECL|kStatus_FLASH_EraseKeyError|enumerator|kStatus_FLASH_EraseKeyError = MAKE_STATUS(kStatusGroupFlashDriver, 7), /*!< Api erase key is invalid.*/
DECL|kStatus_FLASH_ExecuteInRamFunctionNotReady|enumerator|kStatus_FLASH_ExecuteInRamFunctionNotReady =
DECL|kStatus_FLASH_InvalidArgument|enumerator|kStatus_FLASH_InvalidArgument = MAKE_STATUS(kStatusGroupGeneric, 4), /*!< Invalid argument*/
DECL|kStatus_FLASH_PartitionStatusUpdateFailure|enumerator|kStatus_FLASH_PartitionStatusUpdateFailure =
DECL|kStatus_FLASH_ProtectionViolation|enumerator|kStatus_FLASH_ProtectionViolation = MAKE_STATUS(
DECL|kStatus_FLASH_RecoverFlexramAsEepromError|enumerator|kStatus_FLASH_RecoverFlexramAsEepromError =
DECL|kStatus_FLASH_RecoverFlexramAsRamError|enumerator|kStatus_FLASH_RecoverFlexramAsRamError =
DECL|kStatus_FLASH_RegionExecuteOnly|enumerator|kStatus_FLASH_RegionExecuteOnly = MAKE_STATUS(kStatusGroupFlashDriver, 8), /*!< Current region is execute only.*/
DECL|kStatus_FLASH_SetFlexramAsEepromError|enumerator|kStatus_FLASH_SetFlexramAsEepromError =
DECL|kStatus_FLASH_SetFlexramAsRamError|enumerator|kStatus_FLASH_SetFlexramAsRamError = MAKE_STATUS(kStatusGroupFlashDriver, 13), /*!< Failed to set flexram as ram.*/
DECL|kStatus_FLASH_SizeError|enumerator|kStatus_FLASH_SizeError = MAKE_STATUS(kStatusGroupFlashDriver, 0), /*!< Error size*/
DECL|kStatus_FLASH_Success|enumerator|kStatus_FLASH_Success = MAKE_STATUS(kStatusGroupGeneric, 0), /*!< Api is executed successfully*/
DECL|kStatus_FLASH_SwapIndicatorAddressError|enumerator|kStatus_FLASH_SwapIndicatorAddressError =
DECL|kStatus_FLASH_SwapSystemNotInUninitialized|enumerator|kStatus_FLASH_SwapSystemNotInUninitialized =
DECL|kStatus_FLASH_UnknownProperty|enumerator|kStatus_FLASH_UnknownProperty = MAKE_STATUS(kStatusGroupFlashDriver, 6), /*!< Unknown property.*/
DECL|nextSwapBlockStatus|member|flash_swap_block_status_t nextSwapBlockStatus; /*!< Next swap block status.*/
DECL|reserved0|member|uint8_t reserved0[6]; /*!< Reserved field.*/
DECL|reserved1|member|uint8_t reserved1[4]; /*!< Reserved field.*/
DECL|resourceCmdAddressAligment|member|uint32_t resourceCmdAddressAligment; /*!< Read resource command address alignment.*/
DECL|sectionCmdAddressAligment|member|uint32_t sectionCmdAddressAligment; /*!< Program/Verify section command address alignment.*/
DECL|sectorCmdAddressAligment|member|uint32_t sectorCmdAddressAligment; /*!< Erase sector command address alignment.*/
DECL|swapDisableWord|member|uint16_t swapDisableWord; /*!< Swap disable word field.*/
DECL|swapEnableWord|member|uint16_t swapEnableWord; /*!< Swap enable word field.*/
DECL|swapIndicatorAddress|member|uint16_t swapIndicatorAddress; /*!< Swap indicator address field.*/
