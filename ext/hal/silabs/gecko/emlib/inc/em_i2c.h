DECL|EM_I2C_H|macro|EM_I2C_H
DECL|I2C_ClockHLR_TypeDef|typedef|} I2C_ClockHLR_TypeDef;
DECL|I2C_FLAG_10BIT_ADDR|macro|I2C_FLAG_10BIT_ADDR
DECL|I2C_FLAG_READ|macro|I2C_FLAG_READ
DECL|I2C_FLAG_WRITE_READ|macro|I2C_FLAG_WRITE_READ
DECL|I2C_FLAG_WRITE_WRITE|macro|I2C_FLAG_WRITE_WRITE
DECL|I2C_FLAG_WRITE|macro|I2C_FLAG_WRITE
DECL|I2C_FREQ_FASTPLUS_MAX|macro|I2C_FREQ_FASTPLUS_MAX
DECL|I2C_FREQ_FAST_MAX|macro|I2C_FREQ_FAST_MAX
DECL|I2C_FREQ_STANDARD_MAX|macro|I2C_FREQ_STANDARD_MAX
DECL|I2C_FREQ_STANDARD_MAX|macro|I2C_FREQ_STANDARD_MAX
DECL|I2C_FREQ_STANDARD_MAX|macro|I2C_FREQ_STANDARD_MAX
DECL|I2C_INIT_DEFAULT|macro|I2C_INIT_DEFAULT
DECL|I2C_Init_TypeDef|typedef|} I2C_Init_TypeDef;
DECL|I2C_IntClear|function|__STATIC_INLINE void I2C_IntClear(I2C_TypeDef *i2c, uint32_t flags)
DECL|I2C_IntDisable|function|__STATIC_INLINE void I2C_IntDisable(I2C_TypeDef *i2c, uint32_t flags)
DECL|I2C_IntEnable|function|__STATIC_INLINE void I2C_IntEnable(I2C_TypeDef *i2c, uint32_t flags)
DECL|I2C_IntGetEnabled|function|__STATIC_INLINE uint32_t I2C_IntGetEnabled(I2C_TypeDef *i2c)
DECL|I2C_IntGet|function|__STATIC_INLINE uint32_t I2C_IntGet(I2C_TypeDef *i2c)
DECL|I2C_IntSet|function|__STATIC_INLINE void I2C_IntSet(I2C_TypeDef *i2c, uint32_t flags)
DECL|I2C_SlaveAddressGet|function|__STATIC_INLINE uint8_t I2C_SlaveAddressGet(I2C_TypeDef *i2c)
DECL|I2C_SlaveAddressMaskGet|function|__STATIC_INLINE uint8_t I2C_SlaveAddressMaskGet(I2C_TypeDef *i2c)
DECL|I2C_SlaveAddressMaskSet|function|__STATIC_INLINE void I2C_SlaveAddressMaskSet(I2C_TypeDef *i2c, uint8_t mask)
DECL|I2C_SlaveAddressSet|function|__STATIC_INLINE void I2C_SlaveAddressSet(I2C_TypeDef *i2c, uint8_t addr)
DECL|I2C_TransferReturn_TypeDef|typedef|} I2C_TransferReturn_TypeDef;
DECL|I2C_TransferSeq_TypeDef|typedef|} I2C_TransferSeq_TypeDef;
DECL|addr|member|uint16_t addr;
DECL|buf|member|} buf[2];
DECL|clhr|member|I2C_ClockHLR_TypeDef clhr;
DECL|data|member|uint8_t *data;
DECL|enable|member|bool enable;
DECL|flags|member|uint16_t flags;
DECL|freq|member|uint32_t freq;
DECL|i2cClockHLRAsymetric|enumerator|i2cClockHLRAsymetric = _I2C_CTRL_CLHR_ASYMMETRIC, /**< Ratio is 6:3 */
DECL|i2cClockHLRFast|enumerator|i2cClockHLRFast = _I2C_CTRL_CLHR_FAST /**< Ratio is 11:3 */
DECL|i2cClockHLRStandard|enumerator|i2cClockHLRStandard = _I2C_CTRL_CLHR_STANDARD, /**< Ratio is 4:4 */
DECL|i2cTransferArbLost|enumerator|i2cTransferArbLost = -3, /**< Arbitration lost during transfer. */
DECL|i2cTransferBusErr|enumerator|i2cTransferBusErr = -2, /**< Bus error during transfer (misplaced START/STOP). */
DECL|i2cTransferDone|enumerator|i2cTransferDone = 0, /**< Transfer completed successfully. */
DECL|i2cTransferInProgress|enumerator|i2cTransferInProgress = 1, /**< Transfer in progress. */
DECL|i2cTransferNack|enumerator|i2cTransferNack = -1, /**< NACK received during transfer. */
DECL|i2cTransferSwFault|enumerator|i2cTransferSwFault = -5 /**< SW fault. */
DECL|i2cTransferUsageFault|enumerator|i2cTransferUsageFault = -4, /**< Usage fault. */
DECL|len|member|uint16_t len;
DECL|master|member|bool master;
DECL|refFreq|member|uint32_t refFreq;
