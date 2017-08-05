DECL|HEADER|macro|HEADER
DECL|I2C_REQUEST_READ|macro|I2C_REQUEST_READ
DECL|I2C_REQUEST_WRITE|macro|I2C_REQUEST_WRITE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|handle_addr|function|static inline void handle_addr(I2C_TypeDef *i2c, struct i2c_stm32_data *data)
DECL|handle_btf|function|static inline void handle_btf(I2C_TypeDef *i2c, struct i2c_stm32_data *data)
DECL|handle_rxne|function|static inline void handle_rxne(I2C_TypeDef *i2c, struct i2c_stm32_data *data)
DECL|handle_sb|function|static inline void handle_sb(I2C_TypeDef *i2c, struct i2c_stm32_data *data)
DECL|handle_txe|function|static inline void handle_txe(I2C_TypeDef *i2c, struct i2c_stm32_data *data)
DECL|stm32_i2c_configure_timing|function|s32_t stm32_i2c_configure_timing(struct device *dev, u32_t clock)
DECL|stm32_i2c_error_isr|function|void stm32_i2c_error_isr(void *arg)
DECL|stm32_i2c_event_isr|function|void stm32_i2c_event_isr(void *arg)
DECL|stm32_i2c_msg_read|function|s32_t stm32_i2c_msg_read(struct device *dev, struct i2c_msg *msg, u32_t flags, u16_t saddr)
DECL|stm32_i2c_msg_read|function|s32_t stm32_i2c_msg_read(struct device *dev, struct i2c_msg *msg, u32_t flags, u16_t saddr)
DECL|stm32_i2c_msg_write|function|s32_t stm32_i2c_msg_write(struct device *dev, struct i2c_msg *msg, u32_t flags, u16_t saddr)
DECL|stm32_i2c_msg_write|function|s32_t stm32_i2c_msg_write(struct device *dev, struct i2c_msg *msg, u32_t flags, u16_t saddr)
