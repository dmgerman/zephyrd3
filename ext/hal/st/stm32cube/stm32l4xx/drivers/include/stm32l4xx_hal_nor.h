DECL|CFI1_ADDRESS|macro|CFI1_ADDRESS
DECL|CFI2_ADDRESS|macro|CFI2_ADDRESS
DECL|CFI3_ADDRESS|macro|CFI3_ADDRESS
DECL|CFI4_ADDRESS|macro|CFI4_ADDRESS
DECL|CFI_1|member|uint16_t CFI_1;
DECL|CFI_2|member|uint16_t CFI_2;
DECL|CFI_3|member|uint16_t CFI_3;
DECL|CFI_4|member|uint16_t CFI_4;
DECL|DEVICE_CODE1_ADDR|macro|DEVICE_CODE1_ADDR
DECL|DEVICE_CODE2_ADDR|macro|DEVICE_CODE2_ADDR
DECL|DEVICE_CODE3_ADDR|macro|DEVICE_CODE3_ADDR
DECL|Device_Code1|member|uint16_t Device_Code1;
DECL|Device_Code2|member|uint16_t Device_Code2;
DECL|Device_Code3|member|uint16_t Device_Code3; /*!< Defines the device's codes used to identify the memory.
DECL|Extended|member|FMC_NORSRAM_EXTENDED_TypeDef *Extended; /*!< Extended mode register base address */
DECL|HAL_NOR_STATE_BUSY|enumerator|HAL_NOR_STATE_BUSY = 0x02U, /*!< NOR internal processing is ongoing */
DECL|HAL_NOR_STATE_ERROR|enumerator|HAL_NOR_STATE_ERROR = 0x03U, /*!< NOR error state */
DECL|HAL_NOR_STATE_PROTECTED|enumerator|HAL_NOR_STATE_PROTECTED = 0x04U /*!< NOR NORSRAM device write protected */
DECL|HAL_NOR_STATE_READY|enumerator|HAL_NOR_STATE_READY = 0x01U, /*!< NOR initialized and ready for use */
DECL|HAL_NOR_STATE_RESET|enumerator|HAL_NOR_STATE_RESET = 0x00U, /*!< NOR not yet initialized or disabled */
DECL|HAL_NOR_STATUS_ERROR|enumerator|HAL_NOR_STATUS_ERROR,
DECL|HAL_NOR_STATUS_ONGOING|enumerator|HAL_NOR_STATUS_ONGOING,
DECL|HAL_NOR_STATUS_SUCCESS|enumerator|HAL_NOR_STATUS_SUCCESS = 0U,
DECL|HAL_NOR_STATUS_TIMEOUT|enumerator|HAL_NOR_STATUS_TIMEOUT
DECL|HAL_NOR_StateTypeDef|typedef|}HAL_NOR_StateTypeDef;
DECL|HAL_NOR_StatusTypeDef|typedef|}HAL_NOR_StatusTypeDef;
DECL|Init|member|FMC_NORSRAM_InitTypeDef Init; /*!< NOR device control configuration parameters */
DECL|Instance|member|FMC_NORSRAM_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< NOR locking object */
DECL|MC_ADDRESS|macro|MC_ADDRESS
DECL|Manufacturer_Code|member|uint16_t Manufacturer_Code; /*!< Defines the device's manufacturer code used to identify the memory */
DECL|NOR_ADDR_SHIFT|macro|NOR_ADDR_SHIFT
DECL|NOR_CFITypeDef|typedef|}NOR_CFITypeDef;
DECL|NOR_HandleTypeDef|typedef|}NOR_HandleTypeDef;
DECL|NOR_IDTypeDef|typedef|}NOR_IDTypeDef;
DECL|NOR_MEMORY_16B|macro|NOR_MEMORY_16B
DECL|NOR_MEMORY_8B|macro|NOR_MEMORY_8B
DECL|NOR_MEMORY_ADRESS1|macro|NOR_MEMORY_ADRESS1
DECL|NOR_MEMORY_ADRESS2|macro|NOR_MEMORY_ADRESS2
DECL|NOR_MEMORY_ADRESS3|macro|NOR_MEMORY_ADRESS3
DECL|NOR_MEMORY_ADRESS4|macro|NOR_MEMORY_ADRESS4
DECL|NOR_TMEOUT|macro|NOR_TMEOUT
DECL|NOR_WRITE|macro|NOR_WRITE
DECL|State|member|__IO HAL_NOR_StateTypeDef State; /*!< NOR device access state */
DECL|__HAL_NOR_RESET_HANDLE_STATE|macro|__HAL_NOR_RESET_HANDLE_STATE
DECL|__STM32L4xx_HAL_NOR_H|macro|__STM32L4xx_HAL_NOR_H
