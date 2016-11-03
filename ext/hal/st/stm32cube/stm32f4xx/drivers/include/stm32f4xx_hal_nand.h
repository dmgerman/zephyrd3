DECL|ADDR_1ST_CYCLE|macro|ADDR_1ST_CYCLE
DECL|ADDR_2ND_CYCLE|macro|ADDR_2ND_CYCLE
DECL|ADDR_3RD_CYCLE|macro|ADDR_3RD_CYCLE
DECL|ADDR_4TH_CYCLE|macro|ADDR_4TH_CYCLE
DECL|ADDR_AREA|macro|ADDR_AREA
DECL|ARRAY_ADDRESS|macro|ARRAY_ADDRESS
DECL|BlockNbr|member|uint32_t BlockNbr; /*!< NAND memory number of blocks */
DECL|BlockSize|member|uint32_t BlockSize; /*!< NAND memory block size number of pages */
DECL|Block|member|uint16_t Block; /*!< NAND memory Block address */
DECL|CMD_AREA|macro|CMD_AREA
DECL|Device_Id|member|uint8_t Device_Id;
DECL|Fourth_Id|member|uint8_t Fourth_Id;
DECL|HAL_NAND_STATE_BUSY|enumerator|HAL_NAND_STATE_BUSY = 0x02U, /*!< NAND internal process is ongoing */
DECL|HAL_NAND_STATE_ERROR|enumerator|HAL_NAND_STATE_ERROR = 0x03U /*!< NAND error state */
DECL|HAL_NAND_STATE_READY|enumerator|HAL_NAND_STATE_READY = 0x01U, /*!< NAND initialized and ready for use */
DECL|HAL_NAND_STATE_RESET|enumerator|HAL_NAND_STATE_RESET = 0x00U, /*!< NAND not yet initialized or disabled */
DECL|HAL_NAND_StateTypeDef|typedef|}HAL_NAND_StateTypeDef;
DECL|Info|member|NAND_InfoTypeDef Info; /*!< NAND characteristic information structure */
DECL|Init|member|FMC_NAND_InitTypeDef Init; /*!< NAND device control configuration parameters */
DECL|Instance|member|FMC_NAND_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< NAND locking object */
DECL|Maker_Id|member|uint8_t Maker_Id;
DECL|NAND_AddressTypeDef|typedef|}NAND_AddressTypeDef;
DECL|NAND_BUSY|macro|NAND_BUSY
DECL|NAND_CMD_AREA_A|macro|NAND_CMD_AREA_A
DECL|NAND_CMD_AREA_B|macro|NAND_CMD_AREA_B
DECL|NAND_CMD_AREA_C|macro|NAND_CMD_AREA_C
DECL|NAND_CMD_AREA_TRUE1|macro|NAND_CMD_AREA_TRUE1
DECL|NAND_CMD_ERASE0|macro|NAND_CMD_ERASE0
DECL|NAND_CMD_ERASE1|macro|NAND_CMD_ERASE1
DECL|NAND_CMD_LOCK_STATUS|macro|NAND_CMD_LOCK_STATUS
DECL|NAND_CMD_READID|macro|NAND_CMD_READID
DECL|NAND_CMD_RESET|macro|NAND_CMD_RESET
DECL|NAND_CMD_STATUS|macro|NAND_CMD_STATUS
DECL|NAND_CMD_WRITE0|macro|NAND_CMD_WRITE0
DECL|NAND_CMD_WRITE_TRUE1|macro|NAND_CMD_WRITE_TRUE1
DECL|NAND_DEVICE1|macro|NAND_DEVICE1
DECL|NAND_DEVICE2|macro|NAND_DEVICE2
DECL|NAND_ERROR|macro|NAND_ERROR
DECL|NAND_HandleTypeDef|typedef|}NAND_HandleTypeDef;
DECL|NAND_IDTypeDef|typedef|}NAND_IDTypeDef;
DECL|NAND_INVALID_ADDRESS|macro|NAND_INVALID_ADDRESS
DECL|NAND_InfoTypeDef|typedef|}NAND_InfoTypeDef;
DECL|NAND_READY|macro|NAND_READY
DECL|NAND_TIMEOUT_ERROR|macro|NAND_TIMEOUT_ERROR
DECL|NAND_VALID_ADDRESS|macro|NAND_VALID_ADDRESS
DECL|NAND_WRITE_TIMEOUT|macro|NAND_WRITE_TIMEOUT
DECL|PageSize|member|uint32_t PageSize; /*!< NAND memory page (without spare area) size measured in K. bytes */
DECL|Page|member|uint16_t Page; /*!< NAND memory Page address */
DECL|SpareAreaSize|member|uint32_t SpareAreaSize; /*!< NAND memory spare area size measured in K. bytes */
DECL|State|member|__IO HAL_NAND_StateTypeDef State; /*!< NAND device access state */
DECL|Third_Id|member|uint8_t Third_Id;
DECL|ZoneSize|member|uint32_t ZoneSize; /*!< NAND memory zone size measured in number of blocks */
DECL|Zone|member|uint16_t Zone; /*!< NAND memory Zone address */
DECL|__HAL_NAND_RESET_HANDLE_STATE|macro|__HAL_NAND_RESET_HANDLE_STATE
DECL|__STM32F4xx_HAL_NAND_H|macro|__STM32F4xx_HAL_NAND_H
