DECL|CRC_DRIVER_USE_CRC16_CCITT_FALSE_AS_DEFAULT|macro|CRC_DRIVER_USE_CRC16_CCITT_FALSE_AS_DEFAULT
DECL|CRC_Deinit|function|static inline void CRC_Deinit(CRC_Type *base)
DECL|CRC_Get16bitResult|function|static inline uint16_t CRC_Get16bitResult(CRC_Type *base)
DECL|CRC_Get32bitResult|function|static inline uint32_t CRC_Get32bitResult(CRC_Type *base)
DECL|FSL_CRC_DRIVER_VERSION|macro|FSL_CRC_DRIVER_VERSION
DECL|_FSL_CRC_H_|macro|_FSL_CRC_H_
DECL|_crc_config|struct|typedef struct _crc_config
DECL|_crc_polynomial|enum|typedef enum _crc_polynomial
DECL|complementIn|member|bool complementIn; /*!< Perform 1's complement on input. */
DECL|complementOut|member|bool complementOut; /*!< Perform 1's complement on output. */
DECL|crc_config_t|typedef|} crc_config_t;
DECL|crc_polynomial_t|typedef|} crc_polynomial_t;
DECL|kCRC_Polynomial_CRC_16|enumerator|kCRC_Polynomial_CRC_16 = 1U, /*!< x^16+x^15+x^2+1 */
DECL|kCRC_Polynomial_CRC_32|enumerator|kCRC_Polynomial_CRC_32 = 2U /*!< x^32+x^26+x^23+x^22+x^16+x^12+x^11+x^10+x^8+x^7+x^5+x^4+x^2+x+1 */
DECL|kCRC_Polynomial_CRC_CCITT|enumerator|kCRC_Polynomial_CRC_CCITT = 0U, /*!< x^16+x^12+x^5+1 */
DECL|polynomial|member|crc_polynomial_t polynomial; /*!< CRC polynomial. */
DECL|reverseIn|member|bool reverseIn; /*!< Reverse bits on input. */
DECL|reverseOut|member|bool reverseOut; /*!< Reverse bits on output. */
DECL|seed|member|uint32_t seed; /*!< Starting checksum value. */
