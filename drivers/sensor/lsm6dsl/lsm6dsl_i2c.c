DECL|lsm6dsl_i2c_init|function|int lsm6dsl_i2c_init(struct device *dev)
DECL|lsm6dsl_i2c_read_data|function|static int lsm6dsl_i2c_read_data(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
DECL|lsm6dsl_i2c_read_reg|function|static int lsm6dsl_i2c_read_reg(struct lsm6dsl_data *data, u8_t reg_addr,u8_t *value)
DECL|lsm6dsl_i2c_slave_addr|variable|lsm6dsl_i2c_slave_addr
DECL|lsm6dsl_i2c_transfer_fn|variable|lsm6dsl_i2c_transfer_fn
DECL|lsm6dsl_i2c_update_reg|function|static int lsm6dsl_i2c_update_reg(struct lsm6dsl_data *data, u8_t reg_addr, u8_t mask, u8_t value)
DECL|lsm6dsl_i2c_write_data|function|static int lsm6dsl_i2c_write_data(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
