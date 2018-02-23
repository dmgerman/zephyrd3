DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|address|member|u8_t address;
DECL|api_funcs|variable|api_funcs
DECL|buffer_idx|member|u32_t buffer_idx;
DECL|buffer_size|member|u32_t buffer_size;
DECL|buffer_size|member|u32_t buffer_size;
DECL|buffer|member|u8_t *buffer;
DECL|buffer|member|u8_t *buffer;
DECL|config|member|struct i2c_slave_config config;
DECL|controller_dev_name|member|char *controller_dev_name;
DECL|eeprom_callbacks|variable|eeprom_callbacks
DECL|eeprom_slave_program|function|int eeprom_slave_program(struct device *dev, u8_t *eeprom_data, unsigned int length)
DECL|eeprom_slave_read_processed|function|static int eeprom_slave_read_processed(struct i2c_slave_config *config, u8_t *val)
DECL|eeprom_slave_read_requested|function|static int eeprom_slave_read_requested(struct i2c_slave_config *config, u8_t *val)
DECL|eeprom_slave_read|function|int eeprom_slave_read(struct device *dev, u8_t *eeprom_data, unsigned int offset)
DECL|eeprom_slave_register|function|static int eeprom_slave_register(struct device *dev)
DECL|eeprom_slave_stop|function|static int eeprom_slave_stop(struct i2c_slave_config *config)
DECL|eeprom_slave_unregister|function|static int eeprom_slave_unregister(struct device *dev)
DECL|eeprom_slave_write_received|function|static int eeprom_slave_write_received(struct i2c_slave_config *config, u8_t val)
DECL|eeprom_slave_write_requested|function|static int eeprom_slave_write_requested(struct i2c_slave_config *config)
DECL|first_write|member|bool first_write;
DECL|i2c_controller|member|struct device *i2c_controller;
DECL|i2c_eeprom_slave_0_buffer|variable|i2c_eeprom_slave_0_buffer
DECL|i2c_eeprom_slave_0_cfg|variable|i2c_eeprom_slave_0_cfg
DECL|i2c_eeprom_slave_0_dev_data|variable|i2c_eeprom_slave_0_dev_data
DECL|i2c_eeprom_slave_1_buffer|variable|i2c_eeprom_slave_1_buffer
DECL|i2c_eeprom_slave_1_cfg|variable|i2c_eeprom_slave_1_cfg
DECL|i2c_eeprom_slave_1_dev_data|variable|i2c_eeprom_slave_1_dev_data
DECL|i2c_eeprom_slave_config|struct|struct i2c_eeprom_slave_config {
DECL|i2c_eeprom_slave_data|struct|struct i2c_eeprom_slave_data {
DECL|i2c_eeprom_slave_init|function|static int i2c_eeprom_slave_init(struct device *dev)
