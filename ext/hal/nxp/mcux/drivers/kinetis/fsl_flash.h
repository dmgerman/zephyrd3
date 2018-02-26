DECL|DFlashBlockBase|member|DFlashBlockBase; /*!< For the FlexNVM device, this is the base address of the D-Flash memory (FlexNVM memory) */
DECL|DFlashTotalSize|member|uint32_t DFlashTotalSize; /*!< For the FlexNVM device, this is the total size of the FlexNVM memory; */
DECL|EEpromTotalSize|member|uint32_t EEpromTotalSize; /*!< For the FlexNVM device, this is the size in bytes of the EEPROM area which was
DECL|FLASH_DRIVER_IS_EXPORTED|macro|FLASH_DRIVER_IS_EXPORTED
DECL|FLASH_DRIVER_IS_EXPORTED|macro|FLASH_DRIVER_IS_EXPORTED
DECL|FLASH_DRIVER_IS_FLASH_RESIDENT|macro|FLASH_DRIVER_IS_FLASH_RESIDENT
DECL|FLASH_DRIVER_IS_FLASH_RESIDENT|macro|FLASH_DRIVER_IS_FLASH_RESIDENT
DECL|FLASH_SSD_CONFIG_ENABLE_FLEXNVM_SUPPORT|macro|FLASH_SSD_CONFIG_ENABLE_FLEXNVM_SUPPORT
DECL|FLASH_SSD_CONFIG_ENABLE_SECONDARY_FLASH_SUPPORT|macro|FLASH_SSD_CONFIG_ENABLE_SECONDARY_FLASH_SUPPORT
DECL|FLASH_SSD_IS_FLEXNVM_ENABLED|macro|FLASH_SSD_IS_FLEXNVM_ENABLED
DECL|FLASH_SSD_IS_SECONDARY_FLASH_ENABLED|macro|FLASH_SSD_IS_SECONDARY_FLASH_ENABLED
DECL|FLASH_SSD_IS_SECONDARY_FLASH_ENABLED|macro|FLASH_SSD_IS_SECONDARY_FLASH_ENABLED
DECL|FOUR_CHAR_CODE|macro|FOUR_CHAR_CODE
DECL|FSL_FLASH_DRIVER_VERSION|macro|FSL_FLASH_DRIVER_VERSION
DECL|FlashCacheControllerIndex|member|uint8_t FlashCacheControllerIndex; /*!< 0 - Controller for core 0; 1 - Controller for core 1 */
DECL|FlashMemoryIndex|member|uint8_t FlashMemoryIndex; /*!< 0 - primary flash; 1 - secondary flash*/
DECL|FlexRAMBlockBase|member|uint32_t FlexRAMBlockBase; /*!< For the FlexNVM device, this is the base address of the FlexRAM */
DECL|FlexRAMTotalSize|member|uint32_t FlexRAMTotalSize; /*!< For the FlexNVM device, this is the size of the FlexRAM */
DECL|MAKE_STATUS|macro|MAKE_STATUS
DECL|MAKE_VERSION|macro|MAKE_VERSION
DECL|PFlashAccessSegmentCount|member|uint32_t PFlashAccessSegmentCount; /*!< A number of PFlash access segments. */
DECL|PFlashAccessSegmentSize|member|uint32_t PFlashAccessSegmentSize; /*!< A size in bytes of an access segment of PFlash. */
DECL|PFlashBlockBase|member|uint32_t PFlashBlockBase; /*!< A base address of the first PFlash block */
DECL|PFlashBlockCount|member|uint8_t PFlashBlockCount; /*!< A number of PFlash blocks. */
DECL|PFlashCallback|member|flash_callback_t PFlashCallback; /*!< The callback function for the flash API. */
DECL|PFlashSectorSize|member|uint32_t PFlashSectorSize; /*!< The size in bytes of a sector of PFlash. */
DECL|PFlashTotalSize|member|uint32_t PFlashTotalSize; /*!< The size of the combined PFlash block. */
DECL|Reserved0|member|uint8_t Reserved0; /*!< Reserved field 0 */
DECL|SegmentBase|member|uint32_t SegmentBase; /*!< Base address of flash Execute-Only segment.*/
DECL|SegmentCount|member|uint32_t SegmentCount; /*!< flash Execute-Only segment count.*/
DECL|SegmentSize|member|uint32_t SegmentSize; /*!< size of flash Execute-Only segment.*/
DECL|_FSL_FLASH_H_|macro|_FSL_FLASH_H_
DECL|_flash_acceleration_ram_property|enum|enum _flash_acceleration_ram_property
DECL|_flash_access_config|struct|typedef struct _flash_access_config
DECL|_flash_cache_clear_process|enum|typedef enum _flash_cache_clear_process
DECL|_flash_cache_controller_index|enum|typedef enum _flash_cache_controller_index
DECL|_flash_config|struct|typedef struct _flash_config
DECL|_flash_driver_api_keys|enum|enum _flash_driver_api_keys
DECL|_flash_driver_version_constants|enum|enum _flash_driver_version_constants
DECL|_flash_execute_in_ram_function_config|struct|typedef struct _flash_execute_in_ram_function_config
DECL|_flash_execute_in_ram_function_constants|enum|enum _flash_execute_in_ram_function_constants
DECL|_flash_execute_only_access_state|enum|typedef enum _flash_execute_only_access_state
DECL|_flash_flexram_function_option|enum|typedef enum _flash_flexram_function_option
DECL|_flash_margin_value|enum|typedef enum _flash_margin_value
DECL|_flash_memory_index|enum|typedef enum _flash_memory_index
DECL|_flash_operation_config|struct|typedef struct _flash_operation_config
DECL|_flash_partition_flexram_load_option|enum|typedef enum _flash_partition_flexram_load_option
DECL|_flash_prefetch_speculation_option|enum|typedef enum _flash_prefetch_speculation_option
DECL|_flash_prefetch_speculation_status|struct|typedef struct _flash_prefetch_speculation_status
DECL|_flash_property_tag|enum|typedef enum _flash_property_tag
DECL|_flash_protection_config|struct|typedef struct _flash_protection_config
DECL|_flash_protection_state|enum|typedef enum _flash_protection_state
DECL|_flash_read_resource_option|enum|typedef enum _flash_read_resource_option
DECL|_flash_read_resource_range|enum|enum _flash_read_resource_range
DECL|_flash_security_state|enum|typedef enum _flash_security_state
DECL|_flash_status|enum|enum _flash_status
DECL|_flash_swap_block_status|enum|typedef enum _flash_swap_block_status
DECL|_flash_swap_control_option|enum|typedef enum _flash_swap_control_option
DECL|_flash_swap_function_option|enum|typedef enum _flash_swap_function_option
DECL|_flash_swap_ifr_field_config|struct|typedef struct _flash_swap_ifr_field_config
DECL|_flash_swap_ifr_field_data|union|typedef union _flash_swap_ifr_field_data
DECL|_flash_swap_state_config|struct|typedef struct _flash_swap_state_config
DECL|_flash_swap_state|enum|typedef enum _flash_swap_state
DECL|_k3_flash_read_once_index|enum|enum _k3_flash_read_once_index
DECL|_pflash_protection_status_low|union|typedef union _pflash_protection_status_low
DECL|_pflash_protection_status|struct|typedef struct _pflash_protection_status
DECL|activeBlockSize|member|uint32_t activeBlockSize; /*!< A block size of the current flash type.*/
DECL|activeFunctionCount|member|uint32_t activeFunctionCount; /*!< Number of available execute-in-RAM functions.*/
DECL|activeSectorSize|member|uint32_t activeSectorSize; /*!< A sector size of the current flash type.*/
DECL|blockWriteUnitSize|member|uint32_t blockWriteUnitSize; /*!< The write unit size.*/
DECL|checkCmdAddressAligment|member|uint32_t checkCmdAddressAligment; /*!< A program check command address alignment.*/
DECL|convertedAddress|member|uint32_t convertedAddress; /*!< A converted address for the current flash type.*/
DECL|currentSwapBlockStatus|member|flash_swap_block_status_t currentSwapBlockStatus; /*!< The current Swap block status.*/
DECL|dataOption|member|flash_prefetch_speculation_option_t dataOption; /*!< Data speculation.*/
DECL|flashCommonBitOperation|member|uint32_t *flashCommonBitOperation; /*!< Execute-in-RAM function: flash_common_bit_operation.*/
DECL|flashExecuteInRamFunctionInfo|member|uint32_t *flashExecuteInRamFunctionInfo; /*!< An information structure of the flash execute-in-RAM function. */
DECL|flashRunCommand|member|uint32_t *flashRunCommand; /*!< Execute-in-RAM function: flash_run_command.*/
DECL|flashSwapIfrData|member|uint32_t flashSwapIfrData[2]; /*!< A flash Swap IFR field data .*/
DECL|flashSwapIfrField|member|flash_swap_ifr_field_config_t flashSwapIfrField; /*!< A flash Swap IFR field structure.*/
DECL|flashSwapState|member|flash_swap_state_t flashSwapState; /*!<The current Swap system status.*/
DECL|flash_access_config_t|typedef|} flash_access_config_t;
DECL|flash_cache_clear_process_t|typedef|} flash_cache_clear_process_t;
DECL|flash_cache_controller_index_t|typedef|} flash_cache_controller_index_t;
DECL|flash_callback_t|typedef|typedef void (*flash_callback_t)(void);
DECL|flash_config_t|typedef|} flash_config_t;
DECL|flash_execute_in_ram_function_config_t|typedef|} flash_execute_in_ram_function_config_t;
DECL|flash_execute_only_access_state_t|typedef|} flash_execute_only_access_state_t;
DECL|flash_flexram_function_option_t|typedef|} flash_flexram_function_option_t;
DECL|flash_margin_value_t|typedef|} flash_margin_value_t;
DECL|flash_memory_index_t|typedef|} flash_memory_index_t;
DECL|flash_operation_config_t|typedef|} flash_operation_config_t;
DECL|flash_partition_flexram_load_option_t|typedef|} flash_partition_flexram_load_option_t;
DECL|flash_prefetch_speculation_option_t|typedef|} flash_prefetch_speculation_option_t;
DECL|flash_prefetch_speculation_status_t|typedef|} flash_prefetch_speculation_status_t;
DECL|flash_property_tag_t|typedef|} flash_property_tag_t;
DECL|flash_protection_config_t|typedef|} flash_protection_config_t;
DECL|flash_protection_state_t|typedef|} flash_protection_state_t;
DECL|flash_read_resource_option_t|typedef|} flash_read_resource_option_t;
DECL|flash_security_state_t|typedef|} flash_security_state_t;
DECL|flash_swap_block_status_t|typedef|} flash_swap_block_status_t;
DECL|flash_swap_control_option_t|typedef|} flash_swap_control_option_t;
DECL|flash_swap_function_option_t|typedef|} flash_swap_function_option_t;
DECL|flash_swap_ifr_field_config_t|typedef|} flash_swap_ifr_field_config_t;
DECL|flash_swap_ifr_field_data_t|typedef|} flash_swap_ifr_field_data_t;
DECL|flash_swap_state_config_t|typedef|} flash_swap_state_config_t;
DECL|flash_swap_state_t|typedef|} flash_swap_state_t;
DECL|instructionOption|member|flash_prefetch_speculation_option_t instructionOption; /*!< Instruction speculation.*/
DECL|kFLASH_AccelerationRamSize|enumerator|kFLASH_AccelerationRamSize = 0x400U
DECL|kFLASH_AccessStateExecuteOnly|enumerator|kFLASH_AccessStateExecuteOnly, /*!< Flash region is execute only.*/
DECL|kFLASH_AccessStateMixed|enumerator|kFLASH_AccessStateMixed /*!< Flash is mixed with unlimited and execute only region.*/
DECL|kFLASH_AccessStateUnLimited|enumerator|kFLASH_AccessStateUnLimited, /*!< Flash region is unlimited.*/
DECL|kFLASH_ApiEraseKey|enumerator|kFLASH_ApiEraseKey = FOUR_CHAR_CODE('k', 'f', 'e', 'k') /*!< Key value used to validate all flash erase APIs.*/
DECL|kFLASH_CacheClearProcessPost|enumerator|kFLASH_CacheClearProcessPost = 0x01U, /*!< Post flash cache clear process.*/
DECL|kFLASH_CacheClearProcessPre|enumerator|kFLASH_CacheClearProcessPre = 0x00U, /*!< Pre flash cache clear process.*/
DECL|kFLASH_CacheControllerIndexForCore0|enumerator|kFLASH_CacheControllerIndexForCore0 = 0x00U, /*!< Current flash cache controller is for core 0.*/
DECL|kFLASH_CacheControllerIndexForCore1|enumerator|kFLASH_CacheControllerIndexForCore1 = 0x01U, /*!< Current flash cache controller is for core 1.*/
DECL|kFLASH_DriverVersionBugfix|enumerator|kFLASH_DriverVersionBugfix = 1 /*!< Bugfix for flash driver version.*/
DECL|kFLASH_DriverVersionMajor|enumerator|kFLASH_DriverVersionMajor = 2, /*!< Major flash driver version.*/
DECL|kFLASH_DriverVersionMinor|enumerator|kFLASH_DriverVersionMinor = 3, /*!< Minor flash driver version.*/
DECL|kFLASH_DriverVersionName|enumerator|kFLASH_DriverVersionName = 'F', /*!< Flash driver version name.*/
DECL|kFLASH_ExecuteInRamFunctionMaxSizeInWords|enumerator|kFLASH_ExecuteInRamFunctionMaxSizeInWords = 16U, /*!< The maximum size of execute-in-RAM function.*/
DECL|kFLASH_ExecuteInRamFunctionTotalNum|enumerator|kFLASH_ExecuteInRamFunctionTotalNum = 2U /*!< Total number of execute-in-RAM functions.*/
DECL|kFLASH_FlexramFunctionOptionAvailableAsRam|enumerator|kFLASH_FlexramFunctionOptionAvailableAsRam = 0xFFU, /*!< An option used to make FlexRAM available as RAM */
DECL|kFLASH_FlexramFunctionOptionAvailableForEeprom|enumerator|kFLASH_FlexramFunctionOptionAvailableForEeprom = 0x00U /*!< An option used to make FlexRAM available for EEPROM */
DECL|kFLASH_MarginValueFactory|enumerator|kFLASH_MarginValueFactory, /*!< Apply the 'Factory' margin to the normal read-1 level.*/
DECL|kFLASH_MarginValueInvalid|enumerator|kFLASH_MarginValueInvalid /*!< Not real margin level, Used to determine the range of valid margin level. */
DECL|kFLASH_MarginValueNormal|enumerator|kFLASH_MarginValueNormal, /*!< Use the 'normal' read level for 1s.*/
DECL|kFLASH_MarginValueUser|enumerator|kFLASH_MarginValueUser, /*!< Apply the 'User' margin to the normal read-1 level.*/
DECL|kFLASH_MemoryIndexPrimaryFlash|enumerator|kFLASH_MemoryIndexPrimaryFlash = 0x00U, /*!< Current flash memory is primary flash.*/
DECL|kFLASH_MemoryIndexSecondaryFlash|enumerator|kFLASH_MemoryIndexSecondaryFlash = 0x01U, /*!< Current flash memory is secondary flash.*/
DECL|kFLASH_PartitionFlexramLoadOptionLoadedWithValidEepromData|enumerator|kFLASH_PartitionFlexramLoadOptionLoadedWithValidEepromData =
DECL|kFLASH_PartitionFlexramLoadOptionNotLoaded|enumerator|kFLASH_PartitionFlexramLoadOptionNotLoaded = 0x01U /*!< FlexRAM is not loaded during reset sequence.*/
DECL|kFLASH_PropertyDflashBlockBaseAddr|enumerator|kFLASH_PropertyDflashBlockBaseAddr = 0x14U, /*!< Dflash block base address property.*/
DECL|kFLASH_PropertyDflashBlockCount|enumerator|kFLASH_PropertyDflashBlockCount = 0x13U, /*!< Dflash block count property.*/
DECL|kFLASH_PropertyDflashBlockSize|enumerator|kFLASH_PropertyDflashBlockSize = 0x12U, /*!< Dflash block size property.*/
DECL|kFLASH_PropertyDflashSectorSize|enumerator|kFLASH_PropertyDflashSectorSize = 0x10U, /*!< Dflash sector size property.*/
DECL|kFLASH_PropertyDflashTotalSize|enumerator|kFLASH_PropertyDflashTotalSize = 0x11U, /*!< Dflash total size property.*/
DECL|kFLASH_PropertyEepromTotalSize|enumerator|kFLASH_PropertyEepromTotalSize = 0x15U, /*!< EEPROM total size property.*/
DECL|kFLASH_PropertyFlashCacheControllerIndex|enumerator|kFLASH_PropertyFlashCacheControllerIndex = 0x21U /*!< Flash cache controller index property.*/
DECL|kFLASH_PropertyFlashMemoryIndex|enumerator|kFLASH_PropertyFlashMemoryIndex = 0x20U, /*!< Flash memory index property.*/
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
DECL|kFLASH_RecordIndexSwapAddr|enumerator|kFLASH_RecordIndexSwapAddr = 0xA1U, /*!< Index of Swap indicator address.*/
DECL|kFLASH_RecordIndexSwapDisable|enumerator|kFLASH_RecordIndexSwapDisable = 0xA3U, /*!< Index of Swap system disable.*/
DECL|kFLASH_RecordIndexSwapEnable|enumerator|kFLASH_RecordIndexSwapEnable = 0xA2U, /*!< Index of Swap system enable.*/
DECL|kFLASH_ResourceOptionFlashIfr|enumerator|kFLASH_ResourceOptionFlashIfr =
DECL|kFLASH_ResourceOptionVersionId|enumerator|kFLASH_ResourceOptionVersionId = 0x01U /*!< Select code for the version ID*/
DECL|kFLASH_ResourceRangeDflashIfrEnd|enumerator|kFLASH_ResourceRangeDflashIfrEnd = 0x8003FFU, /*!< Dflash IFR end address.*/
DECL|kFLASH_ResourceRangeDflashIfrStart|enumerator|kFLASH_ResourceRangeDflashIfrStart = 0x800000U, /*!< Dflash IFR start address.*/
DECL|kFLASH_ResourceRangePflashIfrSizeInBytes|enumerator|kFLASH_ResourceRangePflashIfrSizeInBytes = 1024U, /*!< Pflash IFR size in byte.*/
DECL|kFLASH_ResourceRangePflashSwapIfrEnd|enumerator|kFLASH_ResourceRangePflashSwapIfrEnd =
DECL|kFLASH_ResourceRangePflashSwapIfrStart|enumerator|kFLASH_ResourceRangePflashSwapIfrStart = 0x40000U, /*!< Pflash swap IFR start address.*/
DECL|kFLASH_ResourceRangeVersionIdEnd|enumerator|kFLASH_ResourceRangeVersionIdEnd = 0x0FU, /*!< Version ID IFR end address.*/
DECL|kFLASH_ResourceRangeVersionIdSizeInBytes|enumerator|kFLASH_ResourceRangeVersionIdSizeInBytes = 8U, /*!< Version ID IFR size in byte.*/
DECL|kFLASH_ResourceRangeVersionIdStart|enumerator|kFLASH_ResourceRangeVersionIdStart = 0x08U, /*!< Version ID IFR start address.*/
DECL|kFLASH_SecurityStateBackdoorDisabled|enumerator|kFLASH_SecurityStateBackdoorDisabled /*!< Flash backdoor is disabled.*/
DECL|kFLASH_SecurityStateBackdoorEnabled|enumerator|kFLASH_SecurityStateBackdoorEnabled, /*!< Flash backdoor is enabled.*/
DECL|kFLASH_SecurityStateNotSecure|enumerator|kFLASH_SecurityStateNotSecure, /*!< Flash is not secure.*/
DECL|kFLASH_SwapBlockStatusLowerHalfProgramBlocksAtZero|enumerator|kFLASH_SwapBlockStatusLowerHalfProgramBlocksAtZero =
DECL|kFLASH_SwapBlockStatusUpperHalfProgramBlocksAtZero|enumerator|kFLASH_SwapBlockStatusUpperHalfProgramBlocksAtZero =
DECL|kFLASH_SwapControlOptionDisableSystem|enumerator|kFLASH_SwapControlOptionDisableSystem = 0x10U /*!< An option used to disable the Swap status */
DECL|kFLASH_SwapControlOptionIntializeSystem|enumerator|kFLASH_SwapControlOptionIntializeSystem = 0x01U, /*!< An option used to initialize the Swap system */
DECL|kFLASH_SwapControlOptionReportStatus|enumerator|kFLASH_SwapControlOptionReportStatus = 0x08U, /*!< An option used to report the Swap status */
DECL|kFLASH_SwapControlOptionSetInCompleteState|enumerator|kFLASH_SwapControlOptionSetInCompleteState = 0x04U, /*!< An option used to set the Swap in a complete state */
DECL|kFLASH_SwapControlOptionSetInUpdateState|enumerator|kFLASH_SwapControlOptionSetInUpdateState = 0x02U, /*!< An option used to set the Swap in an update state */
DECL|kFLASH_SwapFunctionOptionDisable|enumerator|kFLASH_SwapFunctionOptionDisable = 0x01U /*!< An option used to disable the Swap function */
DECL|kFLASH_SwapFunctionOptionEnable|enumerator|kFLASH_SwapFunctionOptionEnable = 0x00U, /*!< An option used to enable the Swap function */
DECL|kFLASH_SwapStateComplete|enumerator|kFLASH_SwapStateComplete = 0x04U, /*!< Flash Swap system is in a complete state.*/
DECL|kFLASH_SwapStateDisabled|enumerator|kFLASH_SwapStateDisabled = 0x05U /*!< Flash Swap system is in a disabled state.*/
DECL|kFLASH_SwapStateReady|enumerator|kFLASH_SwapStateReady = 0x01U, /*!< Flash Swap system is in a ready state.*/
DECL|kFLASH_SwapStateUninitialized|enumerator|kFLASH_SwapStateUninitialized = 0x00U, /*!< Flash Swap system is in an uninitialized state.*/
DECL|kFLASH_SwapStateUpdateErased|enumerator|kFLASH_SwapStateUpdateErased = 0x03U, /*!< Flash Swap system is in an updateErased state.*/
DECL|kFLASH_SwapStateUpdate|enumerator|kFLASH_SwapStateUpdate = 0x02U, /*!< Flash Swap system is in an update state.*/
DECL|kFLASH_prefetchSpeculationOptionDisable|enumerator|kFLASH_prefetchSpeculationOptionDisable = 0x01U
DECL|kFLASH_prefetchSpeculationOptionEnable|enumerator|kFLASH_prefetchSpeculationOptionEnable = 0x00U,
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
DECL|kStatus_FLASH_CommandNotSupported|enumerator|kStatus_FLASH_CommandNotSupported = MAKE_STATUS(kStatusGroupFlashDriver, 15), /*!< Flash API is not supported.*/
DECL|kStatus_FLASH_EraseKeyError|enumerator|kStatus_FLASH_EraseKeyError = MAKE_STATUS(kStatusGroupFlashDriver, 7), /*!< API erase key is invalid.*/
DECL|kStatus_FLASH_ExecuteInRamFunctionNotReady|enumerator|kStatus_FLASH_ExecuteInRamFunctionNotReady =
DECL|kStatus_FLASH_InvalidArgument|enumerator|kStatus_FLASH_InvalidArgument = MAKE_STATUS(kStatusGroupGeneric, 4), /*!< Invalid argument*/
DECL|kStatus_FLASH_InvalidPropertyValue|enumerator|kStatus_FLASH_InvalidPropertyValue =
DECL|kStatus_FLASH_InvalidSpeculationOption|enumerator|kStatus_FLASH_InvalidSpeculationOption =
DECL|kStatus_FLASH_PartitionStatusUpdateFailure|enumerator|kStatus_FLASH_PartitionStatusUpdateFailure =
DECL|kStatus_FLASH_ProtectionViolation|enumerator|kStatus_FLASH_ProtectionViolation = MAKE_STATUS(
DECL|kStatus_FLASH_ReadOnlyProperty|enumerator|kStatus_FLASH_ReadOnlyProperty = MAKE_STATUS(kStatusGroupFlashDriver, 18), /*!< The flash property is read-only.*/
DECL|kStatus_FLASH_RecoverFlexramAsEepromError|enumerator|kStatus_FLASH_RecoverFlexramAsEepromError =
DECL|kStatus_FLASH_RecoverFlexramAsRamError|enumerator|kStatus_FLASH_RecoverFlexramAsRamError =
DECL|kStatus_FLASH_RegionExecuteOnly|enumerator|kStatus_FLASH_RegionExecuteOnly =
DECL|kStatus_FLASH_SetFlexramAsEepromError|enumerator|kStatus_FLASH_SetFlexramAsEepromError =
DECL|kStatus_FLASH_SetFlexramAsRamError|enumerator|kStatus_FLASH_SetFlexramAsRamError = MAKE_STATUS(kStatusGroupFlashDriver, 13), /*!< Failed to set FlexRAM as RAM.*/
DECL|kStatus_FLASH_SizeError|enumerator|kStatus_FLASH_SizeError = MAKE_STATUS(kStatusGroupFlashDriver, 0), /*!< Error size*/
DECL|kStatus_FLASH_Success|enumerator|kStatus_FLASH_Success = MAKE_STATUS(kStatusGroupGeneric, 0), /*!< API is executed successfully*/
DECL|kStatus_FLASH_SwapIndicatorAddressError|enumerator|kStatus_FLASH_SwapIndicatorAddressError =
DECL|kStatus_FLASH_SwapSystemNotInUninitialized|enumerator|kStatus_FLASH_SwapSystemNotInUninitialized =
DECL|kStatus_FLASH_UnknownProperty|enumerator|kStatus_FLASH_UnknownProperty = MAKE_STATUS(kStatusGroupFlashDriver, 6), /*!< Unknown property.*/
DECL|nextSwapBlockStatus|member|flash_swap_block_status_t nextSwapBlockStatus; /*!< The next Swap block status.*/
DECL|pflash_protection_status_low_t|typedef|} pflash_protection_status_low_t;
DECL|pflash_protection_status_t|typedef|} pflash_protection_status_t;
DECL|proth32b|member|uint32_t proth32b;
DECL|protl32b|member|uint32_t protl32b; /*!< PROT[31:0] .*/
DECL|prots16b|member|} prots16b;
DECL|protsh|member|uint8_t protsh; /*!< PROTS[15:8] .*/
DECL|protsl|member|uint8_t protsl; /*!< PROTS[7:0] .*/
DECL|regionBase|member|uint32_t regionBase; /*!< Base address of flash protection region.*/
DECL|regionCount|member|uint32_t regionCount; /*!< flash protection region count.*/
DECL|regionSize|member|uint32_t regionSize; /*!< size of flash protection region.*/
DECL|reserved0|member|uint8_t reserved0[4]; /*!< A reserved field.*/
DECL|reserved1|member|uint8_t reserved1[2]; /*!< A reserved field.*/
DECL|reserved2|member|uint8_t reserved2[4]; /*!< A reserved field.*/
DECL|reserved|member|uint8_t reserved[2];
DECL|resourceCmdAddressAligment|member|uint32_t resourceCmdAddressAligment; /*!< A read resource command address alignment.*/
DECL|sectionCmdAddressAligment|member|uint32_t sectionCmdAddressAligment; /*!< A program/verify section command address alignment.*/
DECL|sectorCmdAddressAligment|member|uint32_t sectorCmdAddressAligment; /*!< An erase sector command address alignment.*/
DECL|swapDisableWord|member|uint16_t swapDisableWord; /*!< A Swap disable word field.*/
DECL|swapEnableWord|member|uint16_t swapEnableWord; /*!< A Swap enable word field.*/
DECL|swapIndicatorAddress|member|uint16_t swapIndicatorAddress; /*!< A Swap indicator address field.*/
DECL|valueHigh32b|member|} valueHigh32b;
DECL|valueLow32b|member|pflash_protection_status_low_t valueLow32b; /*!< PROT[31:0] or PROTS[15:0].*/
