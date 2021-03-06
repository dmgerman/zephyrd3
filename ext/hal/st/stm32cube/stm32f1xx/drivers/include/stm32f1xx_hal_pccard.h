DECL|ATA_CARD_CONFIGURATION|macro|ATA_CARD_CONFIGURATION
DECL|ATA_CARD_HEAD|macro|ATA_CARD_HEAD
DECL|ATA_COMMON_DATA_AREA|macro|ATA_COMMON_DATA_AREA
DECL|ATA_CYLINDER_HIGH|macro|ATA_CYLINDER_HIGH
DECL|ATA_CYLINDER_LOW|macro|ATA_CYLINDER_LOW
DECL|ATA_DATA|macro|ATA_DATA
DECL|ATA_ERASE_SECTOR_CMD|macro|ATA_ERASE_SECTOR_CMD
DECL|ATA_IDENTIFY_CMD|macro|ATA_IDENTIFY_CMD
DECL|ATA_READ_SECTOR_CMD|macro|ATA_READ_SECTOR_CMD
DECL|ATA_SECTOR_COUNT|macro|ATA_SECTOR_COUNT
DECL|ATA_SECTOR_NUMBER|macro|ATA_SECTOR_NUMBER
DECL|ATA_STATUS_CMD_ALTERNATE|macro|ATA_STATUS_CMD_ALTERNATE
DECL|ATA_STATUS_CMD|macro|ATA_STATUS_CMD
DECL|ATA_WRITE_SECTOR_CMD|macro|ATA_WRITE_SECTOR_CMD
DECL|CF_ATTRIBUTE_SPACE_ADDRESS|macro|CF_ATTRIBUTE_SPACE_ADDRESS
DECL|CF_BUSY|macro|CF_BUSY
DECL|CF_COMMON_SPACE_ADDRESS|macro|CF_COMMON_SPACE_ADDRESS
DECL|CF_DEVICE_ADDRESS|macro|CF_DEVICE_ADDRESS
DECL|CF_ERROR|macro|CF_ERROR
DECL|CF_IO_SPACE_ADDRESS|macro|CF_IO_SPACE_ADDRESS
DECL|CF_IO_SPACE_PRIMARY_ADDR|macro|CF_IO_SPACE_PRIMARY_ADDR
DECL|CF_ONGOING|macro|CF_ONGOING
DECL|CF_PROGR|macro|CF_PROGR
DECL|CF_READY|macro|CF_READY
DECL|CF_SECTOR_SIZE|macro|CF_SECTOR_SIZE
DECL|CF_SUCCESS|macro|CF_SUCCESS
DECL|CF_StatusTypedef|macro|CF_StatusTypedef
DECL|CF_TIMEOUT_ERROR|macro|CF_TIMEOUT_ERROR
DECL|CF_TIMEOUT|macro|CF_TIMEOUT
DECL|HAL_CF_Erase_Sector|macro|HAL_CF_Erase_Sector
DECL|HAL_CF_GetStatus|macro|HAL_CF_GetStatus
DECL|HAL_CF_ReadStatus|macro|HAL_CF_ReadStatus
DECL|HAL_CF_Read_ID|macro|HAL_CF_Read_ID
DECL|HAL_CF_Read_Sector|macro|HAL_CF_Read_Sector
DECL|HAL_CF_Reset|macro|HAL_CF_Reset
DECL|HAL_CF_Write_Sector|macro|HAL_CF_Write_Sector
DECL|HAL_PCCARD_STATE_BUSY|enumerator|HAL_PCCARD_STATE_BUSY = 0x02U, /*!< PCCARD peripheral busy */
DECL|HAL_PCCARD_STATE_ERROR|enumerator|HAL_PCCARD_STATE_ERROR = 0x04U /*!< PCCARD peripheral error */
DECL|HAL_PCCARD_STATE_READY|enumerator|HAL_PCCARD_STATE_READY = 0x01U, /*!< PCCARD peripheral ready */
DECL|HAL_PCCARD_STATE_RESET|enumerator|HAL_PCCARD_STATE_RESET = 0x00U, /*!< PCCARD peripheral not yet initialized or disabled */
DECL|HAL_PCCARD_STATUS_ERROR|enumerator|HAL_PCCARD_STATUS_ERROR,
DECL|HAL_PCCARD_STATUS_ONGOING|enumerator|HAL_PCCARD_STATUS_ONGOING,
DECL|HAL_PCCARD_STATUS_SUCCESS|enumerator|HAL_PCCARD_STATUS_SUCCESS = 0U,
DECL|HAL_PCCARD_STATUS_TIMEOUT|enumerator|HAL_PCCARD_STATUS_TIMEOUT
DECL|HAL_PCCARD_StateTypeDef|typedef|}HAL_PCCARD_StateTypeDef;
DECL|HAL_PCCARD_StatusTypeDef|typedef|}HAL_PCCARD_StatusTypeDef;
DECL|Init|member|FSMC_PCCARD_InitTypeDef Init; /*!< PCCARD device control configuration parameters */
DECL|Instance|member|FSMC_PCCARD_TypeDef *Instance; /*!< Register base address for PCCARD device */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< PCCARD Lock */
DECL|PCCARD_ATTRIBUTE_SPACE_ADDRESS|macro|PCCARD_ATTRIBUTE_SPACE_ADDRESS
DECL|PCCARD_BUSY|macro|PCCARD_BUSY
DECL|PCCARD_COMMON_SPACE_ADDRESS|macro|PCCARD_COMMON_SPACE_ADDRESS
DECL|PCCARD_DEVICE_ADDRESS|macro|PCCARD_DEVICE_ADDRESS
DECL|PCCARD_HandleTypeDef|typedef|}PCCARD_HandleTypeDef;
DECL|PCCARD_IO_SPACE_ADDRESS|macro|PCCARD_IO_SPACE_ADDRESS
DECL|PCCARD_IO_SPACE_PRIMARY_ADDR|macro|PCCARD_IO_SPACE_PRIMARY_ADDR
DECL|PCCARD_PROGR|macro|PCCARD_PROGR
DECL|PCCARD_READY|macro|PCCARD_READY
DECL|PCCARD_SECTOR_SIZE|macro|PCCARD_SECTOR_SIZE
DECL|PCCARD_TIMEOUT_ERROR|macro|PCCARD_TIMEOUT_ERROR
DECL|State|member|__IO HAL_PCCARD_StateTypeDef State; /*!< PCCARD device access state */
DECL|__HAL_PCCARD_RESET_HANDLE_STATE|macro|__HAL_PCCARD_RESET_HANDLE_STATE
DECL|__STM32F1xx_HAL_PCCARD_H|macro|__STM32F1xx_HAL_PCCARD_H
