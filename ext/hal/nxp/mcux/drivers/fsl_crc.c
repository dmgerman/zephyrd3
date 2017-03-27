DECL|CRC_ConfigureAndStart|function|static void CRC_ConfigureAndStart(CRC_Type *base, const crc_module_config_t *config)
DECL|CRC_DRIVER_DEFAULT_COMPLEMENT_CHECKSUM|macro|CRC_DRIVER_DEFAULT_COMPLEMENT_CHECKSUM
DECL|CRC_DRIVER_DEFAULT_CRC_BITS|macro|CRC_DRIVER_DEFAULT_CRC_BITS
DECL|CRC_DRIVER_DEFAULT_CRC_RESULT|macro|CRC_DRIVER_DEFAULT_CRC_RESULT
DECL|CRC_DRIVER_DEFAULT_POLYNOMIAL|macro|CRC_DRIVER_DEFAULT_POLYNOMIAL
DECL|CRC_DRIVER_DEFAULT_REFLECT_IN|macro|CRC_DRIVER_DEFAULT_REFLECT_IN
DECL|CRC_DRIVER_DEFAULT_REFLECT_OUT|macro|CRC_DRIVER_DEFAULT_REFLECT_OUT
DECL|CRC_DRIVER_DEFAULT_SEED|macro|CRC_DRIVER_DEFAULT_SEED
DECL|CRC_Get16bitResult|function|uint16_t CRC_Get16bitResult(CRC_Type *base)
DECL|CRC_Get32bitResult|function|uint32_t CRC_Get32bitResult(CRC_Type *base)
DECL|CRC_GetDefaultConfig|function|void CRC_GetDefaultConfig(crc_config_t *config)
DECL|CRC_GetTransposeTypeFromReflectIn|function|static inline crc_transpose_type_t CRC_GetTransposeTypeFromReflectIn(bool enable)
DECL|CRC_GetTransposeTypeFromReflectOut|function|static inline crc_transpose_type_t CRC_GetTransposeTypeFromReflectOut(bool enable)
DECL|CRC_Init|function|void CRC_Init(CRC_Type *base, const crc_config_t *config)
DECL|CRC_SetProtocolConfig|function|static void CRC_SetProtocolConfig(CRC_Type *base, const crc_config_t *protocolConfig)
DECL|CRC_SetRawProtocolConfig|function|static void CRC_SetRawProtocolConfig(CRC_Type *base, const crc_config_t *protocolConfig)
DECL|CRC_WriteData|function|void CRC_WriteData(CRC_Type *base, const uint8_t *data, size_t dataSize)
DECL|DATALL|macro|DATALL
DECL|DATA|macro|DATA
DECL|_crc_module_config|struct|typedef struct _crc_module_config
DECL|_crc_transpose_type|enum|typedef enum _crc_transpose_type
DECL|complementChecksum|member|bool complementChecksum; /*!< True if the result shall be complement of the actual checksum. */
DECL|crcBits|member|crc_bits_t crcBits; /*!< Selects 16- or 32- bit CRC protocol. */
DECL|crc_module_config_t|typedef|} crc_module_config_t;
DECL|crc_transpose_type_t|typedef|} crc_transpose_type_t;
DECL|kCrcTransposeBitsAndBytes|enumerator|kCrcTransposeBitsAndBytes = 2U, /*! Transpose bytes and bits in bytes */
DECL|kCrcTransposeBits|enumerator|kCrcTransposeBits = 1U, /*! Tranpose bits in bytes */
DECL|kCrcTransposeBytes|enumerator|kCrcTransposeBytes = 3U, /*! Transpose bytes */
DECL|kCrcTransposeNone|enumerator|kCrcTransposeNone = 0U, /*! No transpose */
DECL|polynomial|member|uint32_t polynomial; /*!< CRC Polynomial, MSBit first.@n
DECL|readTranspose|member|crc_transpose_type_t readTranspose; /*!< Type of transpose when reading CRC result. */
DECL|seed|member|uint32_t seed; /*!< Starting checksum value */
DECL|writeTranspose|member|crc_transpose_type_t writeTranspose; /*!< Type of transpose when writing CRC input data. */
