DECL|CRCLength|member|uint32_t CRCLength; /*!< This parameter is a value of @ref CRC_Polynomial_Sizes and indicates CRC length.
DECL|CRC_HandleTypeDef|typedef|} CRC_HandleTypeDef;
DECL|CRC_INPUTDATA_FORMAT_BYTES|macro|CRC_INPUTDATA_FORMAT_BYTES
DECL|CRC_INPUTDATA_FORMAT_HALFWORDS|macro|CRC_INPUTDATA_FORMAT_HALFWORDS
DECL|CRC_INPUTDATA_FORMAT_UNDEFINED|macro|CRC_INPUTDATA_FORMAT_UNDEFINED
DECL|CRC_INPUTDATA_FORMAT_WORDS|macro|CRC_INPUTDATA_FORMAT_WORDS
DECL|CRC_InitTypeDef|typedef|} CRC_InitTypeDef;
DECL|CRC_POLYLENGTH_16B|macro|CRC_POLYLENGTH_16B
DECL|CRC_POLYLENGTH_32B|macro|CRC_POLYLENGTH_32B
DECL|CRC_POLYLENGTH_7B|macro|CRC_POLYLENGTH_7B
DECL|CRC_POLYLENGTH_8B|macro|CRC_POLYLENGTH_8B
DECL|DEFAULT_CRC32_POLY|macro|DEFAULT_CRC32_POLY
DECL|DEFAULT_CRC_INITVALUE|macro|DEFAULT_CRC_INITVALUE
DECL|DEFAULT_INIT_VALUE_DISABLE|macro|DEFAULT_INIT_VALUE_DISABLE
DECL|DEFAULT_INIT_VALUE_ENABLE|macro|DEFAULT_INIT_VALUE_ENABLE
DECL|DEFAULT_POLYNOMIAL_DISABLE|macro|DEFAULT_POLYNOMIAL_DISABLE
DECL|DEFAULT_POLYNOMIAL_ENABLE|macro|DEFAULT_POLYNOMIAL_ENABLE
DECL|DefaultInitValueUse|member|uint8_t DefaultInitValueUse; /*!< This parameter is a value of @ref CRC_Default_InitValue_Use and indicates if default init value is used.
DECL|DefaultPolynomialUse|member|uint8_t DefaultPolynomialUse; /*!< This parameter is a value of @ref CRC_Default_Polynomial and indicates if default polynomial is used.
DECL|GeneratingPolynomial|member|uint32_t GeneratingPolynomial; /*!< Set CRC generating polynomial as a 7, 8, 16 or 32-bit long value for a polynomial degree
DECL|HAL_CRC_Input_Data_Reverse|macro|HAL_CRC_Input_Data_Reverse
DECL|HAL_CRC_LENGTH_16B|macro|HAL_CRC_LENGTH_16B
DECL|HAL_CRC_LENGTH_32B|macro|HAL_CRC_LENGTH_32B
DECL|HAL_CRC_LENGTH_7B|macro|HAL_CRC_LENGTH_7B
DECL|HAL_CRC_LENGTH_8B|macro|HAL_CRC_LENGTH_8B
DECL|HAL_CRC_Output_Data_Reverse|macro|HAL_CRC_Output_Data_Reverse
DECL|HAL_CRC_STATE_BUSY|enumerator|HAL_CRC_STATE_BUSY = 0x02U, /*!< CRC internal process is ongoing */
DECL|HAL_CRC_STATE_ERROR|enumerator|HAL_CRC_STATE_ERROR = 0x04U /*!< CRC error state */
DECL|HAL_CRC_STATE_READY|enumerator|HAL_CRC_STATE_READY = 0x01U, /*!< CRC initialized and ready for use */
DECL|HAL_CRC_STATE_RESET|enumerator|HAL_CRC_STATE_RESET = 0x00U, /*!< CRC not yet initialized or disabled */
DECL|HAL_CRC_STATE_TIMEOUT|enumerator|HAL_CRC_STATE_TIMEOUT = 0x03U, /*!< CRC timeout state */
DECL|HAL_CRC_StateTypeDef|typedef|} HAL_CRC_StateTypeDef;
DECL|IS_CRC_INPUTDATA_FORMAT|macro|IS_CRC_INPUTDATA_FORMAT
DECL|IS_CRC_POL_LENGTH|macro|IS_CRC_POL_LENGTH
DECL|IS_DEFAULT_INIT_VALUE|macro|IS_DEFAULT_INIT_VALUE
DECL|IS_DEFAULT_POLYNOMIAL|macro|IS_DEFAULT_POLYNOMIAL
DECL|InitValue|member|uint32_t InitValue; /*!< Init value to initiate CRC computation. No need to specify it if DefaultInitValueUse
DECL|Init|member|CRC_InitTypeDef Init; /*!< CRC configuration parameters */
DECL|InputDataFormat|member|uint32_t InputDataFormat; /*!< This parameter is a value of @ref CRC_Input_Buffer_Format and specifies input data format.
DECL|InputDataInversionMode|member|uint32_t InputDataInversionMode; /*!< This parameter is a value of @ref CRCEx_Input_Data_Inversion and specifies input data inversion mode.
DECL|Instance|member|CRC_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< CRC Locking object */
DECL|OutputDataInversionMode|member|uint32_t OutputDataInversionMode; /*!< This parameter is a value of @ref CRCEx_Output_Data_Inversion and specifies output data (i.e. CRC) inversion mode.
DECL|State|member|__IO HAL_CRC_StateTypeDef State; /*!< CRC communication state */
DECL|__HAL_CRC_DR_RESET|macro|__HAL_CRC_DR_RESET
DECL|__HAL_CRC_GET_IDR|macro|__HAL_CRC_GET_IDR
DECL|__HAL_CRC_INITIALCRCVALUE_CONFIG|macro|__HAL_CRC_INITIALCRCVALUE_CONFIG
DECL|__HAL_CRC_RESET_HANDLE_STATE|macro|__HAL_CRC_RESET_HANDLE_STATE
DECL|__HAL_CRC_SET_IDR|macro|__HAL_CRC_SET_IDR
DECL|__STM32L4xx_HAL_CRC_H|macro|__STM32L4xx_HAL_CRC_H
