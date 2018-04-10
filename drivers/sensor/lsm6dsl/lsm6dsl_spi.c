DECL|LSM6DSL_SPI_READ|macro|LSM6DSL_SPI_READ
DECL|SPI_CS|macro|SPI_CS
DECL|lsm6dsl_cs_ctrl|variable|lsm6dsl_cs_ctrl
DECL|lsm6dsl_raw_read|function|static int lsm6dsl_raw_read(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
DECL|lsm6dsl_raw_write|function|static int lsm6dsl_raw_write(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
DECL|lsm6dsl_spi_conf|variable|lsm6dsl_spi_conf
DECL|lsm6dsl_spi_init|function|int lsm6dsl_spi_init(struct device *dev)
DECL|lsm6dsl_spi_read_data|function|static int lsm6dsl_spi_read_data(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
DECL|lsm6dsl_spi_read_reg|function|static int lsm6dsl_spi_read_reg(struct lsm6dsl_data *data, u8_t reg_addr,u8_t *value)
DECL|lsm6dsl_spi_transfer_fn|variable|lsm6dsl_spi_transfer_fn
DECL|lsm6dsl_spi_update_reg|function|static int lsm6dsl_spi_update_reg(struct lsm6dsl_data *data, u8_t reg_addr, u8_t mask, u8_t value)
DECL|lsm6dsl_spi_write_data|function|static int lsm6dsl_spi_write_data(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
