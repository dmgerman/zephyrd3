DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|I2C_STRUCT|macro|I2C_STRUCT
DECL|PORT_0_ER_IRQ|macro|PORT_0_ER_IRQ
DECL|PORT_0_EV_IRQ|macro|PORT_0_EV_IRQ
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__i2c_stm32lx_get_clock|function|static inline void __i2c_stm32lx_get_clock(struct device *dev)
DECL|api_funcs|variable|api_funcs
DECL|i2c_stm32lx_cfg_0|variable|i2c_stm32lx_cfg_0
DECL|i2c_stm32lx_dev_data_0|variable|i2c_stm32lx_dev_data_0
DECL|i2c_stm32lx_er_isr|function|static void i2c_stm32lx_er_isr(void *arg)
DECL|i2c_stm32lx_ev_isr|function|static void i2c_stm32lx_ev_isr(void *arg)
DECL|i2c_stm32lx_init|function|static int i2c_stm32lx_init(struct device *dev)
DECL|i2c_stm32lx_irq_config_func_0|function|static void i2c_stm32lx_irq_config_func_0(struct device *dev)
DECL|i2c_stm32lx_runtime_configure|function|static int i2c_stm32lx_runtime_configure(struct device *dev, uint32_t config)
DECL|i2c_stm32lx_transfer|function|static int i2c_stm32lx_transfer(struct device *dev, struct i2c_msg *msgs, uint8_t num_msgs, uint16_t slave_address)
DECL|msg_read|function|static inline int msg_read(struct device *dev, struct i2c_msg *msg, unsigned int flags)
DECL|msg_write|function|static inline int msg_write(struct device *dev, struct i2c_msg *msg, unsigned int flags)
DECL|transfer_setup|function|static inline void transfer_setup(struct device *dev, uint16_t slave_address, unsigned int read_transfer)
