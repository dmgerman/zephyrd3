DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_i2c_dw_data_ask|function|static inline void _i2c_dw_data_ask(struct device *dev)
DECL|_i2c_dw_data_read|function|static void _i2c_dw_data_read(struct device *dev)
DECL|_i2c_dw_data_send|function|static int _i2c_dw_data_send(struct device *dev)
DECL|_i2c_dw_setup|function|static int _i2c_dw_setup(struct device *dev, u16_t slave_address)
DECL|_i2c_dw_transfer_complete|function|static inline void _i2c_dw_transfer_complete(struct device *dev)
DECL|funcs|variable|funcs
DECL|i2c_0_runtime|variable|i2c_0_runtime
DECL|i2c_1_runtime|variable|i2c_1_runtime
DECL|i2c_config_0|function|static void i2c_config_0(struct device *port)
DECL|i2c_config_1|function|static void i2c_config_1(struct device *port)
DECL|i2c_config_dw_0|variable|i2c_config_dw_0
DECL|i2c_config_dw_1|variable|i2c_config_dw_1
DECL|i2c_dw_initialize|function|static int i2c_dw_initialize(struct device *dev)
DECL|i2c_dw_isr|function|static void i2c_dw_isr(void *arg)
DECL|i2c_dw_pci_setup|function|static inline int i2c_dw_pci_setup(struct device *dev)
DECL|i2c_dw_pci_setup|macro|i2c_dw_pci_setup
DECL|i2c_dw_runtime_configure|function|static int i2c_dw_runtime_configure(struct device *dev, u32_t config)
DECL|i2c_dw_transfer|function|static int i2c_dw_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t slave_address)
