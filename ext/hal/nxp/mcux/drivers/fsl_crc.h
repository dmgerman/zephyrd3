DECL|CRC_DRIVER_USE_CRC16_CCIT_FALSE_AS_DEFAULT|macro|CRC_DRIVER_USE_CRC16_CCIT_FALSE_AS_DEFAULT
DECL|CRC_Deinit|function|static inline void CRC_Deinit(CRC_Type *base)
DECL|FSL_CRC_DRIVER_VERSION|macro|FSL_CRC_DRIVER_VERSION
DECL|_FSL_CRC_H_|macro|_FSL_CRC_H_
DECL|_crc_bits|enum|typedef enum _crc_bits
DECL|_crc_config|struct|typedef struct _crc_config
DECL|_crc_result|enum|typedef enum _crc_result
DECL|complementChecksum|member|bool complementChecksum; /*!< True if the result shall be complement of the actual checksum. */
DECL|crcBits|member|crc_bits_t crcBits; /*!< Selects 16- or 32- bit CRC protocol. */
DECL|crcResult|member|crc_result_t crcResult; /*!< Selects final or intermediate checksum return from CRC_Get16bitResult() or
DECL|crc_bits_t|typedef|} crc_bits_t;
DECL|crc_config_t|typedef|} crc_config_t;
DECL|crc_result_t|typedef|} crc_result_t;
DECL|kCrcBits16|enumerator|kCrcBits16 = 0U, /*!< Generate 16-bit CRC code */
DECL|kCrcBits32|enumerator|kCrcBits32 = 1U /*!< Generate 32-bit CRC code */
DECL|kCrcFinalChecksum|enumerator|kCrcFinalChecksum = 0U, /*!< CRC data register read value is the final checksum.
DECL|kCrcIntermediateChecksum|enumerator|kCrcIntermediateChecksum = 1U /*!< CRC data register read value is intermediate checksum (raw value).
DECL|polynomial|member|uint32_t polynomial; /*!< CRC Polynomial, MSBit first.
DECL|reflectIn|member|bool reflectIn; /*!< Reflect bits on input. */
DECL|reflectOut|member|bool reflectOut; /*!< Reflect bits on output. */
DECL|seed|member|uint32_t seed; /*!< Starting checksum value */
