DECL|I2C_BusFreqGet|function|uint32_t I2C_BusFreqGet(I2C_TypeDef *i2c)
DECL|I2C_BusFreqSet|function|void I2C_BusFreqSet(I2C_TypeDef *i2c, uint32_t freqRef, uint32_t freqScl, I2C_ClockHLR_TypeDef i2cMode)
DECL|I2C_CR_MAX|macro|I2C_CR_MAX
DECL|I2C_CR_MAX|macro|I2C_CR_MAX
DECL|I2C_Enable|function|void I2C_Enable(I2C_TypeDef *i2c, bool enable)
DECL|I2C_IF_ERRORS|macro|I2C_IF_ERRORS
DECL|I2C_Init|function|void I2C_Init(I2C_TypeDef *i2c, const I2C_Init_TypeDef *init)
DECL|I2C_REF_VALID|macro|I2C_REF_VALID
DECL|I2C_REF_VALID|macro|I2C_REF_VALID
DECL|I2C_REF_VALID|macro|I2C_REF_VALID
DECL|I2C_Reset|function|void I2C_Reset(I2C_TypeDef *i2c)
DECL|I2C_TransferInit|function|I2C_TransferReturn_TypeDef I2C_TransferInit(I2C_TypeDef *i2c, I2C_TransferSeq_TypeDef *seq)
DECL|I2C_TransferState_TypeDef|typedef|} I2C_TransferState_TypeDef;
DECL|I2C_Transfer_TypeDef|typedef|} I2C_Transfer_TypeDef;
DECL|I2C_Transfer|function|I2C_TransferReturn_TypeDef I2C_Transfer(I2C_TypeDef *i2c)
DECL|bufIndx|member|uint8_t bufIndx;
DECL|i2cNSum|variable|i2cNSum
DECL|i2cStateAddrWF2ndAckNack|enumerator|i2cStateAddrWF2ndAckNack, /**< Wait for ACK/NACK on second part of 10 bit address. */
DECL|i2cStateAddrWFAckNack|enumerator|i2cStateAddrWFAckNack, /**< Wait for ACK/NACK on (first part of) address. */
DECL|i2cStateDataSend|enumerator|i2cStateDataSend, /**< Send data. */
DECL|i2cStateDataWFAckNack|enumerator|i2cStateDataWFAckNack, /**< Wait for ACK/NACK on data sent. */
DECL|i2cStateDone|enumerator|i2cStateDone /**< Transfer completed successfully. */
DECL|i2cStateRAddrWFAckNack|enumerator|i2cStateRAddrWFAckNack, /**< Wait for ACK/NACK on address sent after repeated start. */
DECL|i2cStateRStartAddrSend|enumerator|i2cStateRStartAddrSend, /**< Send repeated start + (first part of) address. */
DECL|i2cStateStartAddrSend|enumerator|i2cStateStartAddrSend, /**< Send start + (first part of) address. */
DECL|i2cStateWFData|enumerator|i2cStateWFData, /**< Wait for data. */
DECL|i2cStateWFStopSent|enumerator|i2cStateWFStopSent, /**< Wait for STOP to have been transmitted. */
DECL|i2cTransfer|variable|i2cTransfer
DECL|offset|member|uint16_t offset;
DECL|result|member|I2C_TransferReturn_TypeDef result;
DECL|seq|member|I2C_TransferSeq_TypeDef *seq;
DECL|state|member|I2C_TransferState_TypeDef state;
