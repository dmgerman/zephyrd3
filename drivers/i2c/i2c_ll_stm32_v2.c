DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|i2c_stm32_slave_register|function|int i2c_stm32_slave_register(struct device *dev, struct i2c_slave_config *config)
DECL|i2c_stm32_slave_unregister|function|int i2c_stm32_slave_unregister(struct device *dev, struct i2c_slave_config *config)
DECL|msg_done|function|static inline void msg_done(struct device *dev, unsigned int current_msg_flags)
DECL|msg_init|function|static inline void msg_init(struct device *dev, struct i2c_msg *msg, u8_t *next_msg_flags, u16_t slave, uint32_t transfer)
DECL|stm32_i2c_combined_isr|function|void stm32_i2c_combined_isr(void *arg)
DECL|stm32_i2c_configure_timing|function|int stm32_i2c_configure_timing(struct device *dev, u32_t clock)
DECL|stm32_i2c_disable_transfer_interrupts|function|static void stm32_i2c_disable_transfer_interrupts(struct device *dev)
DECL|stm32_i2c_enable_transfer_interrupts|function|static void stm32_i2c_enable_transfer_interrupts(struct device *dev)
DECL|stm32_i2c_error_isr|function|void stm32_i2c_error_isr(void *arg)
DECL|stm32_i2c_error|function|static int stm32_i2c_error(struct device *dev)
DECL|stm32_i2c_event_isr|function|void stm32_i2c_event_isr(void *arg)
DECL|stm32_i2c_event|function|static void stm32_i2c_event(struct device *dev)
DECL|stm32_i2c_master_mode_end|function|static void stm32_i2c_master_mode_end(struct device *dev)
DECL|stm32_i2c_msg_read|function|int stm32_i2c_msg_read(struct device *dev, struct i2c_msg *msg, u8_t *next_msg_flags, uint16_t slave)
DECL|stm32_i2c_msg_read|function|int stm32_i2c_msg_read(struct device *dev, struct i2c_msg *msg, u8_t *next_msg_flags, uint16_t slave)
DECL|stm32_i2c_msg_write|function|int stm32_i2c_msg_write(struct device *dev, struct i2c_msg *msg,u8_t *next_msg_flags, uint16_t slave)
DECL|stm32_i2c_msg_write|function|int stm32_i2c_msg_write(struct device *dev, struct i2c_msg *msg,u8_t *next_msg_flags, uint16_t slave)
DECL|stm32_i2c_slave_event|function|static void stm32_i2c_slave_event(struct device *dev)
