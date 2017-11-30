DECL|DEV_DATA|macro|DEV_DATA
DECL|OPERATION|macro|OPERATION
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|api_funcs|variable|api_funcs
DECL|find_address|function|static struct i2c_slave_config *find_address(struct i2c_virtual_data *data, u16_t address, bool is_10bit)
DECL|i2c_virtual_data|struct|struct i2c_virtual_data {
DECL|i2c_virtual_dev_data_0|variable|i2c_virtual_dev_data_0
DECL|i2c_virtual_init|function|static int i2c_virtual_init(struct device *dev)
DECL|i2c_virtual_msg_read|function|static int i2c_virtual_msg_read(struct device *dev, struct i2c_msg *msg,struct i2c_slave_config *config)
DECL|i2c_virtual_msg_write|function|static int i2c_virtual_msg_write(struct device *dev, struct i2c_msg *msg, struct i2c_slave_config *config, bool prev_write)
DECL|i2c_virtual_runtime_configure|function|int i2c_virtual_runtime_configure(struct device *dev, u32_t config)
DECL|i2c_virtual_slave_register|function|int i2c_virtual_slave_register(struct device *dev, struct i2c_slave_config *config)
DECL|i2c_virtual_slave_unregister|function|int i2c_virtual_slave_unregister(struct device *dev, struct i2c_slave_config *config)
DECL|i2c_virtual_transfer|function|static int i2c_virtual_transfer(struct device *dev, struct i2c_msg *msg, u8_t num_msgs, u16_t slave)
DECL|slaves|member|sys_slist_t slaves;
