DECL|CY_FLASH_DRV_ERR_UNC|enumerator|CY_FLASH_DRV_ERR_UNC = ( CY_FLASH_ID_ERROR + 0xFFUL), /**< Unknown error code. See \ref Cy_Flash_GetExternalStatus() */
DECL|CY_FLASH_DRV_INVALID_FLASH_ADDR|enumerator|CY_FLASH_DRV_INVALID_FLASH_ADDR = ( CY_FLASH_ID_ERROR + 0x2UL), /**< Invalid flash address */
DECL|CY_FLASH_DRV_INVALID_FM_PL|enumerator|CY_FLASH_DRV_INVALID_FM_PL = ( CY_FLASH_ID_ERROR + 0x1UL), /**< Invalid flash page latch address */
DECL|CY_FLASH_DRV_INVALID_INPUT_PARAMETERS|enumerator|CY_FLASH_DRV_INVALID_INPUT_PARAMETERS = ( CY_FLASH_ID_ERROR + 0x6UL), /**< Input parameters passed to Flash API are not valid */
DECL|CY_FLASH_DRV_INV_PROT|enumerator|CY_FLASH_DRV_INV_PROT = ( CY_FLASH_ID_ERROR + 0x0UL), /**< Invalid device protection state */
DECL|CY_FLASH_DRV_IPC_BUSY|enumerator|CY_FLASH_DRV_IPC_BUSY = ( CY_FLASH_ID_ERROR + 0x5UL), /**< IPC structure is already locked by another process */
DECL|CY_FLASH_DRV_OPCODE_BUSY|enumerator|CY_FLASH_DRV_OPCODE_BUSY = ( CY_FLASH_ID_INFO + 0x2UL) /**< Flash is under operation */
DECL|CY_FLASH_DRV_OPERATION_STARTED|enumerator|CY_FLASH_DRV_OPERATION_STARTED = ( CY_FLASH_ID_INFO + 0x1UL), /**< Flash operation is successfully initiated */
DECL|CY_FLASH_DRV_PL_ROW_COMP_FA|enumerator|CY_FLASH_DRV_PL_ROW_COMP_FA = ( CY_FLASH_ID_ERROR + 0x22UL), /**< Comparison between Page Latches and FM row failed */
DECL|CY_FLASH_DRV_PROGRESS_NO_ERROR|enumerator|CY_FLASH_DRV_PROGRESS_NO_ERROR = ( CY_FLASH_ID_INFO + 0x0UL), /**< Command in progress; no error */
DECL|CY_FLASH_DRV_ROW_PROTECTED|enumerator|CY_FLASH_DRV_ROW_PROTECTED = ( CY_FLASH_ID_ERROR + 0x3UL), /**< Row is write protected */
DECL|CY_FLASH_DRV_SUCCESS|enumerator|CY_FLASH_DRV_SUCCESS = 0x00UL, /**< Success */
DECL|CY_FLASH_DRV_VERSION_MAJOR|macro|CY_FLASH_DRV_VERSION_MAJOR
DECL|CY_FLASH_DRV_VERSION_MINOR|macro|CY_FLASH_DRV_VERSION_MINOR
DECL|CY_FLASH_H|macro|CY_FLASH_H
DECL|CY_FLASH_ID_ERROR|macro|CY_FLASH_ID_ERROR
DECL|CY_FLASH_ID_INFO|macro|CY_FLASH_ID_INFO
DECL|CY_FLASH_ID_WARNING|macro|CY_FLASH_ID_WARNING
DECL|CY_FLASH_ID|macro|CY_FLASH_ID
DECL|CY_FLASH_NUMBER_ROWS|macro|CY_FLASH_NUMBER_ROWS
DECL|CY_FLASH_SIZEOF_ROW_LONG_UNITS|macro|CY_FLASH_SIZEOF_ROW_LONG_UNITS
DECL|CY_FLASH_SIZEOF_ROW|macro|CY_FLASH_SIZEOF_ROW
DECL|Cy_Flash_IsEraseComplete|macro|Cy_Flash_IsEraseComplete
DECL|Cy_Flash_IsProgramComplete|macro|Cy_Flash_IsProgramComplete
DECL|Cy_Flash_IsWriteComplete|macro|Cy_Flash_IsWriteComplete
DECL|cy_en_flashdrv_status_t|typedef|} cy_en_flashdrv_status_t;
DECL|cy_en_flashdrv_status|enum|typedef enum cy_en_flashdrv_status
