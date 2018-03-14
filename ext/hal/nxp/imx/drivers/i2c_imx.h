DECL|I2C_ClearStatusFlag|function|static inline void I2C_ClearStatusFlag(I2C_Type* base, uint32_t flags)
DECL|I2C_Disable|function|static inline void I2C_Disable(I2C_Type* base)
DECL|I2C_Enable|function|static inline void I2C_Enable(I2C_Type* base)
DECL|I2C_GetStatusFlag|function|static inline uint32_t I2C_GetStatusFlag(I2C_Type* base, uint32_t flags)
DECL|I2C_ReadByte|function|static inline uint8_t I2C_ReadByte(I2C_Type* base)
DECL|I2C_SendRepeatStart|function|static inline void I2C_SendRepeatStart(I2C_Type* base)
DECL|I2C_SetDirMode|function|static inline void I2C_SetDirMode(I2C_Type* base, uint32_t direction)
DECL|I2C_SetSlaveAddress|function|static inline void I2C_SetSlaveAddress(I2C_Type* base, uint8_t slaveAddress)
DECL|I2C_SetWorkMode|function|static inline void I2C_SetWorkMode(I2C_Type* base, uint32_t mode)
DECL|I2C_WriteByte|function|static inline void I2C_WriteByte(I2C_Type* base, uint8_t byte)
DECL|__I2C_IMX_H__|macro|__I2C_IMX_H__
DECL|_i2c_direction_mode|enum|enum _i2c_direction_mode
DECL|_i2c_init_config|struct|typedef struct _i2c_init_config
DECL|_i2c_status_flag|enum|enum _i2c_status_flag
DECL|_i2c_work_mode|enum|enum _i2c_work_mode
DECL|baudRate|member|uint32_t baudRate; /*!< Desired I2C baud rate. */
DECL|clockRate|member|uint32_t clockRate; /*!< Current I2C module clock freq. */
DECL|i2cDirectionReceive|enumerator|i2cDirectionReceive = 0x0, /*!< This module works at receive mode. */
DECL|i2cDirectionTransmit|enumerator|i2cDirectionTransmit = I2C_I2CR_MTX_MASK, /*!< This module works at transmit mode. */
DECL|i2cModeMaster|enumerator|i2cModeMaster = I2C_I2CR_MSTA_MASK, /*!< This module works as I2C Master. */
DECL|i2cModeSlave|enumerator|i2cModeSlave = 0x0, /*!< This module works as I2C Slave. */
DECL|i2cStatusAddressedAsSlave|enumerator|i2cStatusAddressedAsSlave = I2C_I2SR_IAAS_MASK, /*!< Addressed as a slave flag. */
DECL|i2cStatusArbitrationLost|enumerator|i2cStatusArbitrationLost = I2C_I2SR_IAL_MASK, /*!< Arbitration is lost flag. */
DECL|i2cStatusBusBusy|enumerator|i2cStatusBusBusy = I2C_I2SR_IBB_MASK, /*!< Bus is busy flag. */
DECL|i2cStatusInterrupt|enumerator|i2cStatusInterrupt = I2C_I2SR_IIF_MASK, /*!< An interrupt is pending flag. */
DECL|i2cStatusReceivedAck|enumerator|i2cStatusReceivedAck = I2C_I2SR_RXAK_MASK, /*!< No acknowledge detected flag. */
DECL|i2cStatusSlaveReadWrite|enumerator|i2cStatusSlaveReadWrite = I2C_I2SR_SRW_MASK, /*!< Master reading from slave flag(De-assert if master writing to slave). */
DECL|i2cStatusTransferComplete|enumerator|i2cStatusTransferComplete = I2C_I2SR_ICF_MASK, /*!< Data Transfer complete flag. */
DECL|i2c_init_config_t|typedef|} i2c_init_config_t;
DECL|slaveAddress|member|uint8_t slaveAddress; /*!< I2C module's own address when addressed as slave device. */
